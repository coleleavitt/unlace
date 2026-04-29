// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x27C8A0
// Name:           sub_27C8A0
// Function size:  385 bytes (103 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x27C8A0 push    r14
//   0x27C8A2 push    r13
//   0x27C8A4 push    r12
//   0x27C8A6 push    rbp
//   0x27C8A7 push    rbx
//   0x27C8A8 sub     rsp, 10h
//   0x27C8AC test    rcx, rcx
//   0x27C8AF mov     rbx, fs:28h
//   0x27C8B8 mov     [rsp+38h+var_30], rbx
//   0x27C8BD mov     rbx, rcx
//   0x27C8C0 lea     rax, [rsp+38h+var_31]
//   0x27C8C5 cmovz   rbx, rax
//   0x27C8C9 cmp     dword ptr [rsi+8], 33h ; '3'
//   0x27C8CD jz      short loc_27C8F8
//   0x27C8CF xor     ebp, ebp
//   0x27C8D1 mov     rax, [rsp+38h+var_30]
//   0x27C8D6 sub     rax, fs:28h
//   0x27C8DF jnz     loc_27CA1C
//   0x27C8E5 add     rsp, 10h
//   0x27C8E9 mov     eax, ebp
//   0x27C8EB pop     rbx
//   0x27C8EC pop     rbp
//   0x27C8ED pop     r12
//   0x27C8EF pop     r13
//   0x27C8F1 pop     r14
//   0x27C8F3 retn
//   0x27C8F4 align 8
//   0x27C8F8 mov     r12, rsi
//   0x27C8FB mov     rsi, [rsi+30h]
//   0x27C8FF mov     rbp, rdx
//   0x27C902 mov     r13, rdi
//   0x27C905 xor     edx, edx
//   0x27C907 xor     edi, edi
//   0x27C909 call    _get_tinfo_size
//   0x27C90E mov     rsi, [rbp+0]
//   0x27C912 xor     edx, edx
//   0x27C914 xor     edi, edi
//   0x27C916 mov     r14, rax
//   0x27C919 call    _get_tinfo_size
//   0x27C91E cmp     r14, rax
//   0x27C921 jnz     short loc_27C8CF
//   0x27C923 lea     rdi, [r12+30h]
//   0x27C928 call    sub_3296F0
//   0x27C92D mov     ebp, eax
//   0x27C92F test    al, al
//   0x27C931 jnz     short loc_27C8CF
//   0x27C933 mov     r12, [r12+18h]
//   0x27C938 mov     byte ptr [rbx], 0
//   0x27C93B mov     eax, [r12+8]
//   0x27C940 cmp     eax, 33h ; '3'
//   0x27C943 jnz     short loc_27C97A
//   0x27C945 mov     edx, [r13+54h]
//   0x27C949 nop     word ptr [rax+rax+00000000h]
//   0x27C954 nop     word ptr [rax+rax+00000000h]
//   0x27C95F nop
//   0x27C960 cmp     [r12+28h], edx
//   0x27C965 jnz     loc_27C8D1
//   0x27C96B mov     r12, [r12+18h]
//   0x27C970 mov     eax, [r12+8]
//   0x27C975 cmp     eax, 33h ; '3'
//   0x27C978 jz      short loc_27C960
//   0x27C97A cmp     eax, 30h ; '0'
//   0x27C97D jz      short loc_27C9E8
//   0x27C97F sub     eax, 23h ; '#'
//   0x27C982 cmp     eax, 1
//   0x27C985 ja      loc_27C8D1
//   0x27C98B mov     rax, [r12+18h]
//   0x27C990 mov     esi, 2
//   0x27C995 mov     rdi, [rax+30h]
//   0x27C999 call    _get_tinfo_property
//   0x27C99E and     eax, 0Fh
//   0x27C9A1 sub     eax, 0Ah
//   0x27C9A4 cmp     al, 1
//   0x27C9A6 ja      short loc_27C9F4
//   0x27C9A8 mov     rax, [r12+18h]
//   0x27C9AD test    rax, rax
//   0x27C9B0 jz      loc_27C8D1
//   0x27C9B6 cmp     dword ptr [rax+8], 30h ; '0'
//   0x27C9BA jnz     loc_27C8D1
//   0x27C9C0 mov     rsi, [rax+30h]
//   0x27C9C4 mov     rdi, [r12+30h]
//   0x27C9C9 xor     edx, edx
//   0x27C9CB call    _lexcompare_tinfo
//   0x27C9D0 test    eax, eax
//   0x27C9D2 jnz     loc_27C8D1
//   0x27C9D8 mov     byte ptr [rbx], 1
//   0x27C9DB mov     ebp, 1
//   0x27C9E0 jmp     loc_27C8D1
//   0x27C9E5 align 8
//   0x27C9E8 test    r12, r12
//   0x27C9EB setnz   bpl
//   0x27C9EF jmp     loc_27C8D1
//   0x27C9F4 mov     rax, [r12+20h]
//   0x27C9F9 mov     esi, 2
//   0x27C9FE mov     rdi, [rax+30h]
//   0x27CA02 call    _get_tinfo_property
//   0x27CA07 and     eax, 0Fh
//   0x27CA0A sub     eax, 0Ah
//   0x27CA0D cmp     al, 1
//   0x27CA0F ja      loc_27C8D1
//   0x27CA15 mov     rax, [r12+20h]
//   0x27CA1A jmp     short loc_27C9AD
//   0x27CA1C call    ___stack_chk_fail
// ============================================================

void sub_27C8A0(/* signature unknown */)
{
    // see disassembly above
}

