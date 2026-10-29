// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x691680
// Name:           sub_691680
// Function size:  239 bytes (65 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x691680 push    r15
//   0x691682 push    r14
//   0x691684 push    r13
//   0x691686 push    r12
//   0x691688 push    rbp
//   0x691689 push    rbx
//   0x69168A sub     rsp, 28h
//   0x69168E mov     rax, fs:28h
//   0x691697 mov     [rsp+58h+var_40], rax
//   0x69169C xor     eax, eax
//   0x69169E cmp     byte ptr [rcx+21h], 0
//   0x6916A2 jnz     short loc_6916D8
//   0x6916A4 mov     rax, [rsp+58h+var_40]
//   0x6916A9 sub     rax, fs:28h
//   0x6916B2 jnz     loc_69176A
//   0x6916B8 add     rsp, 28h
//   0x6916BC lea     rdi, aGeneratingList; "Generating list of strings"
//   0x6916C3 xor     eax, eax
//   0x6916C5 pop     rbx
//   0x6916C6 pop     rbp
//   0x6916C7 pop     r12
//   0x6916C9 pop     r13
//   0x6916CB pop     r14
//   0x6916CD pop     r15
//   0x6916CF jmp     sub_387AC0
//   0x6916D4 align 8
//   0x6916D8 mov     rax, [rdi+8]
//   0x6916DC mov     r12, rsi
//   0x6916DF mov     esi, 1
//   0x6916E4 mov     rbx, rdx
//   0x6916E7 xor     r15d, r15d
//   0x6916EA mov     r14, rsp
//   0x6916ED mov     rdi, [rax]
//   0x6916F0 call    sub_5A9ED0
//   0x6916F5 mov     r13, [rax+38h]
//   0x6916F9 mov     rbp, rax
//   0x6916FC test    r13, r13
//   0x6916FF jnz     short loc_691738
//   0x691701 jmp     short loc_691749
//   0x691703 align 8
//   0x691708 movdqu  xmm0, xmmword ptr [rax]
//   0x69170C movaps  xmmword ptr [rsp+58h+var_58], xmm0; int
//   0x691710 cmp     [rsp+58h+var_58+8], 80h
//   0x691719 jbe     short loc_691724
//   0x69171B mov     [rsp+58h+var_58+8], offset qword_80; int
//   0x691724 mov     rsi, r14; int
//   0x691727 mov     rdi, rbx; int
//   0x69172A add     r15, 1
//   0x69172E call    _rangeset_t_add
//   0x691733 cmp     r13, r15
//   0x691736 jz      short loc_691749
//   0x691738 movsxd  rax, r15d
//   0x69173B shl     rax, 4
//   0x69173F add     rax, [rbp+30h]
//   0x691743 cmp     qword ptr [rax], 7Fh
//   0x691747 jbe     short loc_691708
//   0x691749 lea     rdi, [rbp+30h]; int
//   0x69174D mov     rsi, rbx; int
//   0x691750 call    _rangeset_t_swap
//   0x691755 movzx   eax, byte ptr [rbp+58h]
//   0x691759 movzx   edx, byte ptr [r12]
//   0x69175E mov     [rbp+58h], dl
//   0x691761 mov     [r12], al
//   0x691765 jmp     loc_6916A4
//   0x69176A call    ___stack_chk_fail
// ============================================================

void sub_691680(/* signature unknown */)
{
    // see disassembly above
}

