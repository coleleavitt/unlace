// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x163610
// Name:           sub_163610
// Function size:  428 bytes (109 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x163610 push    r15
//   0x163612 mov     r15d, 0FFFFFFFFh
//   0x163618 push    r14
//   0x16361A push    r13
//   0x16361C push    r12
//   0x16361E mov     r12, rsi
//   0x163621 push    rbp
//   0x163622 mov     rbp, rdi
//   0x163625 push    rbx
//   0x163626 xor     ebx, ebx
//   0x163628 sub     rsp, 68h
//   0x16362C mov     rax, [rdi+1E0h]
//   0x163633 mov     r13, fs:28h
//   0x16363C mov     [rsp+98h+var_40], r13
//   0x163641 mov     r13d, edx
//   0x163644 mov     rax, [rax+70h]
//   0x163648 mov     [rsp+98h+var_90], rax
//   0x16364D mov     eax, r13d
//   0x163650 and     eax, 4
//   0x163653 mov     [rsp+98h+var_94], eax
//   0x163657 jmp     loc_1636F9
//   0x16365C align 20h
//   0x163660 test    r15d, r15d
//   0x163663 jz      loc_163740
//   0x163669 sub     rsp, 8
//   0x16366D mov     rcx, r12
//   0x163670 mov     rdx, rbp
//   0x163673 xor     r8d, r8d
//   0x163676 mov     [rsp+0A0h+var_80], 0FFFFFFFFFFFFFFFFh
//   0x16367F mov     rdi, r12
//   0x163682 push    r13
//   0x163684 mov     rsi, [rsp+0A8h+var_90]
//   0x163689 lea     r9, [rsp+0A8h+var_80]
//   0x16368E call    sub_157A70
//   0x163693 mov     r15d, eax
//   0x163696 mov     rax, [rsp+0A8h+var_80]
//   0x16369B pop     rdx
//   0x16369C pop     rcx
//   0x16369D cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x1636A1 jz      short loc_1636EA
//   0x1636A3 mov     rdx, [rbp+40h]
//   0x1636A7 lea     rsi, [rsp+98h+var_78]
//   0x1636AC mov     rdi, r12
//   0x1636AF mov     [rsp+98h+var_68], rbp
//   0x1636B4 lea     rcx, off_4BE4D0
//   0x1636BB mov     [rsp+98h+var_60], r12
//   0x1636C0 mov     [rsp+98h+var_70], rdx
//   0x1636C5 mov     [rsp+98h+var_58], 0
//   0x1636CE mov     [rsp+98h+var_78], rcx
//   0x1636D3 mov     [rsp+98h+var_50], rax
//   0x1636D8 mov     [rsp+98h+var_48], 0
//   0x1636E0 call    sub_11B560
//   0x1636E5 add     r14d, [rsp+98h+var_48]
//   0x1636EA mov     eax, r14d
//   0x1636ED or      eax, r15d
//   0x1636F0 jz      short loc_163740
//   0x1636F2 lea     r10d, [r14+r15]
//   0x1636F6 add     ebx, r10d
//   0x1636F9 mov     rsi, r12
//   0x1636FC mov     edx, r13d
//   0x1636FF mov     rdi, rbp
//   0x163702 xor     r14d, r14d
//   0x163705 call    sub_155DC0
//   0x16370A mov     esi, [rsp+98h+var_94]
//   0x16370E movzx   eax, al
//   0x163711 add     ebx, eax
//   0x163713 test    esi, esi
//   0x163715 jz      loc_163660
//   0x16371B mov     rsi, r12
//   0x16371E mov     rdi, rbp
//   0x163721 call    sub_AF4D0
//   0x163726 movzx   r14d, al
//   0x16372A or      r15d, r14d
//   0x16372D test    r15d, r15d
//   0x163730 jnz     loc_163669
//   0x163736 nop     word ptr [rax+rax+00000000h]
//   0x163740 mov     rax, [rbp+1E0h]
//   0x163747 mov     r14, [rax+428h]
//   0x16374E mov     rax, [rax+430h]
//   0x163755 shl     rax, 3
//   0x163759 jz      short loc_163796
//   0x16375B nop     dword ptr [rax+rax+00h]
//   0x163760 mov     rdi, [r14]
//   0x163763 mov     rdx, r12
//   0x163766 mov     ecx, r13d
//   0x163769 mov     rsi, rbp
//   0x16376C add     r14, 8
//   0x163770 mov     rax, [rdi]
//   0x163773 call    qword ptr [rax+10h]
//   0x163776 add     ebx, eax
//   0x163778 mov     rax, [rbp+1E0h]
//   0x16377F mov     rdx, [rax+430h]
//   0x163786 mov     rax, [rax+428h]
//   0x16378D lea     rax, [rax+rdx*8]
//   0x163791 cmp     r14, rax
//   0x163794 jnz     short loc_163760
//   0x163796 mov     rax, [rsp+98h+var_40]
//   0x16379B sub     rax, fs:28h
//   0x1637A4 jnz     short loc_1637B7
//   0x1637A6 add     rsp, 68h
//   0x1637AA mov     eax, ebx
//   0x1637AC pop     rbx
//   0x1637AD pop     rbp
//   0x1637AE pop     r12
//   0x1637B0 pop     r13
//   0x1637B2 pop     r14
//   0x1637B4 pop     r15
//   0x1637B6 retn
//   0x1637B7 call    ___stack_chk_fail
// ============================================================

void sub_163610(/* signature unknown */)
{
    // see disassembly above
}

