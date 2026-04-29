// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x28EA50
// Name:           sub_28EA50
// Function size:  959 bytes (280 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x28EA50 push    r12
//   0x28EA52 push    rbp
//   0x28EA53 mov     rbp, rsi
//   0x28EA56 push    rbx
//   0x28EA57 cmp     dword ptr [rsi+0Ch], 0FFFFFFFFh
//   0x28EA5B mov     rbx, rdi
//   0x28EA5E jnz     short loc_28EAA0
//   0x28EA60 lea     r12, jpt_28EA79
//   0x28EA67 mov     eax, [rbp+8]
//   0x28EA6A sub     eax, 46h ; 'F'; switch 11 cases
//   0x28EA6D cmp     eax, 0Ah
//   0x28EA70 ja      short def_28EA79; jumptable 000000000028EA79 default case, cases 77-79
//   0x28EA72 movsxd  rax, ds:(jpt_28EA79 - 4281D8h)[r12+rax*4]
//   0x28EA76 add     rax, r12
//   0x28EA79 jmp     rax; switch jump
//   0x28EA7B align 20h
//   0x28EA80 mov     rsi, rbp; jumptable 000000000028EA79 case 80
//   0x28EA83 mov     rdi, rbx
//   0x28EA86 call    sub_28BDF0
//   0x28EA8B test    al, al
//   0x28EA8D jz      short def_28EA79; jumptable 000000000028EA79 default case, cases 77-79
//   0x28EA8F add     dword ptr [rbx+54h], 1
//   0x28EA93 pop     rbx; jumptable 000000000028EA79 default case, cases 77-79
//   0x28EA94 xor     eax, eax
//   0x28EA96 pop     rbp
//   0x28EA97 pop     r12
//   0x28EA99 retn
//   0x28EA9A align 20h
//   0x28EAA0 call    sub_28BA50
//   0x28EAA5 test    al, al
//   0x28EAA7 jz      short loc_28EA60
//   0x28EAA9 add     dword ptr [rbx+54h], 1
//   0x28EAAD jmp     short loc_28EA60
//   0x28EAAF align 10h
//   0x28EAB0 mov     rsi, rbp; jumptable 000000000028EA79 case 70
//   0x28EAB3 mov     rdi, rbx
//   0x28EAB6 call    sub_28BDF0
//   0x28EABB test    al, al
//   0x28EABD jz      short loc_28EAC3
//   0x28EABF add     dword ptr [rbx+54h], 1
//   0x28EAC3 mov     rsi, rbp
//   0x28EAC6 mov     rdi, rbx
//   0x28EAC9 call    sub_28B8A0
//   0x28EACE pop     rbx
//   0x28EACF pop     rbp
//   0x28EAD0 movzx   eax, al
//   0x28EAD3 pop     r12
//   0x28EAD5 retn
//   0x28EAD6 align 20h
//   0x28EAE0 mov     rsi, rbp; jumptable 000000000028EA79 case 71
//   0x28EAE3 mov     rdi, rbx
//   0x28EAE6 call    sub_289660
//   0x28EAEB add     [rbx+50h], eax
//   0x28EAEE jmp     short def_28EA79; jumptable 000000000028EA79 default case, cases 77-79
//   0x28EAF0 mov     rsi, rbp; jumptable 000000000028EA79 case 72
//   0x28EAF3 mov     rdi, rbx
//   0x28EAF6 call    sub_289DA0
//   0x28EAFB test    al, al
//   0x28EAFD jnz     short loc_28EB20
//   0x28EAFF mov     rsi, rbp
//   0x28EB02 mov     rdi, rbx
//   0x28EB05 call    sub_28B260
//   0x28EB0A test    al, al
//   0x28EB0C jz      loc_28ED98
//   0x28EB12 nop     word ptr [rax+rax+00000000h]
//   0x28EB1D nop     dword ptr [rax]
//   0x28EB20 add     dword ptr [rbx+50h], 1
//   0x28EB24 jmp     loc_28EA67
//   0x28EB29 align 10h
//   0x28EB30 mov     rsi, rbp; jumptable 000000000028EA79 case 73
//   0x28EB33 mov     rdi, rbx
//   0x28EB36 call    sub_289040
//   0x28EB3B test    al, al
//   0x28EB3D jz      short loc_28EB43
//   0x28EB3F add     dword ptr [rbx+50h], 1
//   0x28EB43 mov     rsi, rbp
//   0x28EB46 mov     rdi, rbx
//   0x28EB49 call    sub_28E620
//   0x28EB4E test    al, al
//   0x28EB50 jz      short loc_28EB56
//   0x28EB52 add     dword ptr [rbx+50h], 1
//   0x28EB56 mov     rsi, rbp
//   0x28EB59 mov     rdi, rbx
//   0x28EB5C call    sub_2890B0
//   0x28EB61 test    al, al
//   0x28EB63 jz      short loc_28EB69
//   0x28EB65 add     dword ptr [rbx+50h], 1
//   0x28EB69 mov     rsi, rbp
//   0x28EB6C mov     rdi, rbx
//   0x28EB6F call    sub_286C20
//   0x28EB74 test    al, al
//   0x28EB76 jz      short loc_28EB7C
//   0x28EB78 add     dword ptr [rbx+50h], 1
//   0x28EB7C mov     rsi, rbp
//   0x28EB7F mov     rdi, rbx
//   0x28EB82 call    sub_298820
//   0x28EB87 test    al, al
//   0x28EB89 jz      loc_28ECF8
//   0x28EB8F add     dword ptr [rbx+54h], 1
//   0x28EB93 jmp     loc_28EA67
//   0x28EB98 align 20h
//   0x28EBA0 mov     rsi, rbp; jumptable 000000000028EA79 case 75
//   0x28EBA3 mov     rdi, rbx
//   0x28EBA6 call    sub_297D70
//   0x28EBAB test    al, al
//   0x28EBAD jz      short loc_28EBB3
//   0x28EBAF add     dword ptr [rbx+50h], 1
//   0x28EBB3 mov     rsi, rbp
//   0x28EBB6 mov     rdi, rbx
//   0x28EBB9 call    sub_297B10
//   0x28EBBE test    al, al
//   0x28EBC0 jz      short loc_28EBC6
//   0x28EBC2 add     dword ptr [rbx+50h], 1
//   0x28EBC6 mov     rsi, rbp
//   0x28EBC9 mov     rdi, rbx
//   0x28EBCC call    sub_297720
//   0x28EBD1 test    al, al
//   0x28EBD3 jz      short loc_28EBD9
//   0x28EBD5 add     dword ptr [rbx+50h], 1
//   0x28EBD9 mov     rsi, rbp
//   0x28EBDC mov     rdi, rbx
//   0x28EBDF call    sub_297970
//   0x28EBE4 test    al, al
//   0x28EBE6 jz      short loc_28EBEC
//   0x28EBE8 add     dword ptr [rbx+54h], 1
//   0x28EBEC mov     rsi, rbp
//   0x28EBEF mov     rdi, rbx
//   0x28EBF2 call    sub_297F90
//   0x28EBF7 test    al, al
//   0x28EBF9 jz      short loc_28EBFF
//   0x28EBFB add     dword ptr [rbx+50h], 1
//   0x28EBFF mov     rsi, rbp
//   0x28EC02 mov     rdi, rbx
//   0x28EC05 call    sub_297210
//   0x28EC0A test    al, al
//   0x28EC0C jz      def_28EA79; jumptable 000000000028EA79 default case, cases 77-79
//   0x28EC12 jmp     loc_28EA8F
//   0x28EC17 align 20h
//   0x28EC20 mov     rsi, rbp; jumptable 000000000028EA79 case 74
//   0x28EC23 mov     rdi, rbx
//   0x28EC26 call    sub_297D70
//   0x28EC2B test    al, al
//   0x28EC2D jz      short loc_28EC33
//   0x28EC2F add     dword ptr [rbx+50h], 1
//   0x28EC33 mov     rsi, rbp
//   0x28EC36 mov     rdi, rbx
//   0x28EC39 call    sub_297B10
//   0x28EC3E test    al, al
//   0x28EC40 jz      short loc_28EC46
//   0x28EC42 add     dword ptr [rbx+50h], 1
//   0x28EC46 mov     rsi, rbp
//   0x28EC49 mov     rdi, rbx
//   0x28EC4C call    sub_297F90
//   0x28EC51 test    al, al
//   0x28EC53 jz      def_28EA79; jumptable 000000000028EA79 default case, cases 77-79
//   0x28EC59 add     dword ptr [rbx+50h], 1
//   0x28EC5D jmp     def_28EA79; jumptable 000000000028EA79 default case, cases 77-79
//   0x28EC62 align 8
//   0x28EC68 mov     rsi, rbp; jumptable 000000000028EA79 case 76
//   0x28EC6B mov     rdi, rbx
//   0x28EC6E call    sub_297B10
//   0x28EC73 test    al, al
//   0x28EC75 jz      short loc_28EC7B
//   0x28EC77 add     dword ptr [rbx+50h], 1
//   0x28EC7B mov     rsi, rbp
//   0x28EC7E mov     rdi, rbx
//   0x28EC81 call    sub_298330
//   0x28EC86 test    al, al
//   0x28EC88 jz      short loc_28EC8E
//   0x28EC8A add     dword ptr [rbx+50h], 1
//   0x28EC8E mov     rsi, rbp
//   0x28EC91 mov     rdi, rbx
//   0x28EC94 call    sub_2984E0
//   0x28EC99 test    al, al
//   0x28EC9B jz      short loc_28ECA1
//   0x28EC9D add     dword ptr [rbx+50h], 1
//   0x28ECA1 mov     rsi, rbp
//   0x28ECA4 mov     rdi, rbx
//   0x28ECA7 call    sub_298530
//   0x28ECAC test    al, al
//   0x28ECAE jz      short loc_28ECB4
//   0x28ECB0 add     dword ptr [rbx+50h], 1
//   0x28ECB4 mov     rsi, rbp
//   0x28ECB7 mov     rdi, rbx
//   0x28ECBA call    sub_298590
//   0x28ECBF test    al, al
//   0x28ECC1 jz      short loc_28ECC7
//   0x28ECC3 add     dword ptr [rbx+50h], 1
//   0x28ECC7 mov     rsi, rbp
//   0x28ECCA mov     rdi, rbx
//   0x28ECCD call    sub_298710
//   0x28ECD2 test    al, al
//   0x28ECD4 jz      short loc_28ECDA
//   0x28ECD6 add     dword ptr [rbx+50h], 1
//   0x28ECDA mov     rsi, rbp
//   0x28ECDD mov     rdi, rbx
//   0x28ECE0 call    sub_298D00
//   0x28ECE5 test    al, al
//   0x28ECE7 jz      def_28EA79; jumptable 000000000028EA79 default case, cases 77-79
//   0x28ECED jmp     loc_28EA8F
//   0x28ECF2 align 8
//   0x28ECF8 mov     rsi, rbp
//   0x28ECFB mov     rdi, rbx
//   0x28ECFE call    sub_287090
//   0x28ED03 test    al, al
//   0x28ED05 jz      short loc_28ED0B
//   0x28ED07 add     dword ptr [rbx+50h], 1
//   0x28ED0B mov     rsi, rbp
//   0x28ED0E mov     rdi, rbx
//   0x28ED11 call    sub_287860
//   0x28ED16 test    al, al
//   0x28ED18 jnz     loc_28EB20
//   0x28ED1E mov     rsi, rbp
//   0x28ED21 mov     rdi, rbx
//   0x28ED24 call    sub_287E50
//   0x28ED29 test    al, al
//   0x28ED2B jnz     loc_28EB20
//   0x28ED31 mov     rsi, rbp
//   0x28ED34 mov     rdi, rbx
//   0x28ED37 call    sub_28A380
//   0x28ED3C test    al, al
//   0x28ED3E jnz     loc_28EB20
//   0x28ED44 mov     rsi, rbp
//   0x28ED47 mov     rdi, rbx
//   0x28ED4A call    sub_286D90
//   0x28ED4F test    al, al
//   0x28ED51 jz      short loc_28ED57
//   0x28ED53 add     dword ptr [rbx+50h], 1
//   0x28ED57 mov     rsi, rbp
//   0x28ED5A mov     rdi, rbx
//   0x28ED5D call    sub_2893E0
//   0x28ED62 test    al, al
//   0x28ED64 jz      short loc_28ED6A
//   0x28ED66 add     dword ptr [rbx+50h], 1
//   0x28ED6A mov     rsi, rbp
//   0x28ED6D mov     rdi, rbx
//   0x28ED70 call    sub_2872F0
//   0x28ED75 test    al, al
//   0x28ED77 jz      short loc_28ED7D
//   0x28ED79 add     dword ptr [rbx+50h], 1
//   0x28ED7D mov     rsi, rbp
//   0x28ED80 mov     rdi, rbx
//   0x28ED83 call    sub_2894C0
//   0x28ED88 test    al, al
//   0x28ED8A jz      def_28EA79; jumptable 000000000028EA79 default case, cases 77-79
//   0x28ED90 jmp     loc_28EC59
//   0x28ED95 align 8
//   0x28ED98 mov     rsi, rbp
//   0x28ED9B mov     rdi, rbx
//   0x28ED9E call    sub_28A8C0
//   0x28EDA3 test    al, al
//   0x28EDA5 jnz     loc_28EB20
//   0x28EDAB mov     rsi, rbp
//   0x28EDAE mov     rdi, rbx
//   0x28EDB1 call    sub_289EE0
//   0x28EDB6 test    al, al
//   0x28EDB8 jnz     loc_28EB20
//   0x28EDBE mov     rsi, rbp
//   0x28EDC1 mov     rdi, rbx
//   0x28EDC4 call    sub_28A430
//   0x28EDC9 test    al, al
//   0x28EDCB jz      short loc_28EDD1
//   0x28EDCD add     dword ptr [rbx+50h], 1
//   0x28EDD1 mov     rsi, rbp
//   0x28EDD4 mov     rdi, rbx
//   0x28EDD7 call    sub_28E290
//   0x28EDDC test    al, al
//   0x28EDDE jz      short loc_28EDE4
//   0x28EDE0 add     dword ptr [rbx+50h], 1
//   0x28EDE4 mov     rsi, rbp
//   0x28EDE7 mov     rdi, rbx
//   0x28EDEA call    sub_28C040
//   0x28EDEF test    al, al
//   0x28EDF1 jnz     loc_28EB20
//   0x28EDF7 mov     rsi, rbp
//   0x28EDFA mov     rdi, rbx
//   0x28EDFD call    sub_28C890
//   0x28EE02 test    al, al
//   0x28EE04 jnz     loc_28EB20
//   0x28EE0A jmp     def_28EA79; jumptable 000000000028EA79 default case, cases 77-79
// ============================================================

void sub_28EA50(/* signature unknown */)
{
    // see disassembly above
}

