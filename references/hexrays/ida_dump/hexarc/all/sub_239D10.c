// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x239D10
// Name:           sub_239D10
// Function size:  270 bytes (75 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x239D10 push    r12
//   0x239D12 push    rbp
//   0x239D13 push    rbx
//   0x239D14 movsxd  rbx, esi
//   0x239D17 mov     esi, 0Dh
//   0x239D1C sub     rsp, 10h
//   0x239D20 mov     rdi, [rdi]
//   0x239D23 mov     rbp, fs:28h
//   0x239D2C mov     [rsp+28h+var_20], rbp
//   0x239D31 mov     ebp, edx
//   0x239D33 mov     [rsp+28h+var_28], 0
//   0x239D3B call    _get_tinfo_property
//   0x239D40 mov     [rsp+28h+var_28], rax
//   0x239D44 mov     r12, rsp
//   0x239D47 test    al, al
//   0x239D49 jnz     short loc_239D78
//   0x239D4B xor     ebx, ebx
//   0x239D4D mov     rdi, r12
//   0x239D50 call    _clear_tinfo_t
//   0x239D55 mov     rax, [rsp+28h+var_20]
//   0x239D5A sub     rax, fs:28h
//   0x239D63 jnz     loc_239E09
//   0x239D69 add     rsp, 10h
//   0x239D6D mov     eax, ebx
//   0x239D6F pop     rbx
//   0x239D70 pop     rbp
//   0x239D71 pop     r12
//   0x239D73 retn
//   0x239D74 align 8
//   0x239D78 mov     rdi, rax
//   0x239D7B call    _verify_tinfo
//   0x239D80 test    eax, eax
//   0x239D82 jnz     short loc_239D4B
//   0x239D84 mov     rdi, rsp
//   0x239D87 call    sub_3264F0
//   0x239D8C test    al, al
//   0x239D8E jnz     short loc_239D4B
//   0x239D90 cmp     ebx, 0FFFFFFFFh
//   0x239D93 jz      short loc_239DE0
//   0x239D95 and     ebp, 2
//   0x239D98 jnz     short loc_239DAF
//   0x239D9A mov     rdi, [rsp+28h+var_28]
//   0x239D9E mov     esi, 2
//   0x239DA3 call    _get_tinfo_property
//   0x239DA8 and     eax, 0Fh
//   0x239DAB cmp     al, 0Bh
//   0x239DAD jz      short loc_239DE0
//   0x239DAF mov     rdi, [rsp+28h+var_28]
//   0x239DB3 mov     esi, 2
//   0x239DB8 call    _get_tinfo_property
//   0x239DBD and     eax, 0Fh
//   0x239DC0 cmp     al, 0Bh
//   0x239DC2 jz      short loc_239DF0
//   0x239DC4 mov     rsi, [rsp+28h+var_28]
//   0x239DC8 xor     edx, edx
//   0x239DCA xor     edi, edi
//   0x239DCC call    _get_tinfo_size
//   0x239DD1 cmp     rbx, rax
//   0x239DD4 setz    bl
//   0x239DD7 jmp     loc_239D4D
//   0x239DDC align 20h
//   0x239DE0 mov     ebx, 1
//   0x239DE5 jmp     loc_239D4D
//   0x239DEA align 10h
//   0x239DF0 mov     rdi, [rsp+28h+var_28]
//   0x239DF4 mov     esi, 0Ch
//   0x239DF9 call    _get_tinfo_property
//   0x239DFE cmp     eax, 1
//   0x239E01 jnz     loc_239D4B
//   0x239E07 jmp     short loc_239DC4
//   0x239E09 call    ___stack_chk_fail
//   0x239E0E mov     rbx, rax
//   0x239E11 jmp     loc_44C04
//   0x239E16 mov     rbx, rax
//   0x239E19 jmp     loc_44C24
// ============================================================

void sub_239D10(/* signature unknown */)
{
    // see disassembly above
}

