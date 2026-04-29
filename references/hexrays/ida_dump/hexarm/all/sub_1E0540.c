// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E0540
// Name:           sub_1E0540
// Function size:  2376 bytes (529 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E0540 push    r15
//   0x1E0542 push    r14
//   0x1E0544 push    r13
//   0x1E0546 push    r12
//   0x1E0548 push    rbp
//   0x1E0549 push    rbx
//   0x1E054A sub     rsp, 0C8h
//   0x1E0551 mov     r13, fs:28h
//   0x1E055A mov     [rsp+0F8h+var_40], r13
//   0x1E0562 mov     r13, rdi
//   0x1E0565 movzx   r14d, byte ptr [r13+18h]
//   0x1E056A test    r14b, r14b
//   0x1E056D jnz     short loc_1E05C0
//   0x1E056F mov     r9, rdx
//   0x1E0572 movzx   edx, byte ptr [rdx+8]
//   0x1E0576 mov     r12, rsi
//   0x1E0579 mov     edi, ecx
//   0x1E057B cmp     dl, 5
//   0x1E057E jz      loc_1E0788
//   0x1E0584 mov     rsi, [r13+8]
//   0x1E0588 test    rsi, rsi
//   0x1E058B jz      short loc_1E05C0
//   0x1E058D mov     rax, [rsi]
//   0x1E0590 mov     r11, [r9]
//   0x1E0593 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0597 jz      loc_1E0810
//   0x1E059D mov     r15, rsi
//   0x1E05A0 test    byte ptr [rax], 2
//   0x1E05A3 jz      short loc_1E05F0
//   0x1E05A5 cmp     qword ptr [r13+10h], 0
//   0x1E05AA mov     r15, rsi
//   0x1E05AD jnz     loc_1E07A8
//   0x1E05B3 nop     word ptr [rax+rax+00000000h]
//   0x1E05BE xchg    ax, ax
//   0x1E05C0 xor     eax, eax
//   0x1E05C2 mov     rdx, [rsp+0F8h+var_40]
//   0x1E05CA sub     rdx, fs:28h
//   0x1E05D3 jnz     loc_1E0E53
//   0x1E05D9 add     rsp, 0C8h
//   0x1E05E0 pop     rbx
//   0x1E05E1 pop     rbp
//   0x1E05E2 pop     r12
//   0x1E05E4 pop     r13
//   0x1E05E6 pop     r14
//   0x1E05E8 pop     r15
//   0x1E05EA retn
//   0x1E05EB align 10h
//   0x1E05F0 movzx   ebx, byte ptr [rax+20h]
//   0x1E05F4 cmp     bl, dl
//   0x1E05F6 jb      loc_1E07C0
//   0x1E05FC cmp     dl, bl
//   0x1E05FE jb      short loc_1E060A
//   0x1E0600 cmp     r11, [rax+18h]
//   0x1E0604 jg      loc_1E07C0
//   0x1E060A mov     r15, rax
//   0x1E060D mov     rax, [rax+8]
//   0x1E0611 test    byte ptr [rax], 2
//   0x1E0614 jz      short loc_1E05F0
//   0x1E0616 cmp     r15, rsi
//   0x1E0619 jz      short loc_1E05A5
//   0x1E061B lea     rcx, [r15+18h]
//   0x1E061F cmp     dl, [r15+20h]
//   0x1E0623 jnb     loc_1E0800
//   0x1E0629 cmp     qword ptr [r13+10h], 0
//   0x1E062E jnz     loc_1E07A8
//   0x1E0634 mov     rax, [r15]
//   0x1E0637 test    al, 2
//   0x1E0639 jz      loc_1E07D0
//   0x1E063F mov     r15, [r15+10h]
//   0x1E0643 lea     rcx, [r15+18h]
//   0x1E0647 cmp     [r15+20h], dl
//   0x1E064B jnz     loc_1E05C0
//   0x1E0651 movsxd  rax, dword ptr [rcx+14h]
//   0x1E0655 add     rax, [r15+18h]
//   0x1E0659 cmp     r11, rax
//   0x1E065C jge     loc_1E05C0
//   0x1E0662 movsxd  rbx, dword ptr [r12+4]
//   0x1E0667 movsxd  rbp, dword ptr [rcx+14h]
//   0x1E066B mov     [rsp+0F8h+var_E8], rcx
//   0x1E0670 mov     [rsp+0F8h+var_F0], r9
//   0x1E0675 add     rbp, [r15+18h]
//   0x1E0679 lea     rax, [rbx+r11]
//   0x1E067D mov     [rsp+0F8h+var_D4], ebx
//   0x1E0681 mov     [rsp+0F8h+var_F8], rax
//   0x1E0685 test    dil, dil
//   0x1E0688 jz      loc_1E0840
//   0x1E068E cmp     [r15+18h], r11
//   0x1E0692 jnz     loc_1E05C0
//   0x1E0698 cmp     rax, rbp
//   0x1E069B jnz     loc_1E05C0
//   0x1E06A1 lea     rsi, [r15+28h]
//   0x1E06A5 mov     rdi, r12
//   0x1E06A8 call    sub_313150
//   0x1E06AD mov     r9, [rsp+0F8h+var_F0]
//   0x1E06B2 mov     rcx, [rsp+0F8h+var_E8]
//   0x1E06B7 mov     rax, [r9]
//   0x1E06BA cmp     rax, [r15+18h]
//   0x1E06BE jle     loc_1E0AA0
//   0x1E06C4 mov     rdx, cs:qword_41F238
//   0x1E06CB pxor    xmm0, xmm0
//   0x1E06CF mov     [rsp+0F8h+var_E8], r9
//   0x1E06D4 mov     [rsp+0F8h+var_70], 0
//   0x1E06E0 mov     qword ptr [rsp+0F8h+var_88], rdx
//   0x1E06E5 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1E06EA mov     rsi, [rcx]
//   0x1E06ED test    r14b, r14b
//   0x1E06F0 jnz     loc_1E0D10
//   0x1E06F6 mov     edx, eax
//   0x1E06F8 lea     rax, [rsp+0F8h+var_88]
//   0x1E06FD mov     rdi, r12
//   0x1E0700 sub     edx, esi
//   0x1E0702 mov     rsi, rax
//   0x1E0705 mov     [rsp+0F8h+var_F0], rax
//   0x1E070A call    sub_3150C0
//   0x1E070F test    al, al
//   0x1E0711 mov     r9, [rsp+0F8h+var_E8]
//   0x1E0716 jz      loc_1E0D00
//   0x1E071C cmp     dword ptr [rsp+0F8h+var_88], 1
//   0x1E0721 mov     [rsp+0F8h+var_E8], r9
//   0x1E0726 jz      loc_1E0D00
//   0x1E072C movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1E0732 movdqu  xmm1, xmmword ptr [r12]
//   0x1E0738 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1E073F mov     rdi, [rsp+0F8h+var_F0]
//   0x1E0744 movups  xmmword ptr [r12], xmm2
//   0x1E0749 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1E0752 movaps  [rsp+0F8h+var_68], xmm1
//   0x1E075A movups  xmmword ptr [r12+10h], xmm2
//   0x1E0760 movaps  [rsp+0F8h+var_58], xmm0
//   0x1E0768 movaps  [rsp+0F8h+var_88], xmm1
//   0x1E076D movaps  xmmword ptr [rsp+80h], xmm0
//   0x1E0775 call    sub_312F40
//   0x1E077A mov     r9, [rsp+0F8h+var_E8]
//   0x1E077F jmp     loc_1E0863
//   0x1E0784 align 8
//   0x1E0788 mov     rax, [r13+0]
//   0x1E078C mov     rax, [rax+5E0h]
//   0x1E0793 mov     rax, [rax+60h]
//   0x1E0797 movzx   r14d, byte ptr [rax+91h]
//   0x1E079F jmp     loc_1E0584
//   0x1E07A4 align 8
//   0x1E07A8 cmp     [rsi+8], r15
//   0x1E07AC jz      loc_1E05C0
//   0x1E07B2 mov     rax, [r15]
//   0x1E07B5 test    al, 2
//   0x1E07B7 jz      short loc_1E07D0
//   0x1E07B9 jmp     loc_1E063F
//   0x1E07BE align 20h
//   0x1E07C0 mov     rax, [rax+10h]
//   0x1E07C4 jmp     loc_1E0611
//   0x1E07C9 align 10h
//   0x1E07D0 mov     rsi, [r15+8]
//   0x1E07D4 test    byte ptr [rsi], 2
//   0x1E07D7 jz      loc_1E0AF0
//   0x1E07DD and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E07E1 mov     rsi, [rax]
//   0x1E07E4 test    sil, 2
//   0x1E07E8 jz      loc_1E0B70
//   0x1E07EE mov     r15, rax
//   0x1E07F1 jmp     loc_1E0643
//   0x1E07F6 align 20h
//   0x1E0800 cmp     r11, [r15+18h]
//   0x1E0804 jl      loc_1E0629
//   0x1E080A jmp     loc_1E0662
//   0x1E080F align 10h
//   0x1E0810 xor     r15d, r15d
//   0x1E0813 cmp     dl, byte ptr ds:qword_20
//   0x1E081A jb      loc_1E0629
//   0x1E0820 mov     ecx, 18h
//   0x1E0825 cmp     r11, ds:qword_18
//   0x1E082D jge     loc_1E0662
//   0x1E0833 jmp     loc_1E0629
//   0x1E0838 align 20h
//   0x1E0840 lea     rsi, [r15+28h]
//   0x1E0844 mov     rdi, r12
//   0x1E0847 call    sub_313150
//   0x1E084C mov     r9, [rsp+0F8h+var_F0]
//   0x1E0851 mov     rcx, [rsp+0F8h+var_E8]
//   0x1E0856 mov     rax, [r9]
//   0x1E0859 cmp     [r15+18h], rax
//   0x1E085D jl      loc_1E06C4
//   0x1E0863 cmp     [rsp+0F8h+var_F8], rbp
//   0x1E0867 jle     loc_1E0A32
//   0x1E086D mov     rax, [r15]
//   0x1E0870 mov     rsi, [r13+8]
//   0x1E0874 mov     rbx, r15
//   0x1E0877 test    al, 2
//   0x1E0879 jnz     short loc_1E08A0
//   0x1E087B mov     rdx, [r15+10h]
//   0x1E087F test    byte ptr [rdx], 2
//   0x1E0882 jnz     loc_1E0AB0
//   0x1E0888 mov     rbx, rdx
//   0x1E088B mov     rdx, [rdx+8]
//   0x1E088F test    byte ptr [rdx], 2
//   0x1E0892 jz      short loc_1E0888
//   0x1E0894 nop     word ptr [rax+rax+00000000h]
//   0x1E089F nop
//   0x1E08A0 cmp     rsi, rbx
//   0x1E08A3 jz      loc_1E0A20
//   0x1E08A9 lea     rcx, [rbx+18h]
//   0x1E08AD movzx   edi, byte ptr [r15+20h]
//   0x1E08B2 mov     [rsp+0F8h+var_E8], rcx
//   0x1E08B7 cmp     [rbx+20h], dil
//   0x1E08BB jnz     loc_1E0A20
//   0x1E08C1 mov     rdi, [rsp+0F8h+var_F8]
//   0x1E08C5 cmp     [rbx+18h], rdi
//   0x1E08C9 jge     loc_1E0A20
//   0x1E08CF mov     rbp, [rbx+18h]
//   0x1E08D3 movsxd  rax, dword ptr [r15+2Ch]
//   0x1E08D7 add     rax, [r15+18h]
//   0x1E08DB cmp     rbp, rax
//   0x1E08DE jnz     loc_1E0A20
//   0x1E08E4 add     ebp, [rbx+2Ch]
//   0x1E08E7 movsxd  rbp, ebp
//   0x1E08EA cmp     rbp, rdi
//   0x1E08ED jle     loc_1E09C0
//   0x1E08F3 lea     r15, [rsp+0F8h+var_C8]
//   0x1E08F8 lea     rsi, [rbx+28h]
//   0x1E08FC mov     [rsp+0F8h+var_F0], r9
//   0x1E0901 mov     rdi, r15
//   0x1E0904 call    sub_313000
//   0x1E0909 mov     rax, cs:qword_41F238
//   0x1E0910 pxor    xmm0, xmm0
//   0x1E0914 test    r14b, r14b
//   0x1E0917 mov     [rsp+0F8h+var_90], 0
//   0x1E0920 mov     r9, [rsp+0F8h+var_F0]
//   0x1E0925 mov     qword ptr [rsp+0F8h+var_A8], rax
//   0x1E092A mov     rax, [rsp+0F8h+var_E8]
//   0x1E092F movups  [rsp+0F8h+var_A8+8], xmm0
//   0x1E0934 mov     rax, [rax]
//   0x1E0937 jnz     loc_1E0B08
//   0x1E093D mov     edx, dword ptr [rsp+0F8h+var_F8]
//   0x1E0940 lea     rcx, [rsp+0F8h+var_A8]
//   0x1E0945 mov     rdi, r15
//   0x1E0948 mov     rsi, rcx
//   0x1E094B mov     [rsp+0F8h+var_E0], rcx
//   0x1E0950 sub     edx, eax
//   0x1E0952 call    sub_3150C0
//   0x1E0957 test    al, al
//   0x1E0959 mov     r9, [rsp+0F8h+var_F0]
//   0x1E095E jz      short loc_1E0982
//   0x1E0960 mov     rsi, r15
//   0x1E0963 mov     rdi, r12
//   0x1E0966 mov     [rsp+0F8h+var_F0], r9
//   0x1E096B call    sub_314000
//   0x1E0970 test    al, al
//   0x1E0972 mov     r9, [rsp+0F8h+var_F0]
//   0x1E0977 jnz     loc_1E0CB0
//   0x1E097D mov     [rsp+0F8h+var_F0], r9
//   0x1E0982 mov     rdi, [rsp+0F8h+var_E0]
//   0x1E0987 call    sub_312F40
//   0x1E098C mov     rdi, r15
//   0x1E098F call    sub_312F40
//   0x1E0994 mov     rsi, [rsp+0F8h+var_E8]
//   0x1E0999 mov     r9, [rsp+0F8h+var_F0]
//   0x1E099E add     rsi, 10h
//   0x1E09A2 mov     rdi, r12
//   0x1E09A5 mov     [rsp+0F8h+var_F0], r9
//   0x1E09AA call    sub_314000
//   0x1E09AF mov     r9, [rsp+0F8h+var_F0]
//   0x1E09B4 test    al, al
//   0x1E09B6 jz      short loc_1E0A0F
//   0x1E09B8 mov     r15, rbx
//   0x1E09BB jmp     loc_1E086D
//   0x1E09C0 lea     rsi, [rbx+28h]
//   0x1E09C4 test    r14b, r14b
//   0x1E09C7 jz      short loc_1E09A2
//   0x1E09C9 lea     rax, [rsp+0F8h+var_88]
//   0x1E09CE mov     [rsp+0F8h+var_F0], rax
//   0x1E09D3 mov     r15, [rsp+0F8h+var_F0]
//   0x1E09D8 mov     [rsp+0F8h+var_E8], r9
//   0x1E09DD mov     rdi, r15
//   0x1E09E0 call    sub_313000
//   0x1E09E5 mov     rsi, r12
//   0x1E09E8 mov     rdi, r15
//   0x1E09EB call    sub_314000
//   0x1E09F0 test    al, al
//   0x1E09F2 mov     r9, [rsp+0F8h+var_E8]
//   0x1E09F7 jnz     loc_1E0BA8
//   0x1E09FD mov     rdi, r15
//   0x1E0A00 mov     [rsp+0F8h+var_F0], r9
//   0x1E0A05 call    sub_312F40
//   0x1E0A0A mov     r9, [rsp+0F8h+var_F0]
//   0x1E0A0F mov     rax, [rsp+0F8h+var_F8]
//   0x1E0A13 cmp     rbp, rax
//   0x1E0A16 jge     loc_1E0DFD
//   0x1E0A1C nop     dword ptr [rax+00h]
//   0x1E0A20 movsxd  rbp, dword ptr [r12+4]
//   0x1E0A25 add     rbp, [r9]
//   0x1E0A28 cmp     [rsp+0F8h+var_F8], rbp
//   0x1E0A2C jg      loc_1E05C0
//   0x1E0A32 mov     rax, [rsp+0F8h+var_F8]
//   0x1E0A36 cmp     rbp, rax
//   0x1E0A39 jle     short loc_1E0AA0
//   0x1E0A3B mov     rax, cs:qword_41F238
//   0x1E0A42 pxor    xmm0, xmm0
//   0x1E0A46 mov     [rsp+0F8h+var_70], 0
//   0x1E0A52 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1E0A57 mov     qword ptr [rsp+0F8h+var_88], rax
//   0x1E0A5C test    r14b, r14b
//   0x1E0A5F jnz     loc_1E0D90
//   0x1E0A65 lea     rax, [rsp+0F8h+var_88]
//   0x1E0A6A mov     edx, [rsp+0F8h+var_D4]
//   0x1E0A6E mov     rdi, r12
//   0x1E0A71 mov     rsi, rax
//   0x1E0A74 mov     [rsp+0F8h+var_F0], rax
//   0x1E0A79 call    sub_3150C0
//   0x1E0A7E test    al, al
//   0x1E0A80 jz      loc_1E0D80
//   0x1E0A86 cmp     dword ptr [r12], 1
//   0x1E0A8B jz      loc_1E0D80
//   0x1E0A91 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E0A96 call    sub_312F40
//   0x1E0A9B nop     dword ptr [rax+rax+00h]
//   0x1E0AA0 mov     eax, 1
//   0x1E0AA5 jmp     loc_1E05C2
//   0x1E0AAA align 10h
//   0x1E0AB0 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0AB4 mov     rbx, rax
//   0x1E0AB7 mov     rax, [rax]
//   0x1E0ABA test    al, 2
//   0x1E0ABC jnz     loc_1E08A0
//   0x1E0AC2 mov     rdi, r15
//   0x1E0AC5 cmp     rdi, [rbx+10h]
//   0x1E0AC9 jnz     loc_1E08A0
//   0x1E0ACF and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0AD3 mov     rdi, rbx
//   0x1E0AD6 mov     rdx, rax
//   0x1E0AD9 mov     rax, [rax]
//   0x1E0ADC mov     rbx, rdx
//   0x1E0ADF test    al, 2
//   0x1E0AE1 jz      short loc_1E0AC5
//   0x1E0AE3 jmp     loc_1E08A0
//   0x1E0AE8 align 10h
//   0x1E0AF0 mov     r15, rsi
//   0x1E0AF3 mov     rsi, [rsi+10h]
//   0x1E0AF7 test    byte ptr [rsi], 2
//   0x1E0AFA jnz     loc_1E0643
//   0x1E0B00 jmp     short loc_1E0AF0
//   0x1E0B02 align 8
//   0x1E0B08 mov     edx, dword ptr [rsp+0F8h+var_C8+4]
//   0x1E0B0C mov     ecx, dword ptr [rsp+0F8h+var_F8]
//   0x1E0B0F mov     rdi, r15
//   0x1E0B12 mov     [rsp+0F8h+var_F0], r9
//   0x1E0B17 sub     edx, ecx
//   0x1E0B19 add     edx, eax
//   0x1E0B1B lea     rax, [rsp+0F8h+var_A8]
//   0x1E0B20 mov     rsi, rax
//   0x1E0B23 mov     [rsp+0F8h+var_E0], rax
//   0x1E0B28 call    sub_3150C0
//   0x1E0B2D mov     r9, [rsp+0F8h+var_F0]
//   0x1E0B32 test    al, al
//   0x1E0B34 mov     [rsp+0F8h+var_D0], r9
//   0x1E0B39 jnz     loc_1E0C00
//   0x1E0B3F mov     rdi, [rsp+0F8h+var_E0]
//   0x1E0B44 call    sub_312F40
//   0x1E0B49 mov     rdi, r15
//   0x1E0B4C call    sub_312F40
//   0x1E0B51 mov     rsi, [rsp+0F8h+var_E8]
//   0x1E0B56 lea     rax, [rsp+0F8h+var_88]
//   0x1E0B5B mov     r9, [rsp+0F8h+var_D0]
//   0x1E0B60 mov     [rsp+0F8h+var_F0], rax
//   0x1E0B65 add     rsi, 10h
//   0x1E0B69 jmp     loc_1E09D3
//   0x1E0B6E align 10h
//   0x1E0B70 cmp     [rax+8], r15
//   0x1E0B74 jnz     loc_1E07EE
//   0x1E0B7A and     rsi, 0FFFFFFFFFFFFFFFCh
//   0x1E0B7E mov     r15, rsi
//   0x1E0B81 mov     rsi, [rsi]
//   0x1E0B84 test    sil, 2
//   0x1E0B88 jnz     loc_1E0643
//   0x1E0B8E mov     rbx, rax
//   0x1E0B91 mov     rax, r15
//   0x1E0B94 mov     r15, rbx
//   0x1E0B97 cmp     [rax+8], r15
//   0x1E0B9B jz      short loc_1E0B7A
//   0x1E0B9D jmp     loc_1E07EE
//   0x1E0BA2 align 8
//   0x1E0BA8 mov     rax, [rsp+0F8h+var_F0]
//   0x1E0BAD movdqu  xmm1, xmmword ptr [r12]
//   0x1E0BB3 mov     [rsp+0F8h+var_E8], r9
//   0x1E0BB8 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1E0BBF movdqa  xmm2, xmmword ptr [rax]
//   0x1E0BC3 mov     rdi, rax
//   0x1E0BC6 movaps  xmmword ptr [rax], xmm1
//   0x1E0BC9 movaps  [rsp+0F8h+var_68], xmm1
//   0x1E0BD1 movups  xmmword ptr [r12], xmm2
//   0x1E0BD6 movdqa  xmm2, xmmword ptr [rax+10h]
//   0x1E0BDB movaps  xmmword ptr [rax+10h], xmm0
//   0x1E0BDF movups  xmmword ptr [r12+10h], xmm2
//   0x1E0BE5 movaps  [rsp+0F8h+var_58], xmm0
//   0x1E0BED call    sub_312F40
//   0x1E0BF2 mov     r9, [rsp+0F8h+var_E8]
//   0x1E0BF7 jmp     loc_1E09B8
//   0x1E0BFC align 20h
//   0x1E0C00 movdqa  xmm2, [rsp+0F8h+var_A8]
//   0x1E0C06 movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1E0C0C lea     rax, [rsp+0F8h+var_88]
//   0x1E0C11 mov     rsi, r15
//   0x1E0C14 movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1E0C1A mov     rdi, rax
//   0x1E0C1D mov     [rsp+0F8h+var_F0], rax
//   0x1E0C22 movaps  [rsp+0F8h+var_C8], xmm2
//   0x1E0C27 movdqa  xmm2, xmmword ptr [rsp+60h]
//   0x1E0C2D movaps  [rsp+0F8h+var_68], xmm1
//   0x1E0C35 movaps  [rsp+0F8h+var_58], xmm0
//   0x1E0C3D movaps  [rsp+0F8h+var_B8], xmm2
//   0x1E0C42 movaps  [rsp+0F8h+var_A8], xmm1
//   0x1E0C47 movaps  xmmword ptr [rsp+60h], xmm0
//   0x1E0C4C call    sub_313000
//   0x1E0C51 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E0C56 mov     rsi, r12
//   0x1E0C59 call    sub_314000
//   0x1E0C5E test    al, al
//   0x1E0C60 jz      short loc_1E0CD0
//   0x1E0C62 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1E0C68 movdqu  xmm1, xmmword ptr [r12]
//   0x1E0C6E movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1E0C75 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E0C7A movups  xmmword ptr [r12], xmm2
//   0x1E0C7F movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1E0C88 movaps  [rsp+0F8h+var_68], xmm1
//   0x1E0C90 movups  xmmword ptr [r12+10h], xmm2
//   0x1E0C96 movaps  [rsp+0F8h+var_58], xmm0
//   0x1E0C9E movaps  [rsp+0F8h+var_88], xmm1
//   0x1E0CA3 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1E0CAB call    sub_312F40
//   0x1E0CB0 mov     rdi, [rsp+0F8h+var_E0]
//   0x1E0CB5 call    sub_312F40
//   0x1E0CBA mov     rdi, r15
//   0x1E0CBD call    sub_312F40
//   0x1E0CC2 jmp     loc_1E0AA0
//   0x1E0CC7 align 10h
//   0x1E0CD0 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E0CD5 call    sub_312F40
//   0x1E0CDA mov     rdi, [rsp+0F8h+var_E0]
//   0x1E0CDF call    sub_312F40
//   0x1E0CE4 mov     rdi, r15
//   0x1E0CE7 call    sub_312F40
//   0x1E0CEC mov     rsi, [rsp+0F8h+var_E8]
//   0x1E0CF1 mov     r9, [rsp+0F8h+var_D0]
//   0x1E0CF6 add     rsi, 10h
//   0x1E0CFA jmp     loc_1E09D3
//   0x1E0CFF align 20h
//   0x1E0D00 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E0D05 call    sub_312F40
//   0x1E0D0A jmp     loc_1E05C0
//   0x1E0D0F align 10h
//   0x1E0D10 mov     edx, esi
//   0x1E0D12 mov     rdi, r12
//   0x1E0D15 sub     edx, eax
//   0x1E0D17 lea     rax, [rsp+0F8h+var_88]
//   0x1E0D1C add     edx, [r12+4]
//   0x1E0D21 mov     rsi, rax
//   0x1E0D24 mov     [rsp+0F8h+var_F0], rax
//   0x1E0D29 call    sub_3150C0
//   0x1E0D2E test    al, al
//   0x1E0D30 jz      short loc_1E0D00
//   0x1E0D32 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1E0D38 movdqu  xmm1, xmmword ptr [r12]
//   0x1E0D3E movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1E0D45 mov     r9, [rsp+0F8h+var_E8]
//   0x1E0D4A movups  xmmword ptr [r12], xmm2
//   0x1E0D4F movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1E0D58 movaps  [rsp+0F8h+var_68], xmm1
//   0x1E0D60 movaps  [rsp+0F8h+var_58], xmm0
//   0x1E0D68 movups  xmmword ptr [r12+10h], xmm2
//   0x1E0D6E movaps  [rsp+0F8h+var_88], xmm1
//   0x1E0D73 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1E0D7B jmp     loc_1E071C
//   0x1E0D80 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E0D85 call    sub_312F40
//   0x1E0D8A jmp     loc_1E05C0
//   0x1E0D8F align 10h
//   0x1E0D90 mov     eax, [rsp+0F8h+var_D4]
//   0x1E0D94 mov     edx, [r12+4]
//   0x1E0D99 mov     rdi, r12
//   0x1E0D9C sub     edx, eax
//   0x1E0D9E lea     rax, [rsp+0F8h+var_88]
//   0x1E0DA3 mov     rsi, rax
//   0x1E0DA6 mov     [rsp+0F8h+var_F0], rax
//   0x1E0DAB call    sub_3150C0
//   0x1E0DB0 test    al, al
//   0x1E0DB2 jz      short loc_1E0D80
//   0x1E0DB4 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1E0DBA movdqu  xmm1, xmmword ptr [r12]
//   0x1E0DC0 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1E0DC7 movups  xmmword ptr [r12], xmm2
//   0x1E0DCC movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1E0DD5 movaps  [rsp+0F8h+var_68], xmm1
//   0x1E0DDD movaps  [rsp+0F8h+var_58], xmm0
//   0x1E0DE5 movups  xmmword ptr [r12+10h], xmm2
//   0x1E0DEB movaps  [rsp+0F8h+var_88], xmm1
//   0x1E0DF0 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1E0DF8 jmp     loc_1E0A86
//   0x1E0DFD xor     eax, eax
//   0x1E0DFF pxor    xmm0, xmm0
//   0x1E0E03 xor     edx, edx
//   0x1E0E05 mov     rdi, r12
//   0x1E0E08 mov     dword ptr [rsp+0F8h+var_88], eax
//   0x1E0E0C mov     eax, [rsp+0F8h+var_D4]
//   0x1E0E10 mov     [rsp+0F8h+var_70], rdx
//   0x1E0E18 mov     dword ptr [rsp+0F8h+var_88+4], eax
//   0x1E0E1C lea     rax, [rsp+0F8h+var_88]
//   0x1E0E21 mov     rsi, rax
//   0x1E0E24 mov     [rsp+0F8h+var_F0], rax
//   0x1E0E29 mov     rbx, rax
//   0x1E0E2C movups  [rsp+0F8h+var_88+8], xmm0
//   0x1E0E31 call    sub_313150
//   0x1E0E36 mov     rdi, rbx
//   0x1E0E39 call    sub_312F40
//   0x1E0E3E mov     rdi, r12
//   0x1E0E41 call    sub_312F40
//   0x1E0E46 mov     dword ptr [r12], 8
//   0x1E0E4E jmp     loc_1E0AA0
//   0x1E0E53 call    ___stack_chk_fail
//   0x1E0E58 mov     rbx, rax
//   0x1E0E5B jmp     loc_443D4
//   0x1E0E60 mov     rbx, rax
//   0x1E0E63 jmp     loc_443F9
//   0x1E0E68 mov     rbx, rax
//   0x1E0E6B jmp     loc_44432
//   0x1E0E70 mov     rbx, rax
//   0x1E0E73 jmp     loc_4445F
//   0x1E0E78 mov     rbx, rax
//   0x1E0E7B jmp     loc_44428
//   0x1E0E80 mov     rbx, rax
//   0x1E0E83 jmp     loc_44489
// ============================================================

void sub_1E0540(/* signature unknown */)
{
    // see disassembly above
}

