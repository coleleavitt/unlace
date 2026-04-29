// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E02B0
// Name:           sub_1E02B0
// Function size:  1690 bytes (407 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E02B0 push    r15
//   0x1E02B2 mov     r10, rsi
//   0x1E02B5 push    r14
//   0x1E02B7 mov     r14, r8
//   0x1E02BA push    r13
//   0x1E02BC push    r12
//   0x1E02BE push    rbp
//   0x1E02BF mov     rbp, rcx
//   0x1E02C2 push    rbx
//   0x1E02C3 mov     rbx, rdx
//   0x1E02C6 movsxd  rdx, r9d
//   0x1E02C9 lea     r13, [rbx+18h]
//   0x1E02CD mov     r9, rbx
//   0x1E02D0 sub     rsp, 0B8h
//   0x1E02D7 movdqu  xmm3, xmmword ptr [rbx+18h]
//   0x1E02DC mov     r8, [rbx+18h]
//   0x1E02E0 movzx   ecx, byte ptr [r13+8]
//   0x1E02E5 movzx   eax, byte ptr [rbp+8]
//   0x1E02E9 mov     [rsp+0E8h+var_D8], rdi
//   0x1E02EE mov     esi, [r13+14h]
//   0x1E02F2 movsxd  rdi, dword ptr [r14+4]
//   0x1E02F6 add     r8, rdx
//   0x1E02F9 mov     r12, fs:28h
//   0x1E0302 mov     [rsp+0E8h+var_40], r12
//   0x1E030A mov     r12, rdx
//   0x1E030D movaps  [rsp+0E8h+var_E8], xmm3
//   0x1E0311 cmp     al, cl
//   0x1E0313 jz      loc_1E0410
//   0x1E0319 cmp     al, [r13+8]
//   0x1E031D jz      short loc_1E0350
//   0x1E031F xor     ebp, ebp
//   0x1E0321 mov     rax, [rsp+0E8h+var_40]
//   0x1E0329 sub     rax, fs:28h
//   0x1E0332 jnz     loc_1E0935
//   0x1E0338 add     rsp, 0B8h
//   0x1E033F mov     eax, ebp
//   0x1E0341 pop     rbx
//   0x1E0342 pop     rbp
//   0x1E0343 pop     r12
//   0x1E0345 pop     r13
//   0x1E0347 pop     r14
//   0x1E0349 pop     r15
//   0x1E034B retn
//   0x1E034C align 10h
//   0x1E0350 mov     rcx, [rbp+0]
//   0x1E0354 mov     rax, [rbx+18h]
//   0x1E0358 mov     [rsp+0E8h+var_C0], r10
//   0x1E035D mov     [rsp+0E8h+var_C8], r9
//   0x1E0362 mov     [rsp+0E8h+var_D0], r8
//   0x1E0367 cmp     rcx, rax
//   0x1E036A jl      short loc_1E031F
//   0x1E036C add     rdi, rcx
//   0x1E036F add     rdx, rax
//   0x1E0372 cmp     rdi, rdx
//   0x1E0375 jg      short loc_1E031F
//   0x1E0377 lea     rax, [r13+10h]
//   0x1E037B lea     r15, [rsp+0E8h+var_A8]
//   0x1E0380 mov     rsi, rax
//   0x1E0383 mov     rdi, r15
//   0x1E0386 mov     [rsp+0E8h+var_B8], rax
//   0x1E038B call    sub_30DB40
//   0x1E0390 mov     rax, cs:qword_3FDBA0
//   0x1E0397 pxor    xmm0, xmm0
//   0x1E039B cmp     byte ptr [r13+8], 5
//   0x1E03A0 mov     r8, [rsp+0E8h+var_D0]
//   0x1E03A5 mov     r9, [rsp+0E8h+var_C8]
//   0x1E03AA movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E03AF mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E03B4 mov     r10, [rsp+0E8h+var_C0]
//   0x1E03B9 mov     [rsp+0E8h+var_70], 0
//   0x1E03C2 jz      loc_1E0770
//   0x1E03C8 lea     rax, [rsp+0E8h+var_88]
//   0x1E03CD mov     edx, r12d
//   0x1E03D0 mov     rdi, r15
//   0x1E03D3 mov     [rsp+0E8h+var_B0], r10
//   0x1E03D8 mov     rsi, rax
//   0x1E03DB mov     [rsp+0E8h+var_C0], r9
//   0x1E03E0 mov     [rsp+0E8h+var_C8], r8
//   0x1E03E5 mov     [rsp+0E8h+var_D0], rax
//   0x1E03EA call    sub_30FC00
//   0x1E03EF test    al, al
//   0x1E03F1 jnz     loc_1E05E8
//   0x1E03F7 xor     ebp, ebp
//   0x1E03F9 mov     rdi, [rsp+0E8h+var_D0]
//   0x1E03FE call    sub_30DA80
//   0x1E0403 mov     rdi, r15
//   0x1E0406 call    sub_30DA80
//   0x1E040B jmp     loc_1E0321
//   0x1E0410 mov     r11, [rbp+0]
//   0x1E0414 mov     byte ptr [rsp+0E8h+var_D0], cl
//   0x1E0418 cmp     r8, r11
//   0x1E041B jg      loc_1E0319
//   0x1E0421 sub     esi, r12d
//   0x1E0424 movsxd  r15, edi
//   0x1E0427 movsxd  rsi, esi
//   0x1E042A add     r15, r11
//   0x1E042D add     rsi, r8
//   0x1E0430 cmp     rsi, r15
//   0x1E0433 jl      loc_1E0319
//   0x1E0439 lea     r15, [rsp+0E8h+var_A8]
//   0x1E043E lea     rsi, [rbx+28h]
//   0x1E0442 mov     [rsp+0E8h+var_B8], r10
//   0x1E0447 mov     rdi, r15
//   0x1E044A mov     [rsp+0E8h+var_C8], r8
//   0x1E044F mov     [rsp+0E8h+var_C0], rbx
//   0x1E0454 call    sub_30DB40
//   0x1E0459 mov     rax, cs:qword_3FDBA0
//   0x1E0460 pxor    xmm0, xmm0
//   0x1E0464 cmp     byte ptr [r13+8], 5
//   0x1E0469 mov     r8, [rsp+0E8h+var_C8]
//   0x1E046E mov     r9, [rsp+0E8h+var_C0]
//   0x1E0473 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E0478 mov     r10, [rsp+0E8h+var_B8]
//   0x1E047D movzx   ecx, byte ptr [rsp+0E8h+var_D0]
//   0x1E0482 mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E0487 mov     [rsp+0E8h+var_70], 0
//   0x1E0490 jz      loc_1E06D0
//   0x1E0496 lea     rax, [rsp+0E8h+var_88]
//   0x1E049B mov     edx, r12d
//   0x1E049E mov     rdi, r15
//   0x1E04A1 mov     [rsp+0E8h+var_B0], r10
//   0x1E04A6 mov     rsi, rax
//   0x1E04A9 mov     byte ptr [rsp+0E8h+var_B8], cl
//   0x1E04AD mov     [rsp+0E8h+var_C0], r9
//   0x1E04B2 mov     [rsp+0E8h+var_C8], r8
//   0x1E04B7 mov     [rsp+0E8h+var_D0], rax
//   0x1E04BC call    sub_30FC00
//   0x1E04C1 test    al, al
//   0x1E04C3 jnz     short loc_1E04E0
//   0x1E04C5 xor     ebp, ebp
//   0x1E04C7 mov     rdi, [rsp+0E8h+var_D0]
//   0x1E04CC call    sub_30DA80
//   0x1E04D1 mov     rdi, r15
//   0x1E04D4 call    sub_30DA80
//   0x1E04D9 jmp     loc_1E0321
//   0x1E04DE align 20h
//   0x1E04E0 mov     r8, [rsp+0E8h+var_C8]
//   0x1E04E5 mov     r9, [rsp+0E8h+var_C0]
//   0x1E04EA movzx   ecx, byte ptr [rsp+0E8h+var_B8]
//   0x1E04EF mov     r10, [rsp+0E8h+var_B0]
//   0x1E04F4 mov     rsi, [rbp+0]
//   0x1E04F8 cmp     r8, rsi
//   0x1E04FB jg      short loc_1E04C5
//   0x1E04FD movsxd  rdx, dword ptr [rsp+0E8h+var_88+4]
//   0x1E0502 movsxd  rax, dword ptr [r14+4]
//   0x1E0506 add     rdx, r8
//   0x1E0509 add     rax, rsi
//   0x1E050C cmp     rdx, rax
//   0x1E050F jl      short loc_1E04C5
//   0x1E0511 cmp     cl, 5
//   0x1E0514 jz      loc_1E084D
//   0x1E051A mov     edx, esi
//   0x1E051C sub     edx, r8d
//   0x1E051F mov     rdi, [rsp+0E8h+var_D0]
//   0x1E0524 mov     rsi, r14
//   0x1E0527 mov     [rsp+0E8h+var_C0], r9
//   0x1E052C mov     [rsp+0E8h+var_C8], r8
//   0x1E0531 call    sub_30EF20
//   0x1E0536 mov     ebp, eax
//   0x1E0538 test    al, al
//   0x1E053A jz      short loc_1E04C5
//   0x1E053C cmp     dword ptr [rsp+0E8h+var_A8], 1
//   0x1E0541 mov     r8, [rsp+0E8h+var_C8]
//   0x1E0546 mov     r9, [rsp+0E8h+var_C0]
//   0x1E054B jz      loc_1E0804
//   0x1E0551 lea     rdi, [r13+10h]
//   0x1E0555 mov     rsi, r15
//   0x1E0558 mov     [rsp+0E8h+var_C0], r9
//   0x1E055D mov     [rsp+0E8h+var_C8], r8
//   0x1E0562 call    sub_30DC90
//   0x1E0567 mov     rax, [rbx]
//   0x1E056A mov     rdi, [rsp+0E8h+var_D8]
//   0x1E056F mov     r8, [rsp+0E8h+var_C8]
//   0x1E0574 mov     r9, [rsp+0E8h+var_C0]
//   0x1E0579 test    al, 2
//   0x1E057B lea     r12, [rdi+8]
//   0x1E057F jnz     short loc_1E05B0
//   0x1E0581 mov     rdx, [rbx+10h]
//   0x1E0585 test    byte ptr [rdx], 2
//   0x1E0588 jnz     loc_1E08B4
//   0x1E058E mov     r9, rdx
//   0x1E0591 mov     rdx, [rdx+8]
//   0x1E0595 test    byte ptr [rdx], 2
//   0x1E0598 jz      short loc_1E058E
//   0x1E059A mov     rax, [rsp+0E8h+var_D8]
//   0x1E059F lea     r12, [rax+8]
//   0x1E05A3 nop     word ptr [rax+rax+00000000h]
//   0x1E05AE xchg    ax, ax
//   0x1E05B0 mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1E05B5 mov     qword ptr [rsp+0E8h+var_E8], r8
//   0x1E05B9 mov     rsi, r9
//   0x1E05BC mov     rdi, r12
//   0x1E05BF mov     rax, qword ptr [rsp+0E8h+var_E8]
//   0x1E05C3 mov     r8, [rsp+0E8h+var_D0]
//   0x1E05C8 mov     qword ptr [rsp+0E8h+var_E8+8], rdx
//   0x1E05CD mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1E05D2 mov     rcx, rdx
//   0x1E05D5 mov     rdx, rax
//   0x1E05D8 call    sub_1DF9A0
//   0x1E05DD jmp     loc_1E04C7
//   0x1E05E2 align 8
//   0x1E05E8 mov     r8, [rsp+0E8h+var_C8]
//   0x1E05ED mov     r9, [rsp+0E8h+var_C0]
//   0x1E05F2 mov     r10, [rsp+0E8h+var_B0]
//   0x1E05F7 mov     rcx, [rbp+0]
//   0x1E05FB mov     rax, [rbx+18h]
//   0x1E05FF cmp     rcx, rax
//   0x1E0602 jl      loc_1E03F7
//   0x1E0608 movsxd  rdx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E060D movsxd  rsi, dword ptr [r14+4]
//   0x1E0611 add     rdx, rax
//   0x1E0614 add     rsi, rcx
//   0x1E0617 cmp     rdx, rsi
//   0x1E061A jl      loc_1E03F7
//   0x1E0620 cmp     byte ptr [r13+8], 5
//   0x1E0625 jz      loc_1E0865
//   0x1E062B mov     edx, ecx
//   0x1E062D sub     edx, eax
//   0x1E062F mov     rsi, r14
//   0x1E0632 mov     rdi, r15
//   0x1E0635 mov     [rsp+0E8h+var_C0], r9
//   0x1E063A mov     [rsp+0E8h+var_C8], r8
//   0x1E063F call    sub_30EF20
//   0x1E0644 mov     ebp, eax
//   0x1E0646 test    al, al
//   0x1E0648 jz      loc_1E03F7
//   0x1E064E mov     rdi, [rsp+0E8h+var_B8]
//   0x1E0653 mov     rsi, r15
//   0x1E0656 call    sub_30DC90
//   0x1E065B mov     rax, [rbx]
//   0x1E065E mov     r8, [rsp+0E8h+var_C8]
//   0x1E0663 mov     r9, [rsp+0E8h+var_C0]
//   0x1E0668 test    al, 2
//   0x1E066A jnz     short loc_1E0690
//   0x1E066C mov     rdx, [rbx+10h]
//   0x1E0670 test    byte ptr [rdx], 2
//   0x1E0673 jnz     loc_1E087D
//   0x1E0679 mov     r9, rdx
//   0x1E067C mov     rdx, [rdx+8]
//   0x1E0680 test    byte ptr [rdx], 2
//   0x1E0683 jz      short loc_1E0679
//   0x1E0685 nop     word ptr [rax+rax+00000000h]
//   0x1E0690 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E0695 jz      loc_1E03F9
//   0x1E069B mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1E06A0 mov     rdi, [rsp+0E8h+var_D8]
//   0x1E06A5 mov     qword ptr [rsp+0E8h+var_E8], r8
//   0x1E06A9 mov     rsi, r9
//   0x1E06AC mov     r8, [rsp+0E8h+var_D0]
//   0x1E06B1 mov     qword ptr [rsp+0E8h+var_E8+8], rdx
//   0x1E06B6 mov     rdx, qword ptr [rsp+0E8h+var_E8]
//   0x1E06BA add     rdi, 8
//   0x1E06BE mov     rcx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1E06C3 call    sub_1DF9A0
//   0x1E06C8 jmp     loc_1E03F9
//   0x1E06CD align 10h
//   0x1E06D0 mov     rax, [r10+60h]
//   0x1E06D4 cmp     byte ptr [rax+91h], 0
//   0x1E06DB jz      loc_1E0496
//   0x1E06E1 mov     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E06E5 lea     rax, [rsp+0E8h+var_88]
//   0x1E06EA mov     rdi, r15
//   0x1E06ED mov     byte ptr [rsp+0E8h+var_B8], cl
//   0x1E06F1 mov     rsi, rax
//   0x1E06F4 mov     [rsp+0E8h+var_B0], r10
//   0x1E06F9 sub     edx, r12d
//   0x1E06FC mov     [rsp+0E8h+var_C0], r9
//   0x1E0701 mov     [rsp+0E8h+var_C8], r8
//   0x1E0706 mov     [rsp+0E8h+var_D0], rax
//   0x1E070B call    sub_30FC00
//   0x1E0710 test    al, al
//   0x1E0712 mov     r8, [rsp+0E8h+var_C8]
//   0x1E0717 mov     r9, [rsp+0E8h+var_C0]
//   0x1E071C movzx   ecx, byte ptr [rsp+0E8h+var_B8]
//   0x1E0721 mov     r10, [rsp+0E8h+var_B0]
//   0x1E0726 jz      loc_1E04C5
//   0x1E072C movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E0732 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E0738 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E073E movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E0743 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E0749 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E0751 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E0759 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E075E movaps  [rsp+0E8h+var_88], xmm1
//   0x1E0763 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E0768 jmp     loc_1E04F4
//   0x1E076D align 10h
//   0x1E0770 mov     rax, [r10+60h]
//   0x1E0774 cmp     byte ptr [rax+91h], 0
//   0x1E077B jz      loc_1E03C8
//   0x1E0781 mov     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E0785 lea     rax, [rsp+0E8h+var_88]
//   0x1E078A mov     rdi, r15
//   0x1E078D mov     [rsp+0E8h+var_B0], r10
//   0x1E0792 mov     rsi, rax
//   0x1E0795 mov     [rsp+0E8h+var_C0], r9
//   0x1E079A sub     edx, r12d
//   0x1E079D mov     [rsp+0E8h+var_C8], r8
//   0x1E07A2 mov     [rsp+0E8h+var_D0], rax
//   0x1E07A7 call    sub_30FC00
//   0x1E07AC test    al, al
//   0x1E07AE mov     r8, [rsp+0E8h+var_C8]
//   0x1E07B3 mov     r9, [rsp+0E8h+var_C0]
//   0x1E07B8 mov     r10, [rsp+0E8h+var_B0]
//   0x1E07BD jz      loc_1E03F7
//   0x1E07C3 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E07C9 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E07CF movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E07D5 movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E07DA movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E07E0 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E07E8 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E07F0 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E07F5 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E07FA movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E07FF jmp     loc_1E05F7
//   0x1E0804 mov     r12, [rsp+0E8h+var_D8]
//   0x1E0809 mov     rax, [rbx]
//   0x1E080C mov     r13, rbx
//   0x1E080F add     r12, 8
//   0x1E0813 test    al, 2
//   0x1E0815 jnz     short loc_1E0830
//   0x1E0817 mov     rdx, [rbx+10h]
//   0x1E081B test    byte ptr [rdx], 2
//   0x1E081E jnz     loc_1E08F8
//   0x1E0824 mov     r13, rdx
//   0x1E0827 mov     rdx, [rdx+8]
//   0x1E082B test    byte ptr [rdx], 2
//   0x1E082E jz      short loc_1E0824
//   0x1E0830 mov     rsi, rbx
//   0x1E0833 mov     rdi, r12
//   0x1E0836 mov     [rsp+0E8h+var_D8], r8
//   0x1E083B call    sub_1DF190
//   0x1E0840 mov     r8, [rsp+0E8h+var_D8]
//   0x1E0845 mov     r9, r13
//   0x1E0848 jmp     loc_1E05B0
//   0x1E084D mov     rcx, [r10+60h]
//   0x1E0851 sub     edx, eax
//   0x1E0853 cmp     byte ptr [rcx+91h], 0
//   0x1E085A jnz     loc_1E051F
//   0x1E0860 jmp     loc_1E051A
//   0x1E0865 mov     rdi, [r10+60h]
//   0x1E0869 sub     edx, esi
//   0x1E086B cmp     byte ptr [rdi+91h], 0
//   0x1E0872 jnz     loc_1E062F
//   0x1E0878 jmp     loc_1E062B
//   0x1E087D and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0881 mov     rdx, [rax]
//   0x1E0884 test    dl, 2
//   0x1E0887 jz      short loc_1E0894
//   0x1E0889 mov     r9, rax
//   0x1E088C jmp     loc_1E0690
//   0x1E0891 mov     rax, rcx
//   0x1E0894 cmp     r9, [rax+10h]
//   0x1E0898 jnz     short loc_1E0889
//   0x1E089A mov     rcx, rdx
//   0x1E089D mov     r9, rax
//   0x1E08A0 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E08A4 mov     rdx, [rcx]
//   0x1E08A7 test    dl, 2
//   0x1E08AA jz      short loc_1E0891
//   0x1E08AC mov     r9, rcx
//   0x1E08AF jmp     loc_1E0690
//   0x1E08B4 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E08B8 mov     rdx, [rax]
//   0x1E08BB test    dl, 2
//   0x1E08BE jz      short loc_1E08C8
//   0x1E08C0 mov     r9, rax
//   0x1E08C3 jmp     loc_1E05B0
//   0x1E08C8 cmp     r9, [rax+10h]
//   0x1E08CC jnz     short loc_1E08F0
//   0x1E08CE and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1E08D2 mov     r9, rdx
//   0x1E08D5 mov     rdx, [rdx]
//   0x1E08D8 test    dl, 2
//   0x1E08DB jnz     loc_1E059A
//   0x1E08E1 mov     rcx, rax
//   0x1E08E4 mov     rax, r9
//   0x1E08E7 mov     r9, rcx
//   0x1E08EA cmp     r9, [rax+10h]
//   0x1E08EE jz      short loc_1E08CE
//   0x1E08F0 mov     r9, rax
//   0x1E08F3 jmp     loc_1E059A
//   0x1E08F8 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E08FC mov     rcx, rbx
//   0x1E08FF mov     r13, rax
//   0x1E0902 mov     rax, [rax]
//   0x1E0905 test    al, 2
//   0x1E0907 jnz     loc_1E0830
//   0x1E090D cmp     [r13+10h], rcx
//   0x1E0911 jnz     loc_1E0830
//   0x1E0917 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E091B mov     rdx, rax
//   0x1E091E mov     rax, [rax]
//   0x1E0921 test    al, 2
//   0x1E0923 jz      short loc_1E092D
//   0x1E0925 mov     r13, rdx
//   0x1E0928 jmp     loc_1E0830
//   0x1E092D mov     rcx, r13
//   0x1E0930 mov     r13, rdx
//   0x1E0933 jmp     short loc_1E090D
//   0x1E0935 call    ___stack_chk_fail
//   0x1E093A mov     rbx, rax
//   0x1E093D jmp     loc_41708
//   0x1E0942 mov     rbx, rax
//   0x1E0945 jmp     loc_41735
// ============================================================

void sub_1E02B0(/* signature unknown */)
{
    // see disassembly above
}

