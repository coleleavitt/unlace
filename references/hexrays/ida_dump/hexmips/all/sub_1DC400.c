// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1DC400
// Name:           sub_1DC400
// Function size:  2637 bytes (598 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1DC400 push    r15
//   0x1DC402 push    r14
//   0x1DC404 push    r13
//   0x1DC406 push    r12
//   0x1DC408 push    rbp
//   0x1DC409 push    rbx
//   0x1DC40A sub     rsp, 0C8h
//   0x1DC411 mov     [rsp+0F8h+var_E0], rsi
//   0x1DC416 mov     rax, fs:28h
//   0x1DC41F mov     [rsp+0F8h+var_40], rax
//   0x1DC427 xor     eax, eax
//   0x1DC429 movzx   eax, byte ptr [rdi+18h]
//   0x1DC42D cmp     al, [rsi+18h]
//   0x1DC430 jnz     loc_1DC630
//   0x1DC436 test    al, al
//   0x1DC438 jnz     loc_1DC632
//   0x1DC43E mov     rax, [rdi+8]
//   0x1DC442 mov     r13, rdi
//   0x1DC445 mov     rdi, [rsi+8]
//   0x1DC449 mov     rcx, rax
//   0x1DC44C mov     [rsp+0F8h+var_E8], rdi
//   0x1DC451 mov     rdx, rdi
//   0x1DC454 test    rax, rax
//   0x1DC457 jz      loc_1DC690
//   0x1DC45D cmp     qword ptr [r13+10h], 0
//   0x1DC462 jnz     loc_1DC660
//   0x1DC468 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DC46D mov     rbx, rax
//   0x1DC470 test    rcx, rcx
//   0x1DC473 jz      short loc_1DC485
//   0x1DC475 mov     rdx, [rsp+0F8h+var_E0]
//   0x1DC47A cmp     qword ptr [rdx+10h], 0
//   0x1DC47F jnz     loc_1DC6B0
//   0x1DC485 lea     rcx, [rax+18h]
//   0x1DC489 cmp     rax, rbx
//   0x1DC48C jz      loc_1DCD83
//   0x1DC492 cmp     dword ptr [rcx+10h], 8
//   0x1DC496 jnz     loc_1DC630
//   0x1DC49C mov     rdx, [rax]
//   0x1DC49F test    dl, 2
//   0x1DC4A2 jnz     short loc_1DC489
//   0x1DC4A4 mov     rcx, [rax+10h]
//   0x1DC4A8 test    byte ptr [rcx], 2
//   0x1DC4AB jz      loc_1DC6C0
//   0x1DC4B1 and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1DC4B5 mov     rcx, [rdx]
//   0x1DC4B8 test    cl, 2
//   0x1DC4BB jz      loc_1DC6E3
//   0x1DC4C1 mov     rax, rdx
//   0x1DC4C4 jmp     short loc_1DC485
//   0x1DC4C6 align 10h
//   0x1DC4D0 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DC4D4 mov     rdx, [rax]
//   0x1DC4D7 test    dl, 2
//   0x1DC4DA jz      loc_1DCA80
//   0x1DC4E0 mov     rbx, rax
//   0x1DC4E3 nop     word ptr [rax+rax+00000000h]
//   0x1DC4EE xchg    ax, ax
//   0x1DC4F0 cmp     [r13+8], rbx
//   0x1DC4F4 jz      loc_1DC610
//   0x1DC4FA movzx   eax, [rsp+0F8h+var_C9]
//   0x1DC4FF lea     r15, [rbx+18h]
//   0x1DC503 cmp     [rbx+20h], al
//   0x1DC506 jnz     loc_1DC610
//   0x1DC50C cmp     [rbx+18h], r14
//   0x1DC510 jnz     loc_1DC610
//   0x1DC516 cmp     dword ptr [r15+10h], 8
//   0x1DC51B jz      loc_1DC610
//   0x1DC521 movsxd  rax, dword ptr [r15+14h]
//   0x1DC525 add     r14, rax
//   0x1DC528 cmp     [rsp+0F8h+var_D8], r14
//   0x1DC52D jl      loc_1DC610
//   0x1DC533 mov     rax, cs:qword_406B60
//   0x1DC53A pxor    xmm0, xmm0
//   0x1DC53E cmp     [rsp+0F8h+var_CA], 0
//   0x1DC543 mov     [rsp+0F8h+var_70], 0
//   0x1DC54F mov     edx, dword ptr [rsp+0F8h+var_C8+4]
//   0x1DC553 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DC558 mov     qword ptr [rsp+0F8h+var_88], rax
//   0x1DC55D jnz     loc_1DCA10
//   0x1DC563 lea     rbp, [rsp+0F8h+var_88]
//   0x1DC568 mov     rdi, r12
//   0x1DC56B mov     rsi, rbp
//   0x1DC56E call    sub_30FF80
//   0x1DC573 test    al, al
//   0x1DC575 jz      loc_1DCB88
//   0x1DC57B mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC580 mov     rsi, r12
//   0x1DC583 call    sub_30E040
//   0x1DC588 test    eax, eax
//   0x1DC58A jnz     loc_1DCB88
//   0x1DC590 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC595 lea     rsi, [r15+10h]
//   0x1DC599 call    sub_30E010
//   0x1DC59E movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1DC5A3 movdqa  xmm1, xmmword ptr [r12]
//   0x1DC5A9 mov     rdi, rbp
//   0x1DC5AC movdqa  xmm0, xmmword ptr [r12+10h]
//   0x1DC5B3 movaps  xmmword ptr [r12], xmm2
//   0x1DC5B8 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1DC5BD movaps  xmmword ptr [rbp+0], xmm1
//   0x1DC5C1 movaps  xmmword ptr [rbp+10h], xmm0
//   0x1DC5C5 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DC5CD movaps  [rsp+0F8h+var_58], xmm0
//   0x1DC5D5 movaps  xmmword ptr [r12+10h], xmm2
//   0x1DC5DB call    sub_30DE00
//   0x1DC5E0 mov     eax, dword ptr [rsp+0F8h+var_C8+4]
//   0x1DC5E4 cmp     dword ptr [rsp+0F8h+var_A8+4], eax
//   0x1DC5E8 jg      loc_1DC9DE
//   0x1DC5EE mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC5F3 mov     rsi, r12
//   0x1DC5F6 call    sub_30E040
//   0x1DC5FB test    eax, eax
//   0x1DC5FD jz      loc_1DC88C
//   0x1DC603 nop     word ptr [rax+rax+00000000h]
//   0x1DC60E xchg    ax, ax
//   0x1DC610 mov     rdi, r12
//   0x1DC613 call    sub_30DE00
//   0x1DC618 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC61D call    sub_30DE00
//   0x1DC622 nop     word ptr [rax+rax+00000000h]
//   0x1DC62D nop     dword ptr [rax]
//   0x1DC630 xor     eax, eax
//   0x1DC632 mov     rdx, [rsp+0F8h+var_40]
//   0x1DC63A sub     rdx, fs:28h
//   0x1DC643 jnz     loc_1DCE14
//   0x1DC649 add     rsp, 0C8h
//   0x1DC650 pop     rbx
//   0x1DC651 pop     rbp
//   0x1DC652 pop     r12
//   0x1DC654 pop     r13
//   0x1DC656 pop     r14
//   0x1DC658 pop     r15
//   0x1DC65A retn
//   0x1DC65B align 20h
//   0x1DC660 mov     rbx, [rax+8]
//   0x1DC664 test    rdi, rdi
//   0x1DC667 jnz     loc_1DC710
//   0x1DC66D cmp     rcx, rbx
//   0x1DC670 jz      loc_1DC485
//   0x1DC676 mov     [rsp+0F8h+var_E8], rdx
//   0x1DC67B mov     rax, rbx
//   0x1DC67E mov     rbx, rcx
//   0x1DC681 jmp     loc_1DC485
//   0x1DC686 align 10h
//   0x1DC690 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DC695 xor     ebx, ebx
//   0x1DC697 test    rcx, rcx
//   0x1DC69A jz      loc_1DC485
//   0x1DC6A0 mov     rdi, [rsp+0F8h+var_E0]
//   0x1DC6A5 cmp     qword ptr [rdi+10h], 0
//   0x1DC6AA jz      loc_1DC485
//   0x1DC6B0 mov     rcx, [rcx+8]
//   0x1DC6B4 mov     [rsp+0F8h+var_E8], rcx
//   0x1DC6B9 jmp     loc_1DC485
//   0x1DC6BE align 20h
//   0x1DC6C0 mov     rax, rcx
//   0x1DC6C3 mov     rcx, [rcx+8]
//   0x1DC6C7 test    byte ptr [rcx], 2
//   0x1DC6CA jnz     loc_1DC485
//   0x1DC6D0 jmp     short loc_1DC6C0
//   0x1DC6D2 align 20h
//   0x1DC6E0 mov     rdx, rsi
//   0x1DC6E3 cmp     rax, [rdx+10h]
//   0x1DC6E7 jnz     loc_1DC4C1
//   0x1DC6ED and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DC6F1 mov     rax, rdx
//   0x1DC6F4 mov     rsi, rcx
//   0x1DC6F7 mov     rcx, [rcx]
//   0x1DC6FA test    cl, 2
//   0x1DC6FD jz      short loc_1DC6E0
//   0x1DC6FF mov     rax, rsi
//   0x1DC702 jmp     loc_1DC485
//   0x1DC707 align 10h
//   0x1DC710 cmp     qword ptr [rsi+10h], 0
//   0x1DC715 jz      loc_1DC66D
//   0x1DC71B mov     rcx, [rdx+8]
//   0x1DC71F mov     [rsp+0F8h+var_E8], rcx
//   0x1DC724 cmp     rax, rbx
//   0x1DC727 jz      loc_1DC485
//   0x1DC72D nop     dword ptr [rax]
//   0x1DC730 cmp     [rsp+0F8h+var_E8], rdx
//   0x1DC735 jz      loc_1DCE19
//   0x1DC73B cmp     dword ptr [rbx+28h], 8
//   0x1DC73F lea     rbp, [rbx+18h]
//   0x1DC743 jz      loc_1DCAB8
//   0x1DC749 mov     rax, [rsp+0F8h+var_E8]
//   0x1DC74E lea     r15, [rax+18h]
//   0x1DC752 movzx   eax, byte ptr [rbp+8]
//   0x1DC756 mov     [rsp+0F8h+var_C9], al
//   0x1DC75A cmp     al, [r15+8]
//   0x1DC75E jnz     loc_1DC630
//   0x1DC764 cmp     byte ptr [rbp+8], 5
//   0x1DC768 mov     [rsp+0F8h+var_CA], 0
//   0x1DC76D jnz     short loc_1DC789
//   0x1DC76F mov     rax, [r13+0]
//   0x1DC773 mov     rax, [rax+5E0h]
//   0x1DC77A mov     rax, [rax+60h]
//   0x1DC77E movzx   eax, byte ptr [rax+91h]
//   0x1DC785 mov     [rsp+0F8h+var_CA], al
//   0x1DC789 lea     rax, [rsp+0F8h+var_C8]
//   0x1DC78E lea     rsi, [rbp+10h]
//   0x1DC792 mov     rdi, rax
//   0x1DC795 lea     r12, [rsp+0F8h+var_A8]
//   0x1DC79A mov     [rsp+0F8h+var_F0], rax
//   0x1DC79F call    sub_30DEC0
//   0x1DC7A4 lea     rsi, [r15+10h]
//   0x1DC7A8 mov     rdi, r12
//   0x1DC7AB call    sub_30DEC0
//   0x1DC7B0 movsxd  rdi, dword ptr [rsp+0F8h+var_A8+4]
//   0x1DC7B5 mov     rcx, [r15]
//   0x1DC7B8 movsxd  r14, dword ptr [rsp+0F8h+var_C8+4]
//   0x1DC7BD mov     rax, [rbp+0]
//   0x1DC7C1 lea     r8, [rdi+rcx]
//   0x1DC7C5 mov     rdx, r14
//   0x1DC7C8 mov     [rsp+0F8h+var_D8], r8
//   0x1DC7CD add     r14, rax
//   0x1DC7D0 cmp     rax, rcx
//   0x1DC7D3 jge     loc_1DC920
//   0x1DC7D9 cmp     r14, r8
//   0x1DC7DC jnz     loc_1DC610
//   0x1DC7E2 mov     rsi, cs:qword_406B60
//   0x1DC7E9 pxor    xmm0, xmm0
//   0x1DC7ED cmp     [rsp+0F8h+var_CA], 0
//   0x1DC7F2 mov     [rsp+0F8h+var_70], 0
//   0x1DC7FE movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DC803 mov     qword ptr [rsp+0F8h+var_88], rsi
//   0x1DC808 jnz     loc_1DCB98
//   0x1DC80E mov     edx, ecx
//   0x1DC810 lea     rbp, [rsp+0F8h+var_88]
//   0x1DC815 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC81A sub     edx, eax
//   0x1DC81C mov     rsi, rbp
//   0x1DC81F call    sub_30FF80
//   0x1DC824 test    al, al
//   0x1DC826 jz      loc_1DCBB6
//   0x1DC82C cmp     dword ptr [rsp+0F8h+var_C8], 1
//   0x1DC831 jnz     loc_1DCDE5
//   0x1DC837 movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1DC83C movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1DC842 mov     rdi, rbp
//   0x1DC845 movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1DC84B movaps  [rsp+0F8h+var_C8], xmm2
//   0x1DC850 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1DC855 movaps  xmmword ptr [rbp+0], xmm1
//   0x1DC859 movaps  xmmword ptr [rbp+10h], xmm0
//   0x1DC85D movaps  [rsp+0F8h+var_68], xmm1
//   0x1DC865 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DC86D movaps  [rsp+0F8h+var_B8], xmm2
//   0x1DC872 call    sub_30DE00
//   0x1DC877 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC87C mov     rsi, r12
//   0x1DC87F call    sub_30E040
//   0x1DC884 test    eax, eax
//   0x1DC886 jnz     loc_1DC9D0
//   0x1DC88C mov     rax, [rbx]
//   0x1DC88F test    al, 2
//   0x1DC891 jnz     short loc_1DC8B0
//   0x1DC893 mov     rdx, [rbx+10h]
//   0x1DC897 test    byte ptr [rdx], 2
//   0x1DC89A jnz     loc_1DCBC8
//   0x1DC8A0 mov     rbx, rdx
//   0x1DC8A3 mov     rdx, [rdx+8]
//   0x1DC8A7 test    byte ptr [rdx], 2
//   0x1DC8AA jz      short loc_1DC8A0
//   0x1DC8AC nop     dword ptr [rax+00h]
//   0x1DC8B0 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DC8B5 mov     rax, [rcx]
//   0x1DC8B8 test    al, 2
//   0x1DC8BA jnz     short loc_1DC8F0
//   0x1DC8BC mov     rdx, [rcx+10h]
//   0x1DC8C0 test    byte ptr [rdx], 2
//   0x1DC8C3 jnz     loc_1DCC08
//   0x1DC8C9 mov     rax, [rdx+8]
//   0x1DC8CD test    byte ptr [rax], 2
//   0x1DC8D0 jnz     short loc_1DC8DE
//   0x1DC8D2 mov     rdx, rax
//   0x1DC8D5 mov     rax, [rdx+8]
//   0x1DC8D9 test    byte ptr [rax], 2
//   0x1DC8DC jz      short loc_1DC8D2
//   0x1DC8DE mov     [rsp+0F8h+var_E8], rdx
//   0x1DC8E3 nop     word ptr [rax+rax+00000000h]
//   0x1DC8EE xchg    ax, ax
//   0x1DC8F0 mov     rdi, r12
//   0x1DC8F3 call    sub_30DE00
//   0x1DC8F8 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC8FD call    sub_30DE00
//   0x1DC902 cmp     [r13+8], rbx
//   0x1DC906 jz      loc_1DCDDD
//   0x1DC90C mov     rax, [rsp+0F8h+var_E0]
//   0x1DC911 mov     rdx, [rax+8]
//   0x1DC915 jmp     loc_1DC730
//   0x1DC91A align 20h
//   0x1DC920 cmp     rcx, [rbp+0]
//   0x1DC924 jge     loc_1DC877
//   0x1DC92A mov     rdx, [rsp+0F8h+var_D8]
//   0x1DC92F cmp     r14, rdx
//   0x1DC932 jnz     loc_1DC610
//   0x1DC938 mov     rdx, cs:qword_406B60
//   0x1DC93F pxor    xmm0, xmm0
//   0x1DC943 cmp     [rsp+0F8h+var_CA], 0
//   0x1DC948 mov     [rsp+0F8h+var_70], 0
//   0x1DC954 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DC959 mov     qword ptr [rsp+0F8h+var_88], rdx
//   0x1DC95E jnz     loc_1DCC48
//   0x1DC964 mov     edx, eax
//   0x1DC966 lea     rbp, [rsp+0F8h+var_88]
//   0x1DC96B mov     rdi, r12
//   0x1DC96E sub     edx, ecx
//   0x1DC970 mov     rsi, rbp
//   0x1DC973 call    sub_30FF80
//   0x1DC978 test    al, al
//   0x1DC97A jz      loc_1DCD10
//   0x1DC980 cmp     dword ptr [rsp+0F8h+var_A8], 1
//   0x1DC985 jnz     loc_1DCD10
//   0x1DC98B movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1DC990 movdqa  xmm1, [rsp+0F8h+var_A8]
//   0x1DC996 mov     rdi, rbp
//   0x1DC999 movdqa  xmm0, [rsp+0F8h+var_98]
//   0x1DC99F movaps  [rsp+0F8h+var_A8], xmm2
//   0x1DC9A4 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1DC9A9 movaps  xmmword ptr [rbp+0], xmm1
//   0x1DC9AD movaps  xmmword ptr [rbp+10h], xmm0
//   0x1DC9B1 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DC9B9 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DC9C1 movaps  [rsp+0F8h+var_98], xmm2
//   0x1DC9C6 call    sub_30DE00
//   0x1DC9CB jmp     loc_1DC877
//   0x1DC9D0 mov     rax, [rsp+0F8h+var_D8]
//   0x1DC9D5 cmp     r14, rax
//   0x1DC9D8 jge     loc_1DC610
//   0x1DC9DE mov     rax, [rbx]
//   0x1DC9E1 test    al, 2
//   0x1DC9E3 jnz     loc_1DC4F0
//   0x1DC9E9 mov     rdx, [rbx+10h]
//   0x1DC9ED test    byte ptr [rdx], 2
//   0x1DC9F0 jnz     loc_1DC4D0
//   0x1DC9F6 mov     rbx, rdx
//   0x1DC9F9 mov     rdx, [rdx+8]
//   0x1DC9FD test    byte ptr [rdx], 2
//   0x1DCA00 jnz     loc_1DC4F0
//   0x1DCA06 jmp     short loc_1DC9F6
//   0x1DCA08 align 10h
//   0x1DCA10 mov     eax, dword ptr [rsp+0F8h+var_A8+4]
//   0x1DCA14 lea     rbp, [rsp+0F8h+var_88]
//   0x1DCA19 mov     rdi, r12
//   0x1DCA1C mov     rsi, rbp
//   0x1DCA1F sub     eax, edx
//   0x1DCA21 mov     edx, eax
//   0x1DCA23 call    sub_30FF80
//   0x1DCA28 test    al, al
//   0x1DCA2A jz      loc_1DCB88
//   0x1DCA30 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DCA36 movdqa  xmm1, xmmword ptr [r12]
//   0x1DCA3C movdqa  xmm0, xmmword ptr [r12+10h]
//   0x1DCA43 movaps  xmmword ptr [r12], xmm2
//   0x1DCA48 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DCA51 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DCA59 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DCA61 movaps  xmmword ptr [r12+10h], xmm2
//   0x1DCA67 movaps  [rsp+0F8h+var_88], xmm1
//   0x1DCA6C movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DCA74 jmp     loc_1DC57B
//   0x1DCA79 align 20h
//   0x1DCA80 cmp     [rax+10h], rbx
//   0x1DCA84 jnz     loc_1DC4E0
//   0x1DCA8A and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1DCA8E mov     rbx, rdx
//   0x1DCA91 mov     rdx, [rdx]
//   0x1DCA94 test    dl, 2
//   0x1DCA97 jnz     loc_1DC4F0
//   0x1DCA9D mov     rcx, rax
//   0x1DCAA0 mov     rax, rbx
//   0x1DCAA3 mov     rbx, rcx
//   0x1DCAA6 cmp     [rax+10h], rbx
//   0x1DCAAA jz      short loc_1DCA8A
//   0x1DCAAC jmp     loc_1DC4E0
//   0x1DCAB1 align 8
//   0x1DCAB8 mov     rdi, [rsp+0F8h+var_E8]
//   0x1DCABD movzx   eax, byte ptr [rbp+8]
//   0x1DCAC1 movzx   ecx, byte ptr [rdi+20h]
//   0x1DCAC5 lea     r15, [rdi+18h]
//   0x1DCAC9 cmp     al, cl
//   0x1DCACB jb      short loc_1DCAE3
//   0x1DCACD cmp     cl, al
//   0x1DCACF jb      loc_1DC752
//   0x1DCAD5 mov     rax, [rdi+18h]
//   0x1DCAD9 cmp     [rbp+0], rax
//   0x1DCADD jg      loc_1DC752
//   0x1DCAE3 movsxd  rax, dword ptr [rbp+14h]
//   0x1DCAE7 add     rax, [rbp+0]
//   0x1DCAEB movzx   ecx, byte ptr [r15+8]
//   0x1DCAF0 cmp     [rbp+8], cl
//   0x1DCAF3 jnz     short loc_1DCB50
//   0x1DCAF5 cmp     [r15], rax
//   0x1DCAF8 jge     short loc_1DCB50
//   0x1DCAFA movsxd  rcx, dword ptr [r15+14h]
//   0x1DCAFE add     rcx, [r15]
//   0x1DCB01 cmp     rcx, rax
//   0x1DCB04 jg      loc_1DC630
//   0x1DCB0A mov     rdi, [rsp+0F8h+var_E8]
//   0x1DCB0F mov     rcx, [rdi]
//   0x1DCB12 test    cl, 2
//   0x1DCB15 jnz     loc_1DCD70
//   0x1DCB1B mov     rsi, [rdi+10h]
//   0x1DCB1F test    byte ptr [rsi], 2
//   0x1DCB22 jnz     loc_1DCD99
//   0x1DCB28 mov     [rsp+0F8h+var_E8], rsi
//   0x1DCB2D mov     rsi, [rsi+8]
//   0x1DCB31 test    byte ptr [rsi], 2
//   0x1DCB34 jz      short loc_1DCB28
//   0x1DCB36 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DCB3B cmp     rdx, rcx
//   0x1DCB3E jnz     loc_1DCE0B
//   0x1DCB44 nop     word ptr [rax+rax+00000000h]
//   0x1DCB4F nop
//   0x1DCB50 mov     rax, [rbx]
//   0x1DCB53 test    al, 2
//   0x1DCB55 jnz     loc_1DC902
//   0x1DCB5B mov     rdx, [rbx+10h]
//   0x1DCB5F test    byte ptr [rdx], 2
//   0x1DCB62 jnz     loc_1DCD30
//   0x1DCB68 mov     rax, [rdx+8]
//   0x1DCB6C test    byte ptr [rax], 2
//   0x1DCB6F jnz     short loc_1DCB7D
//   0x1DCB71 mov     rdx, rax
//   0x1DCB74 mov     rax, [rdx+8]
//   0x1DCB78 test    byte ptr [rax], 2
//   0x1DCB7B jz      short loc_1DCB71
//   0x1DCB7D mov     rbx, rdx
//   0x1DCB80 jmp     loc_1DC902
//   0x1DCB85 align 8
//   0x1DCB88 mov     rdi, rbp
//   0x1DCB8B call    sub_30DE00
//   0x1DCB90 jmp     loc_1DC610
//   0x1DCB95 align 8
//   0x1DCB98 add     edx, eax
//   0x1DCB9A lea     rbp, [rsp+0F8h+var_88]
//   0x1DCB9F mov     rdi, [rsp+0F8h+var_F0]
//   0x1DCBA4 sub     edx, ecx
//   0x1DCBA6 mov     rsi, rbp
//   0x1DCBA9 call    sub_30FF80
//   0x1DCBAE test    al, al
//   0x1DCBB0 jnz     loc_1DCCB0
//   0x1DCBB6 mov     rdi, rbp
//   0x1DCBB9 call    sub_30DE00
//   0x1DCBBE jmp     loc_1DC610
//   0x1DCBC3 align 8
//   0x1DCBC8 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DCBCC mov     rdx, [rax]
//   0x1DCBCF test    dl, 2
//   0x1DCBD2 jz      short loc_1DCBE3
//   0x1DCBD4 mov     rbx, rax
//   0x1DCBD7 jmp     loc_1DC8B0
//   0x1DCBDC align 20h
//   0x1DCBE0 mov     rax, rcx
//   0x1DCBE3 cmp     [rax+10h], rbx
//   0x1DCBE7 jnz     short loc_1DCBD4
//   0x1DCBE9 mov     rcx, rdx
//   0x1DCBEC mov     rbx, rax
//   0x1DCBEF and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DCBF3 mov     rdx, [rcx]
//   0x1DCBF6 test    dl, 2
//   0x1DCBF9 jz      short loc_1DCBE0
//   0x1DCBFB mov     rbx, rcx
//   0x1DCBFE jmp     loc_1DC8B0
//   0x1DCC03 align 8
//   0x1DCC08 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DCC0C mov     rdx, [rax]
//   0x1DCC0F test    dl, 2
//   0x1DCC12 jnz     loc_1DCD00
//   0x1DCC18 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DCC1D cmp     [rax+10h], rcx
//   0x1DCC21 jnz     loc_1DCD00
//   0x1DCC27 mov     rcx, rdx
//   0x1DCC2A and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DCC2E mov     rdx, [rcx]
//   0x1DCC31 test    dl, 2
//   0x1DCC34 jz      loc_1DCD20
//   0x1DCC3A mov     [rsp+0F8h+var_E8], rcx
//   0x1DCC3F jmp     loc_1DC8F0
//   0x1DCC44 align 8
//   0x1DCC48 lea     edx, [rdi+rcx]
//   0x1DCC4B lea     rbp, [rsp+0F8h+var_88]
//   0x1DCC50 mov     rdi, r12
//   0x1DCC53 sub     edx, eax
//   0x1DCC55 mov     rsi, rbp
//   0x1DCC58 call    sub_30FF80
//   0x1DCC5D test    al, al
//   0x1DCC5F jz      loc_1DCD10
//   0x1DCC65 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DCC6B movdqa  xmm1, [rsp+0F8h+var_A8]
//   0x1DCC71 movdqa  xmm0, [rsp+0F8h+var_98]
//   0x1DCC77 movaps  [rsp+0F8h+var_A8], xmm2
//   0x1DCC7C movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DCC85 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DCC8D movaps  [rsp+0F8h+var_58], xmm0
//   0x1DCC95 movaps  [rsp+0F8h+var_98], xmm2
//   0x1DCC9A movaps  [rsp+0F8h+var_88], xmm1
//   0x1DCC9F movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DCCA7 jmp     loc_1DC980
//   0x1DCCAC align 10h
//   0x1DCCB0 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DCCB6 movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1DCCBC movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1DCCC2 movaps  [rsp+0F8h+var_C8], xmm2
//   0x1DCCC7 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DCCD0 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DCCD8 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DCCE0 movaps  [rsp+0F8h+var_B8], xmm2
//   0x1DCCE5 movaps  [rsp+0F8h+var_88], xmm1
//   0x1DCCEA movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DCCF2 jmp     loc_1DC82C
//   0x1DCCF7 align 20h
//   0x1DCD00 mov     [rsp+0F8h+var_E8], rax
//   0x1DCD05 jmp     loc_1DC8F0
//   0x1DCD0A align 10h
//   0x1DCD10 mov     rdi, rbp
//   0x1DCD13 call    sub_30DE00
//   0x1DCD18 jmp     loc_1DC610
//   0x1DCD1D align 20h
//   0x1DCD20 mov     rsi, rax
//   0x1DCD23 mov     rax, rcx
//   0x1DCD26 mov     rcx, rsi
//   0x1DCD29 jmp     loc_1DCC1D
//   0x1DCD2E align 10h
//   0x1DCD30 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DCD34 mov     rdx, [rax]
//   0x1DCD37 test    dl, 2
//   0x1DCD3A jz      short loc_1DCD47
//   0x1DCD3C mov     rbx, rax
//   0x1DCD3F jmp     loc_1DC902
//   0x1DCD44 mov     rax, rcx
//   0x1DCD47 cmp     [rax+10h], rbx
//   0x1DCD4B jnz     short loc_1DCD3C
//   0x1DCD4D mov     rcx, rdx
//   0x1DCD50 mov     rbx, rax
//   0x1DCD53 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DCD57 mov     rdx, [rcx]
//   0x1DCD5A test    dl, 2
//   0x1DCD5D jz      short loc_1DCD44
//   0x1DCD5F mov     rbx, rcx
//   0x1DCD62 jmp     loc_1DC902
//   0x1DCD67 align 10h
//   0x1DCD70 movzx   ecx, byte ptr [rbp+8]
//   0x1DCD74 cmp     [r15+8], cl
//   0x1DCD78 jz      loc_1DCAF5
//   0x1DCD7E jmp     loc_1DCB50
//   0x1DCD83 mov     rax, [rsp+0F8h+var_E0]
//   0x1DCD88 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DCD8D cmp     [rax+8], rcx
//   0x1DCD91 setz    al
//   0x1DCD94 jmp     loc_1DC632
//   0x1DCD99 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DCD9D mov     rsi, [rcx]
//   0x1DCDA0 test    sil, 2
//   0x1DCDA4 jz      short loc_1DCDB3
//   0x1DCDA6 mov     [rsp+0F8h+var_E8], rcx
//   0x1DCDAB jmp     loc_1DCB36
//   0x1DCDB0 mov     rcx, rdi
//   0x1DCDB3 mov     rdi, [rsp+0F8h+var_E8]
//   0x1DCDB8 cmp     [rcx+10h], rdi
//   0x1DCDBC jnz     short loc_1DCDA6
//   0x1DCDBE mov     rdi, rsi
//   0x1DCDC1 mov     [rsp+0F8h+var_E8], rcx
//   0x1DCDC6 and     rdi, 0FFFFFFFFFFFFFFFCh
//   0x1DCDCA mov     rsi, [rdi]
//   0x1DCDCD test    sil, 2
//   0x1DCDD1 jz      short loc_1DCDB0
//   0x1DCDD3 mov     [rsp+0F8h+var_E8], rdi
//   0x1DCDD8 jmp     loc_1DCB36
//   0x1DCDDD mov     rax, rbx
//   0x1DCDE0 jmp     loc_1DC485
//   0x1DCDE5 mov     rdi, rbp
//   0x1DCDE8 call    sub_30DE00
//   0x1DCDED mov     rdi, r12
//   0x1DCDF0 call    sub_30DE00
//   0x1DCDF5 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DCDFA call    sub_30DE00
//   0x1DCDFF mov     rax, rbx
//   0x1DCE02 mov     rbx, [r13+8]
//   0x1DCE06 jmp     loc_1DC485
//   0x1DCE0B lea     r15, [rcx+18h]
//   0x1DCE0F jmp     loc_1DCAEB
//   0x1DCE14 call    ___stack_chk_fail
//   0x1DCE19 mov     rcx, [r13+8]
//   0x1DCE1D mov     rax, rbx
//   0x1DCE20 jmp     loc_1DC67E
//   0x1DCE25 mov     rbx, rax
//   0x1DCE28 jmp     loc_41372
//   0x1DCE2D mov     rbx, rax
//   0x1DCE30 jmp     loc_4137A
//   0x1DCE35 mov     rbx, rax
//   0x1DCE38 jmp     loc_413A7
//   0x1DCE3D mov     rbx, rax
//   0x1DCE40 jmp     loc_41382
//   0x1DCE45 mov     rbx, rax
//   0x1DCE48 jmp     loc_413B1
// ============================================================

void sub_1DC400(/* signature unknown */)
{
    // see disassembly above
}

