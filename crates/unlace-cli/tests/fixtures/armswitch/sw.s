    .syntax unified
    .text
    .thumb
    .globl start
    .thumb_func
start:
    movs r0, #1
    bl sw8
    bl swu8
    bl sw16
    bl sw32
    bl swrt
1:  b 1b

    .globl sw8
    .thumb_func
sw8:
    push {lr}
    blx ___switch8
t8: .byte 3
    .byte (c8_0 - t8)/2, (c8_1 - t8)/2, (c8_2 - t8)/2, (c8_d - t8)/2
    .p2align 1
c8_0: movs r0, #10
    pop {pc}
c8_1: movs r0, #20
    pop {pc}
c8_2: movs r0, #30
    pop {pc}
c8_d: movs r0, #0
    pop {pc}

    .globl swu8
    .thumb_func
swu8:
    push {lr}
    blx ___switchu8
tu8: .byte 3
    .byte (cu8_0 - tu8)/2, (cu8_1 - tu8)/2, (cu8_2 - tu8)/2, (cu8_d - tu8)/2
    .p2align 1
cu8_0: movs r0, #11
    pop {pc}
cu8_1: movs r0, #21
    pop {pc}
cu8_2: movs r0, #31
    pop {pc}
cu8_d: movs r0, #1
    pop {pc}

    .globl sw16
    .thumb_func
sw16:
    push {lr}
    blx ___switch16
t16: .hword 3
    .hword (c16_0 - t16)/2, (c16_1 - t16)/2, (c16_2 - t16)/2, (c16_d - t16)/2
    .p2align 1
c16_0: movs r0, #12
    pop {pc}
c16_1: movs r0, #22
    pop {pc}
c16_2: movs r0, #32
    pop {pc}
c16_d: movs r0, #2
    pop {pc}

    .globl sw32
    .thumb_func
sw32:
    push {lr}
    blx ___switch32
t32: .word 3
    .word (c32_0 - t32), (c32_1 - t32), (c32_2 - t32), (c32_d - t32)
    .p2align 1
c32_0: movs r0, #13
    pop {pc}
c32_1: movs r0, #23
    pop {pc}
c32_2: movs r0, #33
    pop {pc}
c32_d: movs r0, #3
    pop {pc}

    .globl swrt
    .thumb_func
swrt:
    push {lr}
    mov r3, r0
    blx __rt_switch8
trt: .byte 3
    .byte (crt_0 - trt)/2, (crt_1 - trt)/2, (crt_2 - trt)/2, (crt_d - trt)/2
    .p2align 1
crt_0: movs r0, #14
    pop {pc}
crt_1: movs r0, #24
    pop {pc}
crt_2: movs r0, #34
    pop {pc}
crt_d: movs r0, #4
    pop {pc}

    .arm
    .p2align 2
    .globl ___switch8
    .type ___switch8, %function
___switch8:
    ldrb ip, [lr, #-1]
    cmp r0, ip
    ldrsbcc r0, [lr, r0]
    ldrsbcs r0, [lr, ip]
    add ip, lr, r0, lsl #1
    bx ip

    .globl ___switchu8
    .type ___switchu8, %function
___switchu8:
    ldrb ip, [lr, #-1]
    cmp r0, ip
    ldrbcc r0, [lr, r0]
    ldrbcs r0, [lr, ip]
    add ip, lr, r0, lsl #1
    bx ip

    .globl ___switch16
    .type ___switch16, %function
___switch16:
    ldrh ip, [lr, #-1]
    cmp r0, ip
    add r0, lr, r0, lsl #1
    ldrshcc r0, [r0, #1]
    add ip, lr, ip, lsl #1
    ldrshcs r0, [ip, #1]
    add ip, lr, r0, lsl #1
    bx ip

    .globl ___switch32
    .type ___switch32, %function
___switch32:
    ldr ip, [lr, #-1]
    cmp r0, ip
    add r0, lr, r0, lsl #2
    ldrcc r0, [r0, #3]
    add ip, lr, ip, lsl #2
    ldrcs r0, [ip, #3]
    add ip, lr, r0
    bx ip

    .globl __rt_switch8
    .type __rt_switch8, %function
__rt_switch8:
    ldrb ip, [lr, #-1]
    cmp r3, ip
    ldrbcc r3, [lr, r3]
    ldrbcs r3, [lr, ip]
    add ip, lr, r3, lsl #1
    bx ip
