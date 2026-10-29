// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x5C95D0
// Name:           sub_5C95D0
// Function size:  775 bytes (194 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x5C95D0 push    r15
//   0x5C95D2 movsxd  rax, edi
//   0x5C95D5 push    r14
//   0x5C95D7 push    r13
//   0x5C95D9 push    r12
//   0x5C95DB push    rbp
//   0x5C95DC push    rbx
//   0x5C95DD mov     rbx, rsi
//   0x5C95E0 sub     rsp, 68h
//   0x5C95E4 mov     [rsp+98h+var_7C], edi
//   0x5C95E8 mov     rdi, rax
//   0x5C95EB mov     r13, fs:28h
//   0x5C95F4 mov     [rsp+98h+var_40], r13
//   0x5C95F9 mov     r13, rdx
//   0x5C95FC mov     [rsp+98h+var_88], rax; __int64
//   0x5C9601 call    _switch_dbctx
//   0x5C9606 mov     rdx, [rbx]
//   0x5C9609 pxor    xmm0, xmm0
//   0x5C960D mov     r12, [rax+688h]
//   0x5C9614 mov     rax, [rbx+8]
//   0x5C9618 mov     rbp, [rdx]
//   0x5C961B shl     rax, 4
//   0x5C961F mov     rax, [rdx+rax-8]
//   0x5C9624 mov     rdi, rbp
//   0x5C9627 movups  xmmword ptr [rsp+98h+var_60], xmm0
//   0x5C962C mov     [rsp+98h+ptr], 0; __int64
//   0x5C9635 mov     [rsp+98h+var_90], rax; void *
//   0x5C963A mov     qword ptr [rsp+98h+var_50], 0
//   0x5C9643 mov     [rsp+98h+var_48], 0FFFFFFFFh
//   0x5C964B call    _get_fchunk
//   0x5C9650 mov     r14, rax
//   0x5C9653 test    rax, rax
//   0x5C9656 jz      loc_5C98B2
//   0x5C965C lea     rax, [rsp+98h+ptr]
//   0x5C9661 lea     rbp, [r12+6A8h]
//   0x5C9669 mov     qword ptr [rsp+98h+var_98], rax; int
//   0x5C966D test    r14, r14
//   0x5C9670 jz      loc_5C9706
//   0x5C9676 nop     word ptr [rax+rax+00000000h]
//   0x5C9680 mov     rax, [rsp+98h+var_90]
//   0x5C9685 cmp     [r14], rax
//   0x5C9688 jnb     short loc_5C9706
//   0x5C968A xor     edx, edx
//   0x5C968C mov     rsi, r14
//   0x5C968F mov     rdi, rbx
//   0x5C9692 call    _rangeset_t_has_common
//   0x5C9697 test    al, al
//   0x5C9699 jz      short loc_5C96F2
//   0x5C969B test    byte ptr [r14+11h], 80h
//   0x5C96A0 jz      short loc_5C96F2
//   0x5C96A2 mov     ecx, [r14+20h]
//   0x5C96A6 test    ecx, ecx
//   0x5C96A8 jle     short loc_5C96F2
//   0x5C96AA xor     r15d, r15d
//   0x5C96AD nop     dword ptr [rax]
//   0x5C96B0 mov     rax, [r14+28h]
//   0x5C96B4 mov     rdi, rbp
//   0x5C96B7 mov     rsi, [rax+r15*8]
//   0x5C96BB call    sub_505D70
//   0x5C96C0 test    rax, rax
//   0x5C96C3 jz      short loc_5C96E8
//   0x5C96C5 test    byte ptr [rax+11h], 80h
//   0x5C96C9 jz      short loc_5C96DC
//   0x5C96CB mov     rsi, [rax+18h]
//   0x5C96CF mov     rdi, rbp
//   0x5C96D2 call    sub_505D70
//   0x5C96D7 test    rax, rax
//   0x5C96DA jz      short loc_5C96E8
//   0x5C96DC mov     rdi, qword ptr [rsp+98h+var_98]; int
//   0x5C96E0 mov     rsi, rax; int
//   0x5C96E3 call    _rangeset_t_add
//   0x5C96E8 add     r15, 1
//   0x5C96EC cmp     [r14+20h], r15d
//   0x5C96F0 jg      short loc_5C96B0
//   0x5C96F2 mov     rdi, [r14]
//   0x5C96F5 call    _get_next_fchunk
//   0x5C96FA mov     r14, rax
//   0x5C96FD test    r14, r14
//   0x5C9700 jnz     loc_5C9680
//   0x5C9706 lea     rbp, [rsp+98h+ptr]
//   0x5C970B mov     rdi, rbx
//   0x5C970E mov     rsi, rbp
//   0x5C9711 call    _rangeset_t_add2
//   0x5C9716 mov     rdi, [rsp+98h+ptr]; ptr
//   0x5C971B test    rdi, rdi
//   0x5C971E jz      short loc_5C972E
//   0x5C9720 mov     qword ptr [rsp+98h+var_60], 0
//   0x5C9729 call    _qfree
//   0x5C972E mov     rax, [rbx+8]
//   0x5C9732 lea     r14, [rsp+98h+var_78]
//   0x5C9737 test    rax, rax
//   0x5C973A jnz     loc_5C9812
//   0x5C9740 jmp     loc_5C9860
//   0x5C9745 align 8
//   0x5C9748 pxor    xmm1, xmm1
//   0x5C974C mov     [rsp+98h+var_48], 0FFFFFFFFh; int
//   0x5C9754 mov     [rsp+98h+ptr], 0; __int64
//   0x5C975D mov     qword ptr [rsp+98h+var_50], 0; int
//   0x5C9766 movups  xmmword ptr [rsp+98h+var_60], xmm1
//   0x5C976B test    byte ptr [r15+11h], 80h
//   0x5C9770 jz      short loc_5C97AF
//   0x5C9772 mov     rsi, [r15+18h]
//   0x5C9776 lea     rdi, [r12+6A8h]
//   0x5C977E mov     qword ptr [rsp+98h+var_98], rdi; int
//   0x5C9782 call    sub_505D70
//   0x5C9787 test    rax, rax
//   0x5C978A mov     rdi, qword ptr [rsp+98h+var_98]
//   0x5C978E jz      loc_5C9888
//   0x5C9794 test    byte ptr [rax+11h], 80h
//   0x5C9798 jz      short loc_5C97AC
//   0x5C979A mov     rsi, [rax+18h]
//   0x5C979E call    sub_505D70
//   0x5C97A3 test    rax, rax
//   0x5C97A6 jz      loc_5C9888
//   0x5C97AC mov     r15, rax
//   0x5C97AF mov     rdx, r15
//   0x5C97B2 mov     rsi, rbp
//   0x5C97B5 mov     rdi, r12
//   0x5C97B8 call    sub_5C94E0
//   0x5C97BD mov     rax, [r13+0]
//   0x5C97C1 mov     esi, [rsp+98h+var_7C]
//   0x5C97C5 mov     rcx, r15
//   0x5C97C8 mov     rdx, r12
//   0x5C97CB mov     rdi, r13
//   0x5C97CE call    qword ptr [rax]
//   0x5C97D0 mov     rdi, [rsp+98h+var_88]
//   0x5C97D5 mov     r15d, eax
//   0x5C97D8 call    _switch_dbctx
//   0x5C97DD test    r15d, r15d
//   0x5C97E0 jnz     loc_5C9898
//   0x5C97E6 mov     rsi, rbp
//   0x5C97E9 mov     rdi, rbx; int
//   0x5C97EC call    _rangeset_t_sub2
//   0x5C97F1 mov     rdi, [rsp+98h+ptr]; ptr
//   0x5C97F6 test    rdi, rdi
//   0x5C97F9 jz      short loc_5C9809
//   0x5C97FB mov     qword ptr [rsp+98h+var_60], 0; int
//   0x5C9804 call    _qfree
//   0x5C9809 mov     rax, [rbx+8]
//   0x5C980D test    rax, rax
//   0x5C9810 jz      short loc_5C9860
//   0x5C9812 shl     rax, 4
//   0x5C9816 add     rax, [rbx]
//   0x5C9819 mov     rsi, r14
//   0x5C981C mov     rdi, r12
//   0x5C981F movdqu  xmm0, xmmword ptr [rax-10h]
//   0x5C9824 movaps  xmmword ptr [rsp+98h+var_78], xmm0; int
//   0x5C9829 call    sub_5C3FE0
//   0x5C982E mov     r15, rax
//   0x5C9831 test    rax, rax
//   0x5C9834 jz      short loc_5C9860
//   0x5C9836 mov     rax, [rax+8]
//   0x5C983A cmp     qword ptr [rsp+98h+var_78], rax
//   0x5C983F jb      loc_5C9748
//   0x5C9845 mov     rsi, r14; int
//   0x5C9848 mov     rdi, rbx; int
//   0x5C984B call    _rangeset_t_sub
//   0x5C9850 mov     rax, [rbx+8]
//   0x5C9854 test    rax, rax
//   0x5C9857 jnz     short loc_5C9812
//   0x5C9859 nop     dword ptr [rax+00000000h]
//   0x5C9860 xor     r15d, r15d
//   0x5C9863 mov     rax, [rsp+98h+var_40]
//   0x5C9868 sub     rax, fs:28h
//   0x5C9871 jnz     short loc_5C98C2
//   0x5C9873 add     rsp, 68h
//   0x5C9877 mov     eax, r15d
//   0x5C987A pop     rbx
//   0x5C987B pop     rbp
//   0x5C987C pop     r12
//   0x5C987E pop     r13
//   0x5C9880 pop     r14
//   0x5C9882 pop     r15
//   0x5C9884 retn
//   0x5C9885 align 8
//   0x5C9888 mov     rsi, r15; int
//   0x5C988B mov     rdi, rbp; int
//   0x5C988E call    _rangeset_t_add
//   0x5C9893 jmp     loc_5C97AF
//   0x5C9898 mov     rdi, [rsp+98h+ptr]; ptr
//   0x5C989D test    rdi, rdi
//   0x5C98A0 jz      short loc_5C9863
//   0x5C98A2 mov     qword ptr [rsp+98h+var_60], 0
//   0x5C98AB call    _qfree
//   0x5C98B0 jmp     short loc_5C9863
//   0x5C98B2 mov     rdi, rbp
//   0x5C98B5 call    _get_next_fchunk
//   0x5C98BA mov     r14, rax
//   0x5C98BD jmp     loc_5C965C
//   0x5C98C2 call    ___stack_chk_fail
//   0x5C98C7 mov     rbx, rax
//   0x5C98CA jmp     loc_2C88D5
//   0x5C98CF mov     rbx, rax
//   0x5C98D2 jmp     loc_2C8903
// ============================================================

void sub_5C95D0(/* signature unknown */)
{
    // see disassembly above
}

