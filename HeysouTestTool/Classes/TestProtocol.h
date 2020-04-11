//
//  TestProtocol.h
//  NetIsOkTest
//
//  Created by 张威 on 2018/8/21.
//  Copyright © 2018年 张威. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol TestProtocol <NSObject>

@optional

-(void)bindViewModel:(UIView *)view;

@end
