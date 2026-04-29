// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1DC500
// Name:           sub_1DC500
// Function size:  2376 bytes (529 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1DC500 push    r15
//   0x1DC502 push    r14
//   0x1DC504 push    r13
//   0x1DC506 push    r12
//   0x1DC508 push    rbp
//   0x1DC509 push    rbx
//   0x1DC50A sub     rsp, 0C8h
//   0x1DC511 mov     r13, fs:28h
//   0x1DC51A mov     [rsp+0F8h+var_40], r13
//   0x1DC522 mov     r13, rdi
//   0x1DC525 movzx   r14d, byte ptr [r13+18h]
//   0x1DC52A test    r14b, r14b
//   0x1DC52D jnz     short loc_1DC580
//   0x1DC52F mov     r9, rdx
//   0x1DC532 movzx   edx, byte ptr [rdx+8]
//   0x1DC536 mov     r12, rsi
//   0x1DC539 mov     edi, ecx
//   0x1DC53B cmp     dl, 5
//   0x1DC53E jz      loc_1DC748
//   0x1DC544 mov     rsi, [r13+8]
//   0x1DC548 test    rsi, rsi
//   0x1DC54B jz      short loc_1DC580
//   0x1DC54D mov     rax, [rsi]
//   0x1DC550 mov     r11, [r9]
//   0x1DC553 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DC557 jz      loc_1DC7D0
//   0x1DC55D mov     r15, rsi
//   0x1DC560 test    byte ptr [rax], 2
//   0x1DC563 jz      short loc_1DC5B0
//   0x1DC565 cmp     qword ptr [r13+10h], 0
//   0x1DC56A mov     r15, rsi
//   0x1DC56D jnz     loc_1DC768
//   0x1DC573 nop     word ptr [rax+rax+00000000h]
//   0x1DC57E xchg    ax, ax
//   0x1DC580 xor     eax, eax
//   0x1DC582 mov     rdx, [rsp+0F8h+var_40]
//   0x1DC58A sub     rdx, fs:28h
//   0x1DC593 jnz     loc_1DCE13
//   0x1DC599 add     rsp, 0C8h
//   0x1DC5A0 pop     rbx
//   0x1DC5A1 pop     rbp
//   0x1DC5A2 pop     r12
//   0x1DC5A4 pop     r13
//   0x1DC5A6 pop     r14
//   0x1DC5A8 pop     r15
//   0x1DC5AA retn
//   0x1DC5AB align 10h
//   0x1DC5B0 movzx   ebx, byte ptr [rax+20h]
//   0x1DC5B4 cmp     bl, dl
//   0x1DC5B6 jb      loc_1DC780
//   0x1DC5BC cmp     dl, bl
//   0x1DC5BE jb      short loc_1DC5CA
//   0x1DC5C0 cmp     r11, [rax+18h]
//   0x1DC5C4 jg      loc_1DC780
//   0x1DC5CA mov     r15, rax
//   0x1DC5CD mov     rax, [rax+8]
//   0x1DC5D1 test    byte ptr [rax], 2
//   0x1DC5D4 jz      short loc_1DC5B0
//   0x1DC5D6 cmp     r15, rsi
//   0x1DC5D9 jz      short loc_1DC565
//   0x1DC5DB lea     rcx, [r15+18h]
//   0x1DC5DF cmp     dl, [r15+20h]
//   0x1DC5E3 jnb     loc_1DC7C0
//   0x1DC5E9 cmp     qword ptr [r13+10h], 0
//   0x1DC5EE jnz     loc_1DC768
//   0x1DC5F4 mov     rax, [r15]
//   0x1DC5F7 test    al, 2
//   0x1DC5F9 jz      loc_1DC790
//   0x1DC5FF mov     r15, [r15+10h]
//   0x1DC603 lea     rcx, [r15+18h]
//   0x1DC607 cmp     [r15+20h], dl
//   0x1DC60B jnz     loc_1DC580
//   0x1DC611 movsxd  rax, dword ptr [rcx+14h]
//   0x1DC615 add     rax, [r15+18h]
//   0x1DC619 cmp     r11, rax
//   0x1DC61C jge     loc_1DC580
//   0x1DC622 movsxd  rbx, dword ptr [r12+4]
//   0x1DC627 movsxd  rbp, dword ptr [rcx+14h]
//   0x1DC62B mov     [rsp+0F8h+var_E8], rcx
//   0x1DC630 mov     [rsp+0F8h+var_F0], r9
//   0x1DC635 add     rbp, [r15+18h]
//   0x1DC639 lea     rax, [rbx+r11]
//   0x1DC63D mov     [rsp+0F8h+var_D4], ebx
//   0x1DC641 mov     [rsp+0F8h+var_F8], rax
//   0x1DC645 test    dil, dil
//   0x1DC648 jz      loc_1DC800
//   0x1DC64E cmp     [r15+18h], r11
//   0x1DC652 jnz     loc_1DC580
//   0x1DC658 cmp     rax, rbp
//   0x1DC65B jnz     loc_1DC580
//   0x1DC661 lea     rsi, [r15+28h]
//   0x1DC665 mov     rdi, r12
//   0x1DC668 call    sub_30EC10
//   0x1DC66D mov     r9, [rsp+0F8h+var_F0]
//   0x1DC672 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DC677 mov     rax, [r9]
//   0x1DC67A cmp     rax, [r15+18h]
//   0x1DC67E jle     loc_1DCA60
//   0x1DC684 mov     rdx, cs:qword_411530
//   0x1DC68B pxor    xmm0, xmm0
//   0x1DC68F mov     [rsp+0F8h+var_E8], r9
//   0x1DC694 mov     [rsp+0F8h+var_70], 0
//   0x1DC6A0 mov     qword ptr [rsp+0F8h+var_88], rdx
//   0x1DC6A5 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DC6AA mov     rsi, [rcx]
//   0x1DC6AD test    r14b, r14b
//   0x1DC6B0 jnz     loc_1DCCD0
//   0x1DC6B6 mov     edx, eax
//   0x1DC6B8 lea     rax, [rsp+0F8h+var_88]
//   0x1DC6BD mov     rdi, r12
//   0x1DC6C0 sub     edx, esi
//   0x1DC6C2 mov     rsi, rax
//   0x1DC6C5 mov     [rsp+0F8h+var_F0], rax
//   0x1DC6CA call    sub_310B80
//   0x1DC6CF test    al, al
//   0x1DC6D1 mov     r9, [rsp+0F8h+var_E8]
//   0x1DC6D6 jz      loc_1DCCC0
//   0x1DC6DC cmp     dword ptr [rsp+0F8h+var_88], 1
//   0x1DC6E1 mov     [rsp+0F8h+var_E8], r9
//   0x1DC6E6 jz      loc_1DCCC0
//   0x1DC6EC movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DC6F2 movdqu  xmm1, xmmword ptr [r12]
//   0x1DC6F8 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DC6FF mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC704 movups  xmmword ptr [r12], xmm2
//   0x1DC709 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DC712 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DC71A movups  xmmword ptr [r12+10h], xmm2
//   0x1DC720 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DC728 movaps  [rsp+0F8h+var_88], xmm1
//   0x1DC72D movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DC735 call    sub_30EA00
//   0x1DC73A mov     r9, [rsp+0F8h+var_E8]
//   0x1DC73F jmp     loc_1DC823
//   0x1DC744 align 8
//   0x1DC748 mov     rax, [r13+0]
//   0x1DC74C mov     rax, [rax+5E0h]
//   0x1DC753 mov     rax, [rax+60h]
//   0x1DC757 movzx   r14d, byte ptr [rax+91h]
//   0x1DC75F jmp     loc_1DC544
//   0x1DC764 align 8
//   0x1DC768 cmp     [rsi+8], r15
//   0x1DC76C jz      loc_1DC580
//   0x1DC772 mov     rax, [r15]
//   0x1DC775 test    al, 2
//   0x1DC777 jz      short loc_1DC790
//   0x1DC779 jmp     loc_1DC5FF
//   0x1DC77E align 20h
//   0x1DC780 mov     rax, [rax+10h]
//   0x1DC784 jmp     loc_1DC5D1
//   0x1DC789 align 10h
//   0x1DC790 mov     rsi, [r15+8]
//   0x1DC794 test    byte ptr [rsi], 2
//   0x1DC797 jz      loc_1DCAB0
//   0x1DC79D and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DC7A1 mov     rsi, [rax]
//   0x1DC7A4 test    sil, 2
//   0x1DC7A8 jz      loc_1DCB30
//   0x1DC7AE mov     r15, rax
//   0x1DC7B1 jmp     loc_1DC603
//   0x1DC7B6 align 20h
//   0x1DC7C0 cmp     r11, [r15+18h]
//   0x1DC7C4 jl      loc_1DC5E9
//   0x1DC7CA jmp     loc_1DC622
//   0x1DC7CF align 10h
//   0x1DC7D0 xor     r15d, r15d
//   0x1DC7D3 cmp     dl, byte ptr ds:qword_20
//   0x1DC7DA jb      loc_1DC5E9
//   0x1DC7E0 mov     ecx, 18h
//   0x1DC7E5 cmp     r11, ds:qword_18
//   0x1DC7ED jge     loc_1DC622
//   0x1DC7F3 jmp     loc_1DC5E9
//   0x1DC7F8 align 20h
//   0x1DC800 lea     rsi, [r15+28h]
//   0x1DC804 mov     rdi, r12
//   0x1DC807 call    sub_30EC10
//   0x1DC80C mov     r9, [rsp+0F8h+var_F0]
//   0x1DC811 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DC816 mov     rax, [r9]
//   0x1DC819 cmp     [r15+18h], rax
//   0x1DC81D jl      loc_1DC684
//   0x1DC823 cmp     [rsp+0F8h+var_F8], rbp
//   0x1DC827 jle     loc_1DC9F2
//   0x1DC82D mov     rax, [r15]
//   0x1DC830 mov     rsi, [r13+8]
//   0x1DC834 mov     rbx, r15
//   0x1DC837 test    al, 2
//   0x1DC839 jnz     short loc_1DC860
//   0x1DC83B mov     rdx, [r15+10h]
//   0x1DC83F test    byte ptr [rdx], 2
//   0x1DC842 jnz     loc_1DCA70
//   0x1DC848 mov     rbx, rdx
//   0x1DC84B mov     rdx, [rdx+8]
//   0x1DC84F test    byte ptr [rdx], 2
//   0x1DC852 jz      short loc_1DC848
//   0x1DC854 nop     word ptr [rax+rax+00000000h]
//   0x1DC85F nop
//   0x1DC860 cmp     rsi, rbx
//   0x1DC863 jz      loc_1DC9E0
//   0x1DC869 lea     rcx, [rbx+18h]
//   0x1DC86D movzx   edi, byte ptr [r15+20h]
//   0x1DC872 mov     [rsp+0F8h+var_E8], rcx
//   0x1DC877 cmp     [rbx+20h], dil
//   0x1DC87B jnz     loc_1DC9E0
//   0x1DC881 mov     rdi, [rsp+0F8h+var_F8]
//   0x1DC885 cmp     [rbx+18h], rdi
//   0x1DC889 jge     loc_1DC9E0
//   0x1DC88F mov     rbp, [rbx+18h]
//   0x1DC893 movsxd  rax, dword ptr [r15+2Ch]
//   0x1DC897 add     rax, [r15+18h]
//   0x1DC89B cmp     rbp, rax
//   0x1DC89E jnz     loc_1DC9E0
//   0x1DC8A4 add     ebp, [rbx+2Ch]
//   0x1DC8A7 movsxd  rbp, ebp
//   0x1DC8AA cmp     rbp, rdi
//   0x1DC8AD jle     loc_1DC980
//   0x1DC8B3 lea     r15, [rsp+0F8h+var_C8]
//   0x1DC8B8 lea     rsi, [rbx+28h]
//   0x1DC8BC mov     [rsp+0F8h+var_F0], r9
//   0x1DC8C1 mov     rdi, r15
//   0x1DC8C4 call    sub_30EAC0
//   0x1DC8C9 mov     rax, cs:qword_411530
//   0x1DC8D0 pxor    xmm0, xmm0
//   0x1DC8D4 test    r14b, r14b
//   0x1DC8D7 mov     [rsp+0F8h+var_90], 0
//   0x1DC8E0 mov     r9, [rsp+0F8h+var_F0]
//   0x1DC8E5 mov     qword ptr [rsp+0F8h+var_A8], rax
//   0x1DC8EA mov     rax, [rsp+0F8h+var_E8]
//   0x1DC8EF movups  [rsp+0F8h+var_A8+8], xmm0
//   0x1DC8F4 mov     rax, [rax]
//   0x1DC8F7 jnz     loc_1DCAC8
//   0x1DC8FD mov     edx, dword ptr [rsp+0F8h+var_F8]
//   0x1DC900 lea     rcx, [rsp+0F8h+var_A8]
//   0x1DC905 mov     rdi, r15
//   0x1DC908 mov     rsi, rcx
//   0x1DC90B mov     [rsp+0F8h+var_E0], rcx
//   0x1DC910 sub     edx, eax
//   0x1DC912 call    sub_310B80
//   0x1DC917 test    al, al
//   0x1DC919 mov     r9, [rsp+0F8h+var_F0]
//   0x1DC91E jz      short loc_1DC942
//   0x1DC920 mov     rsi, r15
//   0x1DC923 mov     rdi, r12
//   0x1DC926 mov     [rsp+0F8h+var_F0], r9
//   0x1DC92B call    sub_30FAC0
//   0x1DC930 test    al, al
//   0x1DC932 mov     r9, [rsp+0F8h+var_F0]
//   0x1DC937 jnz     loc_1DCC70
//   0x1DC93D mov     [rsp+0F8h+var_F0], r9
//   0x1DC942 mov     rdi, [rsp+0F8h+var_E0]
//   0x1DC947 call    sub_30EA00
//   0x1DC94C mov     rdi, r15
//   0x1DC94F call    sub_30EA00
//   0x1DC954 mov     rsi, [rsp+0F8h+var_E8]
//   0x1DC959 mov     r9, [rsp+0F8h+var_F0]
//   0x1DC95E add     rsi, 10h
//   0x1DC962 mov     rdi, r12
//   0x1DC965 mov     [rsp+0F8h+var_F0], r9
//   0x1DC96A call    sub_30FAC0
//   0x1DC96F mov     r9, [rsp+0F8h+var_F0]
//   0x1DC974 test    al, al
//   0x1DC976 jz      short loc_1DC9CF
//   0x1DC978 mov     r15, rbx
//   0x1DC97B jmp     loc_1DC82D
//   0x1DC980 lea     rsi, [rbx+28h]
//   0x1DC984 test    r14b, r14b
//   0x1DC987 jz      short loc_1DC962
//   0x1DC989 lea     rax, [rsp+0F8h+var_88]
//   0x1DC98E mov     [rsp+0F8h+var_F0], rax
//   0x1DC993 mov     r15, [rsp+0F8h+var_F0]
//   0x1DC998 mov     [rsp+0F8h+var_E8], r9
//   0x1DC99D mov     rdi, r15
//   0x1DC9A0 call    sub_30EAC0
//   0x1DC9A5 mov     rsi, r12
//   0x1DC9A8 mov     rdi, r15
//   0x1DC9AB call    sub_30FAC0
//   0x1DC9B0 test    al, al
//   0x1DC9B2 mov     r9, [rsp+0F8h+var_E8]
//   0x1DC9B7 jnz     loc_1DCB68
//   0x1DC9BD mov     rdi, r15
//   0x1DC9C0 mov     [rsp+0F8h+var_F0], r9
//   0x1DC9C5 call    sub_30EA00
//   0x1DC9CA mov     r9, [rsp+0F8h+var_F0]
//   0x1DC9CF mov     rax, [rsp+0F8h+var_F8]
//   0x1DC9D3 cmp     rbp, rax
//   0x1DC9D6 jge     loc_1DCDBD
//   0x1DC9DC nop     dword ptr [rax+00h]
//   0x1DC9E0 movsxd  rbp, dword ptr [r12+4]
//   0x1DC9E5 add     rbp, [r9]
//   0x1DC9E8 cmp     [rsp+0F8h+var_F8], rbp
//   0x1DC9EC jg      loc_1DC580
//   0x1DC9F2 mov     rax, [rsp+0F8h+var_F8]
//   0x1DC9F6 cmp     rbp, rax
//   0x1DC9F9 jle     short loc_1DCA60
//   0x1DC9FB mov     rax, cs:qword_411530
//   0x1DCA02 pxor    xmm0, xmm0
//   0x1DCA06 mov     [rsp+0F8h+var_70], 0
//   0x1DCA12 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DCA17 mov     qword ptr [rsp+0F8h+var_88], rax
//   0x1DCA1C test    r14b, r14b
//   0x1DCA1F jnz     loc_1DCD50
//   0x1DCA25 lea     rax, [rsp+0F8h+var_88]
//   0x1DCA2A mov     edx, [rsp+0F8h+var_D4]
//   0x1DCA2E mov     rdi, r12
//   0x1DCA31 mov     rsi, rax
//   0x1DCA34 mov     [rsp+0F8h+var_F0], rax
//   0x1DCA39 call    sub_310B80
//   0x1DCA3E test    al, al
//   0x1DCA40 jz      loc_1DCD40
//   0x1DCA46 cmp     dword ptr [r12], 1
//   0x1DCA4B jz      loc_1DCD40
//   0x1DCA51 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DCA56 call    sub_30EA00
//   0x1DCA5B nop     dword ptr [rax+rax+00h]
//   0x1DCA60 mov     eax, 1
//   0x1DCA65 jmp     loc_1DC582
//   0x1DCA6A align 10h
//   0x1DCA70 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DCA74 mov     rbx, rax
//   0x1DCA77 mov     rax, [rax]
//   0x1DCA7A test    al, 2
//   0x1DCA7C jnz     loc_1DC860
//   0x1DCA82 mov     rdi, r15
//   0x1DCA85 cmp     rdi, [rbx+10h]
//   0x1DCA89 jnz     loc_1DC860
//   0x1DCA8F and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DCA93 mov     rdi, rbx
//   0x1DCA96 mov     rdx, rax
//   0x1DCA99 mov     rax, [rax]
//   0x1DCA9C mov     rbx, rdx
//   0x1DCA9F test    al, 2
//   0x1DCAA1 jz      short loc_1DCA85
//   0x1DCAA3 jmp     loc_1DC860
//   0x1DCAA8 align 10h
//   0x1DCAB0 mov     r15, rsi
//   0x1DCAB3 mov     rsi, [rsi+10h]
//   0x1DCAB7 test    byte ptr [rsi], 2
//   0x1DCABA jnz     loc_1DC603
//   0x1DCAC0 jmp     short loc_1DCAB0
//   0x1DCAC2 align 8
//   0x1DCAC8 mov     edx, dword ptr [rsp+0F8h+var_C8+4]
//   0x1DCACC mov     ecx, dword ptr [rsp+0F8h+var_F8]
//   0x1DCACF mov     rdi, r15
//   0x1DCAD2 mov     [rsp+0F8h+var_F0], r9
//   0x1DCAD7 sub     edx, ecx
//   0x1DCAD9 add     edx, eax
//   0x1DCADB lea     rax, [rsp+0F8h+var_A8]
//   0x1DCAE0 mov     rsi, rax
//   0x1DCAE3 mov     [rsp+0F8h+var_E0], rax
//   0x1DCAE8 call    sub_310B80
//   0x1DCAED mov     r9, [rsp+0F8h+var_F0]
//   0x1DCAF2 test    al, al
//   0x1DCAF4 mov     [rsp+0F8h+var_D0], r9
//   0x1DCAF9 jnz     loc_1DCBC0
//   0x1DCAFF mov     rdi, [rsp+0F8h+var_E0]
//   0x1DCB04 call    sub_30EA00
//   0x1DCB09 mov     rdi, r15
//   0x1DCB0C call    sub_30EA00
//   0x1DCB11 mov     rsi, [rsp+0F8h+var_E8]
//   0x1DCB16 lea     rax, [rsp+0F8h+var_88]
//   0x1DCB1B mov     r9, [rsp+0F8h+var_D0]
//   0x1DCB20 mov     [rsp+0F8h+var_F0], rax
//   0x1DCB25 add     rsi, 10h
//   0x1DCB29 jmp     loc_1DC993
//   0x1DCB2E align 10h
//   0x1DCB30 cmp     [rax+8], r15
//   0x1DCB34 jnz     loc_1DC7AE
//   0x1DCB3A and     rsi, 0FFFFFFFFFFFFFFFCh
//   0x1DCB3E mov     r15, rsi
//   0x1DCB41 mov     rsi, [rsi]
//   0x1DCB44 test    sil, 2
//   0x1DCB48 jnz     loc_1DC603
//   0x1DCB4E mov     rbx, rax
//   0x1DCB51 mov     rax, r15
//   0x1DCB54 mov     r15, rbx
//   0x1DCB57 cmp     [rax+8], r15
//   0x1DCB5B jz      short loc_1DCB3A
//   0x1DCB5D jmp     loc_1DC7AE
//   0x1DCB62 align 8
//   0x1DCB68 mov     rax, [rsp+0F8h+var_F0]
//   0x1DCB6D movdqu  xmm1, xmmword ptr [r12]
//   0x1DCB73 mov     [rsp+0F8h+var_E8], r9
//   0x1DCB78 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DCB7F movdqa  xmm2, xmmword ptr [rax]
//   0x1DCB83 mov     rdi, rax
//   0x1DCB86 movaps  xmmword ptr [rax], xmm1
//   0x1DCB89 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DCB91 movups  xmmword ptr [r12], xmm2
//   0x1DCB96 movdqa  xmm2, xmmword ptr [rax+10h]
//   0x1DCB9B movaps  xmmword ptr [rax+10h], xmm0
//   0x1DCB9F movups  xmmword ptr [r12+10h], xmm2
//   0x1DCBA5 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DCBAD call    sub_30EA00
//   0x1DCBB2 mov     r9, [rsp+0F8h+var_E8]
//   0x1DCBB7 jmp     loc_1DC978
//   0x1DCBBC align 20h
//   0x1DCBC0 movdqa  xmm2, [rsp+0F8h+var_A8]
//   0x1DCBC6 movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1DCBCC lea     rax, [rsp+0F8h+var_88]
//   0x1DCBD1 mov     rsi, r15
//   0x1DCBD4 movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1DCBDA mov     rdi, rax
//   0x1DCBDD mov     [rsp+0F8h+var_F0], rax
//   0x1DCBE2 movaps  [rsp+0F8h+var_C8], xmm2
//   0x1DCBE7 movdqa  xmm2, xmmword ptr [rsp+60h]
//   0x1DCBED movaps  [rsp+0F8h+var_68], xmm1
//   0x1DCBF5 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DCBFD movaps  [rsp+0F8h+var_B8], xmm2
//   0x1DCC02 movaps  [rsp+0F8h+var_A8], xmm1
//   0x1DCC07 movaps  xmmword ptr [rsp+60h], xmm0
//   0x1DCC0C call    sub_30EAC0
//   0x1DCC11 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DCC16 mov     rsi, r12
//   0x1DCC19 call    sub_30FAC0
//   0x1DCC1E test    al, al
//   0x1DCC20 jz      short loc_1DCC90
//   0x1DCC22 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DCC28 movdqu  xmm1, xmmword ptr [r12]
//   0x1DCC2E movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DCC35 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DCC3A movups  xmmword ptr [r12], xmm2
//   0x1DCC3F movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DCC48 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DCC50 movups  xmmword ptr [r12+10h], xmm2
//   0x1DCC56 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DCC5E movaps  [rsp+0F8h+var_88], xmm1
//   0x1DCC63 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DCC6B call    sub_30EA00
//   0x1DCC70 mov     rdi, [rsp+0F8h+var_E0]
//   0x1DCC75 call    sub_30EA00
//   0x1DCC7A mov     rdi, r15
//   0x1DCC7D call    sub_30EA00
//   0x1DCC82 jmp     loc_1DCA60
//   0x1DCC87 align 10h
//   0x1DCC90 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DCC95 call    sub_30EA00
//   0x1DCC9A mov     rdi, [rsp+0F8h+var_E0]
//   0x1DCC9F call    sub_30EA00
//   0x1DCCA4 mov     rdi, r15
//   0x1DCCA7 call    sub_30EA00
//   0x1DCCAC mov     rsi, [rsp+0F8h+var_E8]
//   0x1DCCB1 mov     r9, [rsp+0F8h+var_D0]
//   0x1DCCB6 add     rsi, 10h
//   0x1DCCBA jmp     loc_1DC993
//   0x1DCCBF align 20h
//   0x1DCCC0 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DCCC5 call    sub_30EA00
//   0x1DCCCA jmp     loc_1DC580
//   0x1DCCCF align 10h
//   0x1DCCD0 mov     edx, esi
//   0x1DCCD2 mov     rdi, r12
//   0x1DCCD5 sub     edx, eax
//   0x1DCCD7 lea     rax, [rsp+0F8h+var_88]
//   0x1DCCDC add     edx, [r12+4]
//   0x1DCCE1 mov     rsi, rax
//   0x1DCCE4 mov     [rsp+0F8h+var_F0], rax
//   0x1DCCE9 call    sub_310B80
//   0x1DCCEE test    al, al
//   0x1DCCF0 jz      short loc_1DCCC0
//   0x1DCCF2 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DCCF8 movdqu  xmm1, xmmword ptr [r12]
//   0x1DCCFE movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DCD05 mov     r9, [rsp+0F8h+var_E8]
//   0x1DCD0A movups  xmmword ptr [r12], xmm2
//   0x1DCD0F movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DCD18 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DCD20 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DCD28 movups  xmmword ptr [r12+10h], xmm2
//   0x1DCD2E movaps  [rsp+0F8h+var_88], xmm1
//   0x1DCD33 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DCD3B jmp     loc_1DC6DC
//   0x1DCD40 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DCD45 call    sub_30EA00
//   0x1DCD4A jmp     loc_1DC580
//   0x1DCD4F align 10h
//   0x1DCD50 mov     eax, [rsp+0F8h+var_D4]
//   0x1DCD54 mov     edx, [r12+4]
//   0x1DCD59 mov     rdi, r12
//   0x1DCD5C sub     edx, eax
//   0x1DCD5E lea     rax, [rsp+0F8h+var_88]
//   0x1DCD63 mov     rsi, rax
//   0x1DCD66 mov     [rsp+0F8h+var_F0], rax
//   0x1DCD6B call    sub_310B80
//   0x1DCD70 test    al, al
//   0x1DCD72 jz      short loc_1DCD40
//   0x1DCD74 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DCD7A movdqu  xmm1, xmmword ptr [r12]
//   0x1DCD80 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DCD87 movups  xmmword ptr [r12], xmm2
//   0x1DCD8C movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DCD95 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DCD9D movaps  [rsp+0F8h+var_58], xmm0
//   0x1DCDA5 movups  xmmword ptr [r12+10h], xmm2
//   0x1DCDAB movaps  [rsp+0F8h+var_88], xmm1
//   0x1DCDB0 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DCDB8 jmp     loc_1DCA46
//   0x1DCDBD xor     eax, eax
//   0x1DCDBF pxor    xmm0, xmm0
//   0x1DCDC3 xor     edx, edx
//   0x1DCDC5 mov     rdi, r12
//   0x1DCDC8 mov     dword ptr [rsp+0F8h+var_88], eax
//   0x1DCDCC mov     eax, [rsp+0F8h+var_D4]
//   0x1DCDD0 mov     [rsp+0F8h+var_70], rdx
//   0x1DCDD8 mov     dword ptr [rsp+0F8h+var_88+4], eax
//   0x1DCDDC lea     rax, [rsp+0F8h+var_88]
//   0x1DCDE1 mov     rsi, rax
//   0x1DCDE4 mov     [rsp+0F8h+var_F0], rax
//   0x1DCDE9 mov     rbx, rax
//   0x1DCDEC movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DCDF1 call    sub_30EC10
//   0x1DCDF6 mov     rdi, rbx
//   0x1DCDF9 call    sub_30EA00
//   0x1DCDFE mov     rdi, r12
//   0x1DCE01 call    sub_30EA00
//   0x1DCE06 mov     dword ptr [r12], 8
//   0x1DCE0E jmp     loc_1DCA60
//   0x1DCE13 call    ___stack_chk_fail
//   0x1DCE18 mov     rbx, rax
//   0x1DCE1B jmp     loc_4129C
//   0x1DCE20 mov     rbx, rax
//   0x1DCE23 jmp     loc_412C1
//   0x1DCE28 mov     rbx, rax
//   0x1DCE2B jmp     loc_412FA
//   0x1DCE30 mov     rbx, rax
//   0x1DCE33 jmp     loc_41327
//   0x1DCE38 mov     rbx, rax
//   0x1DCE3B jmp     loc_412F0
//   0x1DCE40 mov     rbx, rax
//   0x1DCE43 jmp     loc_41351
// ============================================================

void sub_1DC500(/* signature unknown */)
{
    // see disassembly above
}

