// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x286F70
// Name:           sub_286F70
// Function size:  406 bytes (111 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x286F70 push    r12
//   0x286F72 mov     r12, rdi
//   0x286F75 push    rbp
//   0x286F76 lea     rbp, jpt_286F94
//   0x286F7D push    rbx
//   0x286F7E mov     rbx, rsi
//   0x286F81 mov     eax, [rbx+8]
//   0x286F84 sub     eax, 46h ; 'F'; switch 12 cases
//   0x286F87 cmp     eax, 0Bh
//   0x286F8A ja      short def_286F94; jumptable 0000000000286F94 default case, cases 71,74,76-79
//   0x286F8C movsxd  rax, ss:(jpt_286F94 - 4089F4h)[rbp+rax*4]
//   0x286F91 add     rax, rbp
//   0x286F94 jmp     rax; switch jump
//   0x286F96 align 20h
//   0x286FA0 mov     rsi, rbx; jumptable 0000000000286F94 case 72
//   0x286FA3 mov     rdi, r12
//   0x286FA6 call    sub_2868C0
//   0x286FAB test    al, al
//   0x286FAD jnz     short loc_286F81
//   0x286FAF nop
//   0x286FB0 xor     eax, eax; jumptable 0000000000286F94 default case, cases 71,74,76-79
//   0x286FB2 pop     rbx
//   0x286FB3 pop     rbp
//   0x286FB4 pop     r12
//   0x286FB6 retn
//   0x286FB7 align 20h
//   0x286FC0 mov     rax, [rbx+18h]; jumptable 0000000000286F94 case 81
//   0x286FC4 mov     rsi, rbx
//   0x286FC7 mov     rdi, r12
//   0x286FCA mov     edx, [rax]
//   0x286FCC call    sub_27EAE0
//   0x286FD1 test    al, al
//   0x286FD3 jz      loc_2870D0
//   0x286FD9 mov     rdi, [rbx+18h]
//   0x286FDD test    rdi, rdi
//   0x286FE0 jz      short loc_286FE7
//   0x286FE2 call    j__qfree
//   0x286FE7 mov     dword ptr [rbx+8], 4Eh ; 'N'
//   0x286FEE add     dword ptr [r12+54h], 1
//   0x286FF4 jmp     short loc_286F81
//   0x286FF6 align 20h
//   0x287000 mov     rsi, rbx; jumptable 0000000000286F94 case 80
//   0x287003 mov     rdi, r12
//   0x287006 call    sub_286670
//   0x28700B test    al, al
//   0x28700D jz      loc_2870B0
//   0x287013 add     dword ptr [r12+54h], 1
//   0x287019 jmp     loc_286F81
//   0x28701E align 20h
//   0x287020 mov     rsi, rbx; jumptable 0000000000286F94 case 75
//   0x287023 mov     rdi, r12
//   0x287026 call    sub_2921F0
//   0x28702B test    al, al
//   0x28702D jnz     short loc_287013
//   0x28702F mov     rsi, rbx
//   0x287032 mov     rdi, r12
//   0x287035 call    sub_2929A0
//   0x28703A test    al, al
//   0x28703C jnz     loc_286F81
//   0x287042 mov     rsi, rbx
//   0x287045 mov     rdi, r12
//   0x287048 call    sub_291A90
//   0x28704D test    al, al
//   0x28704F jz      def_286F94; jumptable 0000000000286F94 default case, cases 71,74,76-79
//   0x287055 jmp     short loc_287013
//   0x287057 align 20h
//   0x287060 mov     rsi, rbx; jumptable 0000000000286F94 case 70
//   0x287063 mov     rdi, r12
//   0x287066 call    sub_286120
//   0x28706B pop     rbx
//   0x28706C pop     rbp
//   0x28706D movzx   eax, al
//   0x287070 pop     r12
//   0x287072 retn
//   0x287073 align 8
//   0x287078 mov     rsi, rbx; jumptable 0000000000286F94 case 73
//   0x28707B mov     rdi, r12
//   0x28707E call    sub_2930A0
//   0x287083 test    al, al
//   0x287085 jnz     short loc_287013
//   0x287087 mov     rsi, rbx
//   0x28708A mov     rdi, r12
//   0x28708D call    sub_2826D0
//   0x287092 test    al, al
//   0x287094 jnz     loc_286F81
//   0x28709A mov     rsi, rbx
//   0x28709D mov     rdi, r12
//   0x2870A0 call    sub_283120
//   0x2870A5 movzx   eax, al
//   0x2870A8 jmp     loc_286FB2
//   0x2870AD align 10h
//   0x2870B0 mov     rsi, rbx
//   0x2870B3 mov     rdi, r12
//   0x2870B6 call    sub_286C80
//   0x2870BB test    al, al
//   0x2870BD jz      def_286F94; jumptable 0000000000286F94 default case, cases 71,74,76-79
//   0x2870C3 jmp     loc_286F81
//   0x2870C8 align 10h
//   0x2870D0 mov     rsi, rbx
//   0x2870D3 mov     rdi, r12
//   0x2870D6 call    sub_27EC00
//   0x2870DB test    al, al
//   0x2870DD jnz     loc_287013
//   0x2870E3 mov     rsi, rbx
//   0x2870E6 mov     rdi, r12
//   0x2870E9 call    sub_286380
//   0x2870EE test    al, al
//   0x2870F0 jz      def_286F94; jumptable 0000000000286F94 default case, cases 71,74,76-79
//   0x2870F6 add     dword ptr [r12+54h], 1
//   0x2870FC mov     eax, 1
//   0x287101 jmp     loc_286FB2
// ============================================================

void sub_286F70(/* signature unknown */)
{
    // see disassembly above
}

