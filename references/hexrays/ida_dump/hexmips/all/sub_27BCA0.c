// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x27BCA0
// Name:           sub_27BCA0
// Function size:  385 bytes (103 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x27BCA0 push    r14
//   0x27BCA2 push    r13
//   0x27BCA4 push    r12
//   0x27BCA6 push    rbp
//   0x27BCA7 push    rbx
//   0x27BCA8 sub     rsp, 10h
//   0x27BCAC test    rcx, rcx
//   0x27BCAF mov     rbx, fs:28h
//   0x27BCB8 mov     [rsp+38h+var_30], rbx
//   0x27BCBD mov     rbx, rcx
//   0x27BCC0 lea     rax, [rsp+38h+var_31]
//   0x27BCC5 cmovz   rbx, rax
//   0x27BCC9 cmp     dword ptr [rsi+8], 33h ; '3'
//   0x27BCCD jz      short loc_27BCF8
//   0x27BCCF xor     ebp, ebp
//   0x27BCD1 mov     rax, [rsp+38h+var_30]
//   0x27BCD6 sub     rax, fs:28h
//   0x27BCDF jnz     loc_27BE1C
//   0x27BCE5 add     rsp, 10h
//   0x27BCE9 mov     eax, ebp
//   0x27BCEB pop     rbx
//   0x27BCEC pop     rbp
//   0x27BCED pop     r12
//   0x27BCEF pop     r13
//   0x27BCF1 pop     r14
//   0x27BCF3 retn
//   0x27BCF4 align 8
//   0x27BCF8 mov     r12, rsi
//   0x27BCFB mov     rsi, [rsi+30h]
//   0x27BCFF mov     rbp, rdx
//   0x27BD02 mov     r13, rdi
//   0x27BD05 xor     edx, edx
//   0x27BD07 xor     edi, edi
//   0x27BD09 call    _get_tinfo_size
//   0x27BD0E mov     rsi, [rbp+0]
//   0x27BD12 xor     edx, edx
//   0x27BD14 xor     edi, edi
//   0x27BD16 mov     r14, rax
//   0x27BD19 call    _get_tinfo_size
//   0x27BD1E cmp     r14, rax
//   0x27BD21 jnz     short loc_27BCCF
//   0x27BD23 lea     rdi, [r12+30h]
//   0x27BD28 call    sub_328AF0
//   0x27BD2D mov     ebp, eax
//   0x27BD2F test    al, al
//   0x27BD31 jnz     short loc_27BCCF
//   0x27BD33 mov     r12, [r12+18h]
//   0x27BD38 mov     byte ptr [rbx], 0
//   0x27BD3B mov     eax, [r12+8]
//   0x27BD40 cmp     eax, 33h ; '3'
//   0x27BD43 jnz     short loc_27BD7A
//   0x27BD45 mov     edx, [r13+54h]
//   0x27BD49 nop     word ptr [rax+rax+00000000h]
//   0x27BD54 nop     word ptr [rax+rax+00000000h]
//   0x27BD5F nop
//   0x27BD60 cmp     [r12+28h], edx
//   0x27BD65 jnz     loc_27BCD1
//   0x27BD6B mov     r12, [r12+18h]
//   0x27BD70 mov     eax, [r12+8]
//   0x27BD75 cmp     eax, 33h ; '3'
//   0x27BD78 jz      short loc_27BD60
//   0x27BD7A cmp     eax, 30h ; '0'
//   0x27BD7D jz      short loc_27BDE8
//   0x27BD7F sub     eax, 23h ; '#'
//   0x27BD82 cmp     eax, 1
//   0x27BD85 ja      loc_27BCD1
//   0x27BD8B mov     rax, [r12+18h]
//   0x27BD90 mov     esi, 2
//   0x27BD95 mov     rdi, [rax+30h]
//   0x27BD99 call    _get_tinfo_property
//   0x27BD9E and     eax, 0Fh
//   0x27BDA1 sub     eax, 0Ah
//   0x27BDA4 cmp     al, 1
//   0x27BDA6 ja      short loc_27BDF4
//   0x27BDA8 mov     rax, [r12+18h]
//   0x27BDAD test    rax, rax
//   0x27BDB0 jz      loc_27BCD1
//   0x27BDB6 cmp     dword ptr [rax+8], 30h ; '0'
//   0x27BDBA jnz     loc_27BCD1
//   0x27BDC0 mov     rsi, [rax+30h]
//   0x27BDC4 mov     rdi, [r12+30h]
//   0x27BDC9 xor     edx, edx
//   0x27BDCB call    _lexcompare_tinfo
//   0x27BDD0 test    eax, eax
//   0x27BDD2 jnz     loc_27BCD1
//   0x27BDD8 mov     byte ptr [rbx], 1
//   0x27BDDB mov     ebp, 1
//   0x27BDE0 jmp     loc_27BCD1
//   0x27BDE5 align 8
//   0x27BDE8 test    r12, r12
//   0x27BDEB setnz   bpl
//   0x27BDEF jmp     loc_27BCD1
//   0x27BDF4 mov     rax, [r12+20h]
//   0x27BDF9 mov     esi, 2
//   0x27BDFE mov     rdi, [rax+30h]
//   0x27BE02 call    _get_tinfo_property
//   0x27BE07 and     eax, 0Fh
//   0x27BE0A sub     eax, 0Ah
//   0x27BE0D cmp     al, 1
//   0x27BE0F ja      loc_27BCD1
//   0x27BE15 mov     rax, [r12+20h]
//   0x27BE1A jmp     short loc_27BDAD
//   0x27BE1C call    ___stack_chk_fail
// ============================================================

void sub_27BCA0(/* signature unknown */)
{
    // see disassembly above
}

