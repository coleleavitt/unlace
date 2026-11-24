# Intel APX test image for crates/unlace-cli/tests/x86_apx.rs (see README.md).
.intel_syntax noprefix
.text
.globl probe, ndd_madd, ccmp_and, cfcmov_load, egpr_lea, nf_keeps_flags
.type probe,@function
.type ndd_madd,@function
.type ccmp_and,@function
.type cfcmov_load,@function
.type egpr_lea,@function
.type nf_keeps_flags,@function

.p2align 4
probe:
    add r16, r17
    mov r20, qword ptr [r21 + 8*r22 + 16]
    movzx r18d, byte ptr [r19]
    add r16, rax, rbx
    {nf} add rax, rbx
    sub r30d, r31d, 5
    ccmpe {dfv=of} rax, rbx
    ctestne {dfv=sf,zf} eax, 7
    cfcmove rax, qword ptr [rbx]
    cmovl rax, rbx, rcx
    setzub r16b
    push2 r16, r17
    pop2 r17, r16
    imulzu ax, bx, 7
    {nf} shl r16, rax, 3
    jmpabs 0x1122334455667788

.p2align 4
ndd_madd:
    push2 r17, r16
    mov r16, rdi
    add r17, r16, rsi
    {nf} imul rax, r17, rdx
    pop2 r16, r17
    ret

.p2align 4
ccmp_and:
    cmp rdi, rsi
    ccmpe {dfv=} rdx, rcx
    setzue al
    ret

.p2align 4
cfcmov_load:
    mov r20, rdi
    test r20, r20
    cfcmovne rax, qword ptr [r20]
    ret

.p2align 4
egpr_lea:
    mov r25, rdi
    lea r26, [r25 + 4*rsi + 3]
    mov eax, r26d
    ret

.p2align 4
nf_keeps_flags:
    cmp rdi, rsi
    {nf} add rax, rdi, rsi
    setzub al
    ret
