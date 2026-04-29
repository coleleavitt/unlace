// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1D2540
// Name:           sub_1D2540
// Function size:  1174 bytes (243 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1D2540 push    rbp
//   0x1D2541 mov     rbp, rsp
//   0x1D2544 push    r15
//   0x1D2546 push    r14
//   0x1D2548 mov     r14, rdi
//   0x1D254B push    r13
//   0x1D254D mov     r13, r9
//   0x1D2550 push    r12
//   0x1D2552 mov     r12d, r8d
//   0x1D2555 push    rbx
//   0x1D2556 sub     rsp, 0A8h
//   0x1D255D mov     [rbp+var_88], rsi
//   0x1D2564 mov     [rbp+var_80], rdx
//   0x1D2568 mov     [rbp+var_78], rcx
//   0x1D256C mov     rsi, fs:28h
//   0x1D2575 mov     [rbp+var_38], rsi
//   0x1D2579 mov     rsi, rcx
//   0x1D257C call    sub_414E70
//   0x1D2581 test    al, al
//   0x1D2583 jnz     short loc_1D25B0
//   0x1D2585 xor     ebx, ebx
//   0x1D2587 mov     rax, [rbp+var_38]
//   0x1D258B sub     rax, fs:28h
//   0x1D2594 jnz     loc_1D298B
//   0x1D259A lea     rsp, [rbp-28h]
//   0x1D259E mov     eax, ebx
//   0x1D25A0 pop     rbx
//   0x1D25A1 pop     r12
//   0x1D25A3 pop     r13
//   0x1D25A5 pop     r14
//   0x1D25A7 pop     r15
//   0x1D25A9 pop     rbp
//   0x1D25AA retn
//   0x1D25AB align 10h
//   0x1D25B0 mov     ebx, eax
//   0x1D25B2 mov     rax, [r14+8]
//   0x1D25B6 mov     r11, [r14+58h]
//   0x1D25BA mov     r15, [rax+70h]
//   0x1D25BE mov     rax, [r14+60h]
//   0x1D25C2 lea     rax, [rax+rax*4]
//   0x1D25C6 shl     rax, 4
//   0x1D25CA add     rax, r11
//   0x1D25CD mov     [rbp+var_98], rax
//   0x1D25D4 cmp     rax, r11
//   0x1D25D7 jz      short loc_1D2587
//   0x1D25D9 mov     [rbp+var_90], 0
//   0x1D25E4 mov     eax, [r11+48h]
//   0x1D25E8 test    al, 2
//   0x1D25EA jz      loc_1D26D0
//   0x1D25F0 test    r12b, r12b
//   0x1D25F3 jz      loc_1D28C2
//   0x1D25F9 cmp     byte ptr [r13+0], 0
//   0x1D25FE jz      loc_1D2990
//   0x1D2604 cmp     dword ptr [r11], 3
//   0x1D2608 jnz     loc_1D2585
//   0x1D260E mov     rax, [r15]
//   0x1D2611 movzx   esi, word ptr [r11+8]
//   0x1D2616 mov     rdi, r15
//   0x1D2619 mov     [rbp+var_B0], r11
//   0x1D2620 call    qword ptr [rax+0A8h]
//   0x1D2626 movd    xmm0, dword ptr [r15+54h]
//   0x1D262C lea     rdi, [rbp+var_50]
//   0x1D2630 xor     r9d, r9d
//   0x1D2633 mov     edx, eax
//   0x1D2635 mov     rax, [r14]
//   0x1D2638 mov     [rbp+var_A8], rdi
//   0x1D263F mov     r8, rdi
//   0x1D2642 movd    xmm2, edx
//   0x1D2646 mov     rdi, r14
//   0x1D2649 mov     rsi, 200000001h
//   0x1D2653 punpckldq xmm0, xmm2
//   0x1D2657 mov     rax, [rax+40h]
//   0x1D265B mov     [rbp+var_50], 1
//   0x1D2663 movq    [rbp+var_50+4], xmm0
//   0x1D2668 mov     edx, [r15+40h]
//   0x1D266C mov     [rbp+var_60], rsi
//   0x1D2670 lea     rsi, [rbp+var_60]
//   0x1D2674 mov     [rbp+var_58], edx
//   0x1D2677 mov     rcx, rsi
//   0x1D267A mov     rdx, r13
//   0x1D267D mov     [rbp+var_A0], rsi
//   0x1D2684 mov     esi, 1
//   0x1D2689 call    rax
//   0x1D268B mov     rdi, [rbp+var_A0]
//   0x1D2692 call    sub_11CDA0
//   0x1D2697 mov     rdi, [rbp+var_A8]
//   0x1D269E call    sub_11CDA0
//   0x1D26A3 mov     r11, [rbp+var_B0]
//   0x1D26AA add     r11, 50h ; 'P'
//   0x1D26AE cmp     [rbp+var_98], r11
//   0x1D26B5 jz      loc_1D2587
//   0x1D26BB mov     eax, [r11+48h]
//   0x1D26BF test    al, 2
//   0x1D26C1 jnz     loc_1D25F9
//   0x1D26C7 nop     word ptr [rax+rax+00000000h]
//   0x1D26D0 cmp     [rbp+var_90], 0
//   0x1D26D8 jz      loc_1D28E0
//   0x1D26DE cmp     [rbp+var_90], 1
//   0x1D26E6 jnz     loc_1D2585
//   0x1D26EC mov     rdi, [rbp+var_78]
//   0x1D26F0 test    byte ptr [rdi+10h], 2Ah
//   0x1D26F4 jnz     loc_1D2585
//   0x1D26FA mov     dword ptr [rbp+var_B0], 1
//   0x1D2704 mov     ecx, [rdi+8]
//   0x1D2707 mov     rdi, [rbp+var_80]
//   0x1D270B lea     edx, [rcx-16h]
//   0x1D270E mov     dword ptr [rbp+var_A0], ecx
//   0x1D2714 mov     [rbp+var_C0], rdi
//   0x1D271B cmp     edx, 2
//   0x1D271E ja      loc_1D2928
//   0x1D2724 test    al, 4
//   0x1D2726 jz      loc_1D2958
//   0x1D272C cmp     dword ptr [r11], 3
//   0x1D2730 jnz     loc_1D2585
//   0x1D2736 mov     rax, [r15]
//   0x1D2739 movzx   esi, word ptr [r11+8]
//   0x1D273E mov     [rbp+var_A8], r11
//   0x1D2745 mov     rdi, r15
//   0x1D2748 call    qword ptr [rax+0A8h]
//   0x1D274E mov     edi, 50h ; 'P'
//   0x1D2753 mov     dword ptr [rbp+var_A0], eax
//   0x1D2759 call    j__qalloc_or_throw
//   0x1D275E mov     rsi, [r14+40h]
//   0x1D2762 mov     rdx, rax
//   0x1D2765 mov     [rbp+var_B8], rax
//   0x1D276C mov     rax, 0FFFFFFFF00000000h
//   0x1D2776 mov     [rdx+20h], rax
//   0x1D277A mov     rdi, rdx
//   0x1D277D mov     qword ptr [rdx+28h], 0
//   0x1D2785 mov     [rdx+30h], rax
//   0x1D2789 mov     qword ptr [rdx+38h], 0
//   0x1D2791 mov     [rdx+40h], rax
//   0x1D2795 mov     qword ptr [rdx+48h], 0
//   0x1D279D call    sub_330970
//   0x1D27A2 mov     r11, [rbp+var_A8]
//   0x1D27A9 mov     esi, 2
//   0x1D27AE mov     rdi, [r11+40h]
//   0x1D27B2 mov     [rbp+var_D0], r11
//   0x1D27B9 call    _get_tinfo_property
//   0x1D27BE sub     rsp, 8
//   0x1D27C2 lea     rsi, [rbp+var_50]
//   0x1D27C6 mov     rdi, 0FFFFFFFF00000000h
//   0x1D27D0 mov     [rbp+var_50], rdi
//   0x1D27D4 and     eax, 0Fh
//   0x1D27D7 mov     r9, rsi
//   0x1D27DA lea     rcx, [rbp+var_70]
//   0x1D27DE mov     [rbp+var_48], 0
//   0x1D27E6 movd    xmm0, dword ptr [r15+54h]
//   0x1D27EC cmp     al, 9
//   0x1D27EE mov     rdi, 200000001h
//   0x1D27F8 movd    xmm1, dword ptr [rbp+var_A0]
//   0x1D2800 mov     [rbp+var_60], 1
//   0x1D2808 setz    al
//   0x1D280B movzx   eax, al
//   0x1D280E mov     [rbp+var_70], rdi
//   0x1D2812 mov     rdi, r14
//   0x1D2815 punpckldq xmm0, xmm1
//   0x1D2819 movq    [rbp+var_60+4], xmm0
//   0x1D281E mov     edx, [r15+40h]
//   0x1D2822 mov     [rbp+var_68], edx
//   0x1D2825 lea     rdx, [rbp+var_60]
//   0x1D2829 push    rax
//   0x1D282A mov     r8, rdx
//   0x1D282D mov     [rbp+var_A8], rsi
//   0x1D2834 mov     rsi, [rbp+var_B8]
//   0x1D283B mov     [rbp+var_A0], rdx
//   0x1D2842 mov     edx, 2
//   0x1D2847 mov     [rbp+var_C8], rcx
//   0x1D284E call    sub_4145E0
//   0x1D2853 mov     rdi, [rbp+var_C8]
//   0x1D285A pop     rax
//   0x1D285B pop     rdx
//   0x1D285C call    sub_11CDA0
//   0x1D2861 mov     rdi, [rbp+var_A0]
//   0x1D2868 call    sub_11CDA0
//   0x1D286D mov     rdi, [rbp+var_A8]
//   0x1D2874 call    sub_11CDA0
//   0x1D2879 mov     rax, [rbp+var_B8]
//   0x1D2880 mov     edx, dword ptr [rbp+var_B0]
//   0x1D2886 mov     rdi, [rbp+var_C0]
//   0x1D288D mov     [rax+44h], edx
//   0x1D2890 call    sub_11CDA0
//   0x1D2895 mov     rax, [rbp+var_C0]
//   0x1D289C mov     rdi, [rbp+var_B8]
//   0x1D28A3 mov     edx, dword ptr [rbp+var_B0]
//   0x1D28A9 mov     r11, [rbp+var_D0]
//   0x1D28B0 mov     byte ptr [rax], 4
//   0x1D28B3 mov     [rax+8], rdi
//   0x1D28B7 mov     [rax+4], edx
//   0x1D28BA add     [rbp+var_90], 1
//   0x1D28C2 add     r11, 50h ; 'P'
//   0x1D28C6 cmp     [rbp+var_98], r11
//   0x1D28CD jnz     loc_1D25E4
//   0x1D28D3 jmp     loc_1D2587
//   0x1D28D8 align 20h
//   0x1D28E0 mov     rax, [rbp+var_78]
//   0x1D28E4 test    byte ptr [rax+10h], 8
//   0x1D28E8 jnz     loc_1D2585
//   0x1D28EE movzx   edi, byte ptr [rax+0Ch]
//   0x1D28F2 mov     [rbp+var_A0], r11
//   0x1D28F9 call    _get_dtype_size
//   0x1D28FE mov     r11, [rbp+var_A0]
//   0x1D2905 mov     rcx, [rbp+var_88]
//   0x1D290C mov     dword ptr [rbp+var_B0], eax
//   0x1D2912 mov     [rbp+var_C0], rcx
//   0x1D2919 mov     eax, [r11+48h]
//   0x1D291D jmp     loc_1D2724
//   0x1D2922 align 8
//   0x1D2928 mov     rax, [rbp+var_78]
//   0x1D292C mov     [rbp+var_A0], r11
//   0x1D2933 movzx   edi, byte ptr [rax+0Ch]
//   0x1D2937 call    _get_dtype_size
//   0x1D293C mov     r11, [rbp+var_A0]
//   0x1D2943 mov     dword ptr [rbp+var_B0], eax
//   0x1D2949 mov     eax, [r11+48h]
//   0x1D294D jmp     loc_1D2724
//   0x1D2952 align 8
//   0x1D2958 mov     ecx, dword ptr [rbp+var_B0]
//   0x1D295E mov     rsi, [rbp+var_C0]
//   0x1D2965 mov     rdx, r11
//   0x1D2968 mov     rdi, r15
//   0x1D296B mov     [rbp+var_A0], r11
//   0x1D2972 call    sub_1D2210
//   0x1D2977 mov     r11, [rbp+var_A0]
//   0x1D297E test    al, al
//   0x1D2980 jnz     loc_1D28BA
//   0x1D2986 jmp     loc_1D2585
//   0x1D298B call    ___stack_chk_fail
//   0x1D2990 mov     rax, cs:under_debugger_ptr
//   0x1D2997 cmp     byte ptr [rax], 0
//   0x1D299A jnz     loc_41A4F
//   0x1D29A0 mov     rax, [rbp+var_38]
//   0x1D29A4 sub     rax, fs:28h
//   0x1D29AD jnz     short loc_1D29B9
//   0x1D29AF mov     edi, 0CE3Eh
//   0x1D29B4 call    sub_383060
//   0x1D29B9 call    ___stack_chk_fail
//   0x1D29BE mov     rbx, rax
//   0x1D29C1 jmp     loc_41A51
//   0x1D29C6 mov     rbx, rax
//   0x1D29C9 jmp     loc_41A84
//   0x1D29CE mov     rbx, rax
//   0x1D29D1 jmp     loc_41AC5
// ============================================================

void sub_1D2540(/* signature unknown */)
{
    // see disassembly above
}

