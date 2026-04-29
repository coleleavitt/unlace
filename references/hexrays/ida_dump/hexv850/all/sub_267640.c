// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x267640
// Name:           sub_267640
// Function size:  391 bytes (88 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x267640 push    r12
//   0x267642 add     rsi, 30h ; '0'
//   0x267646 push    rbp
//   0x267647 lea     rbp, [rdi+88h]
//   0x26764E push    rbx
//   0x26764F sub     rsp, 10h
//   0x267653 mov     rbx, fs:28h
//   0x26765C mov     [rsp+28h+var_20], rbx
//   0x267661 mov     rbx, rdi
//   0x267664 mov     rdi, rbp
//   0x267667 call    _copy_tinfo_t
//   0x26766C mov     esi, 2
//   0x267671 mov     dword ptr [rbx+1BCh], 0
//   0x26767B mov     rdi, [rbx+88h]
//   0x267682 call    _get_tinfo_property
//   0x267687 mov     rdi, [rbx+88h]
//   0x26768E and     eax, 0Fh
//   0x267691 cmp     al, 0Ah
//   0x267693 jnz     loc_267720
//   0x267699 mov     esi, 9
//   0x26769E mov     [rsp+28h+var_28], 0
//   0x2676A6 call    _get_tinfo_property
//   0x2676AB mov     rsi, rsp
//   0x2676AE mov     rdi, rbp
//   0x2676B1 mov     [rsp+28h+var_28], rax
//   0x2676B5 mov     r12, rsp
//   0x2676B8 call    _copy_tinfo_t
//   0x2676BD mov     rdi, rsp
//   0x2676C0 call    _clear_tinfo_t
//   0x2676C5 mov     rdi, rbp
//   0x2676C8 call    sub_327FB0
//   0x2676CD test    al, al
//   0x2676CF jnz     loc_267770
//   0x2676D5 mov     dword ptr [rbx+1BCh], 1
//   0x2676DF mov     rdi, [rbx+88h]
//   0x2676E6 call    _verify_tinfo
//   0x2676EB test    eax, eax
//   0x2676ED jnz     loc_267790
//   0x2676F3 mov     rsi, [rbx+88h]
//   0x2676FA xor     edx, edx
//   0x2676FC xor     edi, edi
//   0x2676FE call    _get_tinfo_size
//   0x267703 mov     rdx, [rsp+28h+var_20]
//   0x267708 sub     rdx, fs:28h
//   0x267711 jnz     loc_26779A
//   0x267717 add     rsp, 10h
//   0x26771B pop     rbx
//   0x26771C pop     rbp
//   0x26771D pop     r12
//   0x26771F retn
//   0x267720 mov     esi, 2
//   0x267725 call    _get_tinfo_property
//   0x26772A and     eax, 0Fh
//   0x26772D cmp     al, 0Bh
//   0x26772F jnz     short loc_2676DF
//   0x267731 mov     rdi, [rbx+88h]
//   0x267738 mov     esi, 0Bh
//   0x26773D mov     [rsp+28h+var_28], 0
//   0x267745 call    _get_tinfo_property
//   0x26774A mov     rsi, rsp
//   0x26774D mov     rdi, rbp
//   0x267750 mov     [rsp+28h+var_28], rax
//   0x267754 mov     r12, rsp
//   0x267757 call    _copy_tinfo_t
//   0x26775C mov     rdi, rsp
//   0x26775F call    _clear_tinfo_t
//   0x267764 or      dword ptr [rbx+1BCh], 2
//   0x26776B jmp     loc_2676DF
//   0x267770 mov     rsi, rsp
//   0x267773 mov     rdi, rbp
//   0x267776 mov     [rsp+28h+var_28], 1
//   0x26777E call    _copy_tinfo_t
//   0x267783 mov     rdi, rsp
//   0x267786 call    _clear_tinfo_t
//   0x26778B jmp     loc_2676D5
//   0x267790 mov     eax, 0FFFFFFFFh
//   0x267795 jmp     loc_267703
//   0x26779A call    ___stack_chk_fail
//   0x26779F mov     rbx, rax
//   0x2677A2 jmp     loc_48F52
//   0x2677A7 mov     rbx, rax
//   0x2677AA jmp     loc_48F76
//   0x2677AF mov     rbx, rax
//   0x2677B2 jmp     loc_48FC0
//   0x2677B7 mov     rbx, rax
//   0x2677BA jmp     loc_48F96
//   0x2677BF mov     rbx, rax
//   0x2677C2 jmp     loc_48FE0
// ============================================================

void sub_267640(/* signature unknown */)
{
    // see disassembly above
}

