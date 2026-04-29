// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x23BCD0
// Name:           sub_23BCD0
// Function size:  270 bytes (75 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x23BCD0 push    r12
//   0x23BCD2 push    rbp
//   0x23BCD3 push    rbx
//   0x23BCD4 movsxd  rbx, esi
//   0x23BCD7 mov     esi, 0Dh
//   0x23BCDC sub     rsp, 10h
//   0x23BCE0 mov     rdi, [rdi]
//   0x23BCE3 mov     rbp, fs:28h
//   0x23BCEC mov     [rsp+28h+var_20], rbp
//   0x23BCF1 mov     ebp, edx
//   0x23BCF3 mov     [rsp+28h+var_28], 0
//   0x23BCFB call    _get_tinfo_property
//   0x23BD00 mov     [rsp+28h+var_28], rax
//   0x23BD04 mov     r12, rsp
//   0x23BD07 test    al, al
//   0x23BD09 jnz     short loc_23BD38
//   0x23BD0B xor     ebx, ebx
//   0x23BD0D mov     rdi, r12
//   0x23BD10 call    _clear_tinfo_t
//   0x23BD15 mov     rax, [rsp+28h+var_20]
//   0x23BD1A sub     rax, fs:28h
//   0x23BD23 jnz     loc_23BDC9
//   0x23BD29 add     rsp, 10h
//   0x23BD2D mov     eax, ebx
//   0x23BD2F pop     rbx
//   0x23BD30 pop     rbp
//   0x23BD31 pop     r12
//   0x23BD33 retn
//   0x23BD34 align 8
//   0x23BD38 mov     rdi, rax
//   0x23BD3B call    _verify_tinfo
//   0x23BD40 test    eax, eax
//   0x23BD42 jnz     short loc_23BD0B
//   0x23BD44 mov     rdi, rsp
//   0x23BD47 call    sub_327FB0
//   0x23BD4C test    al, al
//   0x23BD4E jnz     short loc_23BD0B
//   0x23BD50 cmp     ebx, 0FFFFFFFFh
//   0x23BD53 jz      short loc_23BDA0
//   0x23BD55 and     ebp, 2
//   0x23BD58 jnz     short loc_23BD6F
//   0x23BD5A mov     rdi, [rsp+28h+var_28]
//   0x23BD5E mov     esi, 2
//   0x23BD63 call    _get_tinfo_property
//   0x23BD68 and     eax, 0Fh
//   0x23BD6B cmp     al, 0Bh
//   0x23BD6D jz      short loc_23BDA0
//   0x23BD6F mov     rdi, [rsp+28h+var_28]
//   0x23BD73 mov     esi, 2
//   0x23BD78 call    _get_tinfo_property
//   0x23BD7D and     eax, 0Fh
//   0x23BD80 cmp     al, 0Bh
//   0x23BD82 jz      short loc_23BDB0
//   0x23BD84 mov     rsi, [rsp+28h+var_28]
//   0x23BD88 xor     edx, edx
//   0x23BD8A xor     edi, edi
//   0x23BD8C call    _get_tinfo_size
//   0x23BD91 cmp     rbx, rax
//   0x23BD94 setz    bl
//   0x23BD97 jmp     loc_23BD0D
//   0x23BD9C align 20h
//   0x23BDA0 mov     ebx, 1
//   0x23BDA5 jmp     loc_23BD0D
//   0x23BDAA align 10h
//   0x23BDB0 mov     rdi, [rsp+28h+var_28]
//   0x23BDB4 mov     esi, 0Ch
//   0x23BDB9 call    _get_tinfo_property
//   0x23BDBE cmp     eax, 1
//   0x23BDC1 jnz     loc_23BD0B
//   0x23BDC7 jmp     short loc_23BD84
//   0x23BDC9 call    ___stack_chk_fail
//   0x23BDCE mov     rbx, rax
//   0x23BDD1 jmp     loc_45C7E
//   0x23BDD6 mov     rbx, rax
//   0x23BDD9 jmp     loc_45C9E
// ============================================================

void sub_23BCD0(/* signature unknown */)
{
    // see disassembly above
}

