// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF3970
// Name:           sub_F3970
// Function size:  394 bytes (84 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF3970 push    r14
//   0xF3972 lea     rax, off_4B0990
//   0xF3979 push    r13
//   0xF397B push    r12
//   0xF397D push    rbp
//   0xF397E push    rbx
//   0xF397F add     rsp, 0FFFFFFFFFFFFFF80h
//   0xF3983 mov     rbx, fs:28h
//   0xF398C mov     [rsp+0A8h+var_30], rbx
//   0xF3991 mov     rbx, rdi
//   0xF3994 lea     rsi, [rsp+0A8h+var_98]
//   0xF3999 mov     [rsp+0A8h+var_98], rax
//   0xF399E mov     [rsp+0A8h+var_90], 0
//   0xF39A7 mov     [rsp+0A8h+var_88], 0
//   0xF39B0 mov     [rsp+0A8h+var_80], 0
//   0xF39B9 mov     [rsp+0A8h+var_78], 0
//   0xF39C2 mov     [rsp+0A8h+var_70], 0FFFFFFFFFFFFFFFFh
//   0xF39CB call    sub_11AE20
//   0xF39D0 cmp     [rsp+0A8h+var_70], 0FFFFFFFFFFFFFFFFh
//   0xF39D6 jnz     short loc_F3A00
//   0xF39D8 mov     rax, [rsp+0A8h+var_30]
//   0xF39DD sub     rax, fs:28h
//   0xF39E6 jnz     loc_F3AED
//   0xF39EC sub     rsp, 0FFFFFFFFFFFFFF80h
//   0xF39F0 pop     rbx
//   0xF39F1 pop     rbp
//   0xF39F2 pop     r12
//   0xF39F4 pop     r13
//   0xF39F6 pop     r14
//   0xF39F8 retn
//   0xF39F9 align 20h
//   0xF3A00 mov     rax, [rbx+5E0h]
//   0xF3A07 lea     r12, [rsp+0A8h+var_A0]
//   0xF3A0C mov     [rsp+0A8h+var_A0], 0
//   0xF3A15 mov     eax, [rax+50h]
//   0xF3A18 lea     edx, [rax+rax*2]
//   0xF3A1B lea     r14d, [rax+rdx*4]
//   0xF3A1F mov     eax, 100h
//   0xF3A24 mov     word ptr [rsp+0A8h+var_58], ax
//   0xF3A29 lea     rax, aSjljFunctionCo; "SjLj_Function_Context"
//   0xF3A30 movsxd  rbp, r14d
//   0xF3A33 mov     [rsp+0A8h+var_60], rax
//   0xF3A38 call    _get_idati
//   0xF3A3D lea     r13, [rsp+0A8h+var_68]
//   0xF3A42 mov     edx, 3Dh ; '='
//   0xF3A47 mov     esi, 3Dh ; '='
//   0xF3A4C mov     rdi, r12
//   0xF3A4F mov     rcx, r13
//   0xF3A52 mov     [rsp+0A8h+var_68], rax
//   0xF3A57 call    _create_tinfo
//   0xF3A5C test    al, al
//   0xF3A5E jnz     short loc_F3AD0
//   0xF3A60 mov     rax, [rsp+0A8h+var_70]
//   0xF3A65 lea     rcx, off_4B09B8
//   0xF3A6C mov     rsi, r13
//   0xF3A6F mov     rdi, rbx
//   0xF3A72 mov     [rsp+0A8h+var_60], 0
//   0xF3A7B add     rbp, rax
//   0xF3A7E movq    xmm0, rax
//   0xF3A83 mov     [rsp+0A8h+var_58], 0
//   0xF3A8C movq    xmm1, rbp
//   0xF3A91 mov     [rsp+0A8h+var_68], rcx
//   0xF3A96 mov     [rsp+0A8h+var_50], 0
//   0xF3A9F punpcklqdq xmm0, xmm1
//   0xF3AA3 mov     [rsp+0A8h+var_48], 0
//   0xF3AAC movups  [rsp+0A8h+var_40], xmm0
//   0xF3AB1 call    sub_11B060
//   0xF3AB6 mov     rdi, rbx
//   0xF3AB9 call    sub_18B740
//   0xF3ABE mov     rdi, r12
//   0xF3AC1 call    _clear_tinfo_t
//   0xF3AC6 jmp     loc_F39D8
//   0xF3ACB align 10h
//   0xF3AD0 mov     rsi, [rsp+0A8h+var_A0]
//   0xF3AD5 xor     edx, edx
//   0xF3AD7 xor     edi, edi
//   0xF3AD9 call    _get_tinfo_size
//   0xF3ADE cmp     r14d, eax
//   0xF3AE1 cmovge  eax, r14d
//   0xF3AE5 movsxd  rbp, eax
//   0xF3AE8 jmp     loc_F3A60
//   0xF3AED call    ___stack_chk_fail
//   0xF3AF2 mov     rbx, rax
//   0xF3AF5 jmp     loc_3422E
// ============================================================

void sub_F3970(/* signature unknown */)
{
    // see disassembly above
}

