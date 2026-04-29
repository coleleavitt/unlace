// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x287730
// Name:           sub_287730
// Function size:  406 bytes (111 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x287730 push    r12
//   0x287732 mov     r12, rdi
//   0x287735 push    rbp
//   0x287736 lea     rbp, jpt_287754
//   0x28773D push    rbx
//   0x28773E mov     rbx, rsi
//   0x287741 mov     eax, [rbx+8]
//   0x287744 sub     eax, 46h ; 'F'; switch 12 cases
//   0x287747 cmp     eax, 0Bh
//   0x28774A ja      short def_287754; jumptable 0000000000287754 default case, cases 71,74,76-79
//   0x28774C movsxd  rax, ss:(jpt_287754 - 406AF4h)[rbp+rax*4]
//   0x287751 add     rax, rbp
//   0x287754 jmp     rax; switch jump
//   0x287756 align 20h
//   0x287760 mov     rsi, rbx; jumptable 0000000000287754 case 72
//   0x287763 mov     rdi, r12
//   0x287766 call    sub_287080
//   0x28776B test    al, al
//   0x28776D jnz     short loc_287741
//   0x28776F nop
//   0x287770 xor     eax, eax; jumptable 0000000000287754 default case, cases 71,74,76-79
//   0x287772 pop     rbx
//   0x287773 pop     rbp
//   0x287774 pop     r12
//   0x287776 retn
//   0x287777 align 20h
//   0x287780 mov     rax, [rbx+18h]; jumptable 0000000000287754 case 81
//   0x287784 mov     rsi, rbx
//   0x287787 mov     rdi, r12
//   0x28778A mov     edx, [rax]
//   0x28778C call    sub_27F2A0
//   0x287791 test    al, al
//   0x287793 jz      loc_287890
//   0x287799 mov     rdi, [rbx+18h]
//   0x28779D test    rdi, rdi
//   0x2877A0 jz      short loc_2877A7
//   0x2877A2 call    j__qfree
//   0x2877A7 mov     dword ptr [rbx+8], 4Eh ; 'N'
//   0x2877AE add     dword ptr [r12+54h], 1
//   0x2877B4 jmp     short loc_287741
//   0x2877B6 align 20h
//   0x2877C0 mov     rsi, rbx; jumptable 0000000000287754 case 80
//   0x2877C3 mov     rdi, r12
//   0x2877C6 call    sub_286E30
//   0x2877CB test    al, al
//   0x2877CD jz      loc_287870
//   0x2877D3 add     dword ptr [r12+54h], 1
//   0x2877D9 jmp     loc_287741
//   0x2877DE align 20h
//   0x2877E0 mov     rsi, rbx; jumptable 0000000000287754 case 75
//   0x2877E3 mov     rdi, r12
//   0x2877E6 call    sub_2929B0
//   0x2877EB test    al, al
//   0x2877ED jnz     short loc_2877D3
//   0x2877EF mov     rsi, rbx
//   0x2877F2 mov     rdi, r12
//   0x2877F5 call    sub_293160
//   0x2877FA test    al, al
//   0x2877FC jnz     loc_287741
//   0x287802 mov     rsi, rbx
//   0x287805 mov     rdi, r12
//   0x287808 call    sub_292250
//   0x28780D test    al, al
//   0x28780F jz      def_287754; jumptable 0000000000287754 default case, cases 71,74,76-79
//   0x287815 jmp     short loc_2877D3
//   0x287817 align 20h
//   0x287820 mov     rsi, rbx; jumptable 0000000000287754 case 70
//   0x287823 mov     rdi, r12
//   0x287826 call    sub_2868E0
//   0x28782B pop     rbx
//   0x28782C pop     rbp
//   0x28782D movzx   eax, al
//   0x287830 pop     r12
//   0x287832 retn
//   0x287833 align 8
//   0x287838 mov     rsi, rbx; jumptable 0000000000287754 case 73
//   0x28783B mov     rdi, r12
//   0x28783E call    sub_293860
//   0x287843 test    al, al
//   0x287845 jnz     short loc_2877D3
//   0x287847 mov     rsi, rbx
//   0x28784A mov     rdi, r12
//   0x28784D call    sub_282E90
//   0x287852 test    al, al
//   0x287854 jnz     loc_287741
//   0x28785A mov     rsi, rbx
//   0x28785D mov     rdi, r12
//   0x287860 call    sub_2838E0
//   0x287865 movzx   eax, al
//   0x287868 jmp     loc_287772
//   0x28786D align 10h
//   0x287870 mov     rsi, rbx
//   0x287873 mov     rdi, r12
//   0x287876 call    sub_287440
//   0x28787B test    al, al
//   0x28787D jz      def_287754; jumptable 0000000000287754 default case, cases 71,74,76-79
//   0x287883 jmp     loc_287741
//   0x287888 align 10h
//   0x287890 mov     rsi, rbx
//   0x287893 mov     rdi, r12
//   0x287896 call    sub_27F3C0
//   0x28789B test    al, al
//   0x28789D jnz     loc_2877D3
//   0x2878A3 mov     rsi, rbx
//   0x2878A6 mov     rdi, r12
//   0x2878A9 call    sub_286B40
//   0x2878AE test    al, al
//   0x2878B0 jz      def_287754; jumptable 0000000000287754 default case, cases 71,74,76-79
//   0x2878B6 add     dword ptr [r12+54h], 1
//   0x2878BC mov     eax, 1
//   0x2878C1 jmp     loc_287772
// ============================================================

void sub_287730(/* signature unknown */)
{
    // see disassembly above
}

