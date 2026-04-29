// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x247770
// Name:           sub_247770
// Function size:  451 bytes (114 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x247770 push    rbp
//   0x247771 mov     rbp, rsp
//   0x247774 push    r15
//   0x247776 push    r14
//   0x247778 push    r13
//   0x24777A mov     r13d, edx
//   0x24777D push    r12
//   0x24777F mov     r12, rdi
//   0x247782 push    rbx
//   0x247783 mov     rbx, rcx
//   0x247786 sub     rsp, 28h
//   0x24778A mov     [rbp+var_48], rsi
//   0x24778E cmp     byte ptr [rsi+30h], 0
//   0x247792 mov     r14, fs:28h
//   0x24779B mov     [rbp+var_38], r14
//   0x24779F mov     r14d, r8d
//   0x2477A2 jz      short loc_247810
//   0x2477A4 lea     r15, [rbp+var_40]
//   0x2477A8 xor     r9d, r9d
//   0x2477AB xor     edx, edx
//   0x2477AD mov     [rbp+var_40], 0
//   0x2477B5 mov     r8, r15
//   0x2477B8 call    sub_246B20
//   0x2477BD mov     rdi, r15
//   0x2477C0 mov     rbx, rax
//   0x2477C3 call    _clear_tinfo_t
//   0x2477C8 mov     rsi, [r12+148h]
//   0x2477D0 mov     edx, r13d
//   0x2477D3 mov     rdi, rbx
//   0x2477D6 call    sub_244D20
//   0x2477DB test    r14b, r14b
//   0x2477DE jnz     loc_2478D0
//   0x2477E4 mov     rax, [rbp+var_38]
//   0x2477E8 sub     rax, fs:28h
//   0x2477F1 jnz     loc_247916
//   0x2477F7 lea     rsp, [rbp-28h]
//   0x2477FB mov     rax, rbx
//   0x2477FE pop     rbx
//   0x2477FF pop     r12
//   0x247801 pop     r13
//   0x247803 pop     r14
//   0x247805 pop     r15
//   0x247807 pop     rbp
//   0x247808 retn
//   0x247809 align 10h
//   0x247810 mov     rax, [rbp+var_48]
//   0x247814 xor     r9d, r9d
//   0x247817 mov     r8, rcx
//   0x24781A mov     rsi, [rax+18h]
//   0x24781E lea     rdx, [rax+20h]
//   0x247822 call    sub_245270
//   0x247827 mov     esi, 3
//   0x24782C mov     rdi, [rax+30h]
//   0x247830 mov     r15, rax
//   0x247833 call    _get_tinfo_property
//   0x247838 cmp     eax, 1
//   0x24783B jnz     short loc_2478B8
//   0x24783D mov     edi, 40h ; '@'
//   0x247842 call    j__qalloc_or_throw
//   0x247847 sub     rsp, 8
//   0x24784B xor     r8d, r8d
//   0x24784E xor     edx, edx
//   0x247850 mov     rdi, [r12+148h]
//   0x247858 push    0
//   0x24785A mov     r9d, 1
//   0x247860 xor     esi, esi
//   0x247862 mov     rcx, 0FFFFFFFFFFFFFFFFh
//   0x247869 mov     rbx, rax
//   0x24786C call    sub_23C6D0
//   0x247871 pop     rdx
//   0x247872 pop     rcx
//   0x247873 mov     [rbx+20h], rax
//   0x247877 mov     rax, [rbp+var_48]
//   0x24787B mov     qword ptr [rbx], 0FFFFFFFFFFFFFFFFh
//   0x247882 mov     [rbx+8], r13d
//   0x247886 mov     qword ptr [rbx+0Ch], 0FFFFFFFFFFFFFFFFh
//   0x24788E mov     [rbx+18h], r15
//   0x247892 mov     qword ptr [rbx+28h], 0
//   0x24789A mov     qword ptr [rbx+30h], 0
//   0x2478A2 mov     dword ptr [rbx+38h], 0
//   0x2478A9 mov     rax, [rax+18h]
//   0x2478AD mov     [rbx], rax
//   0x2478B0 jmp     loc_2477C8
//   0x2478B5 align 8
//   0x2478B8 mov     rdi, r15
//   0x2478BB mov     rsi, rbx
//   0x2478BE call    sub_2405F0
//   0x2478C3 mov     r15, rax
//   0x2478C6 jmp     loc_24783D
//   0x2478CB align 10h
//   0x2478D0 mov     r14, [rbp+var_48]
//   0x2478D4 mov     rax, [r12+148h]
//   0x2478DC lea     r15, [rbp+var_40]
//   0x2478E0 mov     rdi, r15
//   0x2478E3 mov     edx, [r14+44h]
//   0x2478E7 mov     rsi, [rax+70h]
//   0x2478EB call    sub_327340
//   0x2478F0 mov     rsi, [r14+18h]
//   0x2478F4 lea     rdx, [r14+40h]
//   0x2478F8 mov     r8, rbx
//   0x2478FB mov     rcx, r15
//   0x2478FE mov     rdi, r12
//   0x247901 call    sub_2461D0
//   0x247906 mov     rdi, r15
//   0x247909 mov     rbx, rax
//   0x24790C call    _clear_tinfo_t
//   0x247911 jmp     loc_2477E4
//   0x247916 call    ___stack_chk_fail
//   0x24791B mov     rbx, rax
//   0x24791E jmp     loc_46CC0
//   0x247923 mov     r15, rax
//   0x247926 jmp     loc_46CDF
//   0x24792B mov     rbx, rax
//   0x24792E jmp     loc_46CFE
// ============================================================

void sub_247770(/* signature unknown */)
{
    // see disassembly above
}

