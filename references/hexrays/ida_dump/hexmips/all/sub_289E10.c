// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x289E10
// Name:           sub_289E10
// Function size:  959 bytes (280 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x289E10 push    r12
//   0x289E12 push    rbp
//   0x289E13 mov     rbp, rsi
//   0x289E16 push    rbx
//   0x289E17 cmp     dword ptr [rsi+0Ch], 0FFFFFFFFh
//   0x289E1B mov     rbx, rdi
//   0x289E1E jnz     short loc_289E60
//   0x289E20 lea     r12, jpt_289E39
//   0x289E27 mov     eax, [rbp+8]
//   0x289E2A sub     eax, 46h ; 'F'; switch 11 cases
//   0x289E2D cmp     eax, 0Ah
//   0x289E30 ja      short def_289E39; jumptable 0000000000289E39 default case, cases 77-79
//   0x289E32 movsxd  rax, ds:(jpt_289E39 - 40FB38h)[r12+rax*4]
//   0x289E36 add     rax, r12
//   0x289E39 jmp     rax; switch jump
//   0x289E3B align 20h
//   0x289E40 mov     rsi, rbp; jumptable 0000000000289E39 case 80
//   0x289E43 mov     rdi, rbx
//   0x289E46 call    sub_2871B0
//   0x289E4B test    al, al
//   0x289E4D jz      short def_289E39; jumptable 0000000000289E39 default case, cases 77-79
//   0x289E4F add     dword ptr [rbx+54h], 1
//   0x289E53 pop     rbx; jumptable 0000000000289E39 default case, cases 77-79
//   0x289E54 xor     eax, eax
//   0x289E56 pop     rbp
//   0x289E57 pop     r12
//   0x289E59 retn
//   0x289E5A align 20h
//   0x289E60 call    sub_286E10
//   0x289E65 test    al, al
//   0x289E67 jz      short loc_289E20
//   0x289E69 add     dword ptr [rbx+54h], 1
//   0x289E6D jmp     short loc_289E20
//   0x289E6F align 10h
//   0x289E70 mov     rsi, rbp; jumptable 0000000000289E39 case 70
//   0x289E73 mov     rdi, rbx
//   0x289E76 call    sub_2871B0
//   0x289E7B test    al, al
//   0x289E7D jz      short loc_289E83
//   0x289E7F add     dword ptr [rbx+54h], 1
//   0x289E83 mov     rsi, rbp
//   0x289E86 mov     rdi, rbx
//   0x289E89 call    sub_286C60
//   0x289E8E pop     rbx
//   0x289E8F pop     rbp
//   0x289E90 movzx   eax, al
//   0x289E93 pop     r12
//   0x289E95 retn
//   0x289E96 align 20h
//   0x289EA0 mov     rsi, rbp; jumptable 0000000000289E39 case 71
//   0x289EA3 mov     rdi, rbx
//   0x289EA6 call    sub_284A20
//   0x289EAB add     [rbx+50h], eax
//   0x289EAE jmp     short def_289E39; jumptable 0000000000289E39 default case, cases 77-79
//   0x289EB0 mov     rsi, rbp; jumptable 0000000000289E39 case 72
//   0x289EB3 mov     rdi, rbx
//   0x289EB6 call    sub_285160
//   0x289EBB test    al, al
//   0x289EBD jnz     short loc_289EE0
//   0x289EBF mov     rsi, rbp
//   0x289EC2 mov     rdi, rbx
//   0x289EC5 call    sub_286620
//   0x289ECA test    al, al
//   0x289ECC jz      loc_28A158
//   0x289ED2 nop     word ptr [rax+rax+00000000h]
//   0x289EDD nop     dword ptr [rax]
//   0x289EE0 add     dword ptr [rbx+50h], 1
//   0x289EE4 jmp     loc_289E27
//   0x289EE9 align 10h
//   0x289EF0 mov     rsi, rbp; jumptable 0000000000289E39 case 73
//   0x289EF3 mov     rdi, rbx
//   0x289EF6 call    sub_284400
//   0x289EFB test    al, al
//   0x289EFD jz      short loc_289F03
//   0x289EFF add     dword ptr [rbx+50h], 1
//   0x289F03 mov     rsi, rbp
//   0x289F06 mov     rdi, rbx
//   0x289F09 call    sub_2899E0
//   0x289F0E test    al, al
//   0x289F10 jz      short loc_289F16
//   0x289F12 add     dword ptr [rbx+50h], 1
//   0x289F16 mov     rsi, rbp
//   0x289F19 mov     rdi, rbx
//   0x289F1C call    sub_284470
//   0x289F21 test    al, al
//   0x289F23 jz      short loc_289F29
//   0x289F25 add     dword ptr [rbx+50h], 1
//   0x289F29 mov     rsi, rbp
//   0x289F2C mov     rdi, rbx
//   0x289F2F call    sub_281FE0
//   0x289F34 test    al, al
//   0x289F36 jz      short loc_289F3C
//   0x289F38 add     dword ptr [rbx+50h], 1
//   0x289F3C mov     rsi, rbp
//   0x289F3F mov     rdi, rbx
//   0x289F42 call    sub_293BE0
//   0x289F47 test    al, al
//   0x289F49 jz      loc_28A0B8
//   0x289F4F add     dword ptr [rbx+54h], 1
//   0x289F53 jmp     loc_289E27
//   0x289F58 align 20h
//   0x289F60 mov     rsi, rbp; jumptable 0000000000289E39 case 75
//   0x289F63 mov     rdi, rbx
//   0x289F66 call    sub_293130
//   0x289F6B test    al, al
//   0x289F6D jz      short loc_289F73
//   0x289F6F add     dword ptr [rbx+50h], 1
//   0x289F73 mov     rsi, rbp
//   0x289F76 mov     rdi, rbx
//   0x289F79 call    sub_292ED0
//   0x289F7E test    al, al
//   0x289F80 jz      short loc_289F86
//   0x289F82 add     dword ptr [rbx+50h], 1
//   0x289F86 mov     rsi, rbp
//   0x289F89 mov     rdi, rbx
//   0x289F8C call    sub_292AE0
//   0x289F91 test    al, al
//   0x289F93 jz      short loc_289F99
//   0x289F95 add     dword ptr [rbx+50h], 1
//   0x289F99 mov     rsi, rbp
//   0x289F9C mov     rdi, rbx
//   0x289F9F call    sub_292D30
//   0x289FA4 test    al, al
//   0x289FA6 jz      short loc_289FAC
//   0x289FA8 add     dword ptr [rbx+54h], 1
//   0x289FAC mov     rsi, rbp
//   0x289FAF mov     rdi, rbx
//   0x289FB2 call    sub_293350
//   0x289FB7 test    al, al
//   0x289FB9 jz      short loc_289FBF
//   0x289FBB add     dword ptr [rbx+50h], 1
//   0x289FBF mov     rsi, rbp
//   0x289FC2 mov     rdi, rbx
//   0x289FC5 call    sub_2925D0
//   0x289FCA test    al, al
//   0x289FCC jz      def_289E39; jumptable 0000000000289E39 default case, cases 77-79
//   0x289FD2 jmp     loc_289E4F
//   0x289FD7 align 20h
//   0x289FE0 mov     rsi, rbp; jumptable 0000000000289E39 case 74
//   0x289FE3 mov     rdi, rbx
//   0x289FE6 call    sub_293130
//   0x289FEB test    al, al
//   0x289FED jz      short loc_289FF3
//   0x289FEF add     dword ptr [rbx+50h], 1
//   0x289FF3 mov     rsi, rbp
//   0x289FF6 mov     rdi, rbx
//   0x289FF9 call    sub_292ED0
//   0x289FFE test    al, al
//   0x28A000 jz      short loc_28A006
//   0x28A002 add     dword ptr [rbx+50h], 1
//   0x28A006 mov     rsi, rbp
//   0x28A009 mov     rdi, rbx
//   0x28A00C call    sub_293350
//   0x28A011 test    al, al
//   0x28A013 jz      def_289E39; jumptable 0000000000289E39 default case, cases 77-79
//   0x28A019 add     dword ptr [rbx+50h], 1
//   0x28A01D jmp     def_289E39; jumptable 0000000000289E39 default case, cases 77-79
//   0x28A022 align 8
//   0x28A028 mov     rsi, rbp; jumptable 0000000000289E39 case 76
//   0x28A02B mov     rdi, rbx
//   0x28A02E call    sub_292ED0
//   0x28A033 test    al, al
//   0x28A035 jz      short loc_28A03B
//   0x28A037 add     dword ptr [rbx+50h], 1
//   0x28A03B mov     rsi, rbp
//   0x28A03E mov     rdi, rbx
//   0x28A041 call    sub_2936F0
//   0x28A046 test    al, al
//   0x28A048 jz      short loc_28A04E
//   0x28A04A add     dword ptr [rbx+50h], 1
//   0x28A04E mov     rsi, rbp
//   0x28A051 mov     rdi, rbx
//   0x28A054 call    sub_2938A0
//   0x28A059 test    al, al
//   0x28A05B jz      short loc_28A061
//   0x28A05D add     dword ptr [rbx+50h], 1
//   0x28A061 mov     rsi, rbp
//   0x28A064 mov     rdi, rbx
//   0x28A067 call    sub_2938F0
//   0x28A06C test    al, al
//   0x28A06E jz      short loc_28A074
//   0x28A070 add     dword ptr [rbx+50h], 1
//   0x28A074 mov     rsi, rbp
//   0x28A077 mov     rdi, rbx
//   0x28A07A call    sub_293950
//   0x28A07F test    al, al
//   0x28A081 jz      short loc_28A087
//   0x28A083 add     dword ptr [rbx+50h], 1
//   0x28A087 mov     rsi, rbp
//   0x28A08A mov     rdi, rbx
//   0x28A08D call    sub_293AD0
//   0x28A092 test    al, al
//   0x28A094 jz      short loc_28A09A
//   0x28A096 add     dword ptr [rbx+50h], 1
//   0x28A09A mov     rsi, rbp
//   0x28A09D mov     rdi, rbx
//   0x28A0A0 call    sub_2940C0
//   0x28A0A5 test    al, al
//   0x28A0A7 jz      def_289E39; jumptable 0000000000289E39 default case, cases 77-79
//   0x28A0AD jmp     loc_289E4F
//   0x28A0B2 align 8
//   0x28A0B8 mov     rsi, rbp
//   0x28A0BB mov     rdi, rbx
//   0x28A0BE call    sub_282450
//   0x28A0C3 test    al, al
//   0x28A0C5 jz      short loc_28A0CB
//   0x28A0C7 add     dword ptr [rbx+50h], 1
//   0x28A0CB mov     rsi, rbp
//   0x28A0CE mov     rdi, rbx
//   0x28A0D1 call    sub_282C20
//   0x28A0D6 test    al, al
//   0x28A0D8 jnz     loc_289EE0
//   0x28A0DE mov     rsi, rbp
//   0x28A0E1 mov     rdi, rbx
//   0x28A0E4 call    sub_283210
//   0x28A0E9 test    al, al
//   0x28A0EB jnz     loc_289EE0
//   0x28A0F1 mov     rsi, rbp
//   0x28A0F4 mov     rdi, rbx
//   0x28A0F7 call    sub_285740
//   0x28A0FC test    al, al
//   0x28A0FE jnz     loc_289EE0
//   0x28A104 mov     rsi, rbp
//   0x28A107 mov     rdi, rbx
//   0x28A10A call    sub_282150
//   0x28A10F test    al, al
//   0x28A111 jz      short loc_28A117
//   0x28A113 add     dword ptr [rbx+50h], 1
//   0x28A117 mov     rsi, rbp
//   0x28A11A mov     rdi, rbx
//   0x28A11D call    sub_2847A0
//   0x28A122 test    al, al
//   0x28A124 jz      short loc_28A12A
//   0x28A126 add     dword ptr [rbx+50h], 1
//   0x28A12A mov     rsi, rbp
//   0x28A12D mov     rdi, rbx
//   0x28A130 call    sub_2826B0
//   0x28A135 test    al, al
//   0x28A137 jz      short loc_28A13D
//   0x28A139 add     dword ptr [rbx+50h], 1
//   0x28A13D mov     rsi, rbp
//   0x28A140 mov     rdi, rbx
//   0x28A143 call    sub_284880
//   0x28A148 test    al, al
//   0x28A14A jz      def_289E39; jumptable 0000000000289E39 default case, cases 77-79
//   0x28A150 jmp     loc_28A019
//   0x28A155 align 8
//   0x28A158 mov     rsi, rbp
//   0x28A15B mov     rdi, rbx
//   0x28A15E call    sub_285C80
//   0x28A163 test    al, al
//   0x28A165 jnz     loc_289EE0
//   0x28A16B mov     rsi, rbp
//   0x28A16E mov     rdi, rbx
//   0x28A171 call    sub_2852A0
//   0x28A176 test    al, al
//   0x28A178 jnz     loc_289EE0
//   0x28A17E mov     rsi, rbp
//   0x28A181 mov     rdi, rbx
//   0x28A184 call    sub_2857F0
//   0x28A189 test    al, al
//   0x28A18B jz      short loc_28A191
//   0x28A18D add     dword ptr [rbx+50h], 1
//   0x28A191 mov     rsi, rbp
//   0x28A194 mov     rdi, rbx
//   0x28A197 call    sub_289650
//   0x28A19C test    al, al
//   0x28A19E jz      short loc_28A1A4
//   0x28A1A0 add     dword ptr [rbx+50h], 1
//   0x28A1A4 mov     rsi, rbp
//   0x28A1A7 mov     rdi, rbx
//   0x28A1AA call    sub_287400
//   0x28A1AF test    al, al
//   0x28A1B1 jnz     loc_289EE0
//   0x28A1B7 mov     rsi, rbp
//   0x28A1BA mov     rdi, rbx
//   0x28A1BD call    sub_287C50
//   0x28A1C2 test    al, al
//   0x28A1C4 jnz     loc_289EE0
//   0x28A1CA jmp     def_289E39; jumptable 0000000000289E39 default case, cases 77-79
// ============================================================

void sub_289E10(/* signature unknown */)
{
    // see disassembly above
}

