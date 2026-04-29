// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x268D80
// Name:           sub_268D80
// Function size:  391 bytes (88 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x268D80 push    r12
//   0x268D82 add     rsi, 30h ; '0'
//   0x268D86 push    rbp
//   0x268D87 lea     rbp, [rdi+88h]
//   0x268D8E push    rbx
//   0x268D8F sub     rsp, 10h
//   0x268D93 mov     rbx, fs:28h
//   0x268D9C mov     [rsp+28h+var_20], rbx
//   0x268DA1 mov     rbx, rdi
//   0x268DA4 mov     rdi, rbp
//   0x268DA7 call    _copy_tinfo_t
//   0x268DAC mov     esi, 2
//   0x268DB1 mov     dword ptr [rbx+1BCh], 0
//   0x268DBB mov     rdi, [rbx+88h]
//   0x268DC2 call    _get_tinfo_property
//   0x268DC7 mov     rdi, [rbx+88h]
//   0x268DCE and     eax, 0Fh
//   0x268DD1 cmp     al, 0Ah
//   0x268DD3 jnz     loc_268E60
//   0x268DD9 mov     esi, 9
//   0x268DDE mov     [rsp+28h+var_28], 0
//   0x268DE6 call    _get_tinfo_property
//   0x268DEB mov     rsi, rsp
//   0x268DEE mov     rdi, rbp
//   0x268DF1 mov     [rsp+28h+var_28], rax
//   0x268DF5 mov     r12, rsp
//   0x268DF8 call    _copy_tinfo_t
//   0x268DFD mov     rdi, rsp
//   0x268E00 call    _clear_tinfo_t
//   0x268E05 mov     rdi, rbp
//   0x268E08 call    sub_3296F0
//   0x268E0D test    al, al
//   0x268E0F jnz     loc_268EB0
//   0x268E15 mov     dword ptr [rbx+1BCh], 1
//   0x268E1F mov     rdi, [rbx+88h]
//   0x268E26 call    _verify_tinfo
//   0x268E2B test    eax, eax
//   0x268E2D jnz     loc_268ED0
//   0x268E33 mov     rsi, [rbx+88h]
//   0x268E3A xor     edx, edx
//   0x268E3C xor     edi, edi
//   0x268E3E call    _get_tinfo_size
//   0x268E43 mov     rdx, [rsp+28h+var_20]
//   0x268E48 sub     rdx, fs:28h
//   0x268E51 jnz     loc_268EDA
//   0x268E57 add     rsp, 10h
//   0x268E5B pop     rbx
//   0x268E5C pop     rbp
//   0x268E5D pop     r12
//   0x268E5F retn
//   0x268E60 mov     esi, 2
//   0x268E65 call    _get_tinfo_property
//   0x268E6A and     eax, 0Fh
//   0x268E6D cmp     al, 0Bh
//   0x268E6F jnz     short loc_268E1F
//   0x268E71 mov     rdi, [rbx+88h]
//   0x268E78 mov     esi, 0Bh
//   0x268E7D mov     [rsp+28h+var_28], 0
//   0x268E85 call    _get_tinfo_property
//   0x268E8A mov     rsi, rsp
//   0x268E8D mov     rdi, rbp
//   0x268E90 mov     [rsp+28h+var_28], rax
//   0x268E94 mov     r12, rsp
//   0x268E97 call    _copy_tinfo_t
//   0x268E9C mov     rdi, rsp
//   0x268E9F call    _clear_tinfo_t
//   0x268EA4 or      dword ptr [rbx+1BCh], 2
//   0x268EAB jmp     loc_268E1F
//   0x268EB0 mov     rsi, rsp
//   0x268EB3 mov     rdi, rbp
//   0x268EB6 mov     [rsp+28h+var_28], 1
//   0x268EBE call    _copy_tinfo_t
//   0x268EC3 mov     rdi, rsp
//   0x268EC6 call    _clear_tinfo_t
//   0x268ECB jmp     loc_268E15
//   0x268ED0 mov     eax, 0FFFFFFFFh
//   0x268ED5 jmp     loc_268E43
//   0x268EDA call    ___stack_chk_fail
//   0x268EDF mov     rbx, rax
//   0x268EE2 jmp     loc_48FE4
//   0x268EE7 mov     rbx, rax
//   0x268EEA jmp     loc_49008
//   0x268EEF mov     rbx, rax
//   0x268EF2 jmp     loc_49052
//   0x268EF7 mov     rbx, rax
//   0x268EFA jmp     loc_49028
//   0x268EFF mov     rbx, rax
//   0x268F02 jmp     loc_49072
// ============================================================

void sub_268D80(/* signature unknown */)
{
    // see disassembly above
}

