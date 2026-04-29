// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1CDDE0
// Name:           sub_1CDDE0
// Function size:  361 bytes (89 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1CDDE0 push    r13
//   0x1CDDE2 push    r12
//   0x1CDDE4 push    rbp
//   0x1CDDE5 mov     rbp, rsi
//   0x1CDDE8 mov     rsi, rdx
//   0x1CDDEB push    rbx
//   0x1CDDEC mov     rbx, rdi
//   0x1CDDEF sub     rsp, 28h
//   0x1CDDF3 mov     r12, fs:28h
//   0x1CDDFC mov     [rsp+48h+var_30], r12
//   0x1CDE01 mov     r12, rdx
//   0x1CDE04 call    sub_3EFB70
//   0x1CDE09 mov     r13d, eax
//   0x1CDE0C test    al, al
//   0x1CDE0E jz      loc_1CDEAE
//   0x1CDE14 mov     rdx, [rbx+60h]
//   0x1CDE18 mov     rax, [rbx+58h]
//   0x1CDE1C lea     rdx, [rdx+rdx*4]
//   0x1CDE20 shl     rdx, 4
//   0x1CDE24 add     rdx, rax
//   0x1CDE27 cmp     rdx, rax
//   0x1CDE2A jnz     short loc_1CDE4D
//   0x1CDE2C jmp     loc_1CDED0
//   0x1CDE31 align 20h
//   0x1CDE40 add     rax, 50h ; 'P'
//   0x1CDE44 cmp     rax, rdx
//   0x1CDE47 jz      loc_1CDED0
//   0x1CDE4D test    byte ptr [rax+48h], 2
//   0x1CDE51 jz      short loc_1CDE40
//   0x1CDE53 movzx   edi, byte ptr [r12+0Dh]
//   0x1CDE59 mov     rbx, [rbx+10h]
//   0x1CDE5D call    _get_dtype_size
//   0x1CDE62 mov     rdi, rbx
//   0x1CDE65 mov     edx, 1
//   0x1CDE6A movsxd  rsi, eax
//   0x1CDE6D call    sub_133C80
//   0x1CDE72 mov     ebx, eax
//   0x1CDE74 cmp     eax, 0FFFFFFFFh
//   0x1CDE77 jz      loc_1CDF17
//   0x1CDE7D movzx   edi, byte ptr [r12+0Dh]
//   0x1CDE83 call    _get_dtype_size
//   0x1CDE88 mov     rsi, rsp
//   0x1CDE8B mov     rdi, rbp
//   0x1CDE8E mov     [rsp+48h+var_40], ebx
//   0x1CDE92 mov     [rsp+48h+var_48], 1
//   0x1CDE9A mov     rbx, rsp
//   0x1CDE9D mov     dword ptr [rsp+48h+var_48+4], eax
//   0x1CDEA1 call    sub_120CC0
//   0x1CDEA6 mov     rdi, rsp
//   0x1CDEA9 call    sub_1188E0
//   0x1CDEAE mov     rax, [rsp+48h+var_30]
//   0x1CDEB3 sub     rax, fs:28h
//   0x1CDEBC jnz     short loc_1CDF12
//   0x1CDEBE add     rsp, 28h
//   0x1CDEC2 mov     eax, r13d
//   0x1CDEC5 pop     rbx
//   0x1CDEC6 pop     rbp
//   0x1CDEC7 pop     r12
//   0x1CDEC9 pop     r13
//   0x1CDECB retn
//   0x1CDECC align 10h
//   0x1CDED0 mov     rax, [rbx+8]
//   0x1CDED4 movzx   edi, byte ptr [r12+0Dh]
//   0x1CDEDA mov     r13, [rax+70h]
//   0x1CDEDE call    _get_dtype_size
//   0x1CDEE3 mov     rcx, rax
//   0x1CDEE6 mov     rax, [rsp+48h+var_30]
//   0x1CDEEB sub     rax, fs:28h
//   0x1CDEF4 jnz     short loc_1CDF12
//   0x1CDEF6 add     rsp, 28h
//   0x1CDEFA lea     rdx, [rbx+80h]
//   0x1CDF01 mov     rsi, rbp
//   0x1CDF04 mov     rdi, r13
//   0x1CDF07 pop     rbx
//   0x1CDF08 pop     rbp
//   0x1CDF09 pop     r12
//   0x1CDF0B pop     r13
//   0x1CDF0D jmp     sub_1CDC50
//   0x1CDF12 call    ___stack_chk_fail
//   0x1CDF17 mov     rax, cs:under_debugger_ptr
//   0x1CDF1E cmp     byte ptr [rax], 0
//   0x1CDF21 jnz     loc_408A8
//   0x1CDF27 mov     rax, [rsp+48h+var_30]
//   0x1CDF2C sub     rax, fs:28h
//   0x1CDF35 jnz     short loc_1CDF12
//   0x1CDF37 mov     edi, 0CE3Fh
//   0x1CDF3C call    sub_37DDE0
//   0x1CDF41 mov     rbp, rax
//   0x1CDF44 jmp     loc_408AA
// ============================================================

void sub_1CDDE0(/* signature unknown */)
{
    // see disassembly above
}

