// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1DF5D0
// Name:           sub_1DF5D0
// Function size:  1026 bytes (243 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1DF5D0 push    r15
//   0x1DF5D2 xor     r15d, r15d
//   0x1DF5D5 push    r14
//   0x1DF5D7 push    r13
//   0x1DF5D9 push    r12
//   0x1DF5DB push    rbp
//   0x1DF5DC mov     rbp, rdi
//   0x1DF5DF push    rbx
//   0x1DF5E0 mov     rbx, rdx
//   0x1DF5E3 sub     rsp, 0A8h
//   0x1DF5EA mov     [rsp+0D8h+var_B8], rsi
//   0x1DF5EF mov     dword ptr [rsp+0D8h+var_D8], ecx
//   0x1DF5F2 mov     r12, fs:28h
//   0x1DF5FB mov     [rsp+0D8h+var_40], r12
//   0x1DF603 mov     r12, [rsi]
//   0x1DF606 movsxd  rax, dword ptr [r12+2Ch]
//   0x1DF60B add     rax, [r12+18h]
//   0x1DF610 lea     r8, [r12+18h]
//   0x1DF615 cmp     byte ptr [r12+20h], 5
//   0x1DF61B mov     [rsp+0D8h+var_D0], rax
//   0x1DF620 jnz     short loc_1DF638
//   0x1DF622 mov     rax, [rdi]
//   0x1DF625 mov     rax, [rax+5E0h]
//   0x1DF62C mov     rax, [rax+60h]
//   0x1DF630 movzx   r15d, byte ptr [rax+91h]
//   0x1DF638 mov     rax, [rbx]
//   0x1DF63B mov     rdx, [r12+18h]
//   0x1DF640 pxor    xmm0, xmm0
//   0x1DF644 lea     rdi, [r8+10h]
//   0x1DF648 mov     r14, cs:qword_3FFAC0
//   0x1DF64F movups  [rsp+0D8h+var_A8+8], xmm0
//   0x1DF654 mov     [rsp+0D8h+var_90], 0
//   0x1DF65D mov     ecx, eax
//   0x1DF65F sub     ecx, edx
//   0x1DF661 mov     qword ptr [rsp+0D8h+var_A8], r14
//   0x1DF666 mov     [rsp+0D8h+var_C4], ecx
//   0x1DF66A jnz     loc_1DF718
//   0x1DF670 lea     r13, [rsp+0D8h+var_A8]
//   0x1DF675 mov     rsi, rdi
//   0x1DF678 mov     rdi, r13
//   0x1DF67B call    sub_30D4D0
//   0x1DF680 mov     rax, [r12]
//   0x1DF684 lea     rdi, [rbp+8]
//   0x1DF688 mov     r9, r12
//   0x1DF68B test    al, 2
//   0x1DF68D jz      loc_1DF768
//   0x1DF693 mov     rsi, r12
//   0x1DF696 mov     [rsp+0D8h+var_C0], r9
//   0x1DF69B call    sub_1DE9D0
//   0x1DF6A0 mov     r9, [rsp+0D8h+var_C0]
//   0x1DF6A5 movsxd  rax, dword ptr [rsp+0D8h+var_D8]
//   0x1DF6A9 pxor    xmm0, xmm0
//   0x1DF6AD add     rax, [rbx]
//   0x1DF6B0 mov     qword ptr [rsp+0D8h+var_88], r14
//   0x1DF6B5 mov     [rsp+0D8h+var_70], 0
//   0x1DF6BE mov     rcx, rax
//   0x1DF6C1 movups  [rsp+0D8h+var_88+8], xmm0
//   0x1DF6C6 cmp     [rsp+0D8h+var_D0], rax
//   0x1DF6CB jg      loc_1DF830
//   0x1DF6D1 lea     r14, [rsp+0D8h+var_88]
//   0x1DF6D6 xor     ebx, ebx
//   0x1DF6D8 mov     rdi, r14
//   0x1DF6DB call    sub_30D2C0
//   0x1DF6E0 mov     rdi, r13
//   0x1DF6E3 call    sub_30D2C0
//   0x1DF6E8 mov     rax, [rsp+0D8h+var_40]
//   0x1DF6F0 sub     rax, fs:28h
//   0x1DF6F9 jnz     loc_1DF9BD
//   0x1DF6FF add     rsp, 0A8h
//   0x1DF706 mov     eax, ebx
//   0x1DF708 pop     rbx
//   0x1DF709 pop     rbp
//   0x1DF70A pop     r12
//   0x1DF70C pop     r13
//   0x1DF70E pop     r14
//   0x1DF710 pop     r15
//   0x1DF712 retn
//   0x1DF713 align 8
//   0x1DF718 test    r15b, r15b
//   0x1DF71B jnz     loc_1DF7B0
//   0x1DF721 lea     r13, [rsp+0D8h+var_A8]
//   0x1DF726 mov     edx, [rsp+0D8h+var_C4]
//   0x1DF72A mov     [rsp+0D8h+var_C0], r8
//   0x1DF72F mov     rsi, r13
//   0x1DF732 mov     [rsp+0D8h+var_B0], rdi
//   0x1DF737 call    sub_30F440
//   0x1DF73C test    al, al
//   0x1DF73E mov     r8, [rsp+0D8h+var_C0]
//   0x1DF743 jz      loc_1DF930
//   0x1DF749 cmp     dword ptr [r8+10h], 1
//   0x1DF74E jz      loc_1DF940
//   0x1DF754 mov     [rsp+0D8h+var_C4], 0
//   0x1DF75C mov     r9, r12
//   0x1DF75F jmp     loc_1DF6A5
//   0x1DF764 align 8
//   0x1DF768 mov     rdx, [r12+10h]
//   0x1DF76D test    byte ptr [rdx], 2
//   0x1DF770 jz      loc_1DF8F0
//   0x1DF776 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DF77A mov     r9, rax
//   0x1DF77D mov     rax, [rax]
//   0x1DF780 test    al, 2
//   0x1DF782 jnz     loc_1DF693
//   0x1DF788 mov     rsi, r12
//   0x1DF78B cmp     rsi, [r9+10h]
//   0x1DF78F jnz     loc_1DF693
//   0x1DF795 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DF799 mov     rsi, r9
//   0x1DF79C mov     rdx, rax
//   0x1DF79F mov     rax, [rax]
//   0x1DF7A2 mov     r9, rdx
//   0x1DF7A5 test    al, 2
//   0x1DF7A7 jz      short loc_1DF78B
//   0x1DF7A9 jmp     loc_1DF693
//   0x1DF7AE align 10h
//   0x1DF7B0 lea     r13, [rsp+0D8h+var_A8]
//   0x1DF7B5 sub     edx, eax
//   0x1DF7B7 add     edx, [r8+14h]
//   0x1DF7BB mov     [rsp+0D8h+var_B0], r8
//   0x1DF7C0 mov     rsi, r13
//   0x1DF7C3 mov     [rsp+0D8h+var_C0], rdi
//   0x1DF7C8 call    sub_30F440
//   0x1DF7CD test    al, al
//   0x1DF7CF mov     rdi, [rsp+0D8h+var_C0]
//   0x1DF7D4 jz      loc_1DF675
//   0x1DF7DA movdqa  xmm2, [rsp+0D8h+var_A8]
//   0x1DF7E0 mov     r8, [rsp+0D8h+var_B0]
//   0x1DF7E5 movdqu  xmm0, xmmword ptr [rdi+10h]
//   0x1DF7EA movdqu  xmm1, xmmword ptr [r8+10h]
//   0x1DF7F0 movups  xmmword ptr [r8+10h], xmm2
//   0x1DF7F5 movdqa  xmm2, xmmword ptr [rsp+40h]
//   0x1DF7FB movaps  [rsp+0D8h+var_58], xmm0
//   0x1DF803 movups  xmmword ptr [rdi+10h], xmm2
//   0x1DF807 movaps  [rsp+0D8h+var_A8], xmm1
//   0x1DF80C movaps  xmmword ptr [rsp+40h], xmm0
//   0x1DF811 cmp     dword ptr [r8+10h], 1
//   0x1DF816 movaps  [rsp+0D8h+var_68], xmm1
//   0x1DF81B jnz     loc_1DF754
//   0x1DF821 jmp     loc_1DF940
//   0x1DF826 align 10h
//   0x1DF830 mov     eax, dword ptr [rsp+0D8h+var_D8]
//   0x1DF833 mov     edx, [rsp+0D8h+var_C4]
//   0x1DF837 mov     [rsp+0D8h+var_D0], rcx
//   0x1DF83C mov     [rsp+0D8h+var_D8], r9
//   0x1DF840 add     edx, eax
//   0x1DF842 test    r15b, r15b
//   0x1DF845 jz      loc_1DF908
//   0x1DF84B mov     eax, dword ptr [rsp+0D8h+var_A8+4]
//   0x1DF84F lea     r14, [rsp+0D8h+var_88]
//   0x1DF854 mov     rdi, r13
//   0x1DF857 mov     rsi, r14
//   0x1DF85A sub     eax, edx
//   0x1DF85C mov     edx, eax
//   0x1DF85E call    sub_30F440
//   0x1DF863 test    al, al
//   0x1DF865 jz      loc_1DF6D6
//   0x1DF86B movdqa  xmm2, [rsp+0D8h+var_88]
//   0x1DF871 movdqa  xmm1, [rsp+0D8h+var_A8]
//   0x1DF877 movdqa  xmm0, xmmword ptr [rsp+40h]
//   0x1DF87D mov     rcx, [rsp+0D8h+var_D0]
//   0x1DF882 movaps  [rsp+0D8h+var_A8], xmm2
//   0x1DF887 movdqa  xmm2, xmmword ptr [rsp+60h]
//   0x1DF88D mov     r9, [rsp+0D8h+var_D8]
//   0x1DF891 movaps  [rsp+0D8h+var_68], xmm1
//   0x1DF896 movaps  [rsp+0D8h+var_58], xmm0
//   0x1DF89E movaps  xmmword ptr [rsp+40h], xmm2
//   0x1DF8A3 movaps  [rsp+0D8h+var_88], xmm1
//   0x1DF8A8 movaps  xmmword ptr [rsp+60h], xmm0
//   0x1DF8AD cmp     dword ptr [rsp+0D8h+var_88], 1
//   0x1DF8B2 jz      loc_1DF6D6
//   0x1DF8B8 movzx   edx, byte ptr [rbx+8]
//   0x1DF8BC mov     rax, rcx
//   0x1DF8BF lea     rdi, [rbp+8]
//   0x1DF8C3 mov     r8, r14
//   0x1DF8C6 mov     rsi, r9
//   0x1DF8C9 mov     rcx, rdx
//   0x1DF8CC mov     rdx, rax
//   0x1DF8CF call    sub_1DF1E0
//   0x1DF8D4 mov     rbx, [rsp+0D8h+var_B8]
//   0x1DF8D9 mov     [rbx], rax
//   0x1DF8DC mov     ebx, 1
//   0x1DF8E1 jmp     loc_1DF6D8
//   0x1DF8E6 align 10h
//   0x1DF8F0 mov     r9, rdx
//   0x1DF8F3 mov     rdx, [rdx+8]
//   0x1DF8F7 test    byte ptr [rdx], 2
//   0x1DF8FA jnz     loc_1DF693
//   0x1DF900 jmp     short loc_1DF8F0
//   0x1DF902 align 8
//   0x1DF908 lea     r14, [rsp+0D8h+var_88]
//   0x1DF90D mov     rdi, r13
//   0x1DF910 mov     rsi, r14
//   0x1DF913 call    sub_30F440
//   0x1DF918 test    al, al
//   0x1DF91A mov     r9, [rsp+0D8h+var_D8]
//   0x1DF91E mov     rcx, [rsp+0D8h+var_D0]
//   0x1DF923 jnz     short loc_1DF8AD
//   0x1DF925 jmp     loc_1DF6D6
//   0x1DF92A align 10h
//   0x1DF930 mov     rdi, [rsp+0D8h+var_B0]
//   0x1DF935 jmp     loc_1DF675
//   0x1DF93A align 20h
//   0x1DF940 mov     rax, [r12]
//   0x1DF944 lea     rdi, [rbp+8]
//   0x1DF948 mov     r9, r12
//   0x1DF94B test    al, 2
//   0x1DF94D jz      short loc_1DF970
//   0x1DF94F mov     rsi, r12
//   0x1DF952 mov     [rsp+0D8h+var_C0], r9
//   0x1DF957 call    sub_1DE9D0
//   0x1DF95C mov     [rsp+0D8h+var_C4], 0
//   0x1DF964 jmp     loc_1DF6A0
//   0x1DF969 align 10h
//   0x1DF970 mov     rdx, [r12+10h]
//   0x1DF975 test    byte ptr [rdx], 2
//   0x1DF978 jnz     short loc_1DF990
//   0x1DF97A mov     r9, rdx
//   0x1DF97D mov     rdx, [rdx+8]
//   0x1DF981 test    byte ptr [rdx], 2
//   0x1DF984 jnz     short loc_1DF94F
//   0x1DF986 jmp     short loc_1DF97A
//   0x1DF988 align 10h
//   0x1DF990 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DF994 mov     r9, rax
//   0x1DF997 mov     rax, [rax]
//   0x1DF99A test    al, 2
//   0x1DF99C jnz     short loc_1DF94F
//   0x1DF99E mov     rsi, r12
//   0x1DF9A1 cmp     rsi, [r9+10h]
//   0x1DF9A5 jnz     short loc_1DF94F
//   0x1DF9A7 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DF9AB mov     rsi, r9
//   0x1DF9AE mov     rdx, rax
//   0x1DF9B1 mov     rax, [rax]
//   0x1DF9B4 mov     r9, rdx
//   0x1DF9B7 test    al, 2
//   0x1DF9B9 jz      short loc_1DF9A1
//   0x1DF9BB jmp     short loc_1DF94F
//   0x1DF9BD call    ___stack_chk_fail
//   0x1DF9C2 mov     rbx, rax
//   0x1DF9C5 jmp     loc_416AA
//   0x1DF9CA mov     rbx, rax
//   0x1DF9CD jmp     loc_416B2
// ============================================================

void sub_1DF5D0(/* signature unknown */)
{
    // see disassembly above
}

