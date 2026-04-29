// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1DC080
// Name:           sub_1DC080
// Function size:  2637 bytes (598 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1DC080 push    r15
//   0x1DC082 push    r14
//   0x1DC084 push    r13
//   0x1DC086 push    r12
//   0x1DC088 push    rbp
//   0x1DC089 push    rbx
//   0x1DC08A sub     rsp, 0C8h
//   0x1DC091 mov     [rsp+0F8h+var_E0], rsi
//   0x1DC096 mov     rax, fs:28h
//   0x1DC09F mov     [rsp+0F8h+var_40], rax
//   0x1DC0A7 xor     eax, eax
//   0x1DC0A9 movzx   eax, byte ptr [rdi+18h]
//   0x1DC0AD cmp     al, [rsi+18h]
//   0x1DC0B0 jnz     loc_1DC2B0
//   0x1DC0B6 test    al, al
//   0x1DC0B8 jnz     loc_1DC2B2
//   0x1DC0BE mov     rax, [rdi+8]
//   0x1DC0C2 mov     r13, rdi
//   0x1DC0C5 mov     rdi, [rsi+8]
//   0x1DC0C9 mov     rcx, rax
//   0x1DC0CC mov     [rsp+0F8h+var_E8], rdi
//   0x1DC0D1 mov     rdx, rdi
//   0x1DC0D4 test    rax, rax
//   0x1DC0D7 jz      loc_1DC310
//   0x1DC0DD cmp     qword ptr [r13+10h], 0
//   0x1DC0E2 jnz     loc_1DC2E0
//   0x1DC0E8 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DC0ED mov     rbx, rax
//   0x1DC0F0 test    rcx, rcx
//   0x1DC0F3 jz      short loc_1DC105
//   0x1DC0F5 mov     rdx, [rsp+0F8h+var_E0]
//   0x1DC0FA cmp     qword ptr [rdx+10h], 0
//   0x1DC0FF jnz     loc_1DC330
//   0x1DC105 lea     rcx, [rax+18h]
//   0x1DC109 cmp     rax, rbx
//   0x1DC10C jz      loc_1DCA03
//   0x1DC112 cmp     dword ptr [rcx+10h], 8
//   0x1DC116 jnz     loc_1DC2B0
//   0x1DC11C mov     rdx, [rax]
//   0x1DC11F test    dl, 2
//   0x1DC122 jnz     short loc_1DC109
//   0x1DC124 mov     rcx, [rax+10h]
//   0x1DC128 test    byte ptr [rcx], 2
//   0x1DC12B jz      loc_1DC340
//   0x1DC131 and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1DC135 mov     rcx, [rdx]
//   0x1DC138 test    cl, 2
//   0x1DC13B jz      loc_1DC363
//   0x1DC141 mov     rax, rdx
//   0x1DC144 jmp     short loc_1DC105
//   0x1DC146 align 10h
//   0x1DC150 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DC154 mov     rdx, [rax]
//   0x1DC157 test    dl, 2
//   0x1DC15A jz      loc_1DC700
//   0x1DC160 mov     rbx, rax
//   0x1DC163 nop     word ptr [rax+rax+00000000h]
//   0x1DC16E xchg    ax, ax
//   0x1DC170 cmp     [r13+8], rbx
//   0x1DC174 jz      loc_1DC290
//   0x1DC17A movzx   eax, [rsp+0F8h+var_C9]
//   0x1DC17F lea     r15, [rbx+18h]
//   0x1DC183 cmp     [rbx+20h], al
//   0x1DC186 jnz     loc_1DC290
//   0x1DC18C cmp     [rbx+18h], r14
//   0x1DC190 jnz     loc_1DC290
//   0x1DC196 cmp     dword ptr [r15+10h], 8
//   0x1DC19B jz      loc_1DC290
//   0x1DC1A1 movsxd  rax, dword ptr [r15+14h]
//   0x1DC1A5 add     r14, rax
//   0x1DC1A8 cmp     [rsp+0F8h+var_D8], r14
//   0x1DC1AD jl      loc_1DC290
//   0x1DC1B3 mov     rax, cs:qword_3FDBA0
//   0x1DC1BA pxor    xmm0, xmm0
//   0x1DC1BE cmp     [rsp+0F8h+var_CA], 0
//   0x1DC1C3 mov     [rsp+0F8h+var_70], 0
//   0x1DC1CF mov     edx, dword ptr [rsp+0F8h+var_C8+4]
//   0x1DC1D3 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DC1D8 mov     qword ptr [rsp+0F8h+var_88], rax
//   0x1DC1DD jnz     loc_1DC690
//   0x1DC1E3 lea     rbp, [rsp+0F8h+var_88]
//   0x1DC1E8 mov     rdi, r12
//   0x1DC1EB mov     rsi, rbp
//   0x1DC1EE call    sub_30FC00
//   0x1DC1F3 test    al, al
//   0x1DC1F5 jz      loc_1DC808
//   0x1DC1FB mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC200 mov     rsi, r12
//   0x1DC203 call    sub_30DCC0
//   0x1DC208 test    eax, eax
//   0x1DC20A jnz     loc_1DC808
//   0x1DC210 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC215 lea     rsi, [r15+10h]
//   0x1DC219 call    sub_30DC90
//   0x1DC21E movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1DC223 movdqa  xmm1, xmmword ptr [r12]
//   0x1DC229 mov     rdi, rbp
//   0x1DC22C movdqa  xmm0, xmmword ptr [r12+10h]
//   0x1DC233 movaps  xmmword ptr [r12], xmm2
//   0x1DC238 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1DC23D movaps  xmmword ptr [rbp+0], xmm1
//   0x1DC241 movaps  xmmword ptr [rbp+10h], xmm0
//   0x1DC245 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DC24D movaps  [rsp+0F8h+var_58], xmm0
//   0x1DC255 movaps  xmmword ptr [r12+10h], xmm2
//   0x1DC25B call    sub_30DA80
//   0x1DC260 mov     eax, dword ptr [rsp+0F8h+var_C8+4]
//   0x1DC264 cmp     dword ptr [rsp+0F8h+var_A8+4], eax
//   0x1DC268 jg      loc_1DC65E
//   0x1DC26E mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC273 mov     rsi, r12
//   0x1DC276 call    sub_30DCC0
//   0x1DC27B test    eax, eax
//   0x1DC27D jz      loc_1DC50C
//   0x1DC283 nop     word ptr [rax+rax+00000000h]
//   0x1DC28E xchg    ax, ax
//   0x1DC290 mov     rdi, r12
//   0x1DC293 call    sub_30DA80
//   0x1DC298 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC29D call    sub_30DA80
//   0x1DC2A2 nop     word ptr [rax+rax+00000000h]
//   0x1DC2AD nop     dword ptr [rax]
//   0x1DC2B0 xor     eax, eax
//   0x1DC2B2 mov     rdx, [rsp+0F8h+var_40]
//   0x1DC2BA sub     rdx, fs:28h
//   0x1DC2C3 jnz     loc_1DCA94
//   0x1DC2C9 add     rsp, 0C8h
//   0x1DC2D0 pop     rbx
//   0x1DC2D1 pop     rbp
//   0x1DC2D2 pop     r12
//   0x1DC2D4 pop     r13
//   0x1DC2D6 pop     r14
//   0x1DC2D8 pop     r15
//   0x1DC2DA retn
//   0x1DC2DB align 20h
//   0x1DC2E0 mov     rbx, [rax+8]
//   0x1DC2E4 test    rdi, rdi
//   0x1DC2E7 jnz     loc_1DC390
//   0x1DC2ED cmp     rcx, rbx
//   0x1DC2F0 jz      loc_1DC105
//   0x1DC2F6 mov     [rsp+0F8h+var_E8], rdx
//   0x1DC2FB mov     rax, rbx
//   0x1DC2FE mov     rbx, rcx
//   0x1DC301 jmp     loc_1DC105
//   0x1DC306 align 10h
//   0x1DC310 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DC315 xor     ebx, ebx
//   0x1DC317 test    rcx, rcx
//   0x1DC31A jz      loc_1DC105
//   0x1DC320 mov     rdi, [rsp+0F8h+var_E0]
//   0x1DC325 cmp     qword ptr [rdi+10h], 0
//   0x1DC32A jz      loc_1DC105
//   0x1DC330 mov     rcx, [rcx+8]
//   0x1DC334 mov     [rsp+0F8h+var_E8], rcx
//   0x1DC339 jmp     loc_1DC105
//   0x1DC33E align 20h
//   0x1DC340 mov     rax, rcx
//   0x1DC343 mov     rcx, [rcx+8]
//   0x1DC347 test    byte ptr [rcx], 2
//   0x1DC34A jnz     loc_1DC105
//   0x1DC350 jmp     short loc_1DC340
//   0x1DC352 align 20h
//   0x1DC360 mov     rdx, rsi
//   0x1DC363 cmp     rax, [rdx+10h]
//   0x1DC367 jnz     loc_1DC141
//   0x1DC36D and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DC371 mov     rax, rdx
//   0x1DC374 mov     rsi, rcx
//   0x1DC377 mov     rcx, [rcx]
//   0x1DC37A test    cl, 2
//   0x1DC37D jz      short loc_1DC360
//   0x1DC37F mov     rax, rsi
//   0x1DC382 jmp     loc_1DC105
//   0x1DC387 align 10h
//   0x1DC390 cmp     qword ptr [rsi+10h], 0
//   0x1DC395 jz      loc_1DC2ED
//   0x1DC39B mov     rcx, [rdx+8]
//   0x1DC39F mov     [rsp+0F8h+var_E8], rcx
//   0x1DC3A4 cmp     rax, rbx
//   0x1DC3A7 jz      loc_1DC105
//   0x1DC3AD nop     dword ptr [rax]
//   0x1DC3B0 cmp     [rsp+0F8h+var_E8], rdx
//   0x1DC3B5 jz      loc_1DCA99
//   0x1DC3BB cmp     dword ptr [rbx+28h], 8
//   0x1DC3BF lea     rbp, [rbx+18h]
//   0x1DC3C3 jz      loc_1DC738
//   0x1DC3C9 mov     rax, [rsp+0F8h+var_E8]
//   0x1DC3CE lea     r15, [rax+18h]
//   0x1DC3D2 movzx   eax, byte ptr [rbp+8]
//   0x1DC3D6 mov     [rsp+0F8h+var_C9], al
//   0x1DC3DA cmp     al, [r15+8]
//   0x1DC3DE jnz     loc_1DC2B0
//   0x1DC3E4 cmp     byte ptr [rbp+8], 5
//   0x1DC3E8 mov     [rsp+0F8h+var_CA], 0
//   0x1DC3ED jnz     short loc_1DC409
//   0x1DC3EF mov     rax, [r13+0]
//   0x1DC3F3 mov     rax, [rax+5E0h]
//   0x1DC3FA mov     rax, [rax+60h]
//   0x1DC3FE movzx   eax, byte ptr [rax+91h]
//   0x1DC405 mov     [rsp+0F8h+var_CA], al
//   0x1DC409 lea     rax, [rsp+0F8h+var_C8]
//   0x1DC40E lea     rsi, [rbp+10h]
//   0x1DC412 mov     rdi, rax
//   0x1DC415 lea     r12, [rsp+0F8h+var_A8]
//   0x1DC41A mov     [rsp+0F8h+var_F0], rax
//   0x1DC41F call    sub_30DB40
//   0x1DC424 lea     rsi, [r15+10h]
//   0x1DC428 mov     rdi, r12
//   0x1DC42B call    sub_30DB40
//   0x1DC430 movsxd  rdi, dword ptr [rsp+0F8h+var_A8+4]
//   0x1DC435 mov     rcx, [r15]
//   0x1DC438 movsxd  r14, dword ptr [rsp+0F8h+var_C8+4]
//   0x1DC43D mov     rax, [rbp+0]
//   0x1DC441 lea     r8, [rdi+rcx]
//   0x1DC445 mov     rdx, r14
//   0x1DC448 mov     [rsp+0F8h+var_D8], r8
//   0x1DC44D add     r14, rax
//   0x1DC450 cmp     rax, rcx
//   0x1DC453 jge     loc_1DC5A0
//   0x1DC459 cmp     r14, r8
//   0x1DC45C jnz     loc_1DC290
//   0x1DC462 mov     rsi, cs:qword_3FDBA0
//   0x1DC469 pxor    xmm0, xmm0
//   0x1DC46D cmp     [rsp+0F8h+var_CA], 0
//   0x1DC472 mov     [rsp+0F8h+var_70], 0
//   0x1DC47E movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DC483 mov     qword ptr [rsp+0F8h+var_88], rsi
//   0x1DC488 jnz     loc_1DC818
//   0x1DC48E mov     edx, ecx
//   0x1DC490 lea     rbp, [rsp+0F8h+var_88]
//   0x1DC495 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC49A sub     edx, eax
//   0x1DC49C mov     rsi, rbp
//   0x1DC49F call    sub_30FC00
//   0x1DC4A4 test    al, al
//   0x1DC4A6 jz      loc_1DC836
//   0x1DC4AC cmp     dword ptr [rsp+0F8h+var_C8], 1
//   0x1DC4B1 jnz     loc_1DCA65
//   0x1DC4B7 movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1DC4BC movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1DC4C2 mov     rdi, rbp
//   0x1DC4C5 movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1DC4CB movaps  [rsp+0F8h+var_C8], xmm2
//   0x1DC4D0 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1DC4D5 movaps  xmmword ptr [rbp+0], xmm1
//   0x1DC4D9 movaps  xmmword ptr [rbp+10h], xmm0
//   0x1DC4DD movaps  [rsp+0F8h+var_68], xmm1
//   0x1DC4E5 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DC4ED movaps  [rsp+0F8h+var_B8], xmm2
//   0x1DC4F2 call    sub_30DA80
//   0x1DC4F7 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC4FC mov     rsi, r12
//   0x1DC4FF call    sub_30DCC0
//   0x1DC504 test    eax, eax
//   0x1DC506 jnz     loc_1DC650
//   0x1DC50C mov     rax, [rbx]
//   0x1DC50F test    al, 2
//   0x1DC511 jnz     short loc_1DC530
//   0x1DC513 mov     rdx, [rbx+10h]
//   0x1DC517 test    byte ptr [rdx], 2
//   0x1DC51A jnz     loc_1DC848
//   0x1DC520 mov     rbx, rdx
//   0x1DC523 mov     rdx, [rdx+8]
//   0x1DC527 test    byte ptr [rdx], 2
//   0x1DC52A jz      short loc_1DC520
//   0x1DC52C nop     dword ptr [rax+00h]
//   0x1DC530 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DC535 mov     rax, [rcx]
//   0x1DC538 test    al, 2
//   0x1DC53A jnz     short loc_1DC570
//   0x1DC53C mov     rdx, [rcx+10h]
//   0x1DC540 test    byte ptr [rdx], 2
//   0x1DC543 jnz     loc_1DC888
//   0x1DC549 mov     rax, [rdx+8]
//   0x1DC54D test    byte ptr [rax], 2
//   0x1DC550 jnz     short loc_1DC55E
//   0x1DC552 mov     rdx, rax
//   0x1DC555 mov     rax, [rdx+8]
//   0x1DC559 test    byte ptr [rax], 2
//   0x1DC55C jz      short loc_1DC552
//   0x1DC55E mov     [rsp+0F8h+var_E8], rdx
//   0x1DC563 nop     word ptr [rax+rax+00000000h]
//   0x1DC56E xchg    ax, ax
//   0x1DC570 mov     rdi, r12
//   0x1DC573 call    sub_30DA80
//   0x1DC578 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC57D call    sub_30DA80
//   0x1DC582 cmp     [r13+8], rbx
//   0x1DC586 jz      loc_1DCA5D
//   0x1DC58C mov     rax, [rsp+0F8h+var_E0]
//   0x1DC591 mov     rdx, [rax+8]
//   0x1DC595 jmp     loc_1DC3B0
//   0x1DC59A align 20h
//   0x1DC5A0 cmp     rcx, [rbp+0]
//   0x1DC5A4 jge     loc_1DC4F7
//   0x1DC5AA mov     rdx, [rsp+0F8h+var_D8]
//   0x1DC5AF cmp     r14, rdx
//   0x1DC5B2 jnz     loc_1DC290
//   0x1DC5B8 mov     rdx, cs:qword_3FDBA0
//   0x1DC5BF pxor    xmm0, xmm0
//   0x1DC5C3 cmp     [rsp+0F8h+var_CA], 0
//   0x1DC5C8 mov     [rsp+0F8h+var_70], 0
//   0x1DC5D4 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DC5D9 mov     qword ptr [rsp+0F8h+var_88], rdx
//   0x1DC5DE jnz     loc_1DC8C8
//   0x1DC5E4 mov     edx, eax
//   0x1DC5E6 lea     rbp, [rsp+0F8h+var_88]
//   0x1DC5EB mov     rdi, r12
//   0x1DC5EE sub     edx, ecx
//   0x1DC5F0 mov     rsi, rbp
//   0x1DC5F3 call    sub_30FC00
//   0x1DC5F8 test    al, al
//   0x1DC5FA jz      loc_1DC990
//   0x1DC600 cmp     dword ptr [rsp+0F8h+var_A8], 1
//   0x1DC605 jnz     loc_1DC990
//   0x1DC60B movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1DC610 movdqa  xmm1, [rsp+0F8h+var_A8]
//   0x1DC616 mov     rdi, rbp
//   0x1DC619 movdqa  xmm0, [rsp+0F8h+var_98]
//   0x1DC61F movaps  [rsp+0F8h+var_A8], xmm2
//   0x1DC624 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1DC629 movaps  xmmword ptr [rbp+0], xmm1
//   0x1DC62D movaps  xmmword ptr [rbp+10h], xmm0
//   0x1DC631 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DC639 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DC641 movaps  [rsp+0F8h+var_98], xmm2
//   0x1DC646 call    sub_30DA80
//   0x1DC64B jmp     loc_1DC4F7
//   0x1DC650 mov     rax, [rsp+0F8h+var_D8]
//   0x1DC655 cmp     r14, rax
//   0x1DC658 jge     loc_1DC290
//   0x1DC65E mov     rax, [rbx]
//   0x1DC661 test    al, 2
//   0x1DC663 jnz     loc_1DC170
//   0x1DC669 mov     rdx, [rbx+10h]
//   0x1DC66D test    byte ptr [rdx], 2
//   0x1DC670 jnz     loc_1DC150
//   0x1DC676 mov     rbx, rdx
//   0x1DC679 mov     rdx, [rdx+8]
//   0x1DC67D test    byte ptr [rdx], 2
//   0x1DC680 jnz     loc_1DC170
//   0x1DC686 jmp     short loc_1DC676
//   0x1DC688 align 10h
//   0x1DC690 mov     eax, dword ptr [rsp+0F8h+var_A8+4]
//   0x1DC694 lea     rbp, [rsp+0F8h+var_88]
//   0x1DC699 mov     rdi, r12
//   0x1DC69C mov     rsi, rbp
//   0x1DC69F sub     eax, edx
//   0x1DC6A1 mov     edx, eax
//   0x1DC6A3 call    sub_30FC00
//   0x1DC6A8 test    al, al
//   0x1DC6AA jz      loc_1DC808
//   0x1DC6B0 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DC6B6 movdqa  xmm1, xmmword ptr [r12]
//   0x1DC6BC movdqa  xmm0, xmmword ptr [r12+10h]
//   0x1DC6C3 movaps  xmmword ptr [r12], xmm2
//   0x1DC6C8 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DC6D1 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DC6D9 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DC6E1 movaps  xmmword ptr [r12+10h], xmm2
//   0x1DC6E7 movaps  [rsp+0F8h+var_88], xmm1
//   0x1DC6EC movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DC6F4 jmp     loc_1DC1FB
//   0x1DC6F9 align 20h
//   0x1DC700 cmp     [rax+10h], rbx
//   0x1DC704 jnz     loc_1DC160
//   0x1DC70A and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1DC70E mov     rbx, rdx
//   0x1DC711 mov     rdx, [rdx]
//   0x1DC714 test    dl, 2
//   0x1DC717 jnz     loc_1DC170
//   0x1DC71D mov     rcx, rax
//   0x1DC720 mov     rax, rbx
//   0x1DC723 mov     rbx, rcx
//   0x1DC726 cmp     [rax+10h], rbx
//   0x1DC72A jz      short loc_1DC70A
//   0x1DC72C jmp     loc_1DC160
//   0x1DC731 align 8
//   0x1DC738 mov     rdi, [rsp+0F8h+var_E8]
//   0x1DC73D movzx   eax, byte ptr [rbp+8]
//   0x1DC741 movzx   ecx, byte ptr [rdi+20h]
//   0x1DC745 lea     r15, [rdi+18h]
//   0x1DC749 cmp     al, cl
//   0x1DC74B jb      short loc_1DC763
//   0x1DC74D cmp     cl, al
//   0x1DC74F jb      loc_1DC3D2
//   0x1DC755 mov     rax, [rdi+18h]
//   0x1DC759 cmp     [rbp+0], rax
//   0x1DC75D jg      loc_1DC3D2
//   0x1DC763 movsxd  rax, dword ptr [rbp+14h]
//   0x1DC767 add     rax, [rbp+0]
//   0x1DC76B movzx   ecx, byte ptr [r15+8]
//   0x1DC770 cmp     [rbp+8], cl
//   0x1DC773 jnz     short loc_1DC7D0
//   0x1DC775 cmp     [r15], rax
//   0x1DC778 jge     short loc_1DC7D0
//   0x1DC77A movsxd  rcx, dword ptr [r15+14h]
//   0x1DC77E add     rcx, [r15]
//   0x1DC781 cmp     rcx, rax
//   0x1DC784 jg      loc_1DC2B0
//   0x1DC78A mov     rdi, [rsp+0F8h+var_E8]
//   0x1DC78F mov     rcx, [rdi]
//   0x1DC792 test    cl, 2
//   0x1DC795 jnz     loc_1DC9F0
//   0x1DC79B mov     rsi, [rdi+10h]
//   0x1DC79F test    byte ptr [rsi], 2
//   0x1DC7A2 jnz     loc_1DCA19
//   0x1DC7A8 mov     [rsp+0F8h+var_E8], rsi
//   0x1DC7AD mov     rsi, [rsi+8]
//   0x1DC7B1 test    byte ptr [rsi], 2
//   0x1DC7B4 jz      short loc_1DC7A8
//   0x1DC7B6 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DC7BB cmp     rdx, rcx
//   0x1DC7BE jnz     loc_1DCA8B
//   0x1DC7C4 nop     word ptr [rax+rax+00000000h]
//   0x1DC7CF nop
//   0x1DC7D0 mov     rax, [rbx]
//   0x1DC7D3 test    al, 2
//   0x1DC7D5 jnz     loc_1DC582
//   0x1DC7DB mov     rdx, [rbx+10h]
//   0x1DC7DF test    byte ptr [rdx], 2
//   0x1DC7E2 jnz     loc_1DC9B0
//   0x1DC7E8 mov     rax, [rdx+8]
//   0x1DC7EC test    byte ptr [rax], 2
//   0x1DC7EF jnz     short loc_1DC7FD
//   0x1DC7F1 mov     rdx, rax
//   0x1DC7F4 mov     rax, [rdx+8]
//   0x1DC7F8 test    byte ptr [rax], 2
//   0x1DC7FB jz      short loc_1DC7F1
//   0x1DC7FD mov     rbx, rdx
//   0x1DC800 jmp     loc_1DC582
//   0x1DC805 align 8
//   0x1DC808 mov     rdi, rbp
//   0x1DC80B call    sub_30DA80
//   0x1DC810 jmp     loc_1DC290
//   0x1DC815 align 8
//   0x1DC818 add     edx, eax
//   0x1DC81A lea     rbp, [rsp+0F8h+var_88]
//   0x1DC81F mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC824 sub     edx, ecx
//   0x1DC826 mov     rsi, rbp
//   0x1DC829 call    sub_30FC00
//   0x1DC82E test    al, al
//   0x1DC830 jnz     loc_1DC930
//   0x1DC836 mov     rdi, rbp
//   0x1DC839 call    sub_30DA80
//   0x1DC83E jmp     loc_1DC290
//   0x1DC843 align 8
//   0x1DC848 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DC84C mov     rdx, [rax]
//   0x1DC84F test    dl, 2
//   0x1DC852 jz      short loc_1DC863
//   0x1DC854 mov     rbx, rax
//   0x1DC857 jmp     loc_1DC530
//   0x1DC85C align 20h
//   0x1DC860 mov     rax, rcx
//   0x1DC863 cmp     [rax+10h], rbx
//   0x1DC867 jnz     short loc_1DC854
//   0x1DC869 mov     rcx, rdx
//   0x1DC86C mov     rbx, rax
//   0x1DC86F and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DC873 mov     rdx, [rcx]
//   0x1DC876 test    dl, 2
//   0x1DC879 jz      short loc_1DC860
//   0x1DC87B mov     rbx, rcx
//   0x1DC87E jmp     loc_1DC530
//   0x1DC883 align 8
//   0x1DC888 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DC88C mov     rdx, [rax]
//   0x1DC88F test    dl, 2
//   0x1DC892 jnz     loc_1DC980
//   0x1DC898 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DC89D cmp     [rax+10h], rcx
//   0x1DC8A1 jnz     loc_1DC980
//   0x1DC8A7 mov     rcx, rdx
//   0x1DC8AA and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DC8AE mov     rdx, [rcx]
//   0x1DC8B1 test    dl, 2
//   0x1DC8B4 jz      loc_1DC9A0
//   0x1DC8BA mov     [rsp+0F8h+var_E8], rcx
//   0x1DC8BF jmp     loc_1DC570
//   0x1DC8C4 align 8
//   0x1DC8C8 lea     edx, [rdi+rcx]
//   0x1DC8CB lea     rbp, [rsp+0F8h+var_88]
//   0x1DC8D0 mov     rdi, r12
//   0x1DC8D3 sub     edx, eax
//   0x1DC8D5 mov     rsi, rbp
//   0x1DC8D8 call    sub_30FC00
//   0x1DC8DD test    al, al
//   0x1DC8DF jz      loc_1DC990
//   0x1DC8E5 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DC8EB movdqa  xmm1, [rsp+0F8h+var_A8]
//   0x1DC8F1 movdqa  xmm0, [rsp+0F8h+var_98]
//   0x1DC8F7 movaps  [rsp+0F8h+var_A8], xmm2
//   0x1DC8FC movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DC905 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DC90D movaps  [rsp+0F8h+var_58], xmm0
//   0x1DC915 movaps  [rsp+0F8h+var_98], xmm2
//   0x1DC91A movaps  [rsp+0F8h+var_88], xmm1
//   0x1DC91F movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DC927 jmp     loc_1DC600
//   0x1DC92C align 10h
//   0x1DC930 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DC936 movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1DC93C movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1DC942 movaps  [rsp+0F8h+var_C8], xmm2
//   0x1DC947 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DC950 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DC958 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DC960 movaps  [rsp+0F8h+var_B8], xmm2
//   0x1DC965 movaps  [rsp+0F8h+var_88], xmm1
//   0x1DC96A movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DC972 jmp     loc_1DC4AC
//   0x1DC977 align 20h
//   0x1DC980 mov     [rsp+0F8h+var_E8], rax
//   0x1DC985 jmp     loc_1DC570
//   0x1DC98A align 10h
//   0x1DC990 mov     rdi, rbp
//   0x1DC993 call    sub_30DA80
//   0x1DC998 jmp     loc_1DC290
//   0x1DC99D align 20h
//   0x1DC9A0 mov     rsi, rax
//   0x1DC9A3 mov     rax, rcx
//   0x1DC9A6 mov     rcx, rsi
//   0x1DC9A9 jmp     loc_1DC89D
//   0x1DC9AE align 10h
//   0x1DC9B0 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DC9B4 mov     rdx, [rax]
//   0x1DC9B7 test    dl, 2
//   0x1DC9BA jz      short loc_1DC9C7
//   0x1DC9BC mov     rbx, rax
//   0x1DC9BF jmp     loc_1DC582
//   0x1DC9C4 mov     rax, rcx
//   0x1DC9C7 cmp     [rax+10h], rbx
//   0x1DC9CB jnz     short loc_1DC9BC
//   0x1DC9CD mov     rcx, rdx
//   0x1DC9D0 mov     rbx, rax
//   0x1DC9D3 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DC9D7 mov     rdx, [rcx]
//   0x1DC9DA test    dl, 2
//   0x1DC9DD jz      short loc_1DC9C4
//   0x1DC9DF mov     rbx, rcx
//   0x1DC9E2 jmp     loc_1DC582
//   0x1DC9E7 align 10h
//   0x1DC9F0 movzx   ecx, byte ptr [rbp+8]
//   0x1DC9F4 cmp     [r15+8], cl
//   0x1DC9F8 jz      loc_1DC775
//   0x1DC9FE jmp     loc_1DC7D0
//   0x1DCA03 mov     rax, [rsp+0F8h+var_E0]
//   0x1DCA08 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DCA0D cmp     [rax+8], rcx
//   0x1DCA11 setz    al
//   0x1DCA14 jmp     loc_1DC2B2
//   0x1DCA19 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DCA1D mov     rsi, [rcx]
//   0x1DCA20 test    sil, 2
//   0x1DCA24 jz      short loc_1DCA33
//   0x1DCA26 mov     [rsp+0F8h+var_E8], rcx
//   0x1DCA2B jmp     loc_1DC7B6
//   0x1DCA30 mov     rcx, rdi
//   0x1DCA33 mov     rdi, [rsp+0F8h+var_E8]
//   0x1DCA38 cmp     [rcx+10h], rdi
//   0x1DCA3C jnz     short loc_1DCA26
//   0x1DCA3E mov     rdi, rsi
//   0x1DCA41 mov     [rsp+0F8h+var_E8], rcx
//   0x1DCA46 and     rdi, 0FFFFFFFFFFFFFFFCh
//   0x1DCA4A mov     rsi, [rdi]
//   0x1DCA4D test    sil, 2
//   0x1DCA51 jz      short loc_1DCA30
//   0x1DCA53 mov     [rsp+0F8h+var_E8], rdi
//   0x1DCA58 jmp     loc_1DC7B6
//   0x1DCA5D mov     rax, rbx
//   0x1DCA60 jmp     loc_1DC105
//   0x1DCA65 mov     rdi, rbp
//   0x1DCA68 call    sub_30DA80
//   0x1DCA6D mov     rdi, r12
//   0x1DCA70 call    sub_30DA80
//   0x1DCA75 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DCA7A call    sub_30DA80
//   0x1DCA7F mov     rax, rbx
//   0x1DCA82 mov     rbx, [r13+8]
//   0x1DCA86 jmp     loc_1DC105
//   0x1DCA8B lea     r15, [rcx+18h]
//   0x1DCA8F jmp     loc_1DC76B
//   0x1DCA94 call    ___stack_chk_fail
//   0x1DCA99 mov     rcx, [r13+8]
//   0x1DCA9D mov     rax, rbx
//   0x1DCAA0 jmp     loc_1DC2FE
//   0x1DCAA5 mov     rbx, rax
//   0x1DCAA8 jmp     loc_41344
//   0x1DCAAD mov     rbx, rax
//   0x1DCAB0 jmp     loc_4134C
//   0x1DCAB5 mov     rbx, rax
//   0x1DCAB8 jmp     loc_41379
//   0x1DCABD mov     rbx, rax
//   0x1DCAC0 jmp     loc_41354
//   0x1DCAC5 mov     rbx, rax
//   0x1DCAC8 jmp     loc_41383
// ============================================================

void sub_1DC080(/* signature unknown */)
{
    // see disassembly above
}

