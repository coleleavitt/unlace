// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E0630
// Name:           sub_1E0630
// Function size:  1690 bytes (407 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E0630 push    r15
//   0x1E0632 mov     r10, rsi
//   0x1E0635 push    r14
//   0x1E0637 mov     r14, r8
//   0x1E063A push    r13
//   0x1E063C push    r12
//   0x1E063E push    rbp
//   0x1E063F mov     rbp, rcx
//   0x1E0642 push    rbx
//   0x1E0643 mov     rbx, rdx
//   0x1E0646 movsxd  rdx, r9d
//   0x1E0649 lea     r13, [rbx+18h]
//   0x1E064D mov     r9, rbx
//   0x1E0650 sub     rsp, 0B8h
//   0x1E0657 movdqu  xmm3, xmmword ptr [rbx+18h]
//   0x1E065C mov     r8, [rbx+18h]
//   0x1E0660 movzx   ecx, byte ptr [r13+8]
//   0x1E0665 movzx   eax, byte ptr [rbp+8]
//   0x1E0669 mov     [rsp+0E8h+var_D8], rdi
//   0x1E066E mov     esi, [r13+14h]
//   0x1E0672 movsxd  rdi, dword ptr [r14+4]
//   0x1E0676 add     r8, rdx
//   0x1E0679 mov     r12, fs:28h
//   0x1E0682 mov     [rsp+0E8h+var_40], r12
//   0x1E068A mov     r12, rdx
//   0x1E068D movaps  [rsp+0E8h+var_E8], xmm3
//   0x1E0691 cmp     al, cl
//   0x1E0693 jz      loc_1E0790
//   0x1E0699 cmp     al, [r13+8]
//   0x1E069D jz      short loc_1E06D0
//   0x1E069F xor     ebp, ebp
//   0x1E06A1 mov     rax, [rsp+0E8h+var_40]
//   0x1E06A9 sub     rax, fs:28h
//   0x1E06B2 jnz     loc_1E0CB5
//   0x1E06B8 add     rsp, 0B8h
//   0x1E06BF mov     eax, ebp
//   0x1E06C1 pop     rbx
//   0x1E06C2 pop     rbp
//   0x1E06C3 pop     r12
//   0x1E06C5 pop     r13
//   0x1E06C7 pop     r14
//   0x1E06C9 pop     r15
//   0x1E06CB retn
//   0x1E06CC align 10h
//   0x1E06D0 mov     rcx, [rbp+0]
//   0x1E06D4 mov     rax, [rbx+18h]
//   0x1E06D8 mov     [rsp+0E8h+var_C0], r10
//   0x1E06DD mov     [rsp+0E8h+var_C8], r9
//   0x1E06E2 mov     [rsp+0E8h+var_D0], r8
//   0x1E06E7 cmp     rcx, rax
//   0x1E06EA jl      short loc_1E069F
//   0x1E06EC add     rdi, rcx
//   0x1E06EF add     rdx, rax
//   0x1E06F2 cmp     rdi, rdx
//   0x1E06F5 jg      short loc_1E069F
//   0x1E06F7 lea     rax, [r13+10h]
//   0x1E06FB lea     r15, [rsp+0E8h+var_A8]
//   0x1E0700 mov     rsi, rax
//   0x1E0703 mov     rdi, r15
//   0x1E0706 mov     [rsp+0E8h+var_B8], rax
//   0x1E070B call    sub_30DEC0
//   0x1E0710 mov     rax, cs:qword_406B60
//   0x1E0717 pxor    xmm0, xmm0
//   0x1E071B cmp     byte ptr [r13+8], 5
//   0x1E0720 mov     r8, [rsp+0E8h+var_D0]
//   0x1E0725 mov     r9, [rsp+0E8h+var_C8]
//   0x1E072A movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E072F mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E0734 mov     r10, [rsp+0E8h+var_C0]
//   0x1E0739 mov     [rsp+0E8h+var_70], 0
//   0x1E0742 jz      loc_1E0AF0
//   0x1E0748 lea     rax, [rsp+0E8h+var_88]
//   0x1E074D mov     edx, r12d
//   0x1E0750 mov     rdi, r15
//   0x1E0753 mov     [rsp+0E8h+var_B0], r10
//   0x1E0758 mov     rsi, rax
//   0x1E075B mov     [rsp+0E8h+var_C0], r9
//   0x1E0760 mov     [rsp+0E8h+var_C8], r8
//   0x1E0765 mov     [rsp+0E8h+var_D0], rax
//   0x1E076A call    sub_30FF80
//   0x1E076F test    al, al
//   0x1E0771 jnz     loc_1E0968
//   0x1E0777 xor     ebp, ebp
//   0x1E0779 mov     rdi, [rsp+0E8h+var_D0]
//   0x1E077E call    sub_30DE00
//   0x1E0783 mov     rdi, r15
//   0x1E0786 call    sub_30DE00
//   0x1E078B jmp     loc_1E06A1
//   0x1E0790 mov     r11, [rbp+0]
//   0x1E0794 mov     byte ptr [rsp+0E8h+var_D0], cl
//   0x1E0798 cmp     r8, r11
//   0x1E079B jg      loc_1E0699
//   0x1E07A1 sub     esi, r12d
//   0x1E07A4 movsxd  r15, edi
//   0x1E07A7 movsxd  rsi, esi
//   0x1E07AA add     r15, r11
//   0x1E07AD add     rsi, r8
//   0x1E07B0 cmp     rsi, r15
//   0x1E07B3 jl      loc_1E0699
//   0x1E07B9 lea     r15, [rsp+0E8h+var_A8]
//   0x1E07BE lea     rsi, [rbx+28h]
//   0x1E07C2 mov     [rsp+0E8h+var_B8], r10
//   0x1E07C7 mov     rdi, r15
//   0x1E07CA mov     [rsp+0E8h+var_C8], r8
//   0x1E07CF mov     [rsp+0E8h+var_C0], rbx
//   0x1E07D4 call    sub_30DEC0
//   0x1E07D9 mov     rax, cs:qword_406B60
//   0x1E07E0 pxor    xmm0, xmm0
//   0x1E07E4 cmp     byte ptr [r13+8], 5
//   0x1E07E9 mov     r8, [rsp+0E8h+var_C8]
//   0x1E07EE mov     r9, [rsp+0E8h+var_C0]
//   0x1E07F3 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E07F8 mov     r10, [rsp+0E8h+var_B8]
//   0x1E07FD movzx   ecx, byte ptr [rsp+0E8h+var_D0]
//   0x1E0802 mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E0807 mov     [rsp+0E8h+var_70], 0
//   0x1E0810 jz      loc_1E0A50
//   0x1E0816 lea     rax, [rsp+0E8h+var_88]
//   0x1E081B mov     edx, r12d
//   0x1E081E mov     rdi, r15
//   0x1E0821 mov     [rsp+0E8h+var_B0], r10
//   0x1E0826 mov     rsi, rax
//   0x1E0829 mov     byte ptr [rsp+0E8h+var_B8], cl
//   0x1E082D mov     [rsp+0E8h+var_C0], r9
//   0x1E0832 mov     [rsp+0E8h+var_C8], r8
//   0x1E0837 mov     [rsp+0E8h+var_D0], rax
//   0x1E083C call    sub_30FF80
//   0x1E0841 test    al, al
//   0x1E0843 jnz     short loc_1E0860
//   0x1E0845 xor     ebp, ebp
//   0x1E0847 mov     rdi, [rsp+0E8h+var_D0]
//   0x1E084C call    sub_30DE00
//   0x1E0851 mov     rdi, r15
//   0x1E0854 call    sub_30DE00
//   0x1E0859 jmp     loc_1E06A1
//   0x1E085E align 20h
//   0x1E0860 mov     r8, [rsp+0E8h+var_C8]
//   0x1E0865 mov     r9, [rsp+0E8h+var_C0]
//   0x1E086A movzx   ecx, byte ptr [rsp+0E8h+var_B8]
//   0x1E086F mov     r10, [rsp+0E8h+var_B0]
//   0x1E0874 mov     rsi, [rbp+0]
//   0x1E0878 cmp     r8, rsi
//   0x1E087B jg      short loc_1E0845
//   0x1E087D movsxd  rdx, dword ptr [rsp+0E8h+var_88+4]
//   0x1E0882 movsxd  rax, dword ptr [r14+4]
//   0x1E0886 add     rdx, r8
//   0x1E0889 add     rax, rsi
//   0x1E088C cmp     rdx, rax
//   0x1E088F jl      short loc_1E0845
//   0x1E0891 cmp     cl, 5
//   0x1E0894 jz      loc_1E0BCD
//   0x1E089A mov     edx, esi
//   0x1E089C sub     edx, r8d
//   0x1E089F mov     rdi, [rsp+0E8h+var_D0]
//   0x1E08A4 mov     rsi, r14
//   0x1E08A7 mov     [rsp+0E8h+var_C0], r9
//   0x1E08AC mov     [rsp+0E8h+var_C8], r8
//   0x1E08B1 call    sub_30F2A0
//   0x1E08B6 mov     ebp, eax
//   0x1E08B8 test    al, al
//   0x1E08BA jz      short loc_1E0845
//   0x1E08BC cmp     dword ptr [rsp+0E8h+var_A8], 1
//   0x1E08C1 mov     r8, [rsp+0E8h+var_C8]
//   0x1E08C6 mov     r9, [rsp+0E8h+var_C0]
//   0x1E08CB jz      loc_1E0B84
//   0x1E08D1 lea     rdi, [r13+10h]
//   0x1E08D5 mov     rsi, r15
//   0x1E08D8 mov     [rsp+0E8h+var_C0], r9
//   0x1E08DD mov     [rsp+0E8h+var_C8], r8
//   0x1E08E2 call    sub_30E010
//   0x1E08E7 mov     rax, [rbx]
//   0x1E08EA mov     rdi, [rsp+0E8h+var_D8]
//   0x1E08EF mov     r8, [rsp+0E8h+var_C8]
//   0x1E08F4 mov     r9, [rsp+0E8h+var_C0]
//   0x1E08F9 test    al, 2
//   0x1E08FB lea     r12, [rdi+8]
//   0x1E08FF jnz     short loc_1E0930
//   0x1E0901 mov     rdx, [rbx+10h]
//   0x1E0905 test    byte ptr [rdx], 2
//   0x1E0908 jnz     loc_1E0C34
//   0x1E090E mov     r9, rdx
//   0x1E0911 mov     rdx, [rdx+8]
//   0x1E0915 test    byte ptr [rdx], 2
//   0x1E0918 jz      short loc_1E090E
//   0x1E091A mov     rax, [rsp+0E8h+var_D8]
//   0x1E091F lea     r12, [rax+8]
//   0x1E0923 nop     word ptr [rax+rax+00000000h]
//   0x1E092E xchg    ax, ax
//   0x1E0930 mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1E0935 mov     qword ptr [rsp+0E8h+var_E8], r8
//   0x1E0939 mov     rsi, r9
//   0x1E093C mov     rdi, r12
//   0x1E093F mov     rax, qword ptr [rsp+0E8h+var_E8]
//   0x1E0943 mov     r8, [rsp+0E8h+var_D0]
//   0x1E0948 mov     qword ptr [rsp+0E8h+var_E8+8], rdx
//   0x1E094D mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1E0952 mov     rcx, rdx
//   0x1E0955 mov     rdx, rax
//   0x1E0958 call    sub_1DFD20
//   0x1E095D jmp     loc_1E0847
//   0x1E0962 align 8
//   0x1E0968 mov     r8, [rsp+0E8h+var_C8]
//   0x1E096D mov     r9, [rsp+0E8h+var_C0]
//   0x1E0972 mov     r10, [rsp+0E8h+var_B0]
//   0x1E0977 mov     rcx, [rbp+0]
//   0x1E097B mov     rax, [rbx+18h]
//   0x1E097F cmp     rcx, rax
//   0x1E0982 jl      loc_1E0777
//   0x1E0988 movsxd  rdx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E098D movsxd  rsi, dword ptr [r14+4]
//   0x1E0991 add     rdx, rax
//   0x1E0994 add     rsi, rcx
//   0x1E0997 cmp     rdx, rsi
//   0x1E099A jl      loc_1E0777
//   0x1E09A0 cmp     byte ptr [r13+8], 5
//   0x1E09A5 jz      loc_1E0BE5
//   0x1E09AB mov     edx, ecx
//   0x1E09AD sub     edx, eax
//   0x1E09AF mov     rsi, r14
//   0x1E09B2 mov     rdi, r15
//   0x1E09B5 mov     [rsp+0E8h+var_C0], r9
//   0x1E09BA mov     [rsp+0E8h+var_C8], r8
//   0x1E09BF call    sub_30F2A0
//   0x1E09C4 mov     ebp, eax
//   0x1E09C6 test    al, al
//   0x1E09C8 jz      loc_1E0777
//   0x1E09CE mov     rdi, [rsp+0E8h+var_B8]
//   0x1E09D3 mov     rsi, r15
//   0x1E09D6 call    sub_30E010
//   0x1E09DB mov     rax, [rbx]
//   0x1E09DE mov     r8, [rsp+0E8h+var_C8]
//   0x1E09E3 mov     r9, [rsp+0E8h+var_C0]
//   0x1E09E8 test    al, 2
//   0x1E09EA jnz     short loc_1E0A10
//   0x1E09EC mov     rdx, [rbx+10h]
//   0x1E09F0 test    byte ptr [rdx], 2
//   0x1E09F3 jnz     loc_1E0BFD
//   0x1E09F9 mov     r9, rdx
//   0x1E09FC mov     rdx, [rdx+8]
//   0x1E0A00 test    byte ptr [rdx], 2
//   0x1E0A03 jz      short loc_1E09F9
//   0x1E0A05 nop     word ptr [rax+rax+00000000h]
//   0x1E0A10 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E0A15 jz      loc_1E0779
//   0x1E0A1B mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1E0A20 mov     rdi, [rsp+0E8h+var_D8]
//   0x1E0A25 mov     qword ptr [rsp+0E8h+var_E8], r8
//   0x1E0A29 mov     rsi, r9
//   0x1E0A2C mov     r8, [rsp+0E8h+var_D0]
//   0x1E0A31 mov     qword ptr [rsp+0E8h+var_E8+8], rdx
//   0x1E0A36 mov     rdx, qword ptr [rsp+0E8h+var_E8]
//   0x1E0A3A add     rdi, 8
//   0x1E0A3E mov     rcx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1E0A43 call    sub_1DFD20
//   0x1E0A48 jmp     loc_1E0779
//   0x1E0A4D align 10h
//   0x1E0A50 mov     rax, [r10+60h]
//   0x1E0A54 cmp     byte ptr [rax+91h], 0
//   0x1E0A5B jz      loc_1E0816
//   0x1E0A61 mov     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E0A65 lea     rax, [rsp+0E8h+var_88]
//   0x1E0A6A mov     rdi, r15
//   0x1E0A6D mov     byte ptr [rsp+0E8h+var_B8], cl
//   0x1E0A71 mov     rsi, rax
//   0x1E0A74 mov     [rsp+0E8h+var_B0], r10
//   0x1E0A79 sub     edx, r12d
//   0x1E0A7C mov     [rsp+0E8h+var_C0], r9
//   0x1E0A81 mov     [rsp+0E8h+var_C8], r8
//   0x1E0A86 mov     [rsp+0E8h+var_D0], rax
//   0x1E0A8B call    sub_30FF80
//   0x1E0A90 test    al, al
//   0x1E0A92 mov     r8, [rsp+0E8h+var_C8]
//   0x1E0A97 mov     r9, [rsp+0E8h+var_C0]
//   0x1E0A9C movzx   ecx, byte ptr [rsp+0E8h+var_B8]
//   0x1E0AA1 mov     r10, [rsp+0E8h+var_B0]
//   0x1E0AA6 jz      loc_1E0845
//   0x1E0AAC movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E0AB2 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E0AB8 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E0ABE movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E0AC3 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E0AC9 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E0AD1 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E0AD9 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E0ADE movaps  [rsp+0E8h+var_88], xmm1
//   0x1E0AE3 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E0AE8 jmp     loc_1E0874
//   0x1E0AED align 10h
//   0x1E0AF0 mov     rax, [r10+60h]
//   0x1E0AF4 cmp     byte ptr [rax+91h], 0
//   0x1E0AFB jz      loc_1E0748
//   0x1E0B01 mov     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E0B05 lea     rax, [rsp+0E8h+var_88]
//   0x1E0B0A mov     rdi, r15
//   0x1E0B0D mov     [rsp+0E8h+var_B0], r10
//   0x1E0B12 mov     rsi, rax
//   0x1E0B15 mov     [rsp+0E8h+var_C0], r9
//   0x1E0B1A sub     edx, r12d
//   0x1E0B1D mov     [rsp+0E8h+var_C8], r8
//   0x1E0B22 mov     [rsp+0E8h+var_D0], rax
//   0x1E0B27 call    sub_30FF80
//   0x1E0B2C test    al, al
//   0x1E0B2E mov     r8, [rsp+0E8h+var_C8]
//   0x1E0B33 mov     r9, [rsp+0E8h+var_C0]
//   0x1E0B38 mov     r10, [rsp+0E8h+var_B0]
//   0x1E0B3D jz      loc_1E0777
//   0x1E0B43 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E0B49 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E0B4F movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E0B55 movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E0B5A movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E0B60 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E0B68 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E0B70 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E0B75 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E0B7A movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E0B7F jmp     loc_1E0977
//   0x1E0B84 mov     r12, [rsp+0E8h+var_D8]
//   0x1E0B89 mov     rax, [rbx]
//   0x1E0B8C mov     r13, rbx
//   0x1E0B8F add     r12, 8
//   0x1E0B93 test    al, 2
//   0x1E0B95 jnz     short loc_1E0BB0
//   0x1E0B97 mov     rdx, [rbx+10h]
//   0x1E0B9B test    byte ptr [rdx], 2
//   0x1E0B9E jnz     loc_1E0C78
//   0x1E0BA4 mov     r13, rdx
//   0x1E0BA7 mov     rdx, [rdx+8]
//   0x1E0BAB test    byte ptr [rdx], 2
//   0x1E0BAE jz      short loc_1E0BA4
//   0x1E0BB0 mov     rsi, rbx
//   0x1E0BB3 mov     rdi, r12
//   0x1E0BB6 mov     [rsp+0E8h+var_D8], r8
//   0x1E0BBB call    sub_1DF510
//   0x1E0BC0 mov     r8, [rsp+0E8h+var_D8]
//   0x1E0BC5 mov     r9, r13
//   0x1E0BC8 jmp     loc_1E0930
//   0x1E0BCD mov     rcx, [r10+60h]
//   0x1E0BD1 sub     edx, eax
//   0x1E0BD3 cmp     byte ptr [rcx+91h], 0
//   0x1E0BDA jnz     loc_1E089F
//   0x1E0BE0 jmp     loc_1E089A
//   0x1E0BE5 mov     rdi, [r10+60h]
//   0x1E0BE9 sub     edx, esi
//   0x1E0BEB cmp     byte ptr [rdi+91h], 0
//   0x1E0BF2 jnz     loc_1E09AF
//   0x1E0BF8 jmp     loc_1E09AB
//   0x1E0BFD and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0C01 mov     rdx, [rax]
//   0x1E0C04 test    dl, 2
//   0x1E0C07 jz      short loc_1E0C14
//   0x1E0C09 mov     r9, rax
//   0x1E0C0C jmp     loc_1E0A10
//   0x1E0C11 mov     rax, rcx
//   0x1E0C14 cmp     r9, [rax+10h]
//   0x1E0C18 jnz     short loc_1E0C09
//   0x1E0C1A mov     rcx, rdx
//   0x1E0C1D mov     r9, rax
//   0x1E0C20 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E0C24 mov     rdx, [rcx]
//   0x1E0C27 test    dl, 2
//   0x1E0C2A jz      short loc_1E0C11
//   0x1E0C2C mov     r9, rcx
//   0x1E0C2F jmp     loc_1E0A10
//   0x1E0C34 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0C38 mov     rdx, [rax]
//   0x1E0C3B test    dl, 2
//   0x1E0C3E jz      short loc_1E0C48
//   0x1E0C40 mov     r9, rax
//   0x1E0C43 jmp     loc_1E0930
//   0x1E0C48 cmp     r9, [rax+10h]
//   0x1E0C4C jnz     short loc_1E0C70
//   0x1E0C4E and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1E0C52 mov     r9, rdx
//   0x1E0C55 mov     rdx, [rdx]
//   0x1E0C58 test    dl, 2
//   0x1E0C5B jnz     loc_1E091A
//   0x1E0C61 mov     rcx, rax
//   0x1E0C64 mov     rax, r9
//   0x1E0C67 mov     r9, rcx
//   0x1E0C6A cmp     r9, [rax+10h]
//   0x1E0C6E jz      short loc_1E0C4E
//   0x1E0C70 mov     r9, rax
//   0x1E0C73 jmp     loc_1E091A
//   0x1E0C78 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0C7C mov     rcx, rbx
//   0x1E0C7F mov     r13, rax
//   0x1E0C82 mov     rax, [rax]
//   0x1E0C85 test    al, 2
//   0x1E0C87 jnz     loc_1E0BB0
//   0x1E0C8D cmp     [r13+10h], rcx
//   0x1E0C91 jnz     loc_1E0BB0
//   0x1E0C97 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0C9B mov     rdx, rax
//   0x1E0C9E mov     rax, [rax]
//   0x1E0CA1 test    al, 2
//   0x1E0CA3 jz      short loc_1E0CAD
//   0x1E0CA5 mov     r13, rdx
//   0x1E0CA8 jmp     loc_1E0BB0
//   0x1E0CAD mov     rcx, r13
//   0x1E0CB0 mov     r13, rdx
//   0x1E0CB3 jmp     short loc_1E0C8D
//   0x1E0CB5 call    ___stack_chk_fail
//   0x1E0CBA mov     rbx, rax
//   0x1E0CBD jmp     loc_41736
//   0x1E0CC2 mov     rbx, rax
//   0x1E0CC5 jmp     loc_41763
// ============================================================

void sub_1E0630(/* signature unknown */)
{
    // see disassembly above
}

