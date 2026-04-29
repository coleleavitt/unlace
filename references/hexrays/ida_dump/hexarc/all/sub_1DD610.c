// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1DD610
// Name:           sub_1DD610
// Function size:  1026 bytes (243 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1DD610 push    r15
//   0x1DD612 xor     r15d, r15d
//   0x1DD615 push    r14
//   0x1DD617 push    r13
//   0x1DD619 push    r12
//   0x1DD61B push    rbp
//   0x1DD61C mov     rbp, rdi
//   0x1DD61F push    rbx
//   0x1DD620 mov     rbx, rdx
//   0x1DD623 sub     rsp, 0A8h
//   0x1DD62A mov     [rsp+0D8h+var_B8], rsi
//   0x1DD62F mov     dword ptr [rsp+0D8h+var_D8], ecx
//   0x1DD632 mov     r12, fs:28h
//   0x1DD63B mov     [rsp+0D8h+var_40], r12
//   0x1DD643 mov     r12, [rsi]
//   0x1DD646 movsxd  rax, dword ptr [r12+2Ch]
//   0x1DD64B add     rax, [r12+18h]
//   0x1DD650 lea     r8, [r12+18h]
//   0x1DD655 cmp     byte ptr [r12+20h], 5
//   0x1DD65B mov     [rsp+0D8h+var_D0], rax
//   0x1DD660 jnz     short loc_1DD678
//   0x1DD662 mov     rax, [rdi]
//   0x1DD665 mov     rax, [rax+5E0h]
//   0x1DD66C mov     rax, [rax+60h]
//   0x1DD670 movzx   r15d, byte ptr [rax+91h]
//   0x1DD678 mov     rax, [rbx]
//   0x1DD67B mov     rdx, [r12+18h]
//   0x1DD680 pxor    xmm0, xmm0
//   0x1DD684 lea     rdi, [r8+10h]
//   0x1DD688 mov     r14, cs:qword_3F9A58
//   0x1DD68F movups  [rsp+0D8h+var_A8+8], xmm0
//   0x1DD694 mov     [rsp+0D8h+var_90], 0
//   0x1DD69D mov     ecx, eax
//   0x1DD69F sub     ecx, edx
//   0x1DD6A1 mov     qword ptr [rsp+0D8h+var_A8], r14
//   0x1DD6A6 mov     [rsp+0D8h+var_C4], ecx
//   0x1DD6AA jnz     loc_1DD758
//   0x1DD6B0 lea     r13, [rsp+0D8h+var_A8]
//   0x1DD6B5 mov     rsi, rdi
//   0x1DD6B8 mov     rdi, r13
//   0x1DD6BB call    sub_30BA10
//   0x1DD6C0 mov     rax, [r12]
//   0x1DD6C4 lea     rdi, [rbp+8]
//   0x1DD6C8 mov     r9, r12
//   0x1DD6CB test    al, 2
//   0x1DD6CD jz      loc_1DD7A8
//   0x1DD6D3 mov     rsi, r12
//   0x1DD6D6 mov     [rsp+0D8h+var_C0], r9
//   0x1DD6DB call    sub_1DCA10
//   0x1DD6E0 mov     r9, [rsp+0D8h+var_C0]
//   0x1DD6E5 movsxd  rax, dword ptr [rsp+0D8h+var_D8]
//   0x1DD6E9 pxor    xmm0, xmm0
//   0x1DD6ED add     rax, [rbx]
//   0x1DD6F0 mov     qword ptr [rsp+0D8h+var_88], r14
//   0x1DD6F5 mov     [rsp+0D8h+var_70], 0
//   0x1DD6FE mov     rcx, rax
//   0x1DD701 movups  [rsp+0D8h+var_88+8], xmm0
//   0x1DD706 cmp     [rsp+0D8h+var_D0], rax
//   0x1DD70B jg      loc_1DD870
//   0x1DD711 lea     r14, [rsp+0D8h+var_88]
//   0x1DD716 xor     ebx, ebx
//   0x1DD718 mov     rdi, r14
//   0x1DD71B call    sub_30B800
//   0x1DD720 mov     rdi, r13
//   0x1DD723 call    sub_30B800
//   0x1DD728 mov     rax, [rsp+0D8h+var_40]
//   0x1DD730 sub     rax, fs:28h
//   0x1DD739 jnz     loc_1DD9FD
//   0x1DD73F add     rsp, 0A8h
//   0x1DD746 mov     eax, ebx
//   0x1DD748 pop     rbx
//   0x1DD749 pop     rbp
//   0x1DD74A pop     r12
//   0x1DD74C pop     r13
//   0x1DD74E pop     r14
//   0x1DD750 pop     r15
//   0x1DD752 retn
//   0x1DD753 align 8
//   0x1DD758 test    r15b, r15b
//   0x1DD75B jnz     loc_1DD7F0
//   0x1DD761 lea     r13, [rsp+0D8h+var_A8]
//   0x1DD766 mov     edx, [rsp+0D8h+var_C4]
//   0x1DD76A mov     [rsp+0D8h+var_C0], r8
//   0x1DD76F mov     rsi, r13
//   0x1DD772 mov     [rsp+0D8h+var_B0], rdi
//   0x1DD777 call    sub_30D980
//   0x1DD77C test    al, al
//   0x1DD77E mov     r8, [rsp+0D8h+var_C0]
//   0x1DD783 jz      loc_1DD970
//   0x1DD789 cmp     dword ptr [r8+10h], 1
//   0x1DD78E jz      loc_1DD980
//   0x1DD794 mov     [rsp+0D8h+var_C4], 0
//   0x1DD79C mov     r9, r12
//   0x1DD79F jmp     loc_1DD6E5
//   0x1DD7A4 align 8
//   0x1DD7A8 mov     rdx, [r12+10h]
//   0x1DD7AD test    byte ptr [rdx], 2
//   0x1DD7B0 jz      loc_1DD930
//   0x1DD7B6 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DD7BA mov     r9, rax
//   0x1DD7BD mov     rax, [rax]
//   0x1DD7C0 test    al, 2
//   0x1DD7C2 jnz     loc_1DD6D3
//   0x1DD7C8 mov     rsi, r12
//   0x1DD7CB cmp     rsi, [r9+10h]
//   0x1DD7CF jnz     loc_1DD6D3
//   0x1DD7D5 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DD7D9 mov     rsi, r9
//   0x1DD7DC mov     rdx, rax
//   0x1DD7DF mov     rax, [rax]
//   0x1DD7E2 mov     r9, rdx
//   0x1DD7E5 test    al, 2
//   0x1DD7E7 jz      short loc_1DD7CB
//   0x1DD7E9 jmp     loc_1DD6D3
//   0x1DD7EE align 10h
//   0x1DD7F0 lea     r13, [rsp+0D8h+var_A8]
//   0x1DD7F5 sub     edx, eax
//   0x1DD7F7 add     edx, [r8+14h]
//   0x1DD7FB mov     [rsp+0D8h+var_B0], r8
//   0x1DD800 mov     rsi, r13
//   0x1DD803 mov     [rsp+0D8h+var_C0], rdi
//   0x1DD808 call    sub_30D980
//   0x1DD80D test    al, al
//   0x1DD80F mov     rdi, [rsp+0D8h+var_C0]
//   0x1DD814 jz      loc_1DD6B5
//   0x1DD81A movdqa  xmm2, [rsp+0D8h+var_A8]
//   0x1DD820 mov     r8, [rsp+0D8h+var_B0]
//   0x1DD825 movdqu  xmm0, xmmword ptr [rdi+10h]
//   0x1DD82A movdqu  xmm1, xmmword ptr [r8+10h]
//   0x1DD830 movups  xmmword ptr [r8+10h], xmm2
//   0x1DD835 movdqa  xmm2, xmmword ptr [rsp+40h]
//   0x1DD83B movaps  [rsp+0D8h+var_58], xmm0
//   0x1DD843 movups  xmmword ptr [rdi+10h], xmm2
//   0x1DD847 movaps  [rsp+0D8h+var_A8], xmm1
//   0x1DD84C movaps  xmmword ptr [rsp+40h], xmm0
//   0x1DD851 cmp     dword ptr [r8+10h], 1
//   0x1DD856 movaps  [rsp+0D8h+var_68], xmm1
//   0x1DD85B jnz     loc_1DD794
//   0x1DD861 jmp     loc_1DD980
//   0x1DD866 align 10h
//   0x1DD870 mov     eax, dword ptr [rsp+0D8h+var_D8]
//   0x1DD873 mov     edx, [rsp+0D8h+var_C4]
//   0x1DD877 mov     [rsp+0D8h+var_D0], rcx
//   0x1DD87C mov     [rsp+0D8h+var_D8], r9
//   0x1DD880 add     edx, eax
//   0x1DD882 test    r15b, r15b
//   0x1DD885 jz      loc_1DD948
//   0x1DD88B mov     eax, dword ptr [rsp+0D8h+var_A8+4]
//   0x1DD88F lea     r14, [rsp+0D8h+var_88]
//   0x1DD894 mov     rdi, r13
//   0x1DD897 mov     rsi, r14
//   0x1DD89A sub     eax, edx
//   0x1DD89C mov     edx, eax
//   0x1DD89E call    sub_30D980
//   0x1DD8A3 test    al, al
//   0x1DD8A5 jz      loc_1DD716
//   0x1DD8AB movdqa  xmm2, [rsp+0D8h+var_88]
//   0x1DD8B1 movdqa  xmm1, [rsp+0D8h+var_A8]
//   0x1DD8B7 movdqa  xmm0, xmmword ptr [rsp+40h]
//   0x1DD8BD mov     rcx, [rsp+0D8h+var_D0]
//   0x1DD8C2 movaps  [rsp+0D8h+var_A8], xmm2
//   0x1DD8C7 movdqa  xmm2, xmmword ptr [rsp+60h]
//   0x1DD8CD mov     r9, [rsp+0D8h+var_D8]
//   0x1DD8D1 movaps  [rsp+0D8h+var_68], xmm1
//   0x1DD8D6 movaps  [rsp+0D8h+var_58], xmm0
//   0x1DD8DE movaps  xmmword ptr [rsp+40h], xmm2
//   0x1DD8E3 movaps  [rsp+0D8h+var_88], xmm1
//   0x1DD8E8 movaps  xmmword ptr [rsp+60h], xmm0
//   0x1DD8ED cmp     dword ptr [rsp+0D8h+var_88], 1
//   0x1DD8F2 jz      loc_1DD716
//   0x1DD8F8 movzx   edx, byte ptr [rbx+8]
//   0x1DD8FC mov     rax, rcx
//   0x1DD8FF lea     rdi, [rbp+8]
//   0x1DD903 mov     r8, r14
//   0x1DD906 mov     rsi, r9
//   0x1DD909 mov     rcx, rdx
//   0x1DD90C mov     rdx, rax
//   0x1DD90F call    sub_1DD220
//   0x1DD914 mov     rbx, [rsp+0D8h+var_B8]
//   0x1DD919 mov     [rbx], rax
//   0x1DD91C mov     ebx, 1
//   0x1DD921 jmp     loc_1DD718
//   0x1DD926 align 10h
//   0x1DD930 mov     r9, rdx
//   0x1DD933 mov     rdx, [rdx+8]
//   0x1DD937 test    byte ptr [rdx], 2
//   0x1DD93A jnz     loc_1DD6D3
//   0x1DD940 jmp     short loc_1DD930
//   0x1DD942 align 8
//   0x1DD948 lea     r14, [rsp+0D8h+var_88]
//   0x1DD94D mov     rdi, r13
//   0x1DD950 mov     rsi, r14
//   0x1DD953 call    sub_30D980
//   0x1DD958 test    al, al
//   0x1DD95A mov     r9, [rsp+0D8h+var_D8]
//   0x1DD95E mov     rcx, [rsp+0D8h+var_D0]
//   0x1DD963 jnz     short loc_1DD8ED
//   0x1DD965 jmp     loc_1DD716
//   0x1DD96A align 10h
//   0x1DD970 mov     rdi, [rsp+0D8h+var_B0]
//   0x1DD975 jmp     loc_1DD6B5
//   0x1DD97A align 20h
//   0x1DD980 mov     rax, [r12]
//   0x1DD984 lea     rdi, [rbp+8]
//   0x1DD988 mov     r9, r12
//   0x1DD98B test    al, 2
//   0x1DD98D jz      short loc_1DD9B0
//   0x1DD98F mov     rsi, r12
//   0x1DD992 mov     [rsp+0D8h+var_C0], r9
//   0x1DD997 call    sub_1DCA10
//   0x1DD99C mov     [rsp+0D8h+var_C4], 0
//   0x1DD9A4 jmp     loc_1DD6E0
//   0x1DD9A9 align 10h
//   0x1DD9B0 mov     rdx, [r12+10h]
//   0x1DD9B5 test    byte ptr [rdx], 2
//   0x1DD9B8 jnz     short loc_1DD9D0
//   0x1DD9BA mov     r9, rdx
//   0x1DD9BD mov     rdx, [rdx+8]
//   0x1DD9C1 test    byte ptr [rdx], 2
//   0x1DD9C4 jnz     short loc_1DD98F
//   0x1DD9C6 jmp     short loc_1DD9BA
//   0x1DD9C8 align 10h
//   0x1DD9D0 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DD9D4 mov     r9, rax
//   0x1DD9D7 mov     rax, [rax]
//   0x1DD9DA test    al, 2
//   0x1DD9DC jnz     short loc_1DD98F
//   0x1DD9DE mov     rsi, r12
//   0x1DD9E1 cmp     rsi, [r9+10h]
//   0x1DD9E5 jnz     short loc_1DD98F
//   0x1DD9E7 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DD9EB mov     rsi, r9
//   0x1DD9EE mov     rdx, rax
//   0x1DD9F1 mov     rax, [rax]
//   0x1DD9F4 mov     r9, rdx
//   0x1DD9F7 test    al, 2
//   0x1DD9F9 jz      short loc_1DD9E1
//   0x1DD9FB jmp     short loc_1DD98F
//   0x1DD9FD call    ___stack_chk_fail
//   0x1DDA02 mov     rbx, rax
//   0x1DDA05 jmp     loc_40630
//   0x1DDA0A mov     rbx, rax
//   0x1DDA0D jmp     loc_40638
// ============================================================

void sub_1DD610(/* signature unknown */)
{
    // see disassembly above
}

