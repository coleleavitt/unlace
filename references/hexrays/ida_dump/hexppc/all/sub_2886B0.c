// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2886B0
// Name:           sub_2886B0
// Function size:  406 bytes (111 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2886B0 push    r12
//   0x2886B2 mov     r12, rdi
//   0x2886B5 push    rbp
//   0x2886B6 lea     rbp, jpt_2886D4
//   0x2886BD push    rbx
//   0x2886BE mov     rbx, rsi
//   0x2886C1 mov     eax, [rbx+8]
//   0x2886C4 sub     eax, 46h ; 'F'; switch 12 cases
//   0x2886C7 cmp     eax, 0Bh
//   0x2886CA ja      short def_2886D4; jumptable 00000000002886D4 default case, cases 71,74,76-79
//   0x2886CC movsxd  rax, ss:(jpt_2886D4 - 41A474h)[rbp+rax*4]
//   0x2886D1 add     rax, rbp
//   0x2886D4 jmp     rax; switch jump
//   0x2886D6 align 20h
//   0x2886E0 mov     rsi, rbx; jumptable 00000000002886D4 case 72
//   0x2886E3 mov     rdi, r12
//   0x2886E6 call    sub_288000
//   0x2886EB test    al, al
//   0x2886ED jnz     short loc_2886C1
//   0x2886EF nop
//   0x2886F0 xor     eax, eax; jumptable 00000000002886D4 default case, cases 71,74,76-79
//   0x2886F2 pop     rbx
//   0x2886F3 pop     rbp
//   0x2886F4 pop     r12
//   0x2886F6 retn
//   0x2886F7 align 20h
//   0x288700 mov     rax, [rbx+18h]; jumptable 00000000002886D4 case 81
//   0x288704 mov     rsi, rbx
//   0x288707 mov     rdi, r12
//   0x28870A mov     edx, [rax]
//   0x28870C call    sub_280220
//   0x288711 test    al, al
//   0x288713 jz      loc_288810
//   0x288719 mov     rdi, [rbx+18h]
//   0x28871D test    rdi, rdi
//   0x288720 jz      short loc_288727
//   0x288722 call    j__qfree
//   0x288727 mov     dword ptr [rbx+8], 4Eh ; 'N'
//   0x28872E add     dword ptr [r12+54h], 1
//   0x288734 jmp     short loc_2886C1
//   0x288736 align 20h
//   0x288740 mov     rsi, rbx; jumptable 00000000002886D4 case 80
//   0x288743 mov     rdi, r12
//   0x288746 call    sub_287DB0
//   0x28874B test    al, al
//   0x28874D jz      loc_2887F0
//   0x288753 add     dword ptr [r12+54h], 1
//   0x288759 jmp     loc_2886C1
//   0x28875E align 20h
//   0x288760 mov     rsi, rbx; jumptable 00000000002886D4 case 75
//   0x288763 mov     rdi, r12
//   0x288766 call    sub_293930
//   0x28876B test    al, al
//   0x28876D jnz     short loc_288753
//   0x28876F mov     rsi, rbx
//   0x288772 mov     rdi, r12
//   0x288775 call    sub_2940E0
//   0x28877A test    al, al
//   0x28877C jnz     loc_2886C1
//   0x288782 mov     rsi, rbx
//   0x288785 mov     rdi, r12
//   0x288788 call    sub_2931D0
//   0x28878D test    al, al
//   0x28878F jz      def_2886D4; jumptable 00000000002886D4 default case, cases 71,74,76-79
//   0x288795 jmp     short loc_288753
//   0x288797 align 20h
//   0x2887A0 mov     rsi, rbx; jumptable 00000000002886D4 case 70
//   0x2887A3 mov     rdi, r12
//   0x2887A6 call    sub_287860
//   0x2887AB pop     rbx
//   0x2887AC pop     rbp
//   0x2887AD movzx   eax, al
//   0x2887B0 pop     r12
//   0x2887B2 retn
//   0x2887B3 align 8
//   0x2887B8 mov     rsi, rbx; jumptable 00000000002886D4 case 73
//   0x2887BB mov     rdi, r12
//   0x2887BE call    sub_2947E0
//   0x2887C3 test    al, al
//   0x2887C5 jnz     short loc_288753
//   0x2887C7 mov     rsi, rbx
//   0x2887CA mov     rdi, r12
//   0x2887CD call    sub_283E10
//   0x2887D2 test    al, al
//   0x2887D4 jnz     loc_2886C1
//   0x2887DA mov     rsi, rbx
//   0x2887DD mov     rdi, r12
//   0x2887E0 call    sub_284860
//   0x2887E5 movzx   eax, al
//   0x2887E8 jmp     loc_2886F2
//   0x2887ED align 10h
//   0x2887F0 mov     rsi, rbx
//   0x2887F3 mov     rdi, r12
//   0x2887F6 call    sub_2883C0
//   0x2887FB test    al, al
//   0x2887FD jz      def_2886D4; jumptable 00000000002886D4 default case, cases 71,74,76-79
//   0x288803 jmp     loc_2886C1
//   0x288808 align 10h
//   0x288810 mov     rsi, rbx
//   0x288813 mov     rdi, r12
//   0x288816 call    sub_280340
//   0x28881B test    al, al
//   0x28881D jnz     loc_288753
//   0x288823 mov     rsi, rbx
//   0x288826 mov     rdi, r12
//   0x288829 call    sub_287AC0
//   0x28882E test    al, al
//   0x288830 jz      def_2886D4; jumptable 00000000002886D4 default case, cases 71,74,76-79
//   0x288836 add     dword ptr [r12+54h], 1
//   0x28883C mov     eax, 1
//   0x288841 jmp     loc_2886F2
// ============================================================

void sub_2886B0(/* signature unknown */)
{
    // see disassembly above
}

