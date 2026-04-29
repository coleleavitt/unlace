// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x267E00
// Name:           sub_267E00
// Function size:  391 bytes (88 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x267E00 push    r12
//   0x267E02 add     rsi, 30h ; '0'
//   0x267E06 push    rbp
//   0x267E07 lea     rbp, [rdi+88h]
//   0x267E0E push    rbx
//   0x267E0F sub     rsp, 10h
//   0x267E13 mov     rbx, fs:28h
//   0x267E1C mov     [rsp+28h+var_20], rbx
//   0x267E21 mov     rbx, rdi
//   0x267E24 mov     rdi, rbp
//   0x267E27 call    _copy_tinfo_t
//   0x267E2C mov     esi, 2
//   0x267E31 mov     dword ptr [rbx+1BCh], 0
//   0x267E3B mov     rdi, [rbx+88h]
//   0x267E42 call    _get_tinfo_property
//   0x267E47 mov     rdi, [rbx+88h]
//   0x267E4E and     eax, 0Fh
//   0x267E51 cmp     al, 0Ah
//   0x267E53 jnz     loc_267EE0
//   0x267E59 mov     esi, 9
//   0x267E5E mov     [rsp+28h+var_28], 0
//   0x267E66 call    _get_tinfo_property
//   0x267E6B mov     rsi, rsp
//   0x267E6E mov     rdi, rbp
//   0x267E71 mov     [rsp+28h+var_28], rax
//   0x267E75 mov     r12, rsp
//   0x267E78 call    _copy_tinfo_t
//   0x267E7D mov     rdi, rsp
//   0x267E80 call    _clear_tinfo_t
//   0x267E85 mov     rdi, rbp
//   0x267E88 call    sub_328770
//   0x267E8D test    al, al
//   0x267E8F jnz     loc_267F30
//   0x267E95 mov     dword ptr [rbx+1BCh], 1
//   0x267E9F mov     rdi, [rbx+88h]
//   0x267EA6 call    _verify_tinfo
//   0x267EAB test    eax, eax
//   0x267EAD jnz     loc_267F50
//   0x267EB3 mov     rsi, [rbx+88h]
//   0x267EBA xor     edx, edx
//   0x267EBC xor     edi, edi
//   0x267EBE call    _get_tinfo_size
//   0x267EC3 mov     rdx, [rsp+28h+var_20]
//   0x267EC8 sub     rdx, fs:28h
//   0x267ED1 jnz     loc_267F5A
//   0x267ED7 add     rsp, 10h
//   0x267EDB pop     rbx
//   0x267EDC pop     rbp
//   0x267EDD pop     r12
//   0x267EDF retn
//   0x267EE0 mov     esi, 2
//   0x267EE5 call    _get_tinfo_property
//   0x267EEA and     eax, 0Fh
//   0x267EED cmp     al, 0Bh
//   0x267EEF jnz     short loc_267E9F
//   0x267EF1 mov     rdi, [rbx+88h]
//   0x267EF8 mov     esi, 0Bh
//   0x267EFD mov     [rsp+28h+var_28], 0
//   0x267F05 call    _get_tinfo_property
//   0x267F0A mov     rsi, rsp
//   0x267F0D mov     rdi, rbp
//   0x267F10 mov     [rsp+28h+var_28], rax
//   0x267F14 mov     r12, rsp
//   0x267F17 call    _copy_tinfo_t
//   0x267F1C mov     rdi, rsp
//   0x267F1F call    _clear_tinfo_t
//   0x267F24 or      dword ptr [rbx+1BCh], 2
//   0x267F2B jmp     loc_267E9F
//   0x267F30 mov     rsi, rsp
//   0x267F33 mov     rdi, rbp
//   0x267F36 mov     [rsp+28h+var_28], 1
//   0x267F3E call    _copy_tinfo_t
//   0x267F43 mov     rdi, rsp
//   0x267F46 call    _clear_tinfo_t
//   0x267F4B jmp     loc_267E95
//   0x267F50 mov     eax, 0FFFFFFFFh
//   0x267F55 jmp     loc_267EC3
//   0x267F5A call    ___stack_chk_fail
//   0x267F5F mov     rbx, rax
//   0x267F62 jmp     loc_48F80
//   0x267F67 mov     rbx, rax
//   0x267F6A jmp     loc_48FA4
//   0x267F6F mov     rbx, rax
//   0x267F72 jmp     loc_48FEE
//   0x267F77 mov     rbx, rax
//   0x267F7A jmp     loc_48FC4
//   0x267F7F mov     rbx, rax
//   0x267F82 jmp     loc_4900E
// ============================================================

void sub_267E00(/* signature unknown */)
{
    // see disassembly above
}

