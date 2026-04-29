// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1D1DE0
// Name:           sub_1D1DE0
// Function size:  361 bytes (89 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1D1DE0 push    r13
//   0x1D1DE2 push    r12
//   0x1D1DE4 push    rbp
//   0x1D1DE5 mov     rbp, rsi
//   0x1D1DE8 mov     rsi, rdx
//   0x1D1DEB push    rbx
//   0x1D1DEC mov     rbx, rdi
//   0x1D1DEF sub     rsp, 28h
//   0x1D1DF3 mov     r12, fs:28h
//   0x1D1DFC mov     [rsp+48h+var_30], r12
//   0x1D1E01 mov     r12, rdx
//   0x1D1E04 call    sub_40EC80
//   0x1D1E09 mov     r13d, eax
//   0x1D1E0C test    al, al
//   0x1D1E0E jz      loc_1D1EAE
//   0x1D1E14 mov     rdx, [rbx+60h]
//   0x1D1E18 mov     rax, [rbx+58h]
//   0x1D1E1C lea     rdx, [rdx+rdx*4]
//   0x1D1E20 shl     rdx, 4
//   0x1D1E24 add     rdx, rax
//   0x1D1E27 cmp     rdx, rax
//   0x1D1E2A jnz     short loc_1D1E4D
//   0x1D1E2C jmp     loc_1D1ED0
//   0x1D1E31 align 20h
//   0x1D1E40 add     rax, 50h ; 'P'
//   0x1D1E44 cmp     rax, rdx
//   0x1D1E47 jz      loc_1D1ED0
//   0x1D1E4D test    byte ptr [rax+48h], 2
//   0x1D1E51 jz      short loc_1D1E40
//   0x1D1E53 movzx   edi, byte ptr [r12+0Dh]
//   0x1D1E59 mov     rbx, [rbx+10h]
//   0x1D1E5D call    _get_dtype_size
//   0x1D1E62 mov     rdi, rbx
//   0x1D1E65 mov     edx, 1
//   0x1D1E6A movsxd  rsi, eax
//   0x1D1E6D call    sub_137B80
//   0x1D1E72 mov     ebx, eax
//   0x1D1E74 cmp     eax, 0FFFFFFFFh
//   0x1D1E77 jz      loc_1D1F17
//   0x1D1E7D movzx   edi, byte ptr [r12+0Dh]
//   0x1D1E83 call    _get_dtype_size
//   0x1D1E88 mov     rsi, rsp
//   0x1D1E8B mov     rdi, rbp
//   0x1D1E8E mov     [rsp+48h+var_40], ebx
//   0x1D1E92 mov     [rsp+48h+var_48], 1
//   0x1D1E9A mov     rbx, rsp
//   0x1D1E9D mov     dword ptr [rsp+48h+var_48+4], eax
//   0x1D1EA1 call    sub_124BC0
//   0x1D1EA6 mov     rdi, rsp
//   0x1D1EA9 call    sub_11C7E0
//   0x1D1EAE mov     rax, [rsp+48h+var_30]
//   0x1D1EB3 sub     rax, fs:28h
//   0x1D1EBC jnz     short loc_1D1F12
//   0x1D1EBE add     rsp, 28h
//   0x1D1EC2 mov     eax, r13d
//   0x1D1EC5 pop     rbx
//   0x1D1EC6 pop     rbp
//   0x1D1EC7 pop     r12
//   0x1D1EC9 pop     r13
//   0x1D1ECB retn
//   0x1D1ECC align 10h
//   0x1D1ED0 mov     rax, [rbx+8]
//   0x1D1ED4 movzx   edi, byte ptr [r12+0Dh]
//   0x1D1EDA mov     r13, [rax+70h]
//   0x1D1EDE call    _get_dtype_size
//   0x1D1EE3 mov     rcx, rax
//   0x1D1EE6 mov     rax, [rsp+48h+var_30]
//   0x1D1EEB sub     rax, fs:28h
//   0x1D1EF4 jnz     short loc_1D1F12
//   0x1D1EF6 add     rsp, 28h
//   0x1D1EFA lea     rdx, [rbx+80h]
//   0x1D1F01 mov     rsi, rbp
//   0x1D1F04 mov     rdi, r13
//   0x1D1F07 pop     rbx
//   0x1D1F08 pop     rbp
//   0x1D1F09 pop     r12
//   0x1D1F0B pop     r13
//   0x1D1F0D jmp     sub_1D1C50
//   0x1D1F12 call    ___stack_chk_fail
//   0x1D1F17 mov     rax, cs:under_debugger_ptr
//   0x1D1F1E cmp     byte ptr [rax], 0
//   0x1D1F21 jnz     loc_438E8
//   0x1D1F27 mov     rax, [rsp+48h+var_30]
//   0x1D1F2C sub     rax, fs:28h
//   0x1D1F35 jnz     short loc_1D1F12
//   0x1D1F37 mov     edi, 0CE3Fh
//   0x1D1F3C call    sub_3835A0
//   0x1D1F41 mov     rbp, rax
//   0x1D1F44 jmp     loc_438EA
// ============================================================

void sub_1D1DE0(/* signature unknown */)
{
    // see disassembly above
}

