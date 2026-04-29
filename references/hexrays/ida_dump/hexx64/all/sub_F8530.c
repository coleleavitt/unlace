// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF8530
// Name:           sub_F8530
// Function size:  394 bytes (84 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF8530 push    r14
//   0xF8532 lea     rax, off_4DCFB0
//   0xF8539 push    r13
//   0xF853B push    r12
//   0xF853D push    rbp
//   0xF853E push    rbx
//   0xF853F add     rsp, 0FFFFFFFFFFFFFF80h
//   0xF8543 mov     rbx, fs:28h
//   0xF854C mov     [rsp+0A8h+var_30], rbx
//   0xF8551 mov     rbx, rdi
//   0xF8554 lea     rsi, [rsp+0A8h+var_98]
//   0xF8559 mov     [rsp+0A8h+var_98], rax
//   0xF855E mov     [rsp+0A8h+var_90], 0
//   0xF8567 mov     [rsp+0A8h+var_88], 0
//   0xF8570 mov     [rsp+0A8h+var_80], 0
//   0xF8579 mov     [rsp+0A8h+var_78], 0
//   0xF8582 mov     [rsp+0A8h+var_70], 0FFFFFFFFFFFFFFFFh
//   0xF858B call    sub_11F9E0
//   0xF8590 cmp     [rsp+0A8h+var_70], 0FFFFFFFFFFFFFFFFh
//   0xF8596 jnz     short loc_F85C0
//   0xF8598 mov     rax, [rsp+0A8h+var_30]
//   0xF859D sub     rax, fs:28h
//   0xF85A6 jnz     loc_F86AD
//   0xF85AC sub     rsp, 0FFFFFFFFFFFFFF80h
//   0xF85B0 pop     rbx
//   0xF85B1 pop     rbp
//   0xF85B2 pop     r12
//   0xF85B4 pop     r13
//   0xF85B6 pop     r14
//   0xF85B8 retn
//   0xF85B9 align 20h
//   0xF85C0 mov     rax, [rbx+5E0h]
//   0xF85C7 lea     r12, [rsp+0A8h+var_A0]
//   0xF85CC mov     [rsp+0A8h+var_A0], 0
//   0xF85D5 mov     eax, [rax+50h]
//   0xF85D8 lea     edx, [rax+rax*2]
//   0xF85DB lea     r14d, [rax+rdx*4]
//   0xF85DF mov     eax, 100h
//   0xF85E4 mov     word ptr [rsp+0A8h+var_58], ax
//   0xF85E9 lea     rax, aSjljFunctionCo; "SjLj_Function_Context"
//   0xF85F0 movsxd  rbp, r14d
//   0xF85F3 mov     [rsp+0A8h+var_60], rax
//   0xF85F8 call    _get_idati
//   0xF85FD lea     r13, [rsp+0A8h+var_68]
//   0xF8602 mov     edx, 3Dh ; '='
//   0xF8607 mov     esi, 3Dh ; '='
//   0xF860C mov     rdi, r12
//   0xF860F mov     rcx, r13
//   0xF8612 mov     [rsp+0A8h+var_68], rax
//   0xF8617 call    _create_tinfo
//   0xF861C test    al, al
//   0xF861E jnz     short loc_F8690
//   0xF8620 mov     rax, [rsp+0A8h+var_70]
//   0xF8625 lea     rcx, off_4DCFD8
//   0xF862C mov     rsi, r13
//   0xF862F mov     rdi, rbx
//   0xF8632 mov     [rsp+0A8h+var_60], 0
//   0xF863B add     rbp, rax
//   0xF863E movq    xmm0, rax
//   0xF8643 mov     [rsp+0A8h+var_58], 0
//   0xF864C movq    xmm1, rbp
//   0xF8651 mov     [rsp+0A8h+var_68], rcx
//   0xF8656 mov     [rsp+0A8h+var_50], 0
//   0xF865F punpcklqdq xmm0, xmm1
//   0xF8663 mov     [rsp+0A8h+var_48], 0
//   0xF866C movups  [rsp+0A8h+var_40], xmm0
//   0xF8671 call    sub_11FC20
//   0xF8676 mov     rdi, rbx
//   0xF8679 call    sub_190300
//   0xF867E mov     rdi, r12
//   0xF8681 call    _clear_tinfo_t
//   0xF8686 jmp     loc_F8598
//   0xF868B align 10h
//   0xF8690 mov     rsi, [rsp+0A8h+var_A0]
//   0xF8695 xor     edx, edx
//   0xF8697 xor     edi, edi
//   0xF8699 call    _get_tinfo_size
//   0xF869E cmp     r14d, eax
//   0xF86A1 cmovge  eax, r14d
//   0xF86A5 movsxd  rbp, eax
//   0xF86A8 jmp     loc_F8620
//   0xF86AD call    ___stack_chk_fail
//   0xF86B2 mov     rbx, rax
//   0xF86B5 jmp     loc_353AE
// ============================================================

void sub_F8530(/* signature unknown */)
{
    // see disassembly above
}

