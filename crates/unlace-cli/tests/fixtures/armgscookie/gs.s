    .syntax unified
    .thumb
    .text
    .globl start
    .thumb_func
start:
    movs r0, #1
    movs r1, #2
    movs r2, #3
    movs r3, #4
    movs r4, #5
    push {r4}
    bl caller
    add sp, #4
1:  b 1b

    .thumb_func
caller:
    bl __security_push_cookie
    push {r4, lr}
    ldr r0, [sp, #12]
    adds r0, #1
    pop.w {r4, lr}
    b.w __security_pop_cookie

    .p2align 2
    .thumb_func
__security_push_cookie:
    sub sp, #4
    movw r12, :lower16:cookie
    movt r12, :upper16:cookie
    ldr.w r12, [r12]
    sub.w r12, sp, r12
    str.w r12, [sp]
    bx lr

    .p2align 2
    .thumb_func
__security_pop_cookie:
    movw r12, :lower16:cookie
    movt r12, :upper16:cookie
    ldr r3, [sp]
    ldr.w r12, [r12]
    sub.w r3, sp, r3
    cmp r3, r12
    bne 2f
    add sp, #4
    bx lr
2:  udf #0

    .data
    .p2align 2
cookie:
    .word 0x2b992ddf
