// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x27B920
// Name:           sub_27B920
// Function size:  385 bytes (103 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x27B920 push    r14
//   0x27B922 push    r13
//   0x27B924 push    r12
//   0x27B926 push    rbp
//   0x27B927 push    rbx
//   0x27B928 sub     rsp, 10h
//   0x27B92C test    rcx, rcx
//   0x27B92F mov     rbx, fs:28h
//   0x27B938 mov     [rsp+38h+var_30], rbx
//   0x27B93D mov     rbx, rcx
//   0x27B940 lea     rax, [rsp+38h+var_31]
//   0x27B945 cmovz   rbx, rax
//   0x27B949 cmp     dword ptr [rsi+8], 33h ; '3'
//   0x27B94D jz      short loc_27B978
//   0x27B94F xor     ebp, ebp
//   0x27B951 mov     rax, [rsp+38h+var_30]
//   0x27B956 sub     rax, fs:28h
//   0x27B95F jnz     loc_27BA9C
//   0x27B965 add     rsp, 10h
//   0x27B969 mov     eax, ebp
//   0x27B96B pop     rbx
//   0x27B96C pop     rbp
//   0x27B96D pop     r12
//   0x27B96F pop     r13
//   0x27B971 pop     r14
//   0x27B973 retn
//   0x27B974 align 8
//   0x27B978 mov     r12, rsi
//   0x27B97B mov     rsi, [rsi+30h]
//   0x27B97F mov     rbp, rdx
//   0x27B982 mov     r13, rdi
//   0x27B985 xor     edx, edx
//   0x27B987 xor     edi, edi
//   0x27B989 call    _get_tinfo_size
//   0x27B98E mov     rsi, [rbp+0]
//   0x27B992 xor     edx, edx
//   0x27B994 xor     edi, edi
//   0x27B996 mov     r14, rax
//   0x27B999 call    _get_tinfo_size
//   0x27B99E cmp     r14, rax
//   0x27B9A1 jnz     short loc_27B94F
//   0x27B9A3 lea     rdi, [r12+30h]
//   0x27B9A8 call    sub_328770
//   0x27B9AD mov     ebp, eax
//   0x27B9AF test    al, al
//   0x27B9B1 jnz     short loc_27B94F
//   0x27B9B3 mov     r12, [r12+18h]
//   0x27B9B8 mov     byte ptr [rbx], 0
//   0x27B9BB mov     eax, [r12+8]
//   0x27B9C0 cmp     eax, 33h ; '3'
//   0x27B9C3 jnz     short loc_27B9FA
//   0x27B9C5 mov     edx, [r13+54h]
//   0x27B9C9 nop     word ptr [rax+rax+00000000h]
//   0x27B9D4 nop     word ptr [rax+rax+00000000h]
//   0x27B9DF nop
//   0x27B9E0 cmp     [r12+28h], edx
//   0x27B9E5 jnz     loc_27B951
//   0x27B9EB mov     r12, [r12+18h]
//   0x27B9F0 mov     eax, [r12+8]
//   0x27B9F5 cmp     eax, 33h ; '3'
//   0x27B9F8 jz      short loc_27B9E0
//   0x27B9FA cmp     eax, 30h ; '0'
//   0x27B9FD jz      short loc_27BA68
//   0x27B9FF sub     eax, 23h ; '#'
//   0x27BA02 cmp     eax, 1
//   0x27BA05 ja      loc_27B951
//   0x27BA0B mov     rax, [r12+18h]
//   0x27BA10 mov     esi, 2
//   0x27BA15 mov     rdi, [rax+30h]
//   0x27BA19 call    _get_tinfo_property
//   0x27BA1E and     eax, 0Fh
//   0x27BA21 sub     eax, 0Ah
//   0x27BA24 cmp     al, 1
//   0x27BA26 ja      short loc_27BA74
//   0x27BA28 mov     rax, [r12+18h]
//   0x27BA2D test    rax, rax
//   0x27BA30 jz      loc_27B951
//   0x27BA36 cmp     dword ptr [rax+8], 30h ; '0'
//   0x27BA3A jnz     loc_27B951
//   0x27BA40 mov     rsi, [rax+30h]
//   0x27BA44 mov     rdi, [r12+30h]
//   0x27BA49 xor     edx, edx
//   0x27BA4B call    _lexcompare_tinfo
//   0x27BA50 test    eax, eax
//   0x27BA52 jnz     loc_27B951
//   0x27BA58 mov     byte ptr [rbx], 1
//   0x27BA5B mov     ebp, 1
//   0x27BA60 jmp     loc_27B951
//   0x27BA65 align 8
//   0x27BA68 test    r12, r12
//   0x27BA6B setnz   bpl
//   0x27BA6F jmp     loc_27B951
//   0x27BA74 mov     rax, [r12+20h]
//   0x27BA79 mov     esi, 2
//   0x27BA7E mov     rdi, [rax+30h]
//   0x27BA82 call    _get_tinfo_property
//   0x27BA87 and     eax, 0Fh
//   0x27BA8A sub     eax, 0Ah
//   0x27BA8D cmp     al, 1
//   0x27BA8F ja      loc_27B951
//   0x27BA95 mov     rax, [r12+20h]
//   0x27BA9A jmp     short loc_27BA2D
//   0x27BA9C call    ___stack_chk_fail
// ============================================================

void sub_27B920(/* signature unknown */)
{
    // see disassembly above
}

