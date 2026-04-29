// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x28C6F0
// Name:           sub_28C6F0
// Function size:  406 bytes (111 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x28C6F0 push    r12
//   0x28C6F2 mov     r12, rdi
//   0x28C6F5 push    rbp
//   0x28C6F6 lea     rbp, jpt_28C714
//   0x28C6FD push    rbx
//   0x28C6FE mov     rbx, rsi
//   0x28C701 mov     eax, [rbx+8]
//   0x28C704 sub     eax, 46h ; 'F'; switch 12 cases
//   0x28C707 cmp     eax, 0Bh
//   0x28C70A ja      short def_28C714; jumptable 000000000028C714 default case, cases 71,74,76-79
//   0x28C70C movsxd  rax, ss:(jpt_28C714 - 428174h)[rbp+rax*4]
//   0x28C711 add     rax, rbp
//   0x28C714 jmp     rax; switch jump
//   0x28C716 align 20h
//   0x28C720 mov     rsi, rbx; jumptable 000000000028C714 case 72
//   0x28C723 mov     rdi, r12
//   0x28C726 call    sub_28C040
//   0x28C72B test    al, al
//   0x28C72D jnz     short loc_28C701
//   0x28C72F nop
//   0x28C730 xor     eax, eax; jumptable 000000000028C714 default case, cases 71,74,76-79
//   0x28C732 pop     rbx
//   0x28C733 pop     rbp
//   0x28C734 pop     r12
//   0x28C736 retn
//   0x28C737 align 20h
//   0x28C740 mov     rax, [rbx+18h]; jumptable 000000000028C714 case 81
//   0x28C744 mov     rsi, rbx
//   0x28C747 mov     rdi, r12
//   0x28C74A mov     edx, [rax]
//   0x28C74C call    sub_284260
//   0x28C751 test    al, al
//   0x28C753 jz      loc_28C850
//   0x28C759 mov     rdi, [rbx+18h]
//   0x28C75D test    rdi, rdi
//   0x28C760 jz      short loc_28C767
//   0x28C762 call    j__qfree
//   0x28C767 mov     dword ptr [rbx+8], 4Eh ; 'N'
//   0x28C76E add     dword ptr [r12+54h], 1
//   0x28C774 jmp     short loc_28C701
//   0x28C776 align 20h
//   0x28C780 mov     rsi, rbx; jumptable 000000000028C714 case 80
//   0x28C783 mov     rdi, r12
//   0x28C786 call    sub_28BDF0
//   0x28C78B test    al, al
//   0x28C78D jz      loc_28C830
//   0x28C793 add     dword ptr [r12+54h], 1
//   0x28C799 jmp     loc_28C701
//   0x28C79E align 20h
//   0x28C7A0 mov     rsi, rbx; jumptable 000000000028C714 case 75
//   0x28C7A3 mov     rdi, r12
//   0x28C7A6 call    sub_297970
//   0x28C7AB test    al, al
//   0x28C7AD jnz     short loc_28C793
//   0x28C7AF mov     rsi, rbx
//   0x28C7B2 mov     rdi, r12
//   0x28C7B5 call    sub_298120
//   0x28C7BA test    al, al
//   0x28C7BC jnz     loc_28C701
//   0x28C7C2 mov     rsi, rbx
//   0x28C7C5 mov     rdi, r12
//   0x28C7C8 call    sub_297210
//   0x28C7CD test    al, al
//   0x28C7CF jz      def_28C714; jumptable 000000000028C714 default case, cases 71,74,76-79
//   0x28C7D5 jmp     short loc_28C793
//   0x28C7D7 align 20h
//   0x28C7E0 mov     rsi, rbx; jumptable 000000000028C714 case 70
//   0x28C7E3 mov     rdi, r12
//   0x28C7E6 call    sub_28B8A0
//   0x28C7EB pop     rbx
//   0x28C7EC pop     rbp
//   0x28C7ED movzx   eax, al
//   0x28C7F0 pop     r12
//   0x28C7F2 retn
//   0x28C7F3 align 8
//   0x28C7F8 mov     rsi, rbx; jumptable 000000000028C714 case 73
//   0x28C7FB mov     rdi, r12
//   0x28C7FE call    sub_298820
//   0x28C803 test    al, al
//   0x28C805 jnz     short loc_28C793
//   0x28C807 mov     rsi, rbx
//   0x28C80A mov     rdi, r12
//   0x28C80D call    sub_287E50
//   0x28C812 test    al, al
//   0x28C814 jnz     loc_28C701
//   0x28C81A mov     rsi, rbx
//   0x28C81D mov     rdi, r12
//   0x28C820 call    sub_2888A0
//   0x28C825 movzx   eax, al
//   0x28C828 jmp     loc_28C732
//   0x28C82D align 10h
//   0x28C830 mov     rsi, rbx
//   0x28C833 mov     rdi, r12
//   0x28C836 call    sub_28C400
//   0x28C83B test    al, al
//   0x28C83D jz      def_28C714; jumptable 000000000028C714 default case, cases 71,74,76-79
//   0x28C843 jmp     loc_28C701
//   0x28C848 align 10h
//   0x28C850 mov     rsi, rbx
//   0x28C853 mov     rdi, r12
//   0x28C856 call    sub_284380
//   0x28C85B test    al, al
//   0x28C85D jnz     loc_28C793
//   0x28C863 mov     rsi, rbx
//   0x28C866 mov     rdi, r12
//   0x28C869 call    sub_28BB00
//   0x28C86E test    al, al
//   0x28C870 jz      def_28C714; jumptable 000000000028C714 default case, cases 71,74,76-79
//   0x28C876 add     dword ptr [r12+54h], 1
//   0x28C87C mov     eax, 1
//   0x28C881 jmp     loc_28C732
// ============================================================

void sub_28C6F0(/* signature unknown */)
{
    // see disassembly above
}

