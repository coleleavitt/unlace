// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x26CA00
// Name:           sub_26CA00
// Function size:  391 bytes (88 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x26CA00 push    r12
//   0x26CA02 add     rsi, 30h ; '0'
//   0x26CA06 push    rbp
//   0x26CA07 lea     rbp, [rdi+88h]
//   0x26CA0E push    rbx
//   0x26CA0F sub     rsp, 10h
//   0x26CA13 mov     rbx, fs:28h
//   0x26CA1C mov     [rsp+28h+var_20], rbx
//   0x26CA21 mov     rbx, rdi
//   0x26CA24 mov     rdi, rbp
//   0x26CA27 call    _copy_tinfo_t
//   0x26CA2C mov     esi, 2
//   0x26CA31 mov     dword ptr [rbx+1BCh], 0
//   0x26CA3B mov     rdi, [rbx+88h]
//   0x26CA42 call    _get_tinfo_property
//   0x26CA47 mov     rdi, [rbx+88h]
//   0x26CA4E and     eax, 0Fh
//   0x26CA51 cmp     al, 0Ah
//   0x26CA53 jnz     loc_26CAE0
//   0x26CA59 mov     esi, 9
//   0x26CA5E mov     [rsp+28h+var_28], 0
//   0x26CA66 call    _get_tinfo_property
//   0x26CA6B mov     rsi, rsp
//   0x26CA6E mov     rdi, rbp
//   0x26CA71 mov     [rsp+28h+var_28], rax
//   0x26CA75 mov     r12, rsp
//   0x26CA78 call    _copy_tinfo_t
//   0x26CA7D mov     rdi, rsp
//   0x26CA80 call    _clear_tinfo_t
//   0x26CA85 mov     rdi, rbp
//   0x26CA88 call    sub_32DA30
//   0x26CA8D test    al, al
//   0x26CA8F jnz     loc_26CB30
//   0x26CA95 mov     dword ptr [rbx+1BCh], 1
//   0x26CA9F mov     rdi, [rbx+88h]
//   0x26CAA6 call    _verify_tinfo
//   0x26CAAB test    eax, eax
//   0x26CAAD jnz     loc_26CB50
//   0x26CAB3 mov     rsi, [rbx+88h]
//   0x26CABA xor     edx, edx
//   0x26CABC xor     edi, edi
//   0x26CABE call    _get_tinfo_size
//   0x26CAC3 mov     rdx, [rsp+28h+var_20]
//   0x26CAC8 sub     rdx, fs:28h
//   0x26CAD1 jnz     loc_26CB5A
//   0x26CAD7 add     rsp, 10h
//   0x26CADB pop     rbx
//   0x26CADC pop     rbp
//   0x26CADD pop     r12
//   0x26CADF retn
//   0x26CAE0 mov     esi, 2
//   0x26CAE5 call    _get_tinfo_property
//   0x26CAEA and     eax, 0Fh
//   0x26CAED cmp     al, 0Bh
//   0x26CAEF jnz     short loc_26CA9F
//   0x26CAF1 mov     rdi, [rbx+88h]
//   0x26CAF8 mov     esi, 0Bh
//   0x26CAFD mov     [rsp+28h+var_28], 0
//   0x26CB05 call    _get_tinfo_property
//   0x26CB0A mov     rsi, rsp
//   0x26CB0D mov     rdi, rbp
//   0x26CB10 mov     [rsp+28h+var_28], rax
//   0x26CB14 mov     r12, rsp
//   0x26CB17 call    _copy_tinfo_t
//   0x26CB1C mov     rdi, rsp
//   0x26CB1F call    _clear_tinfo_t
//   0x26CB24 or      dword ptr [rbx+1BCh], 2
//   0x26CB2B jmp     loc_26CA9F
//   0x26CB30 mov     rsi, rsp
//   0x26CB33 mov     rdi, rbp
//   0x26CB36 mov     [rsp+28h+var_28], 1
//   0x26CB3E call    _copy_tinfo_t
//   0x26CB43 mov     rdi, rsp
//   0x26CB46 call    _clear_tinfo_t
//   0x26CB4B jmp     loc_26CA95
//   0x26CB50 mov     eax, 0FFFFFFFFh
//   0x26CB55 jmp     loc_26CAC3
//   0x26CB5A call    ___stack_chk_fail
//   0x26CB5F mov     rbx, rax
//   0x26CB62 jmp     loc_4A168
//   0x26CB67 mov     rbx, rax
//   0x26CB6A jmp     loc_4A18C
//   0x26CB6F mov     rbx, rax
//   0x26CB72 jmp     loc_4A1D6
//   0x26CB77 mov     rbx, rax
//   0x26CB7A jmp     loc_4A1AC
//   0x26CB7F mov     rbx, rax
//   0x26CB82 jmp     loc_4A1F6
// ============================================================

void sub_26CA00(/* signature unknown */)
{
    // see disassembly above
}

