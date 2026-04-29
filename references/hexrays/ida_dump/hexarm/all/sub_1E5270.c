// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E5270
// Name:           sub_1E5270
// Function size:  1690 bytes (407 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E5270 push    r15
//   0x1E5272 mov     r10, rsi
//   0x1E5275 push    r14
//   0x1E5277 mov     r14, r8
//   0x1E527A push    r13
//   0x1E527C push    r12
//   0x1E527E push    rbp
//   0x1E527F mov     rbp, rcx
//   0x1E5282 push    rbx
//   0x1E5283 mov     rbx, rdx
//   0x1E5286 movsxd  rdx, r9d
//   0x1E5289 lea     r13, [rbx+18h]
//   0x1E528D mov     r9, rbx
//   0x1E5290 sub     rsp, 0B8h
//   0x1E5297 movdqu  xmm3, xmmword ptr [rbx+18h]
//   0x1E529C mov     r8, [rbx+18h]
//   0x1E52A0 movzx   ecx, byte ptr [r13+8]
//   0x1E52A5 movzx   eax, byte ptr [rbp+8]
//   0x1E52A9 mov     [rsp+0E8h+var_D8], rdi
//   0x1E52AE mov     esi, [r13+14h]
//   0x1E52B2 movsxd  rdi, dword ptr [r14+4]
//   0x1E52B6 add     r8, rdx
//   0x1E52B9 mov     r12, fs:28h
//   0x1E52C2 mov     [rsp+0E8h+var_40], r12
//   0x1E52CA mov     r12, rdx
//   0x1E52CD movaps  [rsp+0E8h+var_E8], xmm3
//   0x1E52D1 cmp     al, cl
//   0x1E52D3 jz      loc_1E53D0
//   0x1E52D9 cmp     al, [r13+8]
//   0x1E52DD jz      short loc_1E5310
//   0x1E52DF xor     ebp, ebp
//   0x1E52E1 mov     rax, [rsp+0E8h+var_40]
//   0x1E52E9 sub     rax, fs:28h
//   0x1E52F2 jnz     loc_1E58F5
//   0x1E52F8 add     rsp, 0B8h
//   0x1E52FF mov     eax, ebp
//   0x1E5301 pop     rbx
//   0x1E5302 pop     rbp
//   0x1E5303 pop     r12
//   0x1E5305 pop     r13
//   0x1E5307 pop     r14
//   0x1E5309 pop     r15
//   0x1E530B retn
//   0x1E530C align 10h
//   0x1E5310 mov     rcx, [rbp+0]
//   0x1E5314 mov     rax, [rbx+18h]
//   0x1E5318 mov     [rsp+0E8h+var_C0], r10
//   0x1E531D mov     [rsp+0E8h+var_C8], r9
//   0x1E5322 mov     [rsp+0E8h+var_D0], r8
//   0x1E5327 cmp     rcx, rax
//   0x1E532A jl      short loc_1E52DF
//   0x1E532C add     rdi, rcx
//   0x1E532F add     rdx, rax
//   0x1E5332 cmp     rdi, rdx
//   0x1E5335 jg      short loc_1E52DF
//   0x1E5337 lea     rax, [r13+10h]
//   0x1E533B lea     r15, [rsp+0E8h+var_A8]
//   0x1E5340 mov     rsi, rax
//   0x1E5343 mov     rdi, r15
//   0x1E5346 mov     [rsp+0E8h+var_B8], rax
//   0x1E534B call    sub_313000
//   0x1E5350 mov     rax, cs:qword_41F238
//   0x1E5357 pxor    xmm0, xmm0
//   0x1E535B cmp     byte ptr [r13+8], 5
//   0x1E5360 mov     r8, [rsp+0E8h+var_D0]
//   0x1E5365 mov     r9, [rsp+0E8h+var_C8]
//   0x1E536A movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E536F mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E5374 mov     r10, [rsp+0E8h+var_C0]
//   0x1E5379 mov     [rsp+0E8h+var_70], 0
//   0x1E5382 jz      loc_1E5730
//   0x1E5388 lea     rax, [rsp+0E8h+var_88]
//   0x1E538D mov     edx, r12d
//   0x1E5390 mov     rdi, r15
//   0x1E5393 mov     [rsp+0E8h+var_B0], r10
//   0x1E5398 mov     rsi, rax
//   0x1E539B mov     [rsp+0E8h+var_C0], r9
//   0x1E53A0 mov     [rsp+0E8h+var_C8], r8
//   0x1E53A5 mov     [rsp+0E8h+var_D0], rax
//   0x1E53AA call    sub_3150C0
//   0x1E53AF test    al, al
//   0x1E53B1 jnz     loc_1E55A8
//   0x1E53B7 xor     ebp, ebp
//   0x1E53B9 mov     rdi, [rsp+0E8h+var_D0]
//   0x1E53BE call    sub_312F40
//   0x1E53C3 mov     rdi, r15
//   0x1E53C6 call    sub_312F40
//   0x1E53CB jmp     loc_1E52E1
//   0x1E53D0 mov     r11, [rbp+0]
//   0x1E53D4 mov     byte ptr [rsp+0E8h+var_D0], cl
//   0x1E53D8 cmp     r8, r11
//   0x1E53DB jg      loc_1E52D9
//   0x1E53E1 sub     esi, r12d
//   0x1E53E4 movsxd  r15, edi
//   0x1E53E7 movsxd  rsi, esi
//   0x1E53EA add     r15, r11
//   0x1E53ED add     rsi, r8
//   0x1E53F0 cmp     rsi, r15
//   0x1E53F3 jl      loc_1E52D9
//   0x1E53F9 lea     r15, [rsp+0E8h+var_A8]
//   0x1E53FE lea     rsi, [rbx+28h]
//   0x1E5402 mov     [rsp+0E8h+var_B8], r10
//   0x1E5407 mov     rdi, r15
//   0x1E540A mov     [rsp+0E8h+var_C8], r8
//   0x1E540F mov     [rsp+0E8h+var_C0], rbx
//   0x1E5414 call    sub_313000
//   0x1E5419 mov     rax, cs:qword_41F238
//   0x1E5420 pxor    xmm0, xmm0
//   0x1E5424 cmp     byte ptr [r13+8], 5
//   0x1E5429 mov     r8, [rsp+0E8h+var_C8]
//   0x1E542E mov     r9, [rsp+0E8h+var_C0]
//   0x1E5433 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E5438 mov     r10, [rsp+0E8h+var_B8]
//   0x1E543D movzx   ecx, byte ptr [rsp+0E8h+var_D0]
//   0x1E5442 mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E5447 mov     [rsp+0E8h+var_70], 0
//   0x1E5450 jz      loc_1E5690
//   0x1E5456 lea     rax, [rsp+0E8h+var_88]
//   0x1E545B mov     edx, r12d
//   0x1E545E mov     rdi, r15
//   0x1E5461 mov     [rsp+0E8h+var_B0], r10
//   0x1E5466 mov     rsi, rax
//   0x1E5469 mov     byte ptr [rsp+0E8h+var_B8], cl
//   0x1E546D mov     [rsp+0E8h+var_C0], r9
//   0x1E5472 mov     [rsp+0E8h+var_C8], r8
//   0x1E5477 mov     [rsp+0E8h+var_D0], rax
//   0x1E547C call    sub_3150C0
//   0x1E5481 test    al, al
//   0x1E5483 jnz     short loc_1E54A0
//   0x1E5485 xor     ebp, ebp
//   0x1E5487 mov     rdi, [rsp+0E8h+var_D0]
//   0x1E548C call    sub_312F40
//   0x1E5491 mov     rdi, r15
//   0x1E5494 call    sub_312F40
//   0x1E5499 jmp     loc_1E52E1
//   0x1E549E align 20h
//   0x1E54A0 mov     r8, [rsp+0E8h+var_C8]
//   0x1E54A5 mov     r9, [rsp+0E8h+var_C0]
//   0x1E54AA movzx   ecx, byte ptr [rsp+0E8h+var_B8]
//   0x1E54AF mov     r10, [rsp+0E8h+var_B0]
//   0x1E54B4 mov     rsi, [rbp+0]
//   0x1E54B8 cmp     r8, rsi
//   0x1E54BB jg      short loc_1E5485
//   0x1E54BD movsxd  rdx, dword ptr [rsp+0E8h+var_88+4]
//   0x1E54C2 movsxd  rax, dword ptr [r14+4]
//   0x1E54C6 add     rdx, r8
//   0x1E54C9 add     rax, rsi
//   0x1E54CC cmp     rdx, rax
//   0x1E54CF jl      short loc_1E5485
//   0x1E54D1 cmp     cl, 5
//   0x1E54D4 jz      loc_1E580D
//   0x1E54DA mov     edx, esi
//   0x1E54DC sub     edx, r8d
//   0x1E54DF mov     rdi, [rsp+0E8h+var_D0]
//   0x1E54E4 mov     rsi, r14
//   0x1E54E7 mov     [rsp+0E8h+var_C0], r9
//   0x1E54EC mov     [rsp+0E8h+var_C8], r8
//   0x1E54F1 call    sub_3143E0
//   0x1E54F6 mov     ebp, eax
//   0x1E54F8 test    al, al
//   0x1E54FA jz      short loc_1E5485
//   0x1E54FC cmp     dword ptr [rsp+0E8h+var_A8], 1
//   0x1E5501 mov     r8, [rsp+0E8h+var_C8]
//   0x1E5506 mov     r9, [rsp+0E8h+var_C0]
//   0x1E550B jz      loc_1E57C4
//   0x1E5511 lea     rdi, [r13+10h]
//   0x1E5515 mov     rsi, r15
//   0x1E5518 mov     [rsp+0E8h+var_C0], r9
//   0x1E551D mov     [rsp+0E8h+var_C8], r8
//   0x1E5522 call    sub_313150
//   0x1E5527 mov     rax, [rbx]
//   0x1E552A mov     rdi, [rsp+0E8h+var_D8]
//   0x1E552F mov     r8, [rsp+0E8h+var_C8]
//   0x1E5534 mov     r9, [rsp+0E8h+var_C0]
//   0x1E5539 test    al, 2
//   0x1E553B lea     r12, [rdi+8]
//   0x1E553F jnz     short loc_1E5570
//   0x1E5541 mov     rdx, [rbx+10h]
//   0x1E5545 test    byte ptr [rdx], 2
//   0x1E5548 jnz     loc_1E5874
//   0x1E554E mov     r9, rdx
//   0x1E5551 mov     rdx, [rdx+8]
//   0x1E5555 test    byte ptr [rdx], 2
//   0x1E5558 jz      short loc_1E554E
//   0x1E555A mov     rax, [rsp+0E8h+var_D8]
//   0x1E555F lea     r12, [rax+8]
//   0x1E5563 nop     word ptr [rax+rax+00000000h]
//   0x1E556E xchg    ax, ax
//   0x1E5570 mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1E5575 mov     qword ptr [rsp+0E8h+var_E8], r8
//   0x1E5579 mov     rsi, r9
//   0x1E557C mov     rdi, r12
//   0x1E557F mov     rax, qword ptr [rsp+0E8h+var_E8]
//   0x1E5583 mov     r8, [rsp+0E8h+var_D0]
//   0x1E5588 mov     qword ptr [rsp+0E8h+var_E8+8], rdx
//   0x1E558D mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1E5592 mov     rcx, rdx
//   0x1E5595 mov     rdx, rax
//   0x1E5598 call    sub_1E4960
//   0x1E559D jmp     loc_1E5487
//   0x1E55A2 align 8
//   0x1E55A8 mov     r8, [rsp+0E8h+var_C8]
//   0x1E55AD mov     r9, [rsp+0E8h+var_C0]
//   0x1E55B2 mov     r10, [rsp+0E8h+var_B0]
//   0x1E55B7 mov     rcx, [rbp+0]
//   0x1E55BB mov     rax, [rbx+18h]
//   0x1E55BF cmp     rcx, rax
//   0x1E55C2 jl      loc_1E53B7
//   0x1E55C8 movsxd  rdx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E55CD movsxd  rsi, dword ptr [r14+4]
//   0x1E55D1 add     rdx, rax
//   0x1E55D4 add     rsi, rcx
//   0x1E55D7 cmp     rdx, rsi
//   0x1E55DA jl      loc_1E53B7
//   0x1E55E0 cmp     byte ptr [r13+8], 5
//   0x1E55E5 jz      loc_1E5825
//   0x1E55EB mov     edx, ecx
//   0x1E55ED sub     edx, eax
//   0x1E55EF mov     rsi, r14
//   0x1E55F2 mov     rdi, r15
//   0x1E55F5 mov     [rsp+0E8h+var_C0], r9
//   0x1E55FA mov     [rsp+0E8h+var_C8], r8
//   0x1E55FF call    sub_3143E0
//   0x1E5604 mov     ebp, eax
//   0x1E5606 test    al, al
//   0x1E5608 jz      loc_1E53B7
//   0x1E560E mov     rdi, [rsp+0E8h+var_B8]
//   0x1E5613 mov     rsi, r15
//   0x1E5616 call    sub_313150
//   0x1E561B mov     rax, [rbx]
//   0x1E561E mov     r8, [rsp+0E8h+var_C8]
//   0x1E5623 mov     r9, [rsp+0E8h+var_C0]
//   0x1E5628 test    al, 2
//   0x1E562A jnz     short loc_1E5650
//   0x1E562C mov     rdx, [rbx+10h]
//   0x1E5630 test    byte ptr [rdx], 2
//   0x1E5633 jnz     loc_1E583D
//   0x1E5639 mov     r9, rdx
//   0x1E563C mov     rdx, [rdx+8]
//   0x1E5640 test    byte ptr [rdx], 2
//   0x1E5643 jz      short loc_1E5639
//   0x1E5645 nop     word ptr [rax+rax+00000000h]
//   0x1E5650 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E5655 jz      loc_1E53B9
//   0x1E565B mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1E5660 mov     rdi, [rsp+0E8h+var_D8]
//   0x1E5665 mov     qword ptr [rsp+0E8h+var_E8], r8
//   0x1E5669 mov     rsi, r9
//   0x1E566C mov     r8, [rsp+0E8h+var_D0]
//   0x1E5671 mov     qword ptr [rsp+0E8h+var_E8+8], rdx
//   0x1E5676 mov     rdx, qword ptr [rsp+0E8h+var_E8]
//   0x1E567A add     rdi, 8
//   0x1E567E mov     rcx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1E5683 call    sub_1E4960
//   0x1E5688 jmp     loc_1E53B9
//   0x1E568D align 10h
//   0x1E5690 mov     rax, [r10+60h]
//   0x1E5694 cmp     byte ptr [rax+91h], 0
//   0x1E569B jz      loc_1E5456
//   0x1E56A1 mov     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E56A5 lea     rax, [rsp+0E8h+var_88]
//   0x1E56AA mov     rdi, r15
//   0x1E56AD mov     byte ptr [rsp+0E8h+var_B8], cl
//   0x1E56B1 mov     rsi, rax
//   0x1E56B4 mov     [rsp+0E8h+var_B0], r10
//   0x1E56B9 sub     edx, r12d
//   0x1E56BC mov     [rsp+0E8h+var_C0], r9
//   0x1E56C1 mov     [rsp+0E8h+var_C8], r8
//   0x1E56C6 mov     [rsp+0E8h+var_D0], rax
//   0x1E56CB call    sub_3150C0
//   0x1E56D0 test    al, al
//   0x1E56D2 mov     r8, [rsp+0E8h+var_C8]
//   0x1E56D7 mov     r9, [rsp+0E8h+var_C0]
//   0x1E56DC movzx   ecx, byte ptr [rsp+0E8h+var_B8]
//   0x1E56E1 mov     r10, [rsp+0E8h+var_B0]
//   0x1E56E6 jz      loc_1E5485
//   0x1E56EC movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E56F2 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E56F8 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E56FE movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E5703 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E5709 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E5711 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E5719 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E571E movaps  [rsp+0E8h+var_88], xmm1
//   0x1E5723 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E5728 jmp     loc_1E54B4
//   0x1E572D align 10h
//   0x1E5730 mov     rax, [r10+60h]
//   0x1E5734 cmp     byte ptr [rax+91h], 0
//   0x1E573B jz      loc_1E5388
//   0x1E5741 mov     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E5745 lea     rax, [rsp+0E8h+var_88]
//   0x1E574A mov     rdi, r15
//   0x1E574D mov     [rsp+0E8h+var_B0], r10
//   0x1E5752 mov     rsi, rax
//   0x1E5755 mov     [rsp+0E8h+var_C0], r9
//   0x1E575A sub     edx, r12d
//   0x1E575D mov     [rsp+0E8h+var_C8], r8
//   0x1E5762 mov     [rsp+0E8h+var_D0], rax
//   0x1E5767 call    sub_3150C0
//   0x1E576C test    al, al
//   0x1E576E mov     r8, [rsp+0E8h+var_C8]
//   0x1E5773 mov     r9, [rsp+0E8h+var_C0]
//   0x1E5778 mov     r10, [rsp+0E8h+var_B0]
//   0x1E577D jz      loc_1E53B7
//   0x1E5783 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E5789 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E578F movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E5795 movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E579A movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E57A0 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E57A8 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E57B0 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E57B5 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E57BA movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E57BF jmp     loc_1E55B7
//   0x1E57C4 mov     r12, [rsp+0E8h+var_D8]
//   0x1E57C9 mov     rax, [rbx]
//   0x1E57CC mov     r13, rbx
//   0x1E57CF add     r12, 8
//   0x1E57D3 test    al, 2
//   0x1E57D5 jnz     short loc_1E57F0
//   0x1E57D7 mov     rdx, [rbx+10h]
//   0x1E57DB test    byte ptr [rdx], 2
//   0x1E57DE jnz     loc_1E58B8
//   0x1E57E4 mov     r13, rdx
//   0x1E57E7 mov     rdx, [rdx+8]
//   0x1E57EB test    byte ptr [rdx], 2
//   0x1E57EE jz      short loc_1E57E4
//   0x1E57F0 mov     rsi, rbx
//   0x1E57F3 mov     rdi, r12
//   0x1E57F6 mov     [rsp+0E8h+var_D8], r8
//   0x1E57FB call    sub_1E4150
//   0x1E5800 mov     r8, [rsp+0E8h+var_D8]
//   0x1E5805 mov     r9, r13
//   0x1E5808 jmp     loc_1E5570
//   0x1E580D mov     rcx, [r10+60h]
//   0x1E5811 sub     edx, eax
//   0x1E5813 cmp     byte ptr [rcx+91h], 0
//   0x1E581A jnz     loc_1E54DF
//   0x1E5820 jmp     loc_1E54DA
//   0x1E5825 mov     rdi, [r10+60h]
//   0x1E5829 sub     edx, esi
//   0x1E582B cmp     byte ptr [rdi+91h], 0
//   0x1E5832 jnz     loc_1E55EF
//   0x1E5838 jmp     loc_1E55EB
//   0x1E583D and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5841 mov     rdx, [rax]
//   0x1E5844 test    dl, 2
//   0x1E5847 jz      short loc_1E5854
//   0x1E5849 mov     r9, rax
//   0x1E584C jmp     loc_1E5650
//   0x1E5851 mov     rax, rcx
//   0x1E5854 cmp     r9, [rax+10h]
//   0x1E5858 jnz     short loc_1E5849
//   0x1E585A mov     rcx, rdx
//   0x1E585D mov     r9, rax
//   0x1E5860 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E5864 mov     rdx, [rcx]
//   0x1E5867 test    dl, 2
//   0x1E586A jz      short loc_1E5851
//   0x1E586C mov     r9, rcx
//   0x1E586F jmp     loc_1E5650
//   0x1E5874 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5878 mov     rdx, [rax]
//   0x1E587B test    dl, 2
//   0x1E587E jz      short loc_1E5888
//   0x1E5880 mov     r9, rax
//   0x1E5883 jmp     loc_1E5570
//   0x1E5888 cmp     r9, [rax+10h]
//   0x1E588C jnz     short loc_1E58B0
//   0x1E588E and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1E5892 mov     r9, rdx
//   0x1E5895 mov     rdx, [rdx]
//   0x1E5898 test    dl, 2
//   0x1E589B jnz     loc_1E555A
//   0x1E58A1 mov     rcx, rax
//   0x1E58A4 mov     rax, r9
//   0x1E58A7 mov     r9, rcx
//   0x1E58AA cmp     r9, [rax+10h]
//   0x1E58AE jz      short loc_1E588E
//   0x1E58B0 mov     r9, rax
//   0x1E58B3 jmp     loc_1E555A
//   0x1E58B8 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E58BC mov     rcx, rbx
//   0x1E58BF mov     r13, rax
//   0x1E58C2 mov     rax, [rax]
//   0x1E58C5 test    al, 2
//   0x1E58C7 jnz     loc_1E57F0
//   0x1E58CD cmp     [r13+10h], rcx
//   0x1E58D1 jnz     loc_1E57F0
//   0x1E58D7 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E58DB mov     rdx, rax
//   0x1E58DE mov     rax, [rax]
//   0x1E58E1 test    al, 2
//   0x1E58E3 jz      short loc_1E58ED
//   0x1E58E5 mov     r13, rdx
//   0x1E58E8 jmp     loc_1E57F0
//   0x1E58ED mov     rcx, r13
//   0x1E58F0 mov     r13, rdx
//   0x1E58F3 jmp     short loc_1E58CD
//   0x1E58F5 call    ___stack_chk_fail
//   0x1E58FA mov     rbx, rax
//   0x1E58FD jmp     loc_448A4
//   0x1E5902 mov     rbx, rax
//   0x1E5905 jmp     loc_448D1
// ============================================================

void sub_1E5270(/* signature unknown */)
{
    // see disassembly above
}

