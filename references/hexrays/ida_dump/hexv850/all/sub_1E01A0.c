// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E01A0
// Name:           sub_1E01A0
// Function size:  3320 bytes (788 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E01A0 push    r15
//   0x1E01A2 push    r14
//   0x1E01A4 push    r13
//   0x1E01A6 push    r12
//   0x1E01A8 push    rbp
//   0x1E01A9 mov     rbp, rsi
//   0x1E01AC push    rbx
//   0x1E01AD mov     rbx, rdi
//   0x1E01B0 sub     rsp, 0B8h
//   0x1E01B7 mov     rax, [rdx]
//   0x1E01BA movdqu  xmm3, xmmword ptr [rdx]
//   0x1E01BE mov     rsi, fs:28h
//   0x1E01C7 mov     [rsp+0E8h+var_40], rsi
//   0x1E01CF mov     rsi, rcx
//   0x1E01D2 lea     r13, [rsp+0E8h+var_A8]
//   0x1E01D7 mov     r15, [rbp+0]
//   0x1E01DB movzx   r14d, byte ptr [rdx+8]
//   0x1E01E0 mov     rdi, r13
//   0x1E01E3 mov     [rsp+0E8h+var_E0], rax
//   0x1E01E8 movaps  [rsp+0E8h+var_B8], xmm3
//   0x1E01ED call    sub_30D380
//   0x1E01F2 movsxd  r12, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E01F7 mov     rdi, [rsp+0E8h+var_E0]
//   0x1E01FC mov     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E0201 mov     rax, r12
//   0x1E0204 add     r12, rdi
//   0x1E0207 cmp     r14b, 5
//   0x1E020B jnz     short loc_1E0227
//   0x1E020D mov     rdx, [rbx]
//   0x1E0210 mov     rdx, [rdx+5E0h]
//   0x1E0217 mov     rdx, [rdx+60h]
//   0x1E021B movzx   esi, byte ptr [rdx+91h]
//   0x1E0222 mov     byte ptr [rsp+0E8h+var_D8], sil
//   0x1E0227 cmp     r15, [rbx+8]
//   0x1E022B jz      loc_1E03DE
//   0x1E0231 lea     rcx, [r15+18h]
//   0x1E0235 cmp     [r15+20h], r14b
//   0x1E0239 jnz     loc_1E03DE
//   0x1E023F cmp     [r15+18h], r12
//   0x1E0243 jge     loc_1E03DE
//   0x1E0249 movsxd  rdi, dword ptr [rcx+14h]
//   0x1E024D mov     rsi, [r15+18h]
//   0x1E0251 mov     r9, [rsp+0E8h+var_E0]
//   0x1E0256 mov     [rsp+0E8h+var_C0], rdi
//   0x1E025B mov     rdx, rdi
//   0x1E025E add     rdi, rsi
//   0x1E0261 cmp     rsi, r9
//   0x1E0264 jl      loc_1E08A8
//   0x1E026A jg      loc_1E0938
//   0x1E0270 cmp     edx, eax
//   0x1E0272 jg      loc_1E09E6
//   0x1E0278 jge     loc_1E0852
//   0x1E027E mov     rax, cs:qword_3FFAC0
//   0x1E0285 pxor    xmm0, xmm0
//   0x1E0289 cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E028E mov     [rsp+0E8h+var_70], 0
//   0x1E0297 mov     [rsp+0E8h+var_D0], rcx
//   0x1E029C mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E02A1 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E02A6 jnz     loc_1E03F0
//   0x1E02AC lea     rax, [rsp+0E8h+var_88]
//   0x1E02B1 mov     rdi, r13
//   0x1E02B4 mov     rsi, rax
//   0x1E02B7 mov     [rsp+0E8h+var_C8], rax
//   0x1E02BC call    sub_30F440
//   0x1E02C1 test    al, al
//   0x1E02C3 mov     rcx, [rsp+0E8h+var_D0]
//   0x1E02C8 jz      loc_1E0412
//   0x1E02CE lea     rdi, [rcx+10h]
//   0x1E02D2 mov     rsi, r13
//   0x1E02D5 mov     [rsp+0E8h+var_D0], rcx
//   0x1E02DA call    sub_30F340
//   0x1E02DF mov     rax, [r15]
//   0x1E02E2 mov     rcx, [rsp+0E8h+var_D0]
//   0x1E02E7 mov     rdx, rax
//   0x1E02EA and     edx, 2
//   0x1E02ED cmp     dword ptr [rcx+10h], 1
//   0x1E02F1 jnz     loc_1E0458
//   0x1E02F7 lea     rdi, [rbx+8]
//   0x1E02FB mov     rcx, r15
//   0x1E02FE cmp     [rbp+0], r15
//   0x1E0302 jz      loc_1E0690
//   0x1E0308 test    rdx, rdx
//   0x1E030B jz      loc_1E0640
//   0x1E0311 mov     rsi, r15
//   0x1E0314 mov     [rsp+0E8h+var_D0], rcx
//   0x1E0319 call    sub_1DE9D0
//   0x1E031E mov     r15, [rsp+0E8h+var_D0]
//   0x1E0323 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E0328 jnz     loc_1E05B0
//   0x1E032E mov     rdx, [rbx+8]
//   0x1E0332 lea     rax, [rbx+8]
//   0x1E0336 mov     [rsp+0E8h+var_D8], rax
//   0x1E033B cmp     r15, rdx
//   0x1E033E jz      loc_1E03D4
//   0x1E0344 lea     rcx, [r15+18h]
//   0x1E0348 cmp     [r15+20h], r14b
//   0x1E034C jnz     loc_1E0618
//   0x1E0352 movsxd  rax, dword ptr [rcx+14h]
//   0x1E0356 add     rax, [r15+18h]
//   0x1E035A cmp     rax, r12
//   0x1E035D jg      loc_1E0618
//   0x1E0363 mov     rax, [r15]
//   0x1E0366 mov     rsi, rax
//   0x1E0369 and     esi, 2
//   0x1E036C cmp     dword ptr [rcx+10h], 8
//   0x1E0370 jz      loc_1E04C0
//   0x1E0376 mov     rdx, r15
//   0x1E0379 cmp     r15, [rbp+0]
//   0x1E037D jz      loc_1E0490
//   0x1E0383 test    rsi, rsi
//   0x1E0386 jnz     short loc_1E03B0
//   0x1E0388 mov     rcx, [r15+10h]
//   0x1E038C test    byte ptr [rcx], 2
//   0x1E038F jz      loc_1E04F0
//   0x1E0395 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0399 mov     rdx, rax
//   0x1E039C mov     rax, [rax]
//   0x1E039F test    al, 2
//   0x1E03A1 jz      loc_1E0660
//   0x1E03A7 nop     word ptr [rax+rax+00000000h]
//   0x1E03B0 mov     rdi, [rsp+0E8h+var_D8]
//   0x1E03B5 mov     rsi, r15
//   0x1E03B8 mov     [rsp+0E8h+var_E0], rdx
//   0x1E03BD call    sub_1DE9D0
//   0x1E03C2 mov     r15, [rsp+0E8h+var_E0]
//   0x1E03C7 mov     rdx, [rbx+8]
//   0x1E03CB cmp     rdx, r15
//   0x1E03CE jnz     loc_1E0344
//   0x1E03D4 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E03D9 call    sub_30D2C0
//   0x1E03DE mov     [rbp+0], r15
//   0x1E03E2 mov     ebx, 1
//   0x1E03E7 jmp     short loc_1E041E
//   0x1E03E9 align 10h
//   0x1E03F0 mov     eax, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E03F4 lea     rsi, [rsp+0E8h+var_88]
//   0x1E03F9 mov     rdi, r13
//   0x1E03FC mov     [rsp+0E8h+var_C8], rsi
//   0x1E0401 sub     eax, edx
//   0x1E0403 mov     edx, eax
//   0x1E0405 call    sub_30F440
//   0x1E040A test    al, al
//   0x1E040C jnz     loc_1E0560
//   0x1E0412 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E0417 call    sub_30D2C0
//   0x1E041C xor     ebx, ebx
//   0x1E041E mov     rdi, r13
//   0x1E0421 call    sub_30D2C0
//   0x1E0426 mov     rax, [rsp+0E8h+var_40]
//   0x1E042E sub     rax, fs:28h
//   0x1E0437 jnz     loc_1E0E6B
//   0x1E043D add     rsp, 0B8h
//   0x1E0444 mov     eax, ebx
//   0x1E0446 pop     rbx
//   0x1E0447 pop     rbp
//   0x1E0448 pop     r12
//   0x1E044A pop     r13
//   0x1E044C pop     r14
//   0x1E044E pop     r15
//   0x1E0450 retn
//   0x1E0451 align 8
//   0x1E0458 test    rdx, rdx
//   0x1E045B jnz     loc_1E0323
//   0x1E0461 mov     rdx, [r15+10h]
//   0x1E0465 test    byte ptr [rdx], 2
//   0x1E0468 jz      loc_1E0730
//   0x1E046E and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0472 mov     rdx, [rax]
//   0x1E0475 test    dl, 2
//   0x1E0478 jz      loc_1E0783
//   0x1E047E mov     r15, rax
//   0x1E0481 jmp     loc_1E0323
//   0x1E0486 align 10h
//   0x1E0490 test    rsi, rsi
//   0x1E0493 jz      loc_1E0518
//   0x1E0499 mov     rdi, [rsp+0E8h+var_D8]
//   0x1E049E mov     rsi, r15
//   0x1E04A1 mov     [rsp+0E8h+var_E0], rdx
//   0x1E04A6 call    sub_1DE9D0
//   0x1E04AB mov     rdx, [rsp+0E8h+var_E0]
//   0x1E04B0 mov     [rbp+0], rdx
//   0x1E04B4 mov     r15, rdx
//   0x1E04B7 mov     rdx, [rbx+8]
//   0x1E04BB jmp     loc_1E03CB
//   0x1E04C0 test    rsi, rsi
//   0x1E04C3 jnz     loc_1E03CB
//   0x1E04C9 mov     rcx, [r15+10h]
//   0x1E04CD test    byte ptr [rcx], 2
//   0x1E04D0 jz      loc_1E0710
//   0x1E04D6 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E04DA mov     rcx, [rax]
//   0x1E04DD test    cl, 2
//   0x1E04E0 jz      loc_1E0748
//   0x1E04E6 mov     r15, rax
//   0x1E04E9 jmp     loc_1E03CB
//   0x1E04EE align 10h
//   0x1E04F0 mov     rdx, rcx
//   0x1E04F3 mov     rcx, [rcx+8]
//   0x1E04F7 test    byte ptr [rcx], 2
//   0x1E04FA jnz     loc_1E03B0
//   0x1E0500 mov     rdx, rcx
//   0x1E0503 mov     rcx, [rcx+8]
//   0x1E0507 test    byte ptr [rcx], 2
//   0x1E050A jnz     loc_1E03B0
//   0x1E0510 jmp     short loc_1E04F0
//   0x1E0512 align 8
//   0x1E0518 mov     rcx, [r15+10h]
//   0x1E051C test    byte ptr [rcx], 2
//   0x1E051F jz      loc_1E06F0
//   0x1E0525 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0529 mov     rdx, rax
//   0x1E052C mov     rax, [rax]
//   0x1E052F test    al, 2
//   0x1E0531 jnz     loc_1E0499
//   0x1E0537 mov     rsi, r15
//   0x1E053A cmp     [rdx+10h], rsi
//   0x1E053E jnz     loc_1E0499
//   0x1E0544 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0548 mov     rsi, rdx
//   0x1E054B mov     rcx, rax
//   0x1E054E mov     rax, [rax]
//   0x1E0551 mov     rdx, rcx
//   0x1E0554 test    al, 2
//   0x1E0556 jz      short loc_1E053A
//   0x1E0558 jmp     loc_1E0499
//   0x1E055D align 20h
//   0x1E0560 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E0566 movdqa  xmm1, xmmword ptr [r13+0]
//   0x1E056C movdqa  xmm0, xmmword ptr [r13+10h]
//   0x1E0572 mov     rcx, [rsp+0E8h+var_D0]
//   0x1E0577 movaps  xmmword ptr [r13+0], xmm2
//   0x1E057C movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E0582 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E058A movaps  [rsp+0E8h+var_58], xmm0
//   0x1E0592 movaps  xmmword ptr [r13+10h], xmm2
//   0x1E0597 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E059C movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E05A1 jmp     loc_1E02CE
//   0x1E05A6 align 10h
//   0x1E05B0 mov     rdi, [rsp+0E8h+var_C0]
//   0x1E05B5 add     [rsp+0E8h+var_E0], rdi
//   0x1E05BA mov     rdi, [rsp+0E8h+var_C8]
//   0x1E05BF movdqa  xmm1, xmmword ptr [r13+0]
//   0x1E05C5 movdqa  xmm0, xmmword ptr [r13+10h]
//   0x1E05CB movdqa  xmm2, xmmword ptr [rdi]
//   0x1E05CF movaps  xmmword ptr [rdi], xmm1
//   0x1E05D2 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E05DA movaps  xmmword ptr [r13+0], xmm2
//   0x1E05DF movdqa  xmm2, xmmword ptr [rdi+10h]
//   0x1E05E4 mov     eax, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E05E8 movaps  xmmword ptr [rdi+10h], xmm0
//   0x1E05EC mov     dword ptr [rsp+0E8h+var_D0], eax
//   0x1E05F0 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E05F8 movaps  xmmword ptr [r13+10h], xmm2
//   0x1E05FD call    sub_30D2C0
//   0x1E0602 cmp     r15, [rbx+8]
//   0x1E0606 mov     eax, dword ptr [rsp+0E8h+var_D0]
//   0x1E060A jnz     loc_1E0231
//   0x1E0610 jmp     loc_1E03DE
//   0x1E0615 align 8
//   0x1E0618 cmp     rdx, r15
//   0x1E061B jz      loc_1E03D4
//   0x1E0621 cmp     [rcx+8], r14b
//   0x1E0625 jnz     loc_1E03D4
//   0x1E062B cmp     [r15+18h], r12
//   0x1E062F jge     loc_1E03D4
//   0x1E0635 jmp     loc_1E0412
//   0x1E063A align 20h
//   0x1E0640 mov     rdx, [r15+10h]
//   0x1E0644 test    byte ptr [rdx], 2
//   0x1E0647 jnz     loc_1E07B0
//   0x1E064D mov     rcx, rdx
//   0x1E0650 mov     rdx, [rdx+8]
//   0x1E0654 test    byte ptr [rdx], 2
//   0x1E0657 jnz     loc_1E0311
//   0x1E065D jmp     short loc_1E064D
//   0x1E065F align 20h
//   0x1E0660 mov     rsi, r15
//   0x1E0663 cmp     [rdx+10h], rsi
//   0x1E0667 jnz     loc_1E03B0
//   0x1E066D and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0671 mov     rsi, rdx
//   0x1E0674 mov     rcx, rax
//   0x1E0677 mov     rax, [rax]
//   0x1E067A mov     rdx, rcx
//   0x1E067D test    al, 2
//   0x1E067F jz      short loc_1E0663
//   0x1E0681 jmp     loc_1E03B0
//   0x1E0686 align 10h
//   0x1E0690 test    rdx, rdx
//   0x1E0693 jnz     short loc_1E06D0
//   0x1E0695 mov     rdx, [r15+10h]
//   0x1E0699 test    byte ptr [rdx], 2
//   0x1E069C jz      loc_1E07F0
//   0x1E06A2 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E06A6 mov     rsi, r15
//   0x1E06A9 mov     rcx, rax
//   0x1E06AC mov     rax, [rax]
//   0x1E06AF test    al, 2
//   0x1E06B1 jnz     short loc_1E06D0
//   0x1E06B3 cmp     [rcx+10h], rsi
//   0x1E06B7 jnz     short loc_1E06D0
//   0x1E06B9 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E06BD mov     rdx, rax
//   0x1E06C0 mov     rax, [rax]
//   0x1E06C3 test    al, 2
//   0x1E06C5 jz      loc_1E0AED
//   0x1E06CB mov     rcx, rdx
//   0x1E06CE xchg    ax, ax
//   0x1E06D0 mov     rsi, r15
//   0x1E06D3 mov     [rsp+0E8h+var_D0], rcx
//   0x1E06D8 call    sub_1DE9D0
//   0x1E06DD mov     rcx, [rsp+0E8h+var_D0]
//   0x1E06E2 mov     [rbp+0], rcx
//   0x1E06E6 mov     r15, rcx
//   0x1E06E9 jmp     loc_1E0323
//   0x1E06EE align 10h
//   0x1E06F0 mov     rdx, rcx
//   0x1E06F3 mov     rcx, [rcx+8]
//   0x1E06F7 test    byte ptr [rcx], 2
//   0x1E06FA jnz     loc_1E0499
//   0x1E0700 jmp     short loc_1E06F0
//   0x1E0702 align 10h
//   0x1E0710 mov     r15, rcx
//   0x1E0713 mov     rcx, [rcx+8]
//   0x1E0717 test    byte ptr [rcx], 2
//   0x1E071A jnz     loc_1E03CB
//   0x1E0720 jmp     short loc_1E0710
//   0x1E0722 align 10h
//   0x1E0730 mov     r15, rdx
//   0x1E0733 mov     rdx, [rdx+8]
//   0x1E0737 test    byte ptr [rdx], 2
//   0x1E073A jnz     loc_1E0323
//   0x1E0740 jmp     short loc_1E0730
//   0x1E0742 align 8
//   0x1E0748 cmp     r15, [rax+10h]
//   0x1E074C jnz     loc_1E04E6
//   0x1E0752 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E0756 mov     r15, rcx
//   0x1E0759 mov     rcx, [rcx]
//   0x1E075C test    cl, 2
//   0x1E075F jnz     loc_1E03CB
//   0x1E0765 mov     rsi, rax
//   0x1E0768 mov     rax, r15
//   0x1E076B mov     r15, rsi
//   0x1E076E cmp     r15, [rax+10h]
//   0x1E0772 jz      short loc_1E0752
//   0x1E0774 jmp     loc_1E04E6
//   0x1E0779 align 20h
//   0x1E0780 mov     rax, rcx
//   0x1E0783 cmp     [rax+10h], r15
//   0x1E0787 jnz     loc_1E047E
//   0x1E078D mov     rcx, rdx
//   0x1E0790 mov     r15, rax
//   0x1E0793 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E0797 mov     rdx, [rcx]
//   0x1E079A test    dl, 2
//   0x1E079D jz      short loc_1E0780
//   0x1E079F mov     r15, rcx
//   0x1E07A2 jmp     loc_1E0323
//   0x1E07A7 align 10h
//   0x1E07B0 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E07B4 mov     rcx, rax
//   0x1E07B7 mov     rax, [rax]
//   0x1E07BA test    al, 2
//   0x1E07BC jnz     loc_1E0311
//   0x1E07C2 mov     rsi, r15
//   0x1E07C5 cmp     [rcx+10h], rsi
//   0x1E07C9 jnz     loc_1E0311
//   0x1E07CF and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E07D3 mov     rsi, rcx
//   0x1E07D6 mov     rdx, rax
//   0x1E07D9 mov     rax, [rax]
//   0x1E07DC mov     rcx, rdx
//   0x1E07DF test    al, 2
//   0x1E07E1 jz      short loc_1E07C5
//   0x1E07E3 jmp     loc_1E0311
//   0x1E07E8 align 10h
//   0x1E07F0 mov     rcx, rdx
//   0x1E07F3 mov     rdx, [rdx+8]
//   0x1E07F7 test    byte ptr [rdx], 2
//   0x1E07FA jnz     loc_1E06D0
//   0x1E0800 jmp     short loc_1E07F0
//   0x1E0802 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E0808 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E080E mov     [rsp+0E8h+var_E0], rcx
//   0x1E0813 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E0819 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E081E movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E0823 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E0829 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E0831 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E0839 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E083E movaps  [rsp+0E8h+var_88], xmm1
//   0x1E0843 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E0848 call    sub_30D2C0
//   0x1E084D mov     rcx, [rsp+0E8h+var_E0]
//   0x1E0852 lea     rdi, [r15+28h]
//   0x1E0856 mov     rsi, r13
//   0x1E0859 mov     [rsp+0E8h+var_E0], rcx
//   0x1E085E call    sub_30F340
//   0x1E0863 mov     rax, [r15]
//   0x1E0866 mov     rcx, [rsp+0E8h+var_E0]
//   0x1E086B mov     rdx, rax
//   0x1E086E and     edx, 2
//   0x1E0871 cmp     dword ptr [rcx+10h], 1
//   0x1E0875 jz      loc_1E0AF8
//   0x1E087B test    rdx, rdx
//   0x1E087E jnz     loc_1E03DE
//   0x1E0884 mov     rdx, [r15+10h]
//   0x1E0888 test    byte ptr [rdx], 2
//   0x1E088B jnz     loc_1E0BA5
//   0x1E0891 mov     r15, rdx
//   0x1E0894 mov     rdx, [rdx+8]
//   0x1E0898 test    byte ptr [rdx], 2
//   0x1E089B jnz     loc_1E03DE
//   0x1E08A1 jmp     short loc_1E0891
//   0x1E08A3 align 8
//   0x1E08A8 cmp     r12, rdi
//   0x1E08AB jnz     loc_1E041C
//   0x1E08B1 mov     rax, cs:qword_3FFAC0
//   0x1E08B8 pxor    xmm0, xmm0
//   0x1E08BC cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E08C1 mov     [rsp+0E8h+var_70], 0
//   0x1E08CA movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E08CF lea     r12, [r15+28h]
//   0x1E08D3 mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E08D8 jnz     loc_1E0C99
//   0x1E08DE mov     edx, dword ptr [rsp+0E8h+var_E0]
//   0x1E08E2 lea     rax, [rsp+0E8h+var_88]
//   0x1E08E7 mov     rdi, r12
//   0x1E08EA mov     [rsp+0E8h+var_C8], rax
//   0x1E08EF sub     edx, esi
//   0x1E08F1 mov     rsi, rax
//   0x1E08F4 call    sub_30F440
//   0x1E08F9 test    al, al
//   0x1E08FB jz      loc_1E0D0F
//   0x1E0901 mov     rax, [r15]
//   0x1E0904 lea     r14, [rbx+8]
//   0x1E0908 mov     r12, r15
//   0x1E090B test    al, 2
//   0x1E090D jnz     loc_1E0BE0
//   0x1E0913 mov     r12, [r15+10h]
//   0x1E0917 test    byte ptr [r12], 2
//   0x1E091C jnz     loc_1E0DB5
//   0x1E0922 mov     rax, [r12+8]
//   0x1E0927 test    byte ptr [rax], 2
//   0x1E092A jnz     loc_1E0BE0
//   0x1E0930 mov     r12, rax
//   0x1E0933 jmp     short loc_1E0922
//   0x1E0935 align 8
//   0x1E0938 cmp     r12, rdi
//   0x1E093B jnz     loc_1E041C
//   0x1E0941 mov     rax, cs:qword_3FFAC0
//   0x1E0948 pxor    xmm0, xmm0
//   0x1E094C cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E0951 mov     [rsp+0E8h+var_70], 0
//   0x1E095A mov     [rsp+0E8h+var_D8], rcx
//   0x1E095F mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E0964 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E0969 jnz     loc_1E0C2C
//   0x1E096F mov     eax, dword ptr [rsp+0E8h+var_E0]
//   0x1E0973 mov     edx, esi
//   0x1E0975 mov     rdi, r13
//   0x1E0978 sub     edx, eax
//   0x1E097A lea     rax, [rsp+0E8h+var_88]
//   0x1E097F mov     rsi, rax
//   0x1E0982 mov     [rsp+0E8h+var_C8], rax
//   0x1E0987 call    sub_30F440
//   0x1E098C test    al, al
//   0x1E098E mov     rcx, [rsp+0E8h+var_D8]
//   0x1E0993 jz      loc_1E0D8C
//   0x1E0999 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E099E jnz     loc_1E0802
//   0x1E09A4 mov     rdx, [r15]
//   0x1E09A7 lea     rdi, [rbx+8]
//   0x1E09AB mov     r12, r15
//   0x1E09AE test    dl, 2
//   0x1E09B1 jnz     short loc_1E09CC
//   0x1E09B3 mov     rax, [r15+10h]
//   0x1E09B7 test    byte ptr [rax], 2
//   0x1E09BA jnz     loc_1E0DF2
//   0x1E09C0 mov     r12, rax
//   0x1E09C3 mov     rax, [rax+8]
//   0x1E09C7 test    byte ptr [rax], 2
//   0x1E09CA jz      short loc_1E09C0
//   0x1E09CC mov     rsi, r15
//   0x1E09CF call    sub_1DE9D0
//   0x1E09D4 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E09D9 mov     r15, r12
//   0x1E09DC call    sub_30D2C0
//   0x1E09E1 jmp     loc_1E03DE
//   0x1E09E6 cmp     dword ptr [rcx+10h], 8
//   0x1E09EA jz      loc_1E03DE
//   0x1E09F0 mov     rdx, cs:qword_3FFAC0
//   0x1E09F7 pxor    xmm0, xmm0
//   0x1E09FB cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E0A00 mov     [rsp+0E8h+var_70], 0
//   0x1E0A09 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E0A0E lea     r14, [r15+28h]
//   0x1E0A12 mov     qword ptr [rsp+0E8h+var_88], rdx
//   0x1E0A17 jnz     loc_1E0B3A
//   0x1E0A1D lea     rsi, [rsp+0E8h+var_88]
//   0x1E0A22 mov     edx, eax
//   0x1E0A24 mov     rdi, r14
//   0x1E0A27 mov     [rsp+0E8h+var_E0], rcx
//   0x1E0A2C mov     [rsp+0E8h+var_C8], rsi
//   0x1E0A31 call    sub_30F440
//   0x1E0A36 test    al, al
//   0x1E0A38 mov     rcx, [rsp+0E8h+var_E0]
//   0x1E0A3D jz      loc_1E0D00
//   0x1E0A43 lea     rdi, [rcx+10h]
//   0x1E0A47 mov     rsi, r13
//   0x1E0A4A mov     [rsp+0E8h+var_E0], rcx
//   0x1E0A4F call    sub_30F340
//   0x1E0A54 mov     rax, [r15]
//   0x1E0A57 mov     rcx, [rsp+0E8h+var_E0]
//   0x1E0A5C mov     rdx, rax
//   0x1E0A5F and     edx, 2
//   0x1E0A62 cmp     dword ptr [rcx+10h], 1
//   0x1E0A66 jz      loc_1E0D1E
//   0x1E0A6C test    rdx, rdx
//   0x1E0A6F jnz     short loc_1E0AAA
//   0x1E0A71 mov     rdx, [r15+10h]
//   0x1E0A75 test    byte ptr [rdx], 2
//   0x1E0A78 jnz     short loc_1E0A9B
//   0x1E0A7A mov     rax, [rdx+8]
//   0x1E0A7E test    byte ptr [rax], 2
//   0x1E0A81 jnz     loc_1E0E63
//   0x1E0A87 mov     rdx, rax
//   0x1E0A8A jmp     short loc_1E0A7A
//   0x1E0A8C mov     rcx, r15
//   0x1E0A8F mov     r15, rax
//   0x1E0A92 cmp     rcx, [rax+10h]
//   0x1E0A96 jnz     short loc_1E0AAA
//   0x1E0A98 mov     rax, rdx
//   0x1E0A9B and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0A9F mov     rdx, [rax]
//   0x1E0AA2 test    dl, 2
//   0x1E0AA5 jz      short loc_1E0A8C
//   0x1E0AA7 mov     r15, rax
//   0x1E0AAA cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E0AAF jz      short loc_1E0ADE
//   0x1E0AB1 mov     rdx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1E0AB6 mov     qword ptr [rsp+0E8h+var_B8], r12
//   0x1E0ABB lea     rdi, [rbx+8]
//   0x1E0ABF mov     rsi, r15
//   0x1E0AC2 mov     r8, [rsp+0E8h+var_C8]
//   0x1E0AC7 mov     qword ptr [rsp+0E8h+var_B8+8], rdx
//   0x1E0ACC mov     rdx, qword ptr [rsp+0E8h+var_B8]
//   0x1E0AD1 mov     rcx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1E0AD6 call    sub_1DF1E0
//   0x1E0ADB mov     r15, rax
//   0x1E0ADE mov     rdi, [rsp+0E8h+var_C8]
//   0x1E0AE3 call    sub_30D2C0
//   0x1E0AE8 jmp     loc_1E03DE
//   0x1E0AED mov     rsi, rcx
//   0x1E0AF0 mov     rcx, rdx
//   0x1E0AF3 jmp     loc_1E06B3
//   0x1E0AF8 lea     rdi, [rbx+8]
//   0x1E0AFC mov     r12, r15
//   0x1E0AFF test    rdx, rdx
//   0x1E0B02 jnz     short loc_1E0B2A
//   0x1E0B04 mov     r12, [r15+10h]
//   0x1E0B08 test    byte ptr [r12], 2
//   0x1E0B0D jnz     loc_1E0D53
//   0x1E0B13 mov     rax, [r12+8]
//   0x1E0B18 test    byte ptr [rax], 2
//   0x1E0B1B jnz     short loc_1E0B2A
//   0x1E0B1D mov     r12, rax
//   0x1E0B20 mov     rax, [r12+8]
//   0x1E0B25 test    byte ptr [rax], 2
//   0x1E0B28 jz      short loc_1E0B1D
//   0x1E0B2A mov     rsi, r15
//   0x1E0B2D call    sub_1DE9D0
//   0x1E0B32 mov     r15, r12
//   0x1E0B35 jmp     loc_1E03DE
//   0x1E0B3A mov     edx, [rcx+14h]
//   0x1E0B3D mov     rdi, r14
//   0x1E0B40 mov     [rsp+0E8h+var_E0], rcx
//   0x1E0B45 sub     edx, eax
//   0x1E0B47 lea     rax, [rsp+0E8h+var_88]
//   0x1E0B4C mov     rsi, rax
//   0x1E0B4F mov     [rsp+0E8h+var_C8], rax
//   0x1E0B54 call    sub_30F440
//   0x1E0B59 test    al, al
//   0x1E0B5B mov     rcx, [rsp+0E8h+var_E0]
//   0x1E0B60 jz      loc_1E0D00
//   0x1E0B66 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E0B6C movdqu  xmm1, xmmword ptr [r14]
//   0x1E0B71 movdqu  xmm0, xmmword ptr [r14+10h]
//   0x1E0B77 movups  xmmword ptr [r14], xmm2
//   0x1E0B7B movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E0B81 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E0B89 movups  xmmword ptr [r14+10h], xmm2
//   0x1E0B8E movaps  [rsp+0E8h+var_58], xmm0
//   0x1E0B96 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E0B9B movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E0BA0 jmp     loc_1E0A43
//   0x1E0BA5 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0BA9 mov     rdx, [rax]
//   0x1E0BAC test    dl, 2
//   0x1E0BAF jz      short loc_1E0BB9
//   0x1E0BB1 mov     r15, rax
//   0x1E0BB4 jmp     loc_1E03DE
//   0x1E0BB9 cmp     [rax+10h], r15
//   0x1E0BBD jnz     short loc_1E0BB1
//   0x1E0BBF mov     rcx, rdx
//   0x1E0BC2 mov     r15, rax
//   0x1E0BC5 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E0BC9 mov     rdx, [rcx]
//   0x1E0BCC test    dl, 2
//   0x1E0BCF jnz     loc_1E0DAD
//   0x1E0BD5 mov     rax, rcx
//   0x1E0BD8 cmp     [rax+10h], r15
//   0x1E0BDC jz      short loc_1E0BBF
//   0x1E0BDE jmp     short loc_1E0BB1
//   0x1E0BE0 mov     rsi, r15
//   0x1E0BE3 mov     rdi, r14
//   0x1E0BE6 call    sub_1DE9D0
//   0x1E0BEB cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E0BF0 jz      loc_1E0D9B
//   0x1E0BF6 mov     rdx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1E0BFB mov     rax, [rsp+0E8h+var_E0]
//   0x1E0C00 mov     rsi, r12
//   0x1E0C03 mov     rdi, r14
//   0x1E0C06 mov     r8, [rsp+0E8h+var_C8]
//   0x1E0C0B mov     rcx, rdx
//   0x1E0C0E mov     rdx, rax
//   0x1E0C11 call    sub_1DF1E0
//   0x1E0C16 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E0C1B mov     r15, rax
//   0x1E0C1E call    sub_30D2C0
//   0x1E0C23 lea     rcx, [r15+18h]
//   0x1E0C27 jmp     loc_1E0852
//   0x1E0C2C lea     rax, [rsp+0E8h+var_88]
//   0x1E0C31 mov     edx, dword ptr [rsp+0E8h+var_E0]
//   0x1E0C35 add     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E0C39 mov     rdi, r13
//   0x1E0C3C sub     edx, esi
//   0x1E0C3E mov     rsi, rax
//   0x1E0C41 mov     [rsp+0E8h+var_C8], rax
//   0x1E0C46 call    sub_30F440
//   0x1E0C4B test    al, al
//   0x1E0C4D mov     rcx, [rsp+0E8h+var_D8]
//   0x1E0C52 jz      loc_1E0D8C
//   0x1E0C58 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E0C5E movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E0C64 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E0C6A movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E0C6F movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E0C75 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E0C7D movaps  [rsp+0E8h+var_58], xmm0
//   0x1E0C85 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E0C8A movaps  [rsp+0E8h+var_88], xmm1
//   0x1E0C8F movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E0C94 jmp     loc_1E0999
//   0x1E0C99 mov     eax, dword ptr [rsp+0E8h+var_E0]
//   0x1E0C9D mov     edx, [rcx+14h]
//   0x1E0CA0 mov     rdi, r12
//   0x1E0CA3 sub     edx, eax
//   0x1E0CA5 lea     rax, [rsp+0E8h+var_88]
//   0x1E0CAA add     edx, esi
//   0x1E0CAC mov     rsi, rax
//   0x1E0CAF mov     [rsp+0E8h+var_C8], rax
//   0x1E0CB4 call    sub_30F440
//   0x1E0CB9 test    al, al
//   0x1E0CBB jz      short loc_1E0D0F
//   0x1E0CBD movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E0CC3 movdqu  xmm1, xmmword ptr [r12]
//   0x1E0CC9 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1E0CD0 movups  xmmword ptr [r12], xmm2
//   0x1E0CD5 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E0CDB movaps  [rsp+0E8h+var_68], xmm1
//   0x1E0CE3 movups  xmmword ptr [r12+10h], xmm2
//   0x1E0CE9 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E0CF1 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E0CF6 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E0CFB jmp     loc_1E0901
//   0x1E0D00 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E0D05 call    sub_30D2C0
//   0x1E0D0A jmp     loc_1E041C
//   0x1E0D0F mov     rdi, [rsp+0E8h+var_C8]
//   0x1E0D14 call    sub_30D2C0
//   0x1E0D19 jmp     loc_1E041C
//   0x1E0D1E lea     rdi, [rbx+8]
//   0x1E0D22 mov     r14, r15
//   0x1E0D25 test    rdx, rdx
//   0x1E0D28 jnz     short loc_1E0D43
//   0x1E0D2A mov     rdx, [r15+10h]
//   0x1E0D2E test    byte ptr [rdx], 2
//   0x1E0D31 jnz     loc_1E0E2B
//   0x1E0D37 mov     r14, rdx
//   0x1E0D3A mov     rdx, [rdx+8]
//   0x1E0D3E test    byte ptr [rdx], 2
//   0x1E0D41 jz      short loc_1E0D37
//   0x1E0D43 mov     rsi, r15
//   0x1E0D46 call    sub_1DE9D0
//   0x1E0D4B mov     r15, r14
//   0x1E0D4E jmp     loc_1E0AAA
//   0x1E0D53 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0D57 mov     r12, rax
//   0x1E0D5A mov     rax, [rax]
//   0x1E0D5D test    al, 2
//   0x1E0D5F jnz     loc_1E0B2A
//   0x1E0D65 mov     rcx, r15
//   0x1E0D68 cmp     [r12+10h], rcx
//   0x1E0D6D jnz     loc_1E0B2A
//   0x1E0D73 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0D77 mov     rcx, r12
//   0x1E0D7A mov     rdx, rax
//   0x1E0D7D mov     rax, [rax]
//   0x1E0D80 mov     r12, rdx
//   0x1E0D83 test    al, 2
//   0x1E0D85 jz      short loc_1E0D68
//   0x1E0D87 jmp     loc_1E0B2A
//   0x1E0D8C mov     rdi, [rsp+0E8h+var_C8]
//   0x1E0D91 call    sub_30D2C0
//   0x1E0D96 jmp     loc_1E041C
//   0x1E0D9B mov     rdi, [rsp+0E8h+var_C8]
//   0x1E0DA0 mov     r15, r12
//   0x1E0DA3 call    sub_30D2C0
//   0x1E0DA8 jmp     loc_1E03DE
//   0x1E0DAD mov     r15, rcx
//   0x1E0DB0 jmp     loc_1E03DE
//   0x1E0DB5 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0DB9 mov     r12, rax
//   0x1E0DBC mov     rax, [rax]
//   0x1E0DBF test    al, 2
//   0x1E0DC1 jnz     loc_1E0BE0
//   0x1E0DC7 mov     rcx, r15
//   0x1E0DCA mov     rdx, r12
//   0x1E0DCD cmp     [r12+10h], rcx
//   0x1E0DD2 jnz     loc_1E0BE0
//   0x1E0DD8 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0DDC mov     r12, rax
//   0x1E0DDF mov     rax, [rax]
//   0x1E0DE2 test    al, 2
//   0x1E0DE4 jnz     loc_1E0BE0
//   0x1E0DEA mov     rcx, rdx
//   0x1E0DED mov     rdx, r12
//   0x1E0DF0 jmp     short loc_1E0DCD
//   0x1E0DF2 and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1E0DF6 mov     rax, [rdx]
//   0x1E0DF9 mov     r12, rdx
//   0x1E0DFC test    al, 2
//   0x1E0DFE jnz     loc_1E09CC
//   0x1E0E04 mov     rcx, r15
//   0x1E0E07 cmp     [r12+10h], rcx
//   0x1E0E0C jnz     loc_1E09CC
//   0x1E0E12 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0E16 mov     rcx, r12
//   0x1E0E19 mov     rdx, rax
//   0x1E0E1C mov     rax, [rax]
//   0x1E0E1F mov     r12, rdx
//   0x1E0E22 test    al, 2
//   0x1E0E24 jz      short loc_1E0E07
//   0x1E0E26 jmp     loc_1E09CC
//   0x1E0E2B and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0E2F mov     r14, rax
//   0x1E0E32 mov     rax, [rax]
//   0x1E0E35 test    al, 2
//   0x1E0E37 jnz     loc_1E0D43
//   0x1E0E3D mov     rcx, r15
//   0x1E0E40 cmp     [r14+10h], rcx
//   0x1E0E44 jnz     loc_1E0D43
//   0x1E0E4A and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0E4E mov     rcx, r14
//   0x1E0E51 mov     rdx, rax
//   0x1E0E54 mov     rax, [rax]
//   0x1E0E57 mov     r14, rdx
//   0x1E0E5A test    al, 2
//   0x1E0E5C jz      short loc_1E0E40
//   0x1E0E5E jmp     loc_1E0D43
//   0x1E0E63 mov     r15, rdx
//   0x1E0E66 jmp     loc_1E0AAA
//   0x1E0E6B call    ___stack_chk_fail
//   0x1E0E70 mov     rbx, rax
//   0x1E0E73 jmp     loc_4173E
//   0x1E0E78 mov     rbx, rax
//   0x1E0E7B jmp     loc_4177C
//   0x1E0E80 mov     rbx, rax
//   0x1E0E83 jmp     loc_41748
//   0x1E0E88 mov     rbx, rax
//   0x1E0E8B jmp     loc_41788
//   0x1E0E90 mov     rbx, rax
//   0x1E0E93 jmp     loc_4176B
// ============================================================

void sub_1E01A0(/* signature unknown */)
{
    // see disassembly above
}

