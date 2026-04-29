// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1D9900
// Name:           sub_1D9900
// Function size:  2637 bytes (598 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1D9900 push    r15
//   0x1D9902 push    r14
//   0x1D9904 push    r13
//   0x1D9906 push    r12
//   0x1D9908 push    rbp
//   0x1D9909 push    rbx
//   0x1D990A sub     rsp, 0C8h
//   0x1D9911 mov     [rsp+0F8h+var_E0], rsi
//   0x1D9916 mov     rax, fs:28h
//   0x1D991F mov     [rsp+0F8h+var_40], rax
//   0x1D9927 xor     eax, eax
//   0x1D9929 movzx   eax, byte ptr [rdi+18h]
//   0x1D992D cmp     al, [rsi+18h]
//   0x1D9930 jnz     loc_1D9B30
//   0x1D9936 test    al, al
//   0x1D9938 jnz     loc_1D9B32
//   0x1D993E mov     rax, [rdi+8]
//   0x1D9942 mov     r13, rdi
//   0x1D9945 mov     rdi, [rsi+8]
//   0x1D9949 mov     rcx, rax
//   0x1D994C mov     [rsp+0F8h+var_E8], rdi
//   0x1D9951 mov     rdx, rdi
//   0x1D9954 test    rax, rax
//   0x1D9957 jz      loc_1D9B90
//   0x1D995D cmp     qword ptr [r13+10h], 0
//   0x1D9962 jnz     loc_1D9B60
//   0x1D9968 mov     rcx, [rsp+0F8h+var_E8]
//   0x1D996D mov     rbx, rax
//   0x1D9970 test    rcx, rcx
//   0x1D9973 jz      short loc_1D9985
//   0x1D9975 mov     rdx, [rsp+0F8h+var_E0]
//   0x1D997A cmp     qword ptr [rdx+10h], 0
//   0x1D997F jnz     loc_1D9BB0
//   0x1D9985 lea     rcx, [rax+18h]
//   0x1D9989 cmp     rax, rbx
//   0x1D998C jz      loc_1DA283
//   0x1D9992 cmp     dword ptr [rcx+10h], 8
//   0x1D9996 jnz     loc_1D9B30
//   0x1D999C mov     rdx, [rax]
//   0x1D999F test    dl, 2
//   0x1D99A2 jnz     short loc_1D9989
//   0x1D99A4 mov     rcx, [rax+10h]
//   0x1D99A8 test    byte ptr [rcx], 2
//   0x1D99AB jz      loc_1D9BC0
//   0x1D99B1 and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1D99B5 mov     rcx, [rdx]
//   0x1D99B8 test    cl, 2
//   0x1D99BB jz      loc_1D9BE3
//   0x1D99C1 mov     rax, rdx
//   0x1D99C4 jmp     short loc_1D9985
//   0x1D99C6 align 10h
//   0x1D99D0 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1D99D4 mov     rdx, [rax]
//   0x1D99D7 test    dl, 2
//   0x1D99DA jz      loc_1D9F80
//   0x1D99E0 mov     rbx, rax
//   0x1D99E3 nop     word ptr [rax+rax+00000000h]
//   0x1D99EE xchg    ax, ax
//   0x1D99F0 cmp     [r13+8], rbx
//   0x1D99F4 jz      loc_1D9B10
//   0x1D99FA movzx   eax, [rsp+0F8h+var_C9]
//   0x1D99FF lea     r15, [rbx+18h]
//   0x1D9A03 cmp     [rbx+20h], al
//   0x1D9A06 jnz     loc_1D9B10
//   0x1D9A0C cmp     [rbx+18h], r14
//   0x1D9A10 jnz     loc_1D9B10
//   0x1D9A16 cmp     dword ptr [r15+10h], 8
//   0x1D9A1B jz      loc_1D9B10
//   0x1D9A21 movsxd  rax, dword ptr [r15+14h]
//   0x1D9A25 add     r14, rax
//   0x1D9A28 cmp     [rsp+0F8h+var_D8], r14
//   0x1D9A2D jl      loc_1D9B10
//   0x1D9A33 mov     rax, cs:qword_3F9A58
//   0x1D9A3A pxor    xmm0, xmm0
//   0x1D9A3E cmp     [rsp+0F8h+var_CA], 0
//   0x1D9A43 mov     [rsp+0F8h+var_70], 0
//   0x1D9A4F mov     edx, dword ptr [rsp+0F8h+var_C8+4]
//   0x1D9A53 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1D9A58 mov     qword ptr [rsp+0F8h+var_88], rax
//   0x1D9A5D jnz     loc_1D9F10
//   0x1D9A63 lea     rbp, [rsp+0F8h+var_88]
//   0x1D9A68 mov     rdi, r12
//   0x1D9A6B mov     rsi, rbp
//   0x1D9A6E call    sub_30D980
//   0x1D9A73 test    al, al
//   0x1D9A75 jz      loc_1DA088
//   0x1D9A7B mov     rdi, [rsp+0F8h+var_F0]
//   0x1D9A80 mov     rsi, r12
//   0x1D9A83 call    sub_30BA40
//   0x1D9A88 test    eax, eax
//   0x1D9A8A jnz     loc_1DA088
//   0x1D9A90 mov     rdi, [rsp+0F8h+var_F0]
//   0x1D9A95 lea     rsi, [r15+10h]
//   0x1D9A99 call    sub_30BA10
//   0x1D9A9E movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1D9AA3 movdqa  xmm1, xmmword ptr [r12]
//   0x1D9AA9 mov     rdi, rbp
//   0x1D9AAC movdqa  xmm0, xmmword ptr [r12+10h]
//   0x1D9AB3 movaps  xmmword ptr [r12], xmm2
//   0x1D9AB8 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1D9ABD movaps  xmmword ptr [rbp+0], xmm1
//   0x1D9AC1 movaps  xmmword ptr [rbp+10h], xmm0
//   0x1D9AC5 movaps  [rsp+0F8h+var_68], xmm1
//   0x1D9ACD movaps  [rsp+0F8h+var_58], xmm0
//   0x1D9AD5 movaps  xmmword ptr [r12+10h], xmm2
//   0x1D9ADB call    sub_30B800
//   0x1D9AE0 mov     eax, dword ptr [rsp+0F8h+var_C8+4]
//   0x1D9AE4 cmp     dword ptr [rsp+0F8h+var_A8+4], eax
//   0x1D9AE8 jg      loc_1D9EDE
//   0x1D9AEE mov     rdi, [rsp+0F8h+var_F0]
//   0x1D9AF3 mov     rsi, r12
//   0x1D9AF6 call    sub_30BA40
//   0x1D9AFB test    eax, eax
//   0x1D9AFD jz      loc_1D9D8C
//   0x1D9B03 nop     word ptr [rax+rax+00000000h]
//   0x1D9B0E xchg    ax, ax
//   0x1D9B10 mov     rdi, r12
//   0x1D9B13 call    sub_30B800
//   0x1D9B18 mov     rdi, [rsp+0F8h+var_F0]
//   0x1D9B1D call    sub_30B800
//   0x1D9B22 nop     word ptr [rax+rax+00000000h]
//   0x1D9B2D nop     dword ptr [rax]
//   0x1D9B30 xor     eax, eax
//   0x1D9B32 mov     rdx, [rsp+0F8h+var_40]
//   0x1D9B3A sub     rdx, fs:28h
//   0x1D9B43 jnz     loc_1DA314
//   0x1D9B49 add     rsp, 0C8h
//   0x1D9B50 pop     rbx
//   0x1D9B51 pop     rbp
//   0x1D9B52 pop     r12
//   0x1D9B54 pop     r13
//   0x1D9B56 pop     r14
//   0x1D9B58 pop     r15
//   0x1D9B5A retn
//   0x1D9B5B align 20h
//   0x1D9B60 mov     rbx, [rax+8]
//   0x1D9B64 test    rdi, rdi
//   0x1D9B67 jnz     loc_1D9C10
//   0x1D9B6D cmp     rcx, rbx
//   0x1D9B70 jz      loc_1D9985
//   0x1D9B76 mov     [rsp+0F8h+var_E8], rdx
//   0x1D9B7B mov     rax, rbx
//   0x1D9B7E mov     rbx, rcx
//   0x1D9B81 jmp     loc_1D9985
//   0x1D9B86 align 10h
//   0x1D9B90 mov     rcx, [rsp+0F8h+var_E8]
//   0x1D9B95 xor     ebx, ebx
//   0x1D9B97 test    rcx, rcx
//   0x1D9B9A jz      loc_1D9985
//   0x1D9BA0 mov     rdi, [rsp+0F8h+var_E0]
//   0x1D9BA5 cmp     qword ptr [rdi+10h], 0
//   0x1D9BAA jz      loc_1D9985
//   0x1D9BB0 mov     rcx, [rcx+8]
//   0x1D9BB4 mov     [rsp+0F8h+var_E8], rcx
//   0x1D9BB9 jmp     loc_1D9985
//   0x1D9BBE align 20h
//   0x1D9BC0 mov     rax, rcx
//   0x1D9BC3 mov     rcx, [rcx+8]
//   0x1D9BC7 test    byte ptr [rcx], 2
//   0x1D9BCA jnz     loc_1D9985
//   0x1D9BD0 jmp     short loc_1D9BC0
//   0x1D9BD2 align 20h
//   0x1D9BE0 mov     rdx, rsi
//   0x1D9BE3 cmp     rax, [rdx+10h]
//   0x1D9BE7 jnz     loc_1D99C1
//   0x1D9BED and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1D9BF1 mov     rax, rdx
//   0x1D9BF4 mov     rsi, rcx
//   0x1D9BF7 mov     rcx, [rcx]
//   0x1D9BFA test    cl, 2
//   0x1D9BFD jz      short loc_1D9BE0
//   0x1D9BFF mov     rax, rsi
//   0x1D9C02 jmp     loc_1D9985
//   0x1D9C07 align 10h
//   0x1D9C10 cmp     qword ptr [rsi+10h], 0
//   0x1D9C15 jz      loc_1D9B6D
//   0x1D9C1B mov     rcx, [rdx+8]
//   0x1D9C1F mov     [rsp+0F8h+var_E8], rcx
//   0x1D9C24 cmp     rax, rbx
//   0x1D9C27 jz      loc_1D9985
//   0x1D9C2D nop     dword ptr [rax]
//   0x1D9C30 cmp     [rsp+0F8h+var_E8], rdx
//   0x1D9C35 jz      loc_1DA319
//   0x1D9C3B cmp     dword ptr [rbx+28h], 8
//   0x1D9C3F lea     rbp, [rbx+18h]
//   0x1D9C43 jz      loc_1D9FB8
//   0x1D9C49 mov     rax, [rsp+0F8h+var_E8]
//   0x1D9C4E lea     r15, [rax+18h]
//   0x1D9C52 movzx   eax, byte ptr [rbp+8]
//   0x1D9C56 mov     [rsp+0F8h+var_C9], al
//   0x1D9C5A cmp     al, [r15+8]
//   0x1D9C5E jnz     loc_1D9B30
//   0x1D9C64 cmp     byte ptr [rbp+8], 5
//   0x1D9C68 mov     [rsp+0F8h+var_CA], 0
//   0x1D9C6D jnz     short loc_1D9C89
//   0x1D9C6F mov     rax, [r13+0]
//   0x1D9C73 mov     rax, [rax+5E0h]
//   0x1D9C7A mov     rax, [rax+60h]
//   0x1D9C7E movzx   eax, byte ptr [rax+91h]
//   0x1D9C85 mov     [rsp+0F8h+var_CA], al
//   0x1D9C89 lea     rax, [rsp+0F8h+var_C8]
//   0x1D9C8E lea     rsi, [rbp+10h]
//   0x1D9C92 mov     rdi, rax
//   0x1D9C95 lea     r12, [rsp+0F8h+var_A8]
//   0x1D9C9A mov     [rsp+0F8h+var_F0], rax
//   0x1D9C9F call    sub_30B8C0
//   0x1D9CA4 lea     rsi, [r15+10h]
//   0x1D9CA8 mov     rdi, r12
//   0x1D9CAB call    sub_30B8C0
//   0x1D9CB0 movsxd  rdi, dword ptr [rsp+0F8h+var_A8+4]
//   0x1D9CB5 mov     rcx, [r15]
//   0x1D9CB8 movsxd  r14, dword ptr [rsp+0F8h+var_C8+4]
//   0x1D9CBD mov     rax, [rbp+0]
//   0x1D9CC1 lea     r8, [rdi+rcx]
//   0x1D9CC5 mov     rdx, r14
//   0x1D9CC8 mov     [rsp+0F8h+var_D8], r8
//   0x1D9CCD add     r14, rax
//   0x1D9CD0 cmp     rax, rcx
//   0x1D9CD3 jge     loc_1D9E20
//   0x1D9CD9 cmp     r14, r8
//   0x1D9CDC jnz     loc_1D9B10
//   0x1D9CE2 mov     rsi, cs:qword_3F9A58
//   0x1D9CE9 pxor    xmm0, xmm0
//   0x1D9CED cmp     [rsp+0F8h+var_CA], 0
//   0x1D9CF2 mov     [rsp+0F8h+var_70], 0
//   0x1D9CFE movups  [rsp+0F8h+var_88+8], xmm0
//   0x1D9D03 mov     qword ptr [rsp+0F8h+var_88], rsi
//   0x1D9D08 jnz     loc_1DA098
//   0x1D9D0E mov     edx, ecx
//   0x1D9D10 lea     rbp, [rsp+0F8h+var_88]
//   0x1D9D15 mov     rdi, [rsp+0F8h+var_F0]
//   0x1D9D1A sub     edx, eax
//   0x1D9D1C mov     rsi, rbp
//   0x1D9D1F call    sub_30D980
//   0x1D9D24 test    al, al
//   0x1D9D26 jz      loc_1DA0B6
//   0x1D9D2C cmp     dword ptr [rsp+0F8h+var_C8], 1
//   0x1D9D31 jnz     loc_1DA2E5
//   0x1D9D37 movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1D9D3C movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1D9D42 mov     rdi, rbp
//   0x1D9D45 movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1D9D4B movaps  [rsp+0F8h+var_C8], xmm2
//   0x1D9D50 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1D9D55 movaps  xmmword ptr [rbp+0], xmm1
//   0x1D9D59 movaps  xmmword ptr [rbp+10h], xmm0
//   0x1D9D5D movaps  [rsp+0F8h+var_68], xmm1
//   0x1D9D65 movaps  [rsp+0F8h+var_58], xmm0
//   0x1D9D6D movaps  [rsp+0F8h+var_B8], xmm2
//   0x1D9D72 call    sub_30B800
//   0x1D9D77 mov     rdi, [rsp+0F8h+var_F0]
//   0x1D9D7C mov     rsi, r12
//   0x1D9D7F call    sub_30BA40
//   0x1D9D84 test    eax, eax
//   0x1D9D86 jnz     loc_1D9ED0
//   0x1D9D8C mov     rax, [rbx]
//   0x1D9D8F test    al, 2
//   0x1D9D91 jnz     short loc_1D9DB0
//   0x1D9D93 mov     rdx, [rbx+10h]
//   0x1D9D97 test    byte ptr [rdx], 2
//   0x1D9D9A jnz     loc_1DA0C8
//   0x1D9DA0 mov     rbx, rdx
//   0x1D9DA3 mov     rdx, [rdx+8]
//   0x1D9DA7 test    byte ptr [rdx], 2
//   0x1D9DAA jz      short loc_1D9DA0
//   0x1D9DAC nop     dword ptr [rax+00h]
//   0x1D9DB0 mov     rcx, [rsp+0F8h+var_E8]
//   0x1D9DB5 mov     rax, [rcx]
//   0x1D9DB8 test    al, 2
//   0x1D9DBA jnz     short loc_1D9DF0
//   0x1D9DBC mov     rdx, [rcx+10h]
//   0x1D9DC0 test    byte ptr [rdx], 2
//   0x1D9DC3 jnz     loc_1DA108
//   0x1D9DC9 mov     rax, [rdx+8]
//   0x1D9DCD test    byte ptr [rax], 2
//   0x1D9DD0 jnz     short loc_1D9DDE
//   0x1D9DD2 mov     rdx, rax
//   0x1D9DD5 mov     rax, [rdx+8]
//   0x1D9DD9 test    byte ptr [rax], 2
//   0x1D9DDC jz      short loc_1D9DD2
//   0x1D9DDE mov     [rsp+0F8h+var_E8], rdx
//   0x1D9DE3 nop     word ptr [rax+rax+00000000h]
//   0x1D9DEE xchg    ax, ax
//   0x1D9DF0 mov     rdi, r12
//   0x1D9DF3 call    sub_30B800
//   0x1D9DF8 mov     rdi, [rsp+0F8h+var_F0]
//   0x1D9DFD call    sub_30B800
//   0x1D9E02 cmp     [r13+8], rbx
//   0x1D9E06 jz      loc_1DA2DD
//   0x1D9E0C mov     rax, [rsp+0F8h+var_E0]
//   0x1D9E11 mov     rdx, [rax+8]
//   0x1D9E15 jmp     loc_1D9C30
//   0x1D9E1A align 20h
//   0x1D9E20 cmp     rcx, [rbp+0]
//   0x1D9E24 jge     loc_1D9D77
//   0x1D9E2A mov     rdx, [rsp+0F8h+var_D8]
//   0x1D9E2F cmp     r14, rdx
//   0x1D9E32 jnz     loc_1D9B10
//   0x1D9E38 mov     rdx, cs:qword_3F9A58
//   0x1D9E3F pxor    xmm0, xmm0
//   0x1D9E43 cmp     [rsp+0F8h+var_CA], 0
//   0x1D9E48 mov     [rsp+0F8h+var_70], 0
//   0x1D9E54 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1D9E59 mov     qword ptr [rsp+0F8h+var_88], rdx
//   0x1D9E5E jnz     loc_1DA148
//   0x1D9E64 mov     edx, eax
//   0x1D9E66 lea     rbp, [rsp+0F8h+var_88]
//   0x1D9E6B mov     rdi, r12
//   0x1D9E6E sub     edx, ecx
//   0x1D9E70 mov     rsi, rbp
//   0x1D9E73 call    sub_30D980
//   0x1D9E78 test    al, al
//   0x1D9E7A jz      loc_1DA210
//   0x1D9E80 cmp     dword ptr [rsp+0F8h+var_A8], 1
//   0x1D9E85 jnz     loc_1DA210
//   0x1D9E8B movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1D9E90 movdqa  xmm1, [rsp+0F8h+var_A8]
//   0x1D9E96 mov     rdi, rbp
//   0x1D9E99 movdqa  xmm0, [rsp+0F8h+var_98]
//   0x1D9E9F movaps  [rsp+0F8h+var_A8], xmm2
//   0x1D9EA4 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1D9EA9 movaps  xmmword ptr [rbp+0], xmm1
//   0x1D9EAD movaps  xmmword ptr [rbp+10h], xmm0
//   0x1D9EB1 movaps  [rsp+0F8h+var_68], xmm1
//   0x1D9EB9 movaps  [rsp+0F8h+var_58], xmm0
//   0x1D9EC1 movaps  [rsp+0F8h+var_98], xmm2
//   0x1D9EC6 call    sub_30B800
//   0x1D9ECB jmp     loc_1D9D77
//   0x1D9ED0 mov     rax, [rsp+0F8h+var_D8]
//   0x1D9ED5 cmp     r14, rax
//   0x1D9ED8 jge     loc_1D9B10
//   0x1D9EDE mov     rax, [rbx]
//   0x1D9EE1 test    al, 2
//   0x1D9EE3 jnz     loc_1D99F0
//   0x1D9EE9 mov     rdx, [rbx+10h]
//   0x1D9EED test    byte ptr [rdx], 2
//   0x1D9EF0 jnz     loc_1D99D0
//   0x1D9EF6 mov     rbx, rdx
//   0x1D9EF9 mov     rdx, [rdx+8]
//   0x1D9EFD test    byte ptr [rdx], 2
//   0x1D9F00 jnz     loc_1D99F0
//   0x1D9F06 jmp     short loc_1D9EF6
//   0x1D9F08 align 10h
//   0x1D9F10 mov     eax, dword ptr [rsp+0F8h+var_A8+4]
//   0x1D9F14 lea     rbp, [rsp+0F8h+var_88]
//   0x1D9F19 mov     rdi, r12
//   0x1D9F1C mov     rsi, rbp
//   0x1D9F1F sub     eax, edx
//   0x1D9F21 mov     edx, eax
//   0x1D9F23 call    sub_30D980
//   0x1D9F28 test    al, al
//   0x1D9F2A jz      loc_1DA088
//   0x1D9F30 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1D9F36 movdqa  xmm1, xmmword ptr [r12]
//   0x1D9F3C movdqa  xmm0, xmmword ptr [r12+10h]
//   0x1D9F43 movaps  xmmword ptr [r12], xmm2
//   0x1D9F48 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1D9F51 movaps  [rsp+0F8h+var_68], xmm1
//   0x1D9F59 movaps  [rsp+0F8h+var_58], xmm0
//   0x1D9F61 movaps  xmmword ptr [r12+10h], xmm2
//   0x1D9F67 movaps  [rsp+0F8h+var_88], xmm1
//   0x1D9F6C movaps  xmmword ptr [rsp+80h], xmm0
//   0x1D9F74 jmp     loc_1D9A7B
//   0x1D9F79 align 20h
//   0x1D9F80 cmp     [rax+10h], rbx
//   0x1D9F84 jnz     loc_1D99E0
//   0x1D9F8A and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1D9F8E mov     rbx, rdx
//   0x1D9F91 mov     rdx, [rdx]
//   0x1D9F94 test    dl, 2
//   0x1D9F97 jnz     loc_1D99F0
//   0x1D9F9D mov     rcx, rax
//   0x1D9FA0 mov     rax, rbx
//   0x1D9FA3 mov     rbx, rcx
//   0x1D9FA6 cmp     [rax+10h], rbx
//   0x1D9FAA jz      short loc_1D9F8A
//   0x1D9FAC jmp     loc_1D99E0
//   0x1D9FB1 align 8
//   0x1D9FB8 mov     rdi, [rsp+0F8h+var_E8]
//   0x1D9FBD movzx   eax, byte ptr [rbp+8]
//   0x1D9FC1 movzx   ecx, byte ptr [rdi+20h]
//   0x1D9FC5 lea     r15, [rdi+18h]
//   0x1D9FC9 cmp     al, cl
//   0x1D9FCB jb      short loc_1D9FE3
//   0x1D9FCD cmp     cl, al
//   0x1D9FCF jb      loc_1D9C52
//   0x1D9FD5 mov     rax, [rdi+18h]
//   0x1D9FD9 cmp     [rbp+0], rax
//   0x1D9FDD jg      loc_1D9C52
//   0x1D9FE3 movsxd  rax, dword ptr [rbp+14h]
//   0x1D9FE7 add     rax, [rbp+0]
//   0x1D9FEB movzx   ecx, byte ptr [r15+8]
//   0x1D9FF0 cmp     [rbp+8], cl
//   0x1D9FF3 jnz     short loc_1DA050
//   0x1D9FF5 cmp     [r15], rax
//   0x1D9FF8 jge     short loc_1DA050
//   0x1D9FFA movsxd  rcx, dword ptr [r15+14h]
//   0x1D9FFE add     rcx, [r15]
//   0x1DA001 cmp     rcx, rax
//   0x1DA004 jg      loc_1D9B30
//   0x1DA00A mov     rdi, [rsp+0F8h+var_E8]
//   0x1DA00F mov     rcx, [rdi]
//   0x1DA012 test    cl, 2
//   0x1DA015 jnz     loc_1DA270
//   0x1DA01B mov     rsi, [rdi+10h]
//   0x1DA01F test    byte ptr [rsi], 2
//   0x1DA022 jnz     loc_1DA299
//   0x1DA028 mov     [rsp+0F8h+var_E8], rsi
//   0x1DA02D mov     rsi, [rsi+8]
//   0x1DA031 test    byte ptr [rsi], 2
//   0x1DA034 jz      short loc_1DA028
//   0x1DA036 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DA03B cmp     rdx, rcx
//   0x1DA03E jnz     loc_1DA30B
//   0x1DA044 nop     word ptr [rax+rax+00000000h]
//   0x1DA04F nop
//   0x1DA050 mov     rax, [rbx]
//   0x1DA053 test    al, 2
//   0x1DA055 jnz     loc_1D9E02
//   0x1DA05B mov     rdx, [rbx+10h]
//   0x1DA05F test    byte ptr [rdx], 2
//   0x1DA062 jnz     loc_1DA230
//   0x1DA068 mov     rax, [rdx+8]
//   0x1DA06C test    byte ptr [rax], 2
//   0x1DA06F jnz     short loc_1DA07D
//   0x1DA071 mov     rdx, rax
//   0x1DA074 mov     rax, [rdx+8]
//   0x1DA078 test    byte ptr [rax], 2
//   0x1DA07B jz      short loc_1DA071
//   0x1DA07D mov     rbx, rdx
//   0x1DA080 jmp     loc_1D9E02
//   0x1DA085 align 8
//   0x1DA088 mov     rdi, rbp
//   0x1DA08B call    sub_30B800
//   0x1DA090 jmp     loc_1D9B10
//   0x1DA095 align 8
//   0x1DA098 add     edx, eax
//   0x1DA09A lea     rbp, [rsp+0F8h+var_88]
//   0x1DA09F mov     rdi, [rsp+0F8h+var_F0]
//   0x1DA0A4 sub     edx, ecx
//   0x1DA0A6 mov     rsi, rbp
//   0x1DA0A9 call    sub_30D980
//   0x1DA0AE test    al, al
//   0x1DA0B0 jnz     loc_1DA1B0
//   0x1DA0B6 mov     rdi, rbp
//   0x1DA0B9 call    sub_30B800
//   0x1DA0BE jmp     loc_1D9B10
//   0x1DA0C3 align 8
//   0x1DA0C8 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DA0CC mov     rdx, [rax]
//   0x1DA0CF test    dl, 2
//   0x1DA0D2 jz      short loc_1DA0E3
//   0x1DA0D4 mov     rbx, rax
//   0x1DA0D7 jmp     loc_1D9DB0
//   0x1DA0DC align 20h
//   0x1DA0E0 mov     rax, rcx
//   0x1DA0E3 cmp     [rax+10h], rbx
//   0x1DA0E7 jnz     short loc_1DA0D4
//   0x1DA0E9 mov     rcx, rdx
//   0x1DA0EC mov     rbx, rax
//   0x1DA0EF and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DA0F3 mov     rdx, [rcx]
//   0x1DA0F6 test    dl, 2
//   0x1DA0F9 jz      short loc_1DA0E0
//   0x1DA0FB mov     rbx, rcx
//   0x1DA0FE jmp     loc_1D9DB0
//   0x1DA103 align 8
//   0x1DA108 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DA10C mov     rdx, [rax]
//   0x1DA10F test    dl, 2
//   0x1DA112 jnz     loc_1DA200
//   0x1DA118 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DA11D cmp     [rax+10h], rcx
//   0x1DA121 jnz     loc_1DA200
//   0x1DA127 mov     rcx, rdx
//   0x1DA12A and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DA12E mov     rdx, [rcx]
//   0x1DA131 test    dl, 2
//   0x1DA134 jz      loc_1DA220
//   0x1DA13A mov     [rsp+0F8h+var_E8], rcx
//   0x1DA13F jmp     loc_1D9DF0
//   0x1DA144 align 8
//   0x1DA148 lea     edx, [rdi+rcx]
//   0x1DA14B lea     rbp, [rsp+0F8h+var_88]
//   0x1DA150 mov     rdi, r12
//   0x1DA153 sub     edx, eax
//   0x1DA155 mov     rsi, rbp
//   0x1DA158 call    sub_30D980
//   0x1DA15D test    al, al
//   0x1DA15F jz      loc_1DA210
//   0x1DA165 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DA16B movdqa  xmm1, [rsp+0F8h+var_A8]
//   0x1DA171 movdqa  xmm0, [rsp+0F8h+var_98]
//   0x1DA177 movaps  [rsp+0F8h+var_A8], xmm2
//   0x1DA17C movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DA185 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DA18D movaps  [rsp+0F8h+var_58], xmm0
//   0x1DA195 movaps  [rsp+0F8h+var_98], xmm2
//   0x1DA19A movaps  [rsp+0F8h+var_88], xmm1
//   0x1DA19F movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DA1A7 jmp     loc_1D9E80
//   0x1DA1AC align 10h
//   0x1DA1B0 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DA1B6 movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1DA1BC movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1DA1C2 movaps  [rsp+0F8h+var_C8], xmm2
//   0x1DA1C7 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DA1D0 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DA1D8 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DA1E0 movaps  [rsp+0F8h+var_B8], xmm2
//   0x1DA1E5 movaps  [rsp+0F8h+var_88], xmm1
//   0x1DA1EA movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DA1F2 jmp     loc_1D9D2C
//   0x1DA1F7 align 20h
//   0x1DA200 mov     [rsp+0F8h+var_E8], rax
//   0x1DA205 jmp     loc_1D9DF0
//   0x1DA20A align 10h
//   0x1DA210 mov     rdi, rbp
//   0x1DA213 call    sub_30B800
//   0x1DA218 jmp     loc_1D9B10
//   0x1DA21D align 20h
//   0x1DA220 mov     rsi, rax
//   0x1DA223 mov     rax, rcx
//   0x1DA226 mov     rcx, rsi
//   0x1DA229 jmp     loc_1DA11D
//   0x1DA22E align 10h
//   0x1DA230 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DA234 mov     rdx, [rax]
//   0x1DA237 test    dl, 2
//   0x1DA23A jz      short loc_1DA247
//   0x1DA23C mov     rbx, rax
//   0x1DA23F jmp     loc_1D9E02
//   0x1DA244 mov     rax, rcx
//   0x1DA247 cmp     [rax+10h], rbx
//   0x1DA24B jnz     short loc_1DA23C
//   0x1DA24D mov     rcx, rdx
//   0x1DA250 mov     rbx, rax
//   0x1DA253 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DA257 mov     rdx, [rcx]
//   0x1DA25A test    dl, 2
//   0x1DA25D jz      short loc_1DA244
//   0x1DA25F mov     rbx, rcx
//   0x1DA262 jmp     loc_1D9E02
//   0x1DA267 align 10h
//   0x1DA270 movzx   ecx, byte ptr [rbp+8]
//   0x1DA274 cmp     [r15+8], cl
//   0x1DA278 jz      loc_1D9FF5
//   0x1DA27E jmp     loc_1DA050
//   0x1DA283 mov     rax, [rsp+0F8h+var_E0]
//   0x1DA288 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DA28D cmp     [rax+8], rcx
//   0x1DA291 setz    al
//   0x1DA294 jmp     loc_1D9B32
//   0x1DA299 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DA29D mov     rsi, [rcx]
//   0x1DA2A0 test    sil, 2
//   0x1DA2A4 jz      short loc_1DA2B3
//   0x1DA2A6 mov     [rsp+0F8h+var_E8], rcx
//   0x1DA2AB jmp     loc_1DA036
//   0x1DA2B0 mov     rcx, rdi
//   0x1DA2B3 mov     rdi, [rsp+0F8h+var_E8]
//   0x1DA2B8 cmp     [rcx+10h], rdi
//   0x1DA2BC jnz     short loc_1DA2A6
//   0x1DA2BE mov     rdi, rsi
//   0x1DA2C1 mov     [rsp+0F8h+var_E8], rcx
//   0x1DA2C6 and     rdi, 0FFFFFFFFFFFFFFFCh
//   0x1DA2CA mov     rsi, [rdi]
//   0x1DA2CD test    sil, 2
//   0x1DA2D1 jz      short loc_1DA2B0
//   0x1DA2D3 mov     [rsp+0F8h+var_E8], rdi
//   0x1DA2D8 jmp     loc_1DA036
//   0x1DA2DD mov     rax, rbx
//   0x1DA2E0 jmp     loc_1D9985
//   0x1DA2E5 mov     rdi, rbp
//   0x1DA2E8 call    sub_30B800
//   0x1DA2ED mov     rdi, r12
//   0x1DA2F0 call    sub_30B800
//   0x1DA2F5 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DA2FA call    sub_30B800
//   0x1DA2FF mov     rax, rbx
//   0x1DA302 mov     rbx, [r13+8]
//   0x1DA306 jmp     loc_1D9985
//   0x1DA30B lea     r15, [rcx+18h]
//   0x1DA30F jmp     loc_1D9FEB
//   0x1DA314 call    ___stack_chk_fail
//   0x1DA319 mov     rcx, [r13+8]
//   0x1DA31D mov     rax, rbx
//   0x1DA320 jmp     loc_1D9B7E
//   0x1DA325 mov     rbx, rax
//   0x1DA328 jmp     loc_4029C
//   0x1DA32D mov     rbx, rax
//   0x1DA330 jmp     loc_402A4
//   0x1DA335 mov     rbx, rax
//   0x1DA338 jmp     loc_402D1
//   0x1DA33D mov     rbx, rax
//   0x1DA340 jmp     loc_402AC
//   0x1DA345 mov     rbx, rax
//   0x1DA348 jmp     loc_402DB
// ============================================================

void sub_1D9900(/* signature unknown */)
{
    // see disassembly above
}

