// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x23C810
// Name:           sub_23C810
// Function size:  270 bytes (75 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x23C810 push    r12
//   0x23C812 push    rbp
//   0x23C813 push    rbx
//   0x23C814 movsxd  rbx, esi
//   0x23C817 mov     esi, 0Dh
//   0x23C81C sub     rsp, 10h
//   0x23C820 mov     rdi, [rdi]
//   0x23C823 mov     rbp, fs:28h
//   0x23C82C mov     [rsp+28h+var_20], rbp
//   0x23C831 mov     ebp, edx
//   0x23C833 mov     [rsp+28h+var_28], 0
//   0x23C83B call    _get_tinfo_property
//   0x23C840 mov     [rsp+28h+var_28], rax
//   0x23C844 mov     r12, rsp
//   0x23C847 test    al, al
//   0x23C849 jnz     short loc_23C878
//   0x23C84B xor     ebx, ebx
//   0x23C84D mov     rdi, r12
//   0x23C850 call    _clear_tinfo_t
//   0x23C855 mov     rax, [rsp+28h+var_20]
//   0x23C85A sub     rax, fs:28h
//   0x23C863 jnz     loc_23C909
//   0x23C869 add     rsp, 10h
//   0x23C86D mov     eax, ebx
//   0x23C86F pop     rbx
//   0x23C870 pop     rbp
//   0x23C871 pop     r12
//   0x23C873 retn
//   0x23C874 align 8
//   0x23C878 mov     rdi, rax
//   0x23C87B call    _verify_tinfo
//   0x23C880 test    eax, eax
//   0x23C882 jnz     short loc_23C84B
//   0x23C884 mov     rdi, rsp
//   0x23C887 call    sub_328AF0
//   0x23C88C test    al, al
//   0x23C88E jnz     short loc_23C84B
//   0x23C890 cmp     ebx, 0FFFFFFFFh
//   0x23C893 jz      short loc_23C8E0
//   0x23C895 and     ebp, 2
//   0x23C898 jnz     short loc_23C8AF
//   0x23C89A mov     rdi, [rsp+28h+var_28]
//   0x23C89E mov     esi, 2
//   0x23C8A3 call    _get_tinfo_property
//   0x23C8A8 and     eax, 0Fh
//   0x23C8AB cmp     al, 0Bh
//   0x23C8AD jz      short loc_23C8E0
//   0x23C8AF mov     rdi, [rsp+28h+var_28]
//   0x23C8B3 mov     esi, 2
//   0x23C8B8 call    _get_tinfo_property
//   0x23C8BD and     eax, 0Fh
//   0x23C8C0 cmp     al, 0Bh
//   0x23C8C2 jz      short loc_23C8F0
//   0x23C8C4 mov     rsi, [rsp+28h+var_28]
//   0x23C8C8 xor     edx, edx
//   0x23C8CA xor     edi, edi
//   0x23C8CC call    _get_tinfo_size
//   0x23C8D1 cmp     rbx, rax
//   0x23C8D4 setz    bl
//   0x23C8D7 jmp     loc_23C84D
//   0x23C8DC align 20h
//   0x23C8E0 mov     ebx, 1
//   0x23C8E5 jmp     loc_23C84D
//   0x23C8EA align 10h
//   0x23C8F0 mov     rdi, [rsp+28h+var_28]
//   0x23C8F4 mov     esi, 0Ch
//   0x23C8F9 call    _get_tinfo_property
//   0x23C8FE cmp     eax, 1
//   0x23C901 jnz     loc_23C84B
//   0x23C907 jmp     short loc_23C8C4
//   0x23C909 call    ___stack_chk_fail
//   0x23C90E mov     rbx, rax
//   0x23C911 jmp     loc_45CDA
//   0x23C916 mov     rbx, rax
//   0x23C919 jmp     loc_45CFA
// ============================================================

void sub_23C810(/* signature unknown */)
{
    // see disassembly above
}

