// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF1E70
// Name:           sub_F1E70
// Function size:  394 bytes (84 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF1E70 push    r14
//   0xF1E72 lea     rax, off_4A97F0
//   0xF1E79 push    r13
//   0xF1E7B push    r12
//   0xF1E7D push    rbp
//   0xF1E7E push    rbx
//   0xF1E7F add     rsp, 0FFFFFFFFFFFFFF80h
//   0xF1E83 mov     rbx, fs:28h
//   0xF1E8C mov     [rsp+0A8h+var_30], rbx
//   0xF1E91 mov     rbx, rdi
//   0xF1E94 lea     rsi, [rsp+0A8h+var_98]
//   0xF1E99 mov     [rsp+0A8h+var_98], rax
//   0xF1E9E mov     [rsp+0A8h+var_90], 0
//   0xF1EA7 mov     [rsp+0A8h+var_88], 0
//   0xF1EB0 mov     [rsp+0A8h+var_80], 0
//   0xF1EB9 mov     [rsp+0A8h+var_78], 0
//   0xF1EC2 mov     [rsp+0A8h+var_70], 0FFFFFFFFFFFFFFFFh
//   0xF1ECB call    sub_119320
//   0xF1ED0 cmp     [rsp+0A8h+var_70], 0FFFFFFFFFFFFFFFFh
//   0xF1ED6 jnz     short loc_F1F00
//   0xF1ED8 mov     rax, [rsp+0A8h+var_30]
//   0xF1EDD sub     rax, fs:28h
//   0xF1EE6 jnz     loc_F1FED
//   0xF1EEC sub     rsp, 0FFFFFFFFFFFFFF80h
//   0xF1EF0 pop     rbx
//   0xF1EF1 pop     rbp
//   0xF1EF2 pop     r12
//   0xF1EF4 pop     r13
//   0xF1EF6 pop     r14
//   0xF1EF8 retn
//   0xF1EF9 align 20h
//   0xF1F00 mov     rax, [rbx+5E0h]
//   0xF1F07 lea     r12, [rsp+0A8h+var_A0]
//   0xF1F0C mov     [rsp+0A8h+var_A0], 0
//   0xF1F15 mov     eax, [rax+50h]
//   0xF1F18 lea     edx, [rax+rax*2]
//   0xF1F1B lea     r14d, [rax+rdx*4]
//   0xF1F1F mov     eax, 100h
//   0xF1F24 mov     word ptr [rsp+0A8h+var_58], ax
//   0xF1F29 lea     rax, aSjljFunctionCo; "SjLj_Function_Context"
//   0xF1F30 movsxd  rbp, r14d
//   0xF1F33 mov     [rsp+0A8h+var_60], rax
//   0xF1F38 call    _get_idati
//   0xF1F3D lea     r13, [rsp+0A8h+var_68]
//   0xF1F42 mov     edx, 3Dh ; '='
//   0xF1F47 mov     esi, 3Dh ; '='
//   0xF1F4C mov     rdi, r12
//   0xF1F4F mov     rcx, r13
//   0xF1F52 mov     [rsp+0A8h+var_68], rax
//   0xF1F57 call    _create_tinfo
//   0xF1F5C test    al, al
//   0xF1F5E jnz     short loc_F1FD0
//   0xF1F60 mov     rax, [rsp+0A8h+var_70]
//   0xF1F65 lea     rcx, off_4A9818
//   0xF1F6C mov     rsi, r13
//   0xF1F6F mov     rdi, rbx
//   0xF1F72 mov     [rsp+0A8h+var_60], 0
//   0xF1F7B add     rbp, rax
//   0xF1F7E movq    xmm0, rax
//   0xF1F83 mov     [rsp+0A8h+var_58], 0
//   0xF1F8C movq    xmm1, rbp
//   0xF1F91 mov     [rsp+0A8h+var_68], rcx
//   0xF1F96 mov     [rsp+0A8h+var_50], 0
//   0xF1F9F punpcklqdq xmm0, xmm1
//   0xF1FA3 mov     [rsp+0A8h+var_48], 0
//   0xF1FAC movups  [rsp+0A8h+var_40], xmm0
//   0xF1FB1 call    sub_119560
//   0xF1FB6 mov     rdi, rbx
//   0xF1FB9 call    sub_189C40
//   0xF1FBE mov     rdi, r12
//   0xF1FC1 call    _clear_tinfo_t
//   0xF1FC6 jmp     loc_F1ED8
//   0xF1FCB align 10h
//   0xF1FD0 mov     rsi, [rsp+0A8h+var_A0]
//   0xF1FD5 xor     edx, edx
//   0xF1FD7 xor     edi, edi
//   0xF1FD9 call    _get_tinfo_size
//   0xF1FDE cmp     r14d, eax
//   0xF1FE1 cmovge  eax, r14d
//   0xF1FE5 movsxd  rbp, eax
//   0xF1FE8 jmp     loc_F1F60
//   0xF1FED call    ___stack_chk_fail
//   0xF1FF2 mov     rbx, rax
//   0xF1FF5 jmp     loc_3322E
// ============================================================

void sub_F1E70(/* signature unknown */)
{
    // see disassembly above
}

