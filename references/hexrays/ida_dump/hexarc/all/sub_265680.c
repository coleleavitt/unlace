// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x265680
// Name:           sub_265680
// Function size:  391 bytes (88 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x265680 push    r12
//   0x265682 add     rsi, 30h ; '0'
//   0x265686 push    rbp
//   0x265687 lea     rbp, [rdi+88h]
//   0x26568E push    rbx
//   0x26568F sub     rsp, 10h
//   0x265693 mov     rbx, fs:28h
//   0x26569C mov     [rsp+28h+var_20], rbx
//   0x2656A1 mov     rbx, rdi
//   0x2656A4 mov     rdi, rbp
//   0x2656A7 call    _copy_tinfo_t
//   0x2656AC mov     esi, 2
//   0x2656B1 mov     dword ptr [rbx+1BCh], 0
//   0x2656BB mov     rdi, [rbx+88h]
//   0x2656C2 call    _get_tinfo_property
//   0x2656C7 mov     rdi, [rbx+88h]
//   0x2656CE and     eax, 0Fh
//   0x2656D1 cmp     al, 0Ah
//   0x2656D3 jnz     loc_265760
//   0x2656D9 mov     esi, 9
//   0x2656DE mov     [rsp+28h+var_28], 0
//   0x2656E6 call    _get_tinfo_property
//   0x2656EB mov     rsi, rsp
//   0x2656EE mov     rdi, rbp
//   0x2656F1 mov     [rsp+28h+var_28], rax
//   0x2656F5 mov     r12, rsp
//   0x2656F8 call    _copy_tinfo_t
//   0x2656FD mov     rdi, rsp
//   0x265700 call    _clear_tinfo_t
//   0x265705 mov     rdi, rbp
//   0x265708 call    sub_3264F0
//   0x26570D test    al, al
//   0x26570F jnz     loc_2657B0
//   0x265715 mov     dword ptr [rbx+1BCh], 1
//   0x26571F mov     rdi, [rbx+88h]
//   0x265726 call    _verify_tinfo
//   0x26572B test    eax, eax
//   0x26572D jnz     loc_2657D0
//   0x265733 mov     rsi, [rbx+88h]
//   0x26573A xor     edx, edx
//   0x26573C xor     edi, edi
//   0x26573E call    _get_tinfo_size
//   0x265743 mov     rdx, [rsp+28h+var_20]
//   0x265748 sub     rdx, fs:28h
//   0x265751 jnz     loc_2657DA
//   0x265757 add     rsp, 10h
//   0x26575B pop     rbx
//   0x26575C pop     rbp
//   0x26575D pop     r12
//   0x26575F retn
//   0x265760 mov     esi, 2
//   0x265765 call    _get_tinfo_property
//   0x26576A and     eax, 0Fh
//   0x26576D cmp     al, 0Bh
//   0x26576F jnz     short loc_26571F
//   0x265771 mov     rdi, [rbx+88h]
//   0x265778 mov     esi, 0Bh
//   0x26577D mov     [rsp+28h+var_28], 0
//   0x265785 call    _get_tinfo_property
//   0x26578A mov     rsi, rsp
//   0x26578D mov     rdi, rbp
//   0x265790 mov     [rsp+28h+var_28], rax
//   0x265794 mov     r12, rsp
//   0x265797 call    _copy_tinfo_t
//   0x26579C mov     rdi, rsp
//   0x26579F call    _clear_tinfo_t
//   0x2657A4 or      dword ptr [rbx+1BCh], 2
//   0x2657AB jmp     loc_26571F
//   0x2657B0 mov     rsi, rsp
//   0x2657B3 mov     rdi, rbp
//   0x2657B6 mov     [rsp+28h+var_28], 1
//   0x2657BE call    _copy_tinfo_t
//   0x2657C3 mov     rdi, rsp
//   0x2657C6 call    _clear_tinfo_t
//   0x2657CB jmp     loc_265715
//   0x2657D0 mov     eax, 0FFFFFFFFh
//   0x2657D5 jmp     loc_265743
//   0x2657DA call    ___stack_chk_fail
//   0x2657DF mov     rbx, rax
//   0x2657E2 jmp     loc_47ED8
//   0x2657E7 mov     rbx, rax
//   0x2657EA jmp     loc_47EFC
//   0x2657EF mov     rbx, rax
//   0x2657F2 jmp     loc_47F46
//   0x2657F7 mov     rbx, rax
//   0x2657FA jmp     loc_47F1C
//   0x2657FF mov     rbx, rax
//   0x265802 jmp     loc_47F66
// ============================================================

void sub_265680(/* signature unknown */)
{
    // see disassembly above
}

