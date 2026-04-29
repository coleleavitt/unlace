// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1DE1E0
// Name:           sub_1DE1E0
// Function size:  3320 bytes (788 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1DE1E0 push    r15
//   0x1DE1E2 push    r14
//   0x1DE1E4 push    r13
//   0x1DE1E6 push    r12
//   0x1DE1E8 push    rbp
//   0x1DE1E9 mov     rbp, rsi
//   0x1DE1EC push    rbx
//   0x1DE1ED mov     rbx, rdi
//   0x1DE1F0 sub     rsp, 0B8h
//   0x1DE1F7 mov     rax, [rdx]
//   0x1DE1FA movdqu  xmm3, xmmword ptr [rdx]
//   0x1DE1FE mov     rsi, fs:28h
//   0x1DE207 mov     [rsp+0E8h+var_40], rsi
//   0x1DE20F mov     rsi, rcx
//   0x1DE212 lea     r13, [rsp+0E8h+var_A8]
//   0x1DE217 mov     r15, [rbp+0]
//   0x1DE21B movzx   r14d, byte ptr [rdx+8]
//   0x1DE220 mov     rdi, r13
//   0x1DE223 mov     [rsp+0E8h+var_E0], rax
//   0x1DE228 movaps  [rsp+0E8h+var_B8], xmm3
//   0x1DE22D call    sub_30B8C0
//   0x1DE232 movsxd  r12, dword ptr [rsp+0E8h+var_A8+4]
//   0x1DE237 mov     rdi, [rsp+0E8h+var_E0]
//   0x1DE23C mov     byte ptr [rsp+0E8h+var_D8], 0
//   0x1DE241 mov     rax, r12
//   0x1DE244 add     r12, rdi
//   0x1DE247 cmp     r14b, 5
//   0x1DE24B jnz     short loc_1DE267
//   0x1DE24D mov     rdx, [rbx]
//   0x1DE250 mov     rdx, [rdx+5E0h]
//   0x1DE257 mov     rdx, [rdx+60h]
//   0x1DE25B movzx   esi, byte ptr [rdx+91h]
//   0x1DE262 mov     byte ptr [rsp+0E8h+var_D8], sil
//   0x1DE267 cmp     r15, [rbx+8]
//   0x1DE26B jz      loc_1DE41E
//   0x1DE271 lea     rcx, [r15+18h]
//   0x1DE275 cmp     [r15+20h], r14b
//   0x1DE279 jnz     loc_1DE41E
//   0x1DE27F cmp     [r15+18h], r12
//   0x1DE283 jge     loc_1DE41E
//   0x1DE289 movsxd  rdi, dword ptr [rcx+14h]
//   0x1DE28D mov     rsi, [r15+18h]
//   0x1DE291 mov     r9, [rsp+0E8h+var_E0]
//   0x1DE296 mov     [rsp+0E8h+var_C0], rdi
//   0x1DE29B mov     rdx, rdi
//   0x1DE29E add     rdi, rsi
//   0x1DE2A1 cmp     rsi, r9
//   0x1DE2A4 jl      loc_1DE8E8
//   0x1DE2AA jg      loc_1DE978
//   0x1DE2B0 cmp     edx, eax
//   0x1DE2B2 jg      loc_1DEA26
//   0x1DE2B8 jge     loc_1DE892
//   0x1DE2BE mov     rax, cs:qword_3F9A58
//   0x1DE2C5 pxor    xmm0, xmm0
//   0x1DE2C9 cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1DE2CE mov     [rsp+0E8h+var_70], 0
//   0x1DE2D7 mov     [rsp+0E8h+var_D0], rcx
//   0x1DE2DC mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1DE2E1 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1DE2E6 jnz     loc_1DE430
//   0x1DE2EC lea     rax, [rsp+0E8h+var_88]
//   0x1DE2F1 mov     rdi, r13
//   0x1DE2F4 mov     rsi, rax
//   0x1DE2F7 mov     [rsp+0E8h+var_C8], rax
//   0x1DE2FC call    sub_30D980
//   0x1DE301 test    al, al
//   0x1DE303 mov     rcx, [rsp+0E8h+var_D0]
//   0x1DE308 jz      loc_1DE452
//   0x1DE30E lea     rdi, [rcx+10h]
//   0x1DE312 mov     rsi, r13
//   0x1DE315 mov     [rsp+0E8h+var_D0], rcx
//   0x1DE31A call    sub_30D880
//   0x1DE31F mov     rax, [r15]
//   0x1DE322 mov     rcx, [rsp+0E8h+var_D0]
//   0x1DE327 mov     rdx, rax
//   0x1DE32A and     edx, 2
//   0x1DE32D cmp     dword ptr [rcx+10h], 1
//   0x1DE331 jnz     loc_1DE498
//   0x1DE337 lea     rdi, [rbx+8]
//   0x1DE33B mov     rcx, r15
//   0x1DE33E cmp     [rbp+0], r15
//   0x1DE342 jz      loc_1DE6D0
//   0x1DE348 test    rdx, rdx
//   0x1DE34B jz      loc_1DE680
//   0x1DE351 mov     rsi, r15
//   0x1DE354 mov     [rsp+0E8h+var_D0], rcx
//   0x1DE359 call    sub_1DCA10
//   0x1DE35E mov     r15, [rsp+0E8h+var_D0]
//   0x1DE363 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1DE368 jnz     loc_1DE5F0
//   0x1DE36E mov     rdx, [rbx+8]
//   0x1DE372 lea     rax, [rbx+8]
//   0x1DE376 mov     [rsp+0E8h+var_D8], rax
//   0x1DE37B cmp     r15, rdx
//   0x1DE37E jz      loc_1DE414
//   0x1DE384 lea     rcx, [r15+18h]
//   0x1DE388 cmp     [r15+20h], r14b
//   0x1DE38C jnz     loc_1DE658
//   0x1DE392 movsxd  rax, dword ptr [rcx+14h]
//   0x1DE396 add     rax, [r15+18h]
//   0x1DE39A cmp     rax, r12
//   0x1DE39D jg      loc_1DE658
//   0x1DE3A3 mov     rax, [r15]
//   0x1DE3A6 mov     rsi, rax
//   0x1DE3A9 and     esi, 2
//   0x1DE3AC cmp     dword ptr [rcx+10h], 8
//   0x1DE3B0 jz      loc_1DE500
//   0x1DE3B6 mov     rdx, r15
//   0x1DE3B9 cmp     r15, [rbp+0]
//   0x1DE3BD jz      loc_1DE4D0
//   0x1DE3C3 test    rsi, rsi
//   0x1DE3C6 jnz     short loc_1DE3F0
//   0x1DE3C8 mov     rcx, [r15+10h]
//   0x1DE3CC test    byte ptr [rcx], 2
//   0x1DE3CF jz      loc_1DE530
//   0x1DE3D5 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DE3D9 mov     rdx, rax
//   0x1DE3DC mov     rax, [rax]
//   0x1DE3DF test    al, 2
//   0x1DE3E1 jz      loc_1DE6A0
//   0x1DE3E7 nop     word ptr [rax+rax+00000000h]
//   0x1DE3F0 mov     rdi, [rsp+0E8h+var_D8]
//   0x1DE3F5 mov     rsi, r15
//   0x1DE3F8 mov     [rsp+0E8h+var_E0], rdx
//   0x1DE3FD call    sub_1DCA10
//   0x1DE402 mov     r15, [rsp+0E8h+var_E0]
//   0x1DE407 mov     rdx, [rbx+8]
//   0x1DE40B cmp     rdx, r15
//   0x1DE40E jnz     loc_1DE384
//   0x1DE414 mov     rdi, [rsp+0E8h+var_C8]
//   0x1DE419 call    sub_30B800
//   0x1DE41E mov     [rbp+0], r15
//   0x1DE422 mov     ebx, 1
//   0x1DE427 jmp     short loc_1DE45E
//   0x1DE429 align 10h
//   0x1DE430 mov     eax, dword ptr [rsp+0E8h+var_A8+4]
//   0x1DE434 lea     rsi, [rsp+0E8h+var_88]
//   0x1DE439 mov     rdi, r13
//   0x1DE43C mov     [rsp+0E8h+var_C8], rsi
//   0x1DE441 sub     eax, edx
//   0x1DE443 mov     edx, eax
//   0x1DE445 call    sub_30D980
//   0x1DE44A test    al, al
//   0x1DE44C jnz     loc_1DE5A0
//   0x1DE452 mov     rdi, [rsp+0E8h+var_C8]
//   0x1DE457 call    sub_30B800
//   0x1DE45C xor     ebx, ebx
//   0x1DE45E mov     rdi, r13
//   0x1DE461 call    sub_30B800
//   0x1DE466 mov     rax, [rsp+0E8h+var_40]
//   0x1DE46E sub     rax, fs:28h
//   0x1DE477 jnz     loc_1DEEAB
//   0x1DE47D add     rsp, 0B8h
//   0x1DE484 mov     eax, ebx
//   0x1DE486 pop     rbx
//   0x1DE487 pop     rbp
//   0x1DE488 pop     r12
//   0x1DE48A pop     r13
//   0x1DE48C pop     r14
//   0x1DE48E pop     r15
//   0x1DE490 retn
//   0x1DE491 align 8
//   0x1DE498 test    rdx, rdx
//   0x1DE49B jnz     loc_1DE363
//   0x1DE4A1 mov     rdx, [r15+10h]
//   0x1DE4A5 test    byte ptr [rdx], 2
//   0x1DE4A8 jz      loc_1DE770
//   0x1DE4AE and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DE4B2 mov     rdx, [rax]
//   0x1DE4B5 test    dl, 2
//   0x1DE4B8 jz      loc_1DE7C3
//   0x1DE4BE mov     r15, rax
//   0x1DE4C1 jmp     loc_1DE363
//   0x1DE4C6 align 10h
//   0x1DE4D0 test    rsi, rsi
//   0x1DE4D3 jz      loc_1DE558
//   0x1DE4D9 mov     rdi, [rsp+0E8h+var_D8]
//   0x1DE4DE mov     rsi, r15
//   0x1DE4E1 mov     [rsp+0E8h+var_E0], rdx
//   0x1DE4E6 call    sub_1DCA10
//   0x1DE4EB mov     rdx, [rsp+0E8h+var_E0]
//   0x1DE4F0 mov     [rbp+0], rdx
//   0x1DE4F4 mov     r15, rdx
//   0x1DE4F7 mov     rdx, [rbx+8]
//   0x1DE4FB jmp     loc_1DE40B
//   0x1DE500 test    rsi, rsi
//   0x1DE503 jnz     loc_1DE40B
//   0x1DE509 mov     rcx, [r15+10h]
//   0x1DE50D test    byte ptr [rcx], 2
//   0x1DE510 jz      loc_1DE750
//   0x1DE516 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DE51A mov     rcx, [rax]
//   0x1DE51D test    cl, 2
//   0x1DE520 jz      loc_1DE788
//   0x1DE526 mov     r15, rax
//   0x1DE529 jmp     loc_1DE40B
//   0x1DE52E align 10h
//   0x1DE530 mov     rdx, rcx
//   0x1DE533 mov     rcx, [rcx+8]
//   0x1DE537 test    byte ptr [rcx], 2
//   0x1DE53A jnz     loc_1DE3F0
//   0x1DE540 mov     rdx, rcx
//   0x1DE543 mov     rcx, [rcx+8]
//   0x1DE547 test    byte ptr [rcx], 2
//   0x1DE54A jnz     loc_1DE3F0
//   0x1DE550 jmp     short loc_1DE530
//   0x1DE552 align 8
//   0x1DE558 mov     rcx, [r15+10h]
//   0x1DE55C test    byte ptr [rcx], 2
//   0x1DE55F jz      loc_1DE730
//   0x1DE565 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DE569 mov     rdx, rax
//   0x1DE56C mov     rax, [rax]
//   0x1DE56F test    al, 2
//   0x1DE571 jnz     loc_1DE4D9
//   0x1DE577 mov     rsi, r15
//   0x1DE57A cmp     [rdx+10h], rsi
//   0x1DE57E jnz     loc_1DE4D9
//   0x1DE584 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DE588 mov     rsi, rdx
//   0x1DE58B mov     rcx, rax
//   0x1DE58E mov     rax, [rax]
//   0x1DE591 mov     rdx, rcx
//   0x1DE594 test    al, 2
//   0x1DE596 jz      short loc_1DE57A
//   0x1DE598 jmp     loc_1DE4D9
//   0x1DE59D align 20h
//   0x1DE5A0 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1DE5A6 movdqa  xmm1, xmmword ptr [r13+0]
//   0x1DE5AC movdqa  xmm0, xmmword ptr [r13+10h]
//   0x1DE5B2 mov     rcx, [rsp+0E8h+var_D0]
//   0x1DE5B7 movaps  xmmword ptr [r13+0], xmm2
//   0x1DE5BC movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1DE5C2 movaps  [rsp+0E8h+var_68], xmm1
//   0x1DE5CA movaps  [rsp+0E8h+var_58], xmm0
//   0x1DE5D2 movaps  xmmword ptr [r13+10h], xmm2
//   0x1DE5D7 movaps  [rsp+0E8h+var_88], xmm1
//   0x1DE5DC movaps  xmmword ptr [rsp+70h], xmm0
//   0x1DE5E1 jmp     loc_1DE30E
//   0x1DE5E6 align 10h
//   0x1DE5F0 mov     rdi, [rsp+0E8h+var_C0]
//   0x1DE5F5 add     [rsp+0E8h+var_E0], rdi
//   0x1DE5FA mov     rdi, [rsp+0E8h+var_C8]
//   0x1DE5FF movdqa  xmm1, xmmword ptr [r13+0]
//   0x1DE605 movdqa  xmm0, xmmword ptr [r13+10h]
//   0x1DE60B movdqa  xmm2, xmmword ptr [rdi]
//   0x1DE60F movaps  xmmword ptr [rdi], xmm1
//   0x1DE612 movaps  [rsp+0E8h+var_68], xmm1
//   0x1DE61A movaps  xmmword ptr [r13+0], xmm2
//   0x1DE61F movdqa  xmm2, xmmword ptr [rdi+10h]
//   0x1DE624 mov     eax, dword ptr [rsp+0E8h+var_A8+4]
//   0x1DE628 movaps  xmmword ptr [rdi+10h], xmm0
//   0x1DE62C mov     dword ptr [rsp+0E8h+var_D0], eax
//   0x1DE630 movaps  [rsp+0E8h+var_58], xmm0
//   0x1DE638 movaps  xmmword ptr [r13+10h], xmm2
//   0x1DE63D call    sub_30B800
//   0x1DE642 cmp     r15, [rbx+8]
//   0x1DE646 mov     eax, dword ptr [rsp+0E8h+var_D0]
//   0x1DE64A jnz     loc_1DE271
//   0x1DE650 jmp     loc_1DE41E
//   0x1DE655 align 8
//   0x1DE658 cmp     rdx, r15
//   0x1DE65B jz      loc_1DE414
//   0x1DE661 cmp     [rcx+8], r14b
//   0x1DE665 jnz     loc_1DE414
//   0x1DE66B cmp     [r15+18h], r12
//   0x1DE66F jge     loc_1DE414
//   0x1DE675 jmp     loc_1DE452
//   0x1DE67A align 20h
//   0x1DE680 mov     rdx, [r15+10h]
//   0x1DE684 test    byte ptr [rdx], 2
//   0x1DE687 jnz     loc_1DE7F0
//   0x1DE68D mov     rcx, rdx
//   0x1DE690 mov     rdx, [rdx+8]
//   0x1DE694 test    byte ptr [rdx], 2
//   0x1DE697 jnz     loc_1DE351
//   0x1DE69D jmp     short loc_1DE68D
//   0x1DE69F align 20h
//   0x1DE6A0 mov     rsi, r15
//   0x1DE6A3 cmp     [rdx+10h], rsi
//   0x1DE6A7 jnz     loc_1DE3F0
//   0x1DE6AD and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DE6B1 mov     rsi, rdx
//   0x1DE6B4 mov     rcx, rax
//   0x1DE6B7 mov     rax, [rax]
//   0x1DE6BA mov     rdx, rcx
//   0x1DE6BD test    al, 2
//   0x1DE6BF jz      short loc_1DE6A3
//   0x1DE6C1 jmp     loc_1DE3F0
//   0x1DE6C6 align 10h
//   0x1DE6D0 test    rdx, rdx
//   0x1DE6D3 jnz     short loc_1DE710
//   0x1DE6D5 mov     rdx, [r15+10h]
//   0x1DE6D9 test    byte ptr [rdx], 2
//   0x1DE6DC jz      loc_1DE830
//   0x1DE6E2 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DE6E6 mov     rsi, r15
//   0x1DE6E9 mov     rcx, rax
//   0x1DE6EC mov     rax, [rax]
//   0x1DE6EF test    al, 2
//   0x1DE6F1 jnz     short loc_1DE710
//   0x1DE6F3 cmp     [rcx+10h], rsi
//   0x1DE6F7 jnz     short loc_1DE710
//   0x1DE6F9 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DE6FD mov     rdx, rax
//   0x1DE700 mov     rax, [rax]
//   0x1DE703 test    al, 2
//   0x1DE705 jz      loc_1DEB2D
//   0x1DE70B mov     rcx, rdx
//   0x1DE70E xchg    ax, ax
//   0x1DE710 mov     rsi, r15
//   0x1DE713 mov     [rsp+0E8h+var_D0], rcx
//   0x1DE718 call    sub_1DCA10
//   0x1DE71D mov     rcx, [rsp+0E8h+var_D0]
//   0x1DE722 mov     [rbp+0], rcx
//   0x1DE726 mov     r15, rcx
//   0x1DE729 jmp     loc_1DE363
//   0x1DE72E align 10h
//   0x1DE730 mov     rdx, rcx
//   0x1DE733 mov     rcx, [rcx+8]
//   0x1DE737 test    byte ptr [rcx], 2
//   0x1DE73A jnz     loc_1DE4D9
//   0x1DE740 jmp     short loc_1DE730
//   0x1DE742 align 10h
//   0x1DE750 mov     r15, rcx
//   0x1DE753 mov     rcx, [rcx+8]
//   0x1DE757 test    byte ptr [rcx], 2
//   0x1DE75A jnz     loc_1DE40B
//   0x1DE760 jmp     short loc_1DE750
//   0x1DE762 align 10h
//   0x1DE770 mov     r15, rdx
//   0x1DE773 mov     rdx, [rdx+8]
//   0x1DE777 test    byte ptr [rdx], 2
//   0x1DE77A jnz     loc_1DE363
//   0x1DE780 jmp     short loc_1DE770
//   0x1DE782 align 8
//   0x1DE788 cmp     r15, [rax+10h]
//   0x1DE78C jnz     loc_1DE526
//   0x1DE792 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DE796 mov     r15, rcx
//   0x1DE799 mov     rcx, [rcx]
//   0x1DE79C test    cl, 2
//   0x1DE79F jnz     loc_1DE40B
//   0x1DE7A5 mov     rsi, rax
//   0x1DE7A8 mov     rax, r15
//   0x1DE7AB mov     r15, rsi
//   0x1DE7AE cmp     r15, [rax+10h]
//   0x1DE7B2 jz      short loc_1DE792
//   0x1DE7B4 jmp     loc_1DE526
//   0x1DE7B9 align 20h
//   0x1DE7C0 mov     rax, rcx
//   0x1DE7C3 cmp     [rax+10h], r15
//   0x1DE7C7 jnz     loc_1DE4BE
//   0x1DE7CD mov     rcx, rdx
//   0x1DE7D0 mov     r15, rax
//   0x1DE7D3 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DE7D7 mov     rdx, [rcx]
//   0x1DE7DA test    dl, 2
//   0x1DE7DD jz      short loc_1DE7C0
//   0x1DE7DF mov     r15, rcx
//   0x1DE7E2 jmp     loc_1DE363
//   0x1DE7E7 align 10h
//   0x1DE7F0 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DE7F4 mov     rcx, rax
//   0x1DE7F7 mov     rax, [rax]
//   0x1DE7FA test    al, 2
//   0x1DE7FC jnz     loc_1DE351
//   0x1DE802 mov     rsi, r15
//   0x1DE805 cmp     [rcx+10h], rsi
//   0x1DE809 jnz     loc_1DE351
//   0x1DE80F and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DE813 mov     rsi, rcx
//   0x1DE816 mov     rdx, rax
//   0x1DE819 mov     rax, [rax]
//   0x1DE81C mov     rcx, rdx
//   0x1DE81F test    al, 2
//   0x1DE821 jz      short loc_1DE805
//   0x1DE823 jmp     loc_1DE351
//   0x1DE828 align 10h
//   0x1DE830 mov     rcx, rdx
//   0x1DE833 mov     rdx, [rdx+8]
//   0x1DE837 test    byte ptr [rdx], 2
//   0x1DE83A jnz     loc_1DE710
//   0x1DE840 jmp     short loc_1DE830
//   0x1DE842 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1DE848 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1DE84E mov     [rsp+0E8h+var_E0], rcx
//   0x1DE853 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1DE859 mov     rdi, [rsp+0E8h+var_C8]
//   0x1DE85E movaps  [rsp+0E8h+var_A8], xmm2
//   0x1DE863 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1DE869 movaps  [rsp+0E8h+var_68], xmm1
//   0x1DE871 movaps  [rsp+0E8h+var_58], xmm0
//   0x1DE879 movaps  [rsp+0E8h+var_98], xmm2
//   0x1DE87E movaps  [rsp+0E8h+var_88], xmm1
//   0x1DE883 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1DE888 call    sub_30B800
//   0x1DE88D mov     rcx, [rsp+0E8h+var_E0]
//   0x1DE892 lea     rdi, [r15+28h]
//   0x1DE896 mov     rsi, r13
//   0x1DE899 mov     [rsp+0E8h+var_E0], rcx
//   0x1DE89E call    sub_30D880
//   0x1DE8A3 mov     rax, [r15]
//   0x1DE8A6 mov     rcx, [rsp+0E8h+var_E0]
//   0x1DE8AB mov     rdx, rax
//   0x1DE8AE and     edx, 2
//   0x1DE8B1 cmp     dword ptr [rcx+10h], 1
//   0x1DE8B5 jz      loc_1DEB38
//   0x1DE8BB test    rdx, rdx
//   0x1DE8BE jnz     loc_1DE41E
//   0x1DE8C4 mov     rdx, [r15+10h]
//   0x1DE8C8 test    byte ptr [rdx], 2
//   0x1DE8CB jnz     loc_1DEBE5
//   0x1DE8D1 mov     r15, rdx
//   0x1DE8D4 mov     rdx, [rdx+8]
//   0x1DE8D8 test    byte ptr [rdx], 2
//   0x1DE8DB jnz     loc_1DE41E
//   0x1DE8E1 jmp     short loc_1DE8D1
//   0x1DE8E3 align 8
//   0x1DE8E8 cmp     r12, rdi
//   0x1DE8EB jnz     loc_1DE45C
//   0x1DE8F1 mov     rax, cs:qword_3F9A58
//   0x1DE8F8 pxor    xmm0, xmm0
//   0x1DE8FC cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1DE901 mov     [rsp+0E8h+var_70], 0
//   0x1DE90A movups  [rsp+0E8h+var_88+8], xmm0
//   0x1DE90F lea     r12, [r15+28h]
//   0x1DE913 mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1DE918 jnz     loc_1DECD9
//   0x1DE91E mov     edx, dword ptr [rsp+0E8h+var_E0]
//   0x1DE922 lea     rax, [rsp+0E8h+var_88]
//   0x1DE927 mov     rdi, r12
//   0x1DE92A mov     [rsp+0E8h+var_C8], rax
//   0x1DE92F sub     edx, esi
//   0x1DE931 mov     rsi, rax
//   0x1DE934 call    sub_30D980
//   0x1DE939 test    al, al
//   0x1DE93B jz      loc_1DED4F
//   0x1DE941 mov     rax, [r15]
//   0x1DE944 lea     r14, [rbx+8]
//   0x1DE948 mov     r12, r15
//   0x1DE94B test    al, 2
//   0x1DE94D jnz     loc_1DEC20
//   0x1DE953 mov     r12, [r15+10h]
//   0x1DE957 test    byte ptr [r12], 2
//   0x1DE95C jnz     loc_1DEDF5
//   0x1DE962 mov     rax, [r12+8]
//   0x1DE967 test    byte ptr [rax], 2
//   0x1DE96A jnz     loc_1DEC20
//   0x1DE970 mov     r12, rax
//   0x1DE973 jmp     short loc_1DE962
//   0x1DE975 align 8
//   0x1DE978 cmp     r12, rdi
//   0x1DE97B jnz     loc_1DE45C
//   0x1DE981 mov     rax, cs:qword_3F9A58
//   0x1DE988 pxor    xmm0, xmm0
//   0x1DE98C cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1DE991 mov     [rsp+0E8h+var_70], 0
//   0x1DE99A mov     [rsp+0E8h+var_D8], rcx
//   0x1DE99F mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1DE9A4 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1DE9A9 jnz     loc_1DEC6C
//   0x1DE9AF mov     eax, dword ptr [rsp+0E8h+var_E0]
//   0x1DE9B3 mov     edx, esi
//   0x1DE9B5 mov     rdi, r13
//   0x1DE9B8 sub     edx, eax
//   0x1DE9BA lea     rax, [rsp+0E8h+var_88]
//   0x1DE9BF mov     rsi, rax
//   0x1DE9C2 mov     [rsp+0E8h+var_C8], rax
//   0x1DE9C7 call    sub_30D980
//   0x1DE9CC test    al, al
//   0x1DE9CE mov     rcx, [rsp+0E8h+var_D8]
//   0x1DE9D3 jz      loc_1DEDCC
//   0x1DE9D9 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1DE9DE jnz     loc_1DE842
//   0x1DE9E4 mov     rdx, [r15]
//   0x1DE9E7 lea     rdi, [rbx+8]
//   0x1DE9EB mov     r12, r15
//   0x1DE9EE test    dl, 2
//   0x1DE9F1 jnz     short loc_1DEA0C
//   0x1DE9F3 mov     rax, [r15+10h]
//   0x1DE9F7 test    byte ptr [rax], 2
//   0x1DE9FA jnz     loc_1DEE32
//   0x1DEA00 mov     r12, rax
//   0x1DEA03 mov     rax, [rax+8]
//   0x1DEA07 test    byte ptr [rax], 2
//   0x1DEA0A jz      short loc_1DEA00
//   0x1DEA0C mov     rsi, r15
//   0x1DEA0F call    sub_1DCA10
//   0x1DEA14 mov     rdi, [rsp+0E8h+var_C8]
//   0x1DEA19 mov     r15, r12
//   0x1DEA1C call    sub_30B800
//   0x1DEA21 jmp     loc_1DE41E
//   0x1DEA26 cmp     dword ptr [rcx+10h], 8
//   0x1DEA2A jz      loc_1DE41E
//   0x1DEA30 mov     rdx, cs:qword_3F9A58
//   0x1DEA37 pxor    xmm0, xmm0
//   0x1DEA3B cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1DEA40 mov     [rsp+0E8h+var_70], 0
//   0x1DEA49 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1DEA4E lea     r14, [r15+28h]
//   0x1DEA52 mov     qword ptr [rsp+0E8h+var_88], rdx
//   0x1DEA57 jnz     loc_1DEB7A
//   0x1DEA5D lea     rsi, [rsp+0E8h+var_88]
//   0x1DEA62 mov     edx, eax
//   0x1DEA64 mov     rdi, r14
//   0x1DEA67 mov     [rsp+0E8h+var_E0], rcx
//   0x1DEA6C mov     [rsp+0E8h+var_C8], rsi
//   0x1DEA71 call    sub_30D980
//   0x1DEA76 test    al, al
//   0x1DEA78 mov     rcx, [rsp+0E8h+var_E0]
//   0x1DEA7D jz      loc_1DED40
//   0x1DEA83 lea     rdi, [rcx+10h]
//   0x1DEA87 mov     rsi, r13
//   0x1DEA8A mov     [rsp+0E8h+var_E0], rcx
//   0x1DEA8F call    sub_30D880
//   0x1DEA94 mov     rax, [r15]
//   0x1DEA97 mov     rcx, [rsp+0E8h+var_E0]
//   0x1DEA9C mov     rdx, rax
//   0x1DEA9F and     edx, 2
//   0x1DEAA2 cmp     dword ptr [rcx+10h], 1
//   0x1DEAA6 jz      loc_1DED5E
//   0x1DEAAC test    rdx, rdx
//   0x1DEAAF jnz     short loc_1DEAEA
//   0x1DEAB1 mov     rdx, [r15+10h]
//   0x1DEAB5 test    byte ptr [rdx], 2
//   0x1DEAB8 jnz     short loc_1DEADB
//   0x1DEABA mov     rax, [rdx+8]
//   0x1DEABE test    byte ptr [rax], 2
//   0x1DEAC1 jnz     loc_1DEEA3
//   0x1DEAC7 mov     rdx, rax
//   0x1DEACA jmp     short loc_1DEABA
//   0x1DEACC mov     rcx, r15
//   0x1DEACF mov     r15, rax
//   0x1DEAD2 cmp     rcx, [rax+10h]
//   0x1DEAD6 jnz     short loc_1DEAEA
//   0x1DEAD8 mov     rax, rdx
//   0x1DEADB and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DEADF mov     rdx, [rax]
//   0x1DEAE2 test    dl, 2
//   0x1DEAE5 jz      short loc_1DEACC
//   0x1DEAE7 mov     r15, rax
//   0x1DEAEA cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1DEAEF jz      short loc_1DEB1E
//   0x1DEAF1 mov     rdx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1DEAF6 mov     qword ptr [rsp+0E8h+var_B8], r12
//   0x1DEAFB lea     rdi, [rbx+8]
//   0x1DEAFF mov     rsi, r15
//   0x1DEB02 mov     r8, [rsp+0E8h+var_C8]
//   0x1DEB07 mov     qword ptr [rsp+0E8h+var_B8+8], rdx
//   0x1DEB0C mov     rdx, qword ptr [rsp+0E8h+var_B8]
//   0x1DEB11 mov     rcx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1DEB16 call    sub_1DD220
//   0x1DEB1B mov     r15, rax
//   0x1DEB1E mov     rdi, [rsp+0E8h+var_C8]
//   0x1DEB23 call    sub_30B800
//   0x1DEB28 jmp     loc_1DE41E
//   0x1DEB2D mov     rsi, rcx
//   0x1DEB30 mov     rcx, rdx
//   0x1DEB33 jmp     loc_1DE6F3
//   0x1DEB38 lea     rdi, [rbx+8]
//   0x1DEB3C mov     r12, r15
//   0x1DEB3F test    rdx, rdx
//   0x1DEB42 jnz     short loc_1DEB6A
//   0x1DEB44 mov     r12, [r15+10h]
//   0x1DEB48 test    byte ptr [r12], 2
//   0x1DEB4D jnz     loc_1DED93
//   0x1DEB53 mov     rax, [r12+8]
//   0x1DEB58 test    byte ptr [rax], 2
//   0x1DEB5B jnz     short loc_1DEB6A
//   0x1DEB5D mov     r12, rax
//   0x1DEB60 mov     rax, [r12+8]
//   0x1DEB65 test    byte ptr [rax], 2
//   0x1DEB68 jz      short loc_1DEB5D
//   0x1DEB6A mov     rsi, r15
//   0x1DEB6D call    sub_1DCA10
//   0x1DEB72 mov     r15, r12
//   0x1DEB75 jmp     loc_1DE41E
//   0x1DEB7A mov     edx, [rcx+14h]
//   0x1DEB7D mov     rdi, r14
//   0x1DEB80 mov     [rsp+0E8h+var_E0], rcx
//   0x1DEB85 sub     edx, eax
//   0x1DEB87 lea     rax, [rsp+0E8h+var_88]
//   0x1DEB8C mov     rsi, rax
//   0x1DEB8F mov     [rsp+0E8h+var_C8], rax
//   0x1DEB94 call    sub_30D980
//   0x1DEB99 test    al, al
//   0x1DEB9B mov     rcx, [rsp+0E8h+var_E0]
//   0x1DEBA0 jz      loc_1DED40
//   0x1DEBA6 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1DEBAC movdqu  xmm1, xmmword ptr [r14]
//   0x1DEBB1 movdqu  xmm0, xmmword ptr [r14+10h]
//   0x1DEBB7 movups  xmmword ptr [r14], xmm2
//   0x1DEBBB movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1DEBC1 movaps  [rsp+0E8h+var_68], xmm1
//   0x1DEBC9 movups  xmmword ptr [r14+10h], xmm2
//   0x1DEBCE movaps  [rsp+0E8h+var_58], xmm0
//   0x1DEBD6 movaps  [rsp+0E8h+var_88], xmm1
//   0x1DEBDB movaps  xmmword ptr [rsp+70h], xmm0
//   0x1DEBE0 jmp     loc_1DEA83
//   0x1DEBE5 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DEBE9 mov     rdx, [rax]
//   0x1DEBEC test    dl, 2
//   0x1DEBEF jz      short loc_1DEBF9
//   0x1DEBF1 mov     r15, rax
//   0x1DEBF4 jmp     loc_1DE41E
//   0x1DEBF9 cmp     [rax+10h], r15
//   0x1DEBFD jnz     short loc_1DEBF1
//   0x1DEBFF mov     rcx, rdx
//   0x1DEC02 mov     r15, rax
//   0x1DEC05 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DEC09 mov     rdx, [rcx]
//   0x1DEC0C test    dl, 2
//   0x1DEC0F jnz     loc_1DEDED
//   0x1DEC15 mov     rax, rcx
//   0x1DEC18 cmp     [rax+10h], r15
//   0x1DEC1C jz      short loc_1DEBFF
//   0x1DEC1E jmp     short loc_1DEBF1
//   0x1DEC20 mov     rsi, r15
//   0x1DEC23 mov     rdi, r14
//   0x1DEC26 call    sub_1DCA10
//   0x1DEC2B cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1DEC30 jz      loc_1DEDDB
//   0x1DEC36 mov     rdx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1DEC3B mov     rax, [rsp+0E8h+var_E0]
//   0x1DEC40 mov     rsi, r12
//   0x1DEC43 mov     rdi, r14
//   0x1DEC46 mov     r8, [rsp+0E8h+var_C8]
//   0x1DEC4B mov     rcx, rdx
//   0x1DEC4E mov     rdx, rax
//   0x1DEC51 call    sub_1DD220
//   0x1DEC56 mov     rdi, [rsp+0E8h+var_C8]
//   0x1DEC5B mov     r15, rax
//   0x1DEC5E call    sub_30B800
//   0x1DEC63 lea     rcx, [r15+18h]
//   0x1DEC67 jmp     loc_1DE892
//   0x1DEC6C lea     rax, [rsp+0E8h+var_88]
//   0x1DEC71 mov     edx, dword ptr [rsp+0E8h+var_E0]
//   0x1DEC75 add     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1DEC79 mov     rdi, r13
//   0x1DEC7C sub     edx, esi
//   0x1DEC7E mov     rsi, rax
//   0x1DEC81 mov     [rsp+0E8h+var_C8], rax
//   0x1DEC86 call    sub_30D980
//   0x1DEC8B test    al, al
//   0x1DEC8D mov     rcx, [rsp+0E8h+var_D8]
//   0x1DEC92 jz      loc_1DEDCC
//   0x1DEC98 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1DEC9E movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1DECA4 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1DECAA movaps  [rsp+0E8h+var_A8], xmm2
//   0x1DECAF movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1DECB5 movaps  [rsp+0E8h+var_68], xmm1
//   0x1DECBD movaps  [rsp+0E8h+var_58], xmm0
//   0x1DECC5 movaps  [rsp+0E8h+var_98], xmm2
//   0x1DECCA movaps  [rsp+0E8h+var_88], xmm1
//   0x1DECCF movaps  xmmword ptr [rsp+70h], xmm0
//   0x1DECD4 jmp     loc_1DE9D9
//   0x1DECD9 mov     eax, dword ptr [rsp+0E8h+var_E0]
//   0x1DECDD mov     edx, [rcx+14h]
//   0x1DECE0 mov     rdi, r12
//   0x1DECE3 sub     edx, eax
//   0x1DECE5 lea     rax, [rsp+0E8h+var_88]
//   0x1DECEA add     edx, esi
//   0x1DECEC mov     rsi, rax
//   0x1DECEF mov     [rsp+0E8h+var_C8], rax
//   0x1DECF4 call    sub_30D980
//   0x1DECF9 test    al, al
//   0x1DECFB jz      short loc_1DED4F
//   0x1DECFD movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1DED03 movdqu  xmm1, xmmword ptr [r12]
//   0x1DED09 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DED10 movups  xmmword ptr [r12], xmm2
//   0x1DED15 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1DED1B movaps  [rsp+0E8h+var_68], xmm1
//   0x1DED23 movups  xmmword ptr [r12+10h], xmm2
//   0x1DED29 movaps  [rsp+0E8h+var_58], xmm0
//   0x1DED31 movaps  [rsp+0E8h+var_88], xmm1
//   0x1DED36 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1DED3B jmp     loc_1DE941
//   0x1DED40 mov     rdi, [rsp+0E8h+var_C8]
//   0x1DED45 call    sub_30B800
//   0x1DED4A jmp     loc_1DE45C
//   0x1DED4F mov     rdi, [rsp+0E8h+var_C8]
//   0x1DED54 call    sub_30B800
//   0x1DED59 jmp     loc_1DE45C
//   0x1DED5E lea     rdi, [rbx+8]
//   0x1DED62 mov     r14, r15
//   0x1DED65 test    rdx, rdx
//   0x1DED68 jnz     short loc_1DED83
//   0x1DED6A mov     rdx, [r15+10h]
//   0x1DED6E test    byte ptr [rdx], 2
//   0x1DED71 jnz     loc_1DEE6B
//   0x1DED77 mov     r14, rdx
//   0x1DED7A mov     rdx, [rdx+8]
//   0x1DED7E test    byte ptr [rdx], 2
//   0x1DED81 jz      short loc_1DED77
//   0x1DED83 mov     rsi, r15
//   0x1DED86 call    sub_1DCA10
//   0x1DED8B mov     r15, r14
//   0x1DED8E jmp     loc_1DEAEA
//   0x1DED93 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DED97 mov     r12, rax
//   0x1DED9A mov     rax, [rax]
//   0x1DED9D test    al, 2
//   0x1DED9F jnz     loc_1DEB6A
//   0x1DEDA5 mov     rcx, r15
//   0x1DEDA8 cmp     [r12+10h], rcx
//   0x1DEDAD jnz     loc_1DEB6A
//   0x1DEDB3 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DEDB7 mov     rcx, r12
//   0x1DEDBA mov     rdx, rax
//   0x1DEDBD mov     rax, [rax]
//   0x1DEDC0 mov     r12, rdx
//   0x1DEDC3 test    al, 2
//   0x1DEDC5 jz      short loc_1DEDA8
//   0x1DEDC7 jmp     loc_1DEB6A
//   0x1DEDCC mov     rdi, [rsp+0E8h+var_C8]
//   0x1DEDD1 call    sub_30B800
//   0x1DEDD6 jmp     loc_1DE45C
//   0x1DEDDB mov     rdi, [rsp+0E8h+var_C8]
//   0x1DEDE0 mov     r15, r12
//   0x1DEDE3 call    sub_30B800
//   0x1DEDE8 jmp     loc_1DE41E
//   0x1DEDED mov     r15, rcx
//   0x1DEDF0 jmp     loc_1DE41E
//   0x1DEDF5 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DEDF9 mov     r12, rax
//   0x1DEDFC mov     rax, [rax]
//   0x1DEDFF test    al, 2
//   0x1DEE01 jnz     loc_1DEC20
//   0x1DEE07 mov     rcx, r15
//   0x1DEE0A mov     rdx, r12
//   0x1DEE0D cmp     [r12+10h], rcx
//   0x1DEE12 jnz     loc_1DEC20
//   0x1DEE18 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DEE1C mov     r12, rax
//   0x1DEE1F mov     rax, [rax]
//   0x1DEE22 test    al, 2
//   0x1DEE24 jnz     loc_1DEC20
//   0x1DEE2A mov     rcx, rdx
//   0x1DEE2D mov     rdx, r12
//   0x1DEE30 jmp     short loc_1DEE0D
//   0x1DEE32 and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1DEE36 mov     rax, [rdx]
//   0x1DEE39 mov     r12, rdx
//   0x1DEE3C test    al, 2
//   0x1DEE3E jnz     loc_1DEA0C
//   0x1DEE44 mov     rcx, r15
//   0x1DEE47 cmp     [r12+10h], rcx
//   0x1DEE4C jnz     loc_1DEA0C
//   0x1DEE52 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DEE56 mov     rcx, r12
//   0x1DEE59 mov     rdx, rax
//   0x1DEE5C mov     rax, [rax]
//   0x1DEE5F mov     r12, rdx
//   0x1DEE62 test    al, 2
//   0x1DEE64 jz      short loc_1DEE47
//   0x1DEE66 jmp     loc_1DEA0C
//   0x1DEE6B and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DEE6F mov     r14, rax
//   0x1DEE72 mov     rax, [rax]
//   0x1DEE75 test    al, 2
//   0x1DEE77 jnz     loc_1DED83
//   0x1DEE7D mov     rcx, r15
//   0x1DEE80 cmp     [r14+10h], rcx
//   0x1DEE84 jnz     loc_1DED83
//   0x1DEE8A and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DEE8E mov     rcx, r14
//   0x1DEE91 mov     rdx, rax
//   0x1DEE94 mov     rax, [rax]
//   0x1DEE97 mov     r14, rdx
//   0x1DEE9A test    al, 2
//   0x1DEE9C jz      short loc_1DEE80
//   0x1DEE9E jmp     loc_1DED83
//   0x1DEEA3 mov     r15, rdx
//   0x1DEEA6 jmp     loc_1DEAEA
//   0x1DEEAB call    ___stack_chk_fail
//   0x1DEEB0 mov     rbx, rax
//   0x1DEEB3 jmp     loc_406C4
//   0x1DEEB8 mov     rbx, rax
//   0x1DEEBB jmp     loc_40702
//   0x1DEEC0 mov     rbx, rax
//   0x1DEEC3 jmp     loc_406CE
//   0x1DEEC8 mov     rbx, rax
//   0x1DEECB jmp     loc_4070E
//   0x1DEED0 mov     rbx, rax
//   0x1DEED3 jmp     loc_406F1
// ============================================================

void sub_1DE1E0(/* signature unknown */)
{
    // see disassembly above
}

