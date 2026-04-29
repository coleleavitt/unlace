// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x284FB0
// Name:           sub_284FB0
// Function size:  406 bytes (111 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x284FB0 push    r12
//   0x284FB2 mov     r12, rdi
//   0x284FB5 push    rbp
//   0x284FB6 lea     rbp, jpt_284FD4
//   0x284FBD push    rbx
//   0x284FBE mov     rbx, rsi
//   0x284FC1 mov     eax, [rbx+8]
//   0x284FC4 sub     eax, 46h ; 'F'; switch 12 cases
//   0x284FC7 cmp     eax, 0Bh
//   0x284FCA ja      short def_284FD4; jumptable 0000000000284FD4 default case, cases 71,74,76-79
//   0x284FCC movsxd  rax, ss:(jpt_284FD4 - 402994h)[rbp+rax*4]
//   0x284FD1 add     rax, rbp
//   0x284FD4 jmp     rax; switch jump
//   0x284FD6 align 20h
//   0x284FE0 mov     rsi, rbx; jumptable 0000000000284FD4 case 72
//   0x284FE3 mov     rdi, r12
//   0x284FE6 call    sub_284900
//   0x284FEB test    al, al
//   0x284FED jnz     short loc_284FC1
//   0x284FEF nop
//   0x284FF0 xor     eax, eax; jumptable 0000000000284FD4 default case, cases 71,74,76-79
//   0x284FF2 pop     rbx
//   0x284FF3 pop     rbp
//   0x284FF4 pop     r12
//   0x284FF6 retn
//   0x284FF7 align 20h
//   0x285000 mov     rax, [rbx+18h]; jumptable 0000000000284FD4 case 81
//   0x285004 mov     rsi, rbx
//   0x285007 mov     rdi, r12
//   0x28500A mov     edx, [rax]
//   0x28500C call    sub_27CB20
//   0x285011 test    al, al
//   0x285013 jz      loc_285110
//   0x285019 mov     rdi, [rbx+18h]
//   0x28501D test    rdi, rdi
//   0x285020 jz      short loc_285027
//   0x285022 call    j__qfree
//   0x285027 mov     dword ptr [rbx+8], 4Eh ; 'N'
//   0x28502E add     dword ptr [r12+54h], 1
//   0x285034 jmp     short loc_284FC1
//   0x285036 align 20h
//   0x285040 mov     rsi, rbx; jumptable 0000000000284FD4 case 80
//   0x285043 mov     rdi, r12
//   0x285046 call    sub_2846B0
//   0x28504B test    al, al
//   0x28504D jz      loc_2850F0
//   0x285053 add     dword ptr [r12+54h], 1
//   0x285059 jmp     loc_284FC1
//   0x28505E align 20h
//   0x285060 mov     rsi, rbx; jumptable 0000000000284FD4 case 75
//   0x285063 mov     rdi, r12
//   0x285066 call    sub_290230
//   0x28506B test    al, al
//   0x28506D jnz     short loc_285053
//   0x28506F mov     rsi, rbx
//   0x285072 mov     rdi, r12
//   0x285075 call    sub_2909E0
//   0x28507A test    al, al
//   0x28507C jnz     loc_284FC1
//   0x285082 mov     rsi, rbx
//   0x285085 mov     rdi, r12
//   0x285088 call    sub_28FAD0
//   0x28508D test    al, al
//   0x28508F jz      def_284FD4; jumptable 0000000000284FD4 default case, cases 71,74,76-79
//   0x285095 jmp     short loc_285053
//   0x285097 align 20h
//   0x2850A0 mov     rsi, rbx; jumptable 0000000000284FD4 case 70
//   0x2850A3 mov     rdi, r12
//   0x2850A6 call    sub_284160
//   0x2850AB pop     rbx
//   0x2850AC pop     rbp
//   0x2850AD movzx   eax, al
//   0x2850B0 pop     r12
//   0x2850B2 retn
//   0x2850B3 align 8
//   0x2850B8 mov     rsi, rbx; jumptable 0000000000284FD4 case 73
//   0x2850BB mov     rdi, r12
//   0x2850BE call    sub_2910E0
//   0x2850C3 test    al, al
//   0x2850C5 jnz     short loc_285053
//   0x2850C7 mov     rsi, rbx
//   0x2850CA mov     rdi, r12
//   0x2850CD call    sub_280710
//   0x2850D2 test    al, al
//   0x2850D4 jnz     loc_284FC1
//   0x2850DA mov     rsi, rbx
//   0x2850DD mov     rdi, r12
//   0x2850E0 call    sub_281160
//   0x2850E5 movzx   eax, al
//   0x2850E8 jmp     loc_284FF2
//   0x2850ED align 10h
//   0x2850F0 mov     rsi, rbx
//   0x2850F3 mov     rdi, r12
//   0x2850F6 call    sub_284CC0
//   0x2850FB test    al, al
//   0x2850FD jz      def_284FD4; jumptable 0000000000284FD4 default case, cases 71,74,76-79
//   0x285103 jmp     loc_284FC1
//   0x285108 align 10h
//   0x285110 mov     rsi, rbx
//   0x285113 mov     rdi, r12
//   0x285116 call    sub_27CC40
//   0x28511B test    al, al
//   0x28511D jnz     loc_285053
//   0x285123 mov     rsi, rbx
//   0x285126 mov     rdi, r12
//   0x285129 call    sub_2843C0
//   0x28512E test    al, al
//   0x285130 jz      def_284FD4; jumptable 0000000000284FD4 default case, cases 71,74,76-79
//   0x285136 add     dword ptr [r12+54h], 1
//   0x28513C mov     eax, 1
//   0x285141 jmp     loc_284FF2
// ============================================================

void sub_284FB0(/* signature unknown */)
{
    // see disassembly above
}

