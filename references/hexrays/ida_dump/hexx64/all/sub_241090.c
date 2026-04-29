// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x241090
// Name:           sub_241090
// Function size:  270 bytes (75 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x241090 push    r12
//   0x241092 push    rbp
//   0x241093 push    rbx
//   0x241094 movsxd  rbx, esi
//   0x241097 mov     esi, 0Dh
//   0x24109C sub     rsp, 10h
//   0x2410A0 mov     rdi, [rdi]
//   0x2410A3 mov     rbp, fs:28h
//   0x2410AC mov     [rsp+28h+var_20], rbp
//   0x2410B1 mov     ebp, edx
//   0x2410B3 mov     [rsp+28h+var_28], 0
//   0x2410BB call    _get_tinfo_property
//   0x2410C0 mov     [rsp+28h+var_28], rax
//   0x2410C4 mov     r12, rsp
//   0x2410C7 test    al, al
//   0x2410C9 jnz     short loc_2410F8
//   0x2410CB xor     ebx, ebx
//   0x2410CD mov     rdi, r12
//   0x2410D0 call    _clear_tinfo_t
//   0x2410D5 mov     rax, [rsp+28h+var_20]
//   0x2410DA sub     rax, fs:28h
//   0x2410E3 jnz     loc_241189
//   0x2410E9 add     rsp, 10h
//   0x2410ED mov     eax, ebx
//   0x2410EF pop     rbx
//   0x2410F0 pop     rbp
//   0x2410F1 pop     r12
//   0x2410F3 retn
//   0x2410F4 align 8
//   0x2410F8 mov     rdi, rax
//   0x2410FB call    _verify_tinfo
//   0x241100 test    eax, eax
//   0x241102 jnz     short loc_2410CB
//   0x241104 mov     rdi, rsp
//   0x241107 call    sub_32DA30
//   0x24110C test    al, al
//   0x24110E jnz     short loc_2410CB
//   0x241110 cmp     ebx, 0FFFFFFFFh
//   0x241113 jz      short loc_241160
//   0x241115 and     ebp, 2
//   0x241118 jnz     short loc_24112F
//   0x24111A mov     rdi, [rsp+28h+var_28]
//   0x24111E mov     esi, 2
//   0x241123 call    _get_tinfo_property
//   0x241128 and     eax, 0Fh
//   0x24112B cmp     al, 0Bh
//   0x24112D jz      short loc_241160
//   0x24112F mov     rdi, [rsp+28h+var_28]
//   0x241133 mov     esi, 2
//   0x241138 call    _get_tinfo_property
//   0x24113D and     eax, 0Fh
//   0x241140 cmp     al, 0Bh
//   0x241142 jz      short loc_241170
//   0x241144 mov     rsi, [rsp+28h+var_28]
//   0x241148 xor     edx, edx
//   0x24114A xor     edi, edi
//   0x24114C call    _get_tinfo_size
//   0x241151 cmp     rbx, rax
//   0x241154 setz    bl
//   0x241157 jmp     loc_2410CD
//   0x24115C align 20h
//   0x241160 mov     ebx, 1
//   0x241165 jmp     loc_2410CD
//   0x24116A align 10h
//   0x241170 mov     rdi, [rsp+28h+var_28]
//   0x241174 mov     esi, 0Ch
//   0x241179 call    _get_tinfo_property
//   0x24117E cmp     eax, 1
//   0x241181 jnz     loc_2410CB
//   0x241187 jmp     short loc_241144
//   0x241189 call    ___stack_chk_fail
//   0x24118E mov     rbx, rax
//   0x241191 jmp     loc_46E94
//   0x241196 mov     rbx, rax
//   0x241199 jmp     loc_46EB4
// ============================================================

void sub_241090(/* signature unknown */)
{
    // see disassembly above
}

