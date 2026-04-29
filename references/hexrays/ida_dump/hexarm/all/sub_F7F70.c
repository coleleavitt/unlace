// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF7F70
// Name:           sub_F7F70
// Function size:  394 bytes (84 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF7F70 push    r14
//   0xF7F72 lea     rax, off_4D7670
//   0xF7F79 push    r13
//   0xF7F7B push    r12
//   0xF7F7D push    rbp
//   0xF7F7E push    rbx
//   0xF7F7F add     rsp, 0FFFFFFFFFFFFFF80h
//   0xF7F83 mov     rbx, fs:28h
//   0xF7F8C mov     [rsp+0A8h+var_30], rbx
//   0xF7F91 mov     rbx, rdi
//   0xF7F94 lea     rsi, [rsp+0A8h+var_98]
//   0xF7F99 mov     [rsp+0A8h+var_98], rax
//   0xF7F9E mov     [rsp+0A8h+var_90], 0
//   0xF7FA7 mov     [rsp+0A8h+var_88], 0
//   0xF7FB0 mov     [rsp+0A8h+var_80], 0
//   0xF7FB9 mov     [rsp+0A8h+var_78], 0
//   0xF7FC2 mov     [rsp+0A8h+var_70], 0FFFFFFFFFFFFFFFFh
//   0xF7FCB call    sub_11F420
//   0xF7FD0 cmp     [rsp+0A8h+var_70], 0FFFFFFFFFFFFFFFFh
//   0xF7FD6 jnz     short loc_F8000
//   0xF7FD8 mov     rax, [rsp+0A8h+var_30]
//   0xF7FDD sub     rax, fs:28h
//   0xF7FE6 jnz     loc_F80ED
//   0xF7FEC sub     rsp, 0FFFFFFFFFFFFFF80h
//   0xF7FF0 pop     rbx
//   0xF7FF1 pop     rbp
//   0xF7FF2 pop     r12
//   0xF7FF4 pop     r13
//   0xF7FF6 pop     r14
//   0xF7FF8 retn
//   0xF7FF9 align 20h
//   0xF8000 mov     rax, [rbx+5E0h]
//   0xF8007 lea     r12, [rsp+0A8h+var_A0]
//   0xF800C mov     [rsp+0A8h+var_A0], 0
//   0xF8015 mov     eax, [rax+50h]
//   0xF8018 lea     edx, [rax+rax*2]
//   0xF801B lea     r14d, [rax+rdx*4]
//   0xF801F mov     eax, 100h
//   0xF8024 mov     word ptr [rsp+0A8h+var_58], ax
//   0xF8029 lea     rax, aSjljFunctionCo; "SjLj_Function_Context"
//   0xF8030 movsxd  rbp, r14d
//   0xF8033 mov     [rsp+0A8h+var_60], rax
//   0xF8038 call    _get_idati
//   0xF803D lea     r13, [rsp+0A8h+var_68]
//   0xF8042 mov     edx, 3Dh ; '='
//   0xF8047 mov     esi, 3Dh ; '='
//   0xF804C mov     rdi, r12
//   0xF804F mov     rcx, r13
//   0xF8052 mov     [rsp+0A8h+var_68], rax
//   0xF8057 call    _create_tinfo
//   0xF805C test    al, al
//   0xF805E jnz     short loc_F80D0
//   0xF8060 mov     rax, [rsp+0A8h+var_70]
//   0xF8065 lea     rcx, off_4D7698
//   0xF806C mov     rsi, r13
//   0xF806F mov     rdi, rbx
//   0xF8072 mov     [rsp+0A8h+var_60], 0
//   0xF807B add     rbp, rax
//   0xF807E movq    xmm0, rax
//   0xF8083 mov     [rsp+0A8h+var_58], 0
//   0xF808C movq    xmm1, rbp
//   0xF8091 mov     [rsp+0A8h+var_68], rcx
//   0xF8096 mov     [rsp+0A8h+var_50], 0
//   0xF809F punpcklqdq xmm0, xmm1
//   0xF80A3 mov     [rsp+0A8h+var_48], 0
//   0xF80AC movups  [rsp+0A8h+var_40], xmm0
//   0xF80B1 call    sub_11F660
//   0xF80B6 mov     rdi, rbx
//   0xF80B9 call    sub_18FD40
//   0xF80BE mov     rdi, r12
//   0xF80C1 call    _clear_tinfo_t
//   0xF80C6 jmp     loc_F7FD8
//   0xF80CB align 10h
//   0xF80D0 mov     rsi, [rsp+0A8h+var_A0]
//   0xF80D5 xor     edx, edx
//   0xF80D7 xor     edi, edi
//   0xF80D9 call    _get_tinfo_size
//   0xF80DE cmp     r14d, eax
//   0xF80E1 cmovge  eax, r14d
//   0xF80E5 movsxd  rbp, eax
//   0xF80E8 jmp     loc_F8060
//   0xF80ED call    ___stack_chk_fail
//   0xF80F2 mov     rbx, rax
//   0xF80F5 jmp     loc_3726E
// ============================================================

void sub_F7F70(/* signature unknown */)
{
    // see disassembly above
}

