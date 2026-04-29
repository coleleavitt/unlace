// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x23C490
// Name:           sub_23C490
// Function size:  270 bytes (75 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x23C490 push    r12
//   0x23C492 push    rbp
//   0x23C493 push    rbx
//   0x23C494 movsxd  rbx, esi
//   0x23C497 mov     esi, 0Dh
//   0x23C49C sub     rsp, 10h
//   0x23C4A0 mov     rdi, [rdi]
//   0x23C4A3 mov     rbp, fs:28h
//   0x23C4AC mov     [rsp+28h+var_20], rbp
//   0x23C4B1 mov     ebp, edx
//   0x23C4B3 mov     [rsp+28h+var_28], 0
//   0x23C4BB call    _get_tinfo_property
//   0x23C4C0 mov     [rsp+28h+var_28], rax
//   0x23C4C4 mov     r12, rsp
//   0x23C4C7 test    al, al
//   0x23C4C9 jnz     short loc_23C4F8
//   0x23C4CB xor     ebx, ebx
//   0x23C4CD mov     rdi, r12
//   0x23C4D0 call    _clear_tinfo_t
//   0x23C4D5 mov     rax, [rsp+28h+var_20]
//   0x23C4DA sub     rax, fs:28h
//   0x23C4E3 jnz     loc_23C589
//   0x23C4E9 add     rsp, 10h
//   0x23C4ED mov     eax, ebx
//   0x23C4EF pop     rbx
//   0x23C4F0 pop     rbp
//   0x23C4F1 pop     r12
//   0x23C4F3 retn
//   0x23C4F4 align 8
//   0x23C4F8 mov     rdi, rax
//   0x23C4FB call    _verify_tinfo
//   0x23C500 test    eax, eax
//   0x23C502 jnz     short loc_23C4CB
//   0x23C504 mov     rdi, rsp
//   0x23C507 call    sub_328770
//   0x23C50C test    al, al
//   0x23C50E jnz     short loc_23C4CB
//   0x23C510 cmp     ebx, 0FFFFFFFFh
//   0x23C513 jz      short loc_23C560
//   0x23C515 and     ebp, 2
//   0x23C518 jnz     short loc_23C52F
//   0x23C51A mov     rdi, [rsp+28h+var_28]
//   0x23C51E mov     esi, 2
//   0x23C523 call    _get_tinfo_property
//   0x23C528 and     eax, 0Fh
//   0x23C52B cmp     al, 0Bh
//   0x23C52D jz      short loc_23C560
//   0x23C52F mov     rdi, [rsp+28h+var_28]
//   0x23C533 mov     esi, 2
//   0x23C538 call    _get_tinfo_property
//   0x23C53D and     eax, 0Fh
//   0x23C540 cmp     al, 0Bh
//   0x23C542 jz      short loc_23C570
//   0x23C544 mov     rsi, [rsp+28h+var_28]
//   0x23C548 xor     edx, edx
//   0x23C54A xor     edi, edi
//   0x23C54C call    _get_tinfo_size
//   0x23C551 cmp     rbx, rax
//   0x23C554 setz    bl
//   0x23C557 jmp     loc_23C4CD
//   0x23C55C align 20h
//   0x23C560 mov     ebx, 1
//   0x23C565 jmp     loc_23C4CD
//   0x23C56A align 10h
//   0x23C570 mov     rdi, [rsp+28h+var_28]
//   0x23C574 mov     esi, 0Ch
//   0x23C579 call    _get_tinfo_property
//   0x23C57E cmp     eax, 1
//   0x23C581 jnz     loc_23C4CB
//   0x23C587 jmp     short loc_23C544
//   0x23C589 call    ___stack_chk_fail
//   0x23C58E mov     rbx, rax
//   0x23C591 jmp     loc_45CAC
//   0x23C596 mov     rbx, rax
//   0x23C599 jmp     loc_45CCC
// ============================================================

void sub_23C490(/* signature unknown */)
{
    // see disassembly above
}

