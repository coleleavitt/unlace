// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x289A90
// Name:           sub_289A90
// Function size:  959 bytes (280 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x289A90 push    r12
//   0x289A92 push    rbp
//   0x289A93 mov     rbp, rsi
//   0x289A96 push    rbx
//   0x289A97 cmp     dword ptr [rsi+0Ch], 0FFFFFFFFh
//   0x289A9B mov     rbx, rdi
//   0x289A9E jnz     short loc_289AE0
//   0x289AA0 lea     r12, jpt_289AB9
//   0x289AA7 mov     eax, [rbp+8]
//   0x289AAA sub     eax, 46h ; 'F'; switch 11 cases
//   0x289AAD cmp     eax, 0Ah
//   0x289AB0 ja      short def_289AB9; jumptable 0000000000289AB9 default case, cases 77-79
//   0x289AB2 movsxd  rax, ds:(jpt_289AB9 - 406B58h)[r12+rax*4]
//   0x289AB6 add     rax, r12
//   0x289AB9 jmp     rax; switch jump
//   0x289ABB align 20h
//   0x289AC0 mov     rsi, rbp; jumptable 0000000000289AB9 case 80
//   0x289AC3 mov     rdi, rbx
//   0x289AC6 call    sub_286E30
//   0x289ACB test    al, al
//   0x289ACD jz      short def_289AB9; jumptable 0000000000289AB9 default case, cases 77-79
//   0x289ACF add     dword ptr [rbx+54h], 1
//   0x289AD3 pop     rbx; jumptable 0000000000289AB9 default case, cases 77-79
//   0x289AD4 xor     eax, eax
//   0x289AD6 pop     rbp
//   0x289AD7 pop     r12
//   0x289AD9 retn
//   0x289ADA align 20h
//   0x289AE0 call    sub_286A90
//   0x289AE5 test    al, al
//   0x289AE7 jz      short loc_289AA0
//   0x289AE9 add     dword ptr [rbx+54h], 1
//   0x289AED jmp     short loc_289AA0
//   0x289AEF align 10h
//   0x289AF0 mov     rsi, rbp; jumptable 0000000000289AB9 case 70
//   0x289AF3 mov     rdi, rbx
//   0x289AF6 call    sub_286E30
//   0x289AFB test    al, al
//   0x289AFD jz      short loc_289B03
//   0x289AFF add     dword ptr [rbx+54h], 1
//   0x289B03 mov     rsi, rbp
//   0x289B06 mov     rdi, rbx
//   0x289B09 call    sub_2868E0
//   0x289B0E pop     rbx
//   0x289B0F pop     rbp
//   0x289B10 movzx   eax, al
//   0x289B13 pop     r12
//   0x289B15 retn
//   0x289B16 align 20h
//   0x289B20 mov     rsi, rbp; jumptable 0000000000289AB9 case 71
//   0x289B23 mov     rdi, rbx
//   0x289B26 call    sub_2846A0
//   0x289B2B add     [rbx+50h], eax
//   0x289B2E jmp     short def_289AB9; jumptable 0000000000289AB9 default case, cases 77-79
//   0x289B30 mov     rsi, rbp; jumptable 0000000000289AB9 case 72
//   0x289B33 mov     rdi, rbx
//   0x289B36 call    sub_284DE0
//   0x289B3B test    al, al
//   0x289B3D jnz     short loc_289B60
//   0x289B3F mov     rsi, rbp
//   0x289B42 mov     rdi, rbx
//   0x289B45 call    sub_2862A0
//   0x289B4A test    al, al
//   0x289B4C jz      loc_289DD8
//   0x289B52 nop     word ptr [rax+rax+00000000h]
//   0x289B5D nop     dword ptr [rax]
//   0x289B60 add     dword ptr [rbx+50h], 1
//   0x289B64 jmp     loc_289AA7
//   0x289B69 align 10h
//   0x289B70 mov     rsi, rbp; jumptable 0000000000289AB9 case 73
//   0x289B73 mov     rdi, rbx
//   0x289B76 call    sub_284080
//   0x289B7B test    al, al
//   0x289B7D jz      short loc_289B83
//   0x289B7F add     dword ptr [rbx+50h], 1
//   0x289B83 mov     rsi, rbp
//   0x289B86 mov     rdi, rbx
//   0x289B89 call    sub_289660
//   0x289B8E test    al, al
//   0x289B90 jz      short loc_289B96
//   0x289B92 add     dword ptr [rbx+50h], 1
//   0x289B96 mov     rsi, rbp
//   0x289B99 mov     rdi, rbx
//   0x289B9C call    sub_2840F0
//   0x289BA1 test    al, al
//   0x289BA3 jz      short loc_289BA9
//   0x289BA5 add     dword ptr [rbx+50h], 1
//   0x289BA9 mov     rsi, rbp
//   0x289BAC mov     rdi, rbx
//   0x289BAF call    sub_281C60
//   0x289BB4 test    al, al
//   0x289BB6 jz      short loc_289BBC
//   0x289BB8 add     dword ptr [rbx+50h], 1
//   0x289BBC mov     rsi, rbp
//   0x289BBF mov     rdi, rbx
//   0x289BC2 call    sub_293860
//   0x289BC7 test    al, al
//   0x289BC9 jz      loc_289D38
//   0x289BCF add     dword ptr [rbx+54h], 1
//   0x289BD3 jmp     loc_289AA7
//   0x289BD8 align 20h
//   0x289BE0 mov     rsi, rbp; jumptable 0000000000289AB9 case 75
//   0x289BE3 mov     rdi, rbx
//   0x289BE6 call    sub_292DB0
//   0x289BEB test    al, al
//   0x289BED jz      short loc_289BF3
//   0x289BEF add     dword ptr [rbx+50h], 1
//   0x289BF3 mov     rsi, rbp
//   0x289BF6 mov     rdi, rbx
//   0x289BF9 call    sub_292B50
//   0x289BFE test    al, al
//   0x289C00 jz      short loc_289C06
//   0x289C02 add     dword ptr [rbx+50h], 1
//   0x289C06 mov     rsi, rbp
//   0x289C09 mov     rdi, rbx
//   0x289C0C call    sub_292760
//   0x289C11 test    al, al
//   0x289C13 jz      short loc_289C19
//   0x289C15 add     dword ptr [rbx+50h], 1
//   0x289C19 mov     rsi, rbp
//   0x289C1C mov     rdi, rbx
//   0x289C1F call    sub_2929B0
//   0x289C24 test    al, al
//   0x289C26 jz      short loc_289C2C
//   0x289C28 add     dword ptr [rbx+54h], 1
//   0x289C2C mov     rsi, rbp
//   0x289C2F mov     rdi, rbx
//   0x289C32 call    sub_292FD0
//   0x289C37 test    al, al
//   0x289C39 jz      short loc_289C3F
//   0x289C3B add     dword ptr [rbx+50h], 1
//   0x289C3F mov     rsi, rbp
//   0x289C42 mov     rdi, rbx
//   0x289C45 call    sub_292250
//   0x289C4A test    al, al
//   0x289C4C jz      def_289AB9; jumptable 0000000000289AB9 default case, cases 77-79
//   0x289C52 jmp     loc_289ACF
//   0x289C57 align 20h
//   0x289C60 mov     rsi, rbp; jumptable 0000000000289AB9 case 74
//   0x289C63 mov     rdi, rbx
//   0x289C66 call    sub_292DB0
//   0x289C6B test    al, al
//   0x289C6D jz      short loc_289C73
//   0x289C6F add     dword ptr [rbx+50h], 1
//   0x289C73 mov     rsi, rbp
//   0x289C76 mov     rdi, rbx
//   0x289C79 call    sub_292B50
//   0x289C7E test    al, al
//   0x289C80 jz      short loc_289C86
//   0x289C82 add     dword ptr [rbx+50h], 1
//   0x289C86 mov     rsi, rbp
//   0x289C89 mov     rdi, rbx
//   0x289C8C call    sub_292FD0
//   0x289C91 test    al, al
//   0x289C93 jz      def_289AB9; jumptable 0000000000289AB9 default case, cases 77-79
//   0x289C99 add     dword ptr [rbx+50h], 1
//   0x289C9D jmp     def_289AB9; jumptable 0000000000289AB9 default case, cases 77-79
//   0x289CA2 align 8
//   0x289CA8 mov     rsi, rbp; jumptable 0000000000289AB9 case 76
//   0x289CAB mov     rdi, rbx
//   0x289CAE call    sub_292B50
//   0x289CB3 test    al, al
//   0x289CB5 jz      short loc_289CBB
//   0x289CB7 add     dword ptr [rbx+50h], 1
//   0x289CBB mov     rsi, rbp
//   0x289CBE mov     rdi, rbx
//   0x289CC1 call    sub_293370
//   0x289CC6 test    al, al
//   0x289CC8 jz      short loc_289CCE
//   0x289CCA add     dword ptr [rbx+50h], 1
//   0x289CCE mov     rsi, rbp
//   0x289CD1 mov     rdi, rbx
//   0x289CD4 call    sub_293520
//   0x289CD9 test    al, al
//   0x289CDB jz      short loc_289CE1
//   0x289CDD add     dword ptr [rbx+50h], 1
//   0x289CE1 mov     rsi, rbp
//   0x289CE4 mov     rdi, rbx
//   0x289CE7 call    sub_293570
//   0x289CEC test    al, al
//   0x289CEE jz      short loc_289CF4
//   0x289CF0 add     dword ptr [rbx+50h], 1
//   0x289CF4 mov     rsi, rbp
//   0x289CF7 mov     rdi, rbx
//   0x289CFA call    sub_2935D0
//   0x289CFF test    al, al
//   0x289D01 jz      short loc_289D07
//   0x289D03 add     dword ptr [rbx+50h], 1
//   0x289D07 mov     rsi, rbp
//   0x289D0A mov     rdi, rbx
//   0x289D0D call    sub_293750
//   0x289D12 test    al, al
//   0x289D14 jz      short loc_289D1A
//   0x289D16 add     dword ptr [rbx+50h], 1
//   0x289D1A mov     rsi, rbp
//   0x289D1D mov     rdi, rbx
//   0x289D20 call    sub_293D40
//   0x289D25 test    al, al
//   0x289D27 jz      def_289AB9; jumptable 0000000000289AB9 default case, cases 77-79
//   0x289D2D jmp     loc_289ACF
//   0x289D32 align 8
//   0x289D38 mov     rsi, rbp
//   0x289D3B mov     rdi, rbx
//   0x289D3E call    sub_2820D0
//   0x289D43 test    al, al
//   0x289D45 jz      short loc_289D4B
//   0x289D47 add     dword ptr [rbx+50h], 1
//   0x289D4B mov     rsi, rbp
//   0x289D4E mov     rdi, rbx
//   0x289D51 call    sub_2828A0
//   0x289D56 test    al, al
//   0x289D58 jnz     loc_289B60
//   0x289D5E mov     rsi, rbp
//   0x289D61 mov     rdi, rbx
//   0x289D64 call    sub_282E90
//   0x289D69 test    al, al
//   0x289D6B jnz     loc_289B60
//   0x289D71 mov     rsi, rbp
//   0x289D74 mov     rdi, rbx
//   0x289D77 call    sub_2853C0
//   0x289D7C test    al, al
//   0x289D7E jnz     loc_289B60
//   0x289D84 mov     rsi, rbp
//   0x289D87 mov     rdi, rbx
//   0x289D8A call    sub_281DD0
//   0x289D8F test    al, al
//   0x289D91 jz      short loc_289D97
//   0x289D93 add     dword ptr [rbx+50h], 1
//   0x289D97 mov     rsi, rbp
//   0x289D9A mov     rdi, rbx
//   0x289D9D call    sub_284420
//   0x289DA2 test    al, al
//   0x289DA4 jz      short loc_289DAA
//   0x289DA6 add     dword ptr [rbx+50h], 1
//   0x289DAA mov     rsi, rbp
//   0x289DAD mov     rdi, rbx
//   0x289DB0 call    sub_282330
//   0x289DB5 test    al, al
//   0x289DB7 jz      short loc_289DBD
//   0x289DB9 add     dword ptr [rbx+50h], 1
//   0x289DBD mov     rsi, rbp
//   0x289DC0 mov     rdi, rbx
//   0x289DC3 call    sub_284500
//   0x289DC8 test    al, al
//   0x289DCA jz      def_289AB9; jumptable 0000000000289AB9 default case, cases 77-79
//   0x289DD0 jmp     loc_289C99
//   0x289DD5 align 8
//   0x289DD8 mov     rsi, rbp
//   0x289DDB mov     rdi, rbx
//   0x289DDE call    sub_285900
//   0x289DE3 test    al, al
//   0x289DE5 jnz     loc_289B60
//   0x289DEB mov     rsi, rbp
//   0x289DEE mov     rdi, rbx
//   0x289DF1 call    sub_284F20
//   0x289DF6 test    al, al
//   0x289DF8 jnz     loc_289B60
//   0x289DFE mov     rsi, rbp
//   0x289E01 mov     rdi, rbx
//   0x289E04 call    sub_285470
//   0x289E09 test    al, al
//   0x289E0B jz      short loc_289E11
//   0x289E0D add     dword ptr [rbx+50h], 1
//   0x289E11 mov     rsi, rbp
//   0x289E14 mov     rdi, rbx
//   0x289E17 call    sub_2892D0
//   0x289E1C test    al, al
//   0x289E1E jz      short loc_289E24
//   0x289E20 add     dword ptr [rbx+50h], 1
//   0x289E24 mov     rsi, rbp
//   0x289E27 mov     rdi, rbx
//   0x289E2A call    sub_287080
//   0x289E2F test    al, al
//   0x289E31 jnz     loc_289B60
//   0x289E37 mov     rsi, rbp
//   0x289E3A mov     rdi, rbx
//   0x289E3D call    sub_2878D0
//   0x289E42 test    al, al
//   0x289E44 jnz     loc_289B60
//   0x289E4A jmp     def_289AB9; jumptable 0000000000289AB9 default case, cases 77-79
// ============================================================

void sub_289A90(/* signature unknown */)
{
    // see disassembly above
}

