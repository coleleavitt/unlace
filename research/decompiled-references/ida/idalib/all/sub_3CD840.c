// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3CD840
// Name:           sub_3CD840
// Function size:  2219 bytes (492 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3CD840 push    r15; int
//   0x3CD842 mov     rax, rsi
//   0x3CD845 push    r14; int
//   0x3CD847 push    r13; int
//   0x3CD849 push    r12; int
//   0x3CD84B push    rbp; int
//   0x3CD84C push    rbx; int
//   0x3CD84D sub     rsp, 88h
//   0x3CD854 mov     rbx, [rax+8]
//   0x3CD858 mov     rbp, [rax]
//   0x3CD85B mov     r15, fs:28h
//   0x3CD864 mov     qword ptr [rsp+0B8h+var_40], r15; int
//   0x3CD869 mov     r15, rcx
//   0x3CD86C mov     qword ptr [rsp+0B8h+var_90], rbx; int
//   0x3CD871 sub     rbx, rbp
//   0x3CD874 mov     rsi, [r15+18h]
//   0x3CD878 mov     rcx, [r15+20h]
//   0x3CD87C sub     rcx, rsi
//   0x3CD87F cmp     rcx, rbx
//   0x3CD882 jb      loc_3CE0B2
//   0x3CD888 test    edx, edx
//   0x3CD88A jz      loc_3CD930
//   0x3CD890 cmp     edx, 1
//   0x3CD893 jnz     loc_3CE088
//   0x3CD899 xor     edx, edx
//   0x3CD89B mov     rsi, rbp
//   0x3CD89E mov     qword ptr [rsp+0B8h+var_B0], rdi
//   0x3CD8A3 call    sub_3BDAC0
//   0x3CD8A8 mov     r9, qword ptr [rsp+0B8h+var_B0]
//   0x3CD8AD mov     rbx, [r9+3E8h]
//   0x3CD8B4 mov     rdi, rbx
//   0x3CD8B7 cmp     rbp, [r9+400h]
//   0x3CD8BE jz      short loc_3CD8E2
//   0x3CD8C0 lea     r12, [r9+3C0h]
//   0x3CD8C7 cmp     [r9+3D0h], rdi
//   0x3CD8CE jz      short loc_3CD905
//   0x3CD8D0 mov     qword ptr [rsp+0B8h+var_B0], r9
//   0x3CD8D5 call    __ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base; std::_Rb_tree_decrement(std::_Rb_tree_node_base *)
//   0x3CD8DA mov     r9, qword ptr [rsp+0B8h+var_B0]; int
//   0x3CD8DF mov     rdi, rax
//   0x3CD8E2 mov     rax, [rdi+28h]
//   0x3CD8E6 test    rax, rax
//   0x3CD8E9 jnz     loc_3CD996
//   0x3CD8EF mov     eax, [rdi+30h]
//   0x3CD8F2 lea     r12, [r9+3C0h]
//   0x3CD8F9 and     eax, 600h
//   0x3CD8FE cmp     eax, 200h
//   0x3CD903 jz      short loc_3CD8C0
//   0x3CD905 mov     qword ptr [rsp+0B8h+var_80], 0
//   0x3CD90E cmp     rbx, r12
//   0x3CD911 jz      loc_3CDEF1
//   0x3CD917 lea     rax, [rsp+0B8h+var_58]
//   0x3CD91C mov     qword ptr [rsp+0B8h+var_78], rax
//   0x3CD921 jmp     loc_3CD9D8
//   0x3CD926 align 10h
//   0x3CD930 mov     [r15+28h], rsi
//   0x3CD934 mov     rdx, [rax]
//   0x3CD937 lea     rcx, [r15+10h]
//   0x3CD93B xor     r9d, r9d
//   0x3CD93E mov     r8d, 1
//   0x3CD944 mov     [r15+30h], rdx
//   0x3CD948 mov     qword ptr [rdi+400h], 0FFFFFFFFFFFFFFFFh
//   0x3CD953 mov     rsi, [rax]
//   0x3CD956 mov     rdx, [rax+8]
//   0x3CD95A mov     rdi, [rdi+3F8h]
//   0x3CD961 sub     rdx, rsi
//   0x3CD964 call    sub_8B94D0
//   0x3CD969 mov     rax, qword ptr [rsp+0B8h+var_40]
//   0x3CD96E sub     rax, fs:28h
//   0x3CD977 jnz     loc_3CE0DC
//   0x3CD97D add     rsp, 88h
//   0x3CD984 mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3CD98B pop     rbx
//   0x3CD98C pop     rbp
//   0x3CD98D pop     r12
//   0x3CD98F pop     r13
//   0x3CD991 pop     r14
//   0x3CD993 pop     r15
//   0x3CD995 retn
//   0x3CD996 lea     r12, [r9+3C0h]
//   0x3CD99D cmp     r12, rdi
//   0x3CD9A0 jz      loc_3CD905
//   0x3CD9A6 mov     r14, [rdi+20h]
//   0x3CD9AA add     rax, r14
//   0x3CD9AD mov     qword ptr [rsp+0B8h+var_80], rax; int
//   0x3CD9B2 mov     eax, [rdi+30h]
//   0x3CD9B5 and     eax, 600h
//   0x3CD9BA cmp     eax, 400h
//   0x3CD9BF jz      loc_3CDE05
//   0x3CD9C5 lea     rax, [rsp+0B8h+var_58]
//   0x3CD9CA mov     qword ptr [rsp+0B8h+var_78], rax; int
//   0x3CD9CF cmp     rbx, r12
//   0x3CD9D2 jz      loc_3CDD66
//   0x3CD9D8 mov     rax, [r15+18h]
//   0x3CD9DC mov     r14, qword ptr [rsp+0B8h+var_90]
//   0x3CD9E1 movq    xmm0, rbp
//   0x3CD9E6 mov     qword ptr [rsp+0B8h+var_B0], r9; int
//   0x3CD9EB mov     qword ptr [rsp+0B8h+var_60], 0; int
//   0x3CD9F4 mov     rsi, qword ptr [rsp+0B8h+var_78]; int
//   0x3CD9F9 mov     qword ptr [rsp+0B8h+var_98], rax; int
//   0x3CD9FE movq    xmm1, r14
//   0x3CDA03 lea     rax, [r9+488h]
//   0x3CDA0A punpcklqdq xmm0, xmm1
//   0x3CDA0E mov     rdi, rax; int
//   0x3CDA11 mov     qword ptr [rsp+0B8h+var_70], rax; int
//   0x3CDA16 movaps  xmmword ptr [rsp+0B8h+var_58], xmm0; int
//   0x3CDA1B call    _rangeset_t_sub
//   0x3CDA20 cmp     rbp, r14
//   0x3CDA23 mov     r9, qword ptr [rsp+0B8h+var_B0]
//   0x3CDA28 jnb     loc_3CDB71
//   0x3CDA2E lea     rax, [rsp+0B8h+var_60]
//   0x3CDA33 mov     qword ptr [rsp+0B8h+var_B0], r9
//   0x3CDA38 mov     rdx, [r15+18h]
//   0x3CDA3C mov     [rsp+0B8h+var_A8], 0
//   0x3CDA45 mov     [rsp+0B8h+var_A0], rax
//   0x3CDA4A nop     word ptr [rax+rax+00h]
//   0x3CDA50 cmp     qword ptr [rsp+0B8h+var_98], rdx
//   0x3CDA55 jz      loc_3CDC48
//   0x3CDA5B mov     r14, [rbx+20h]
//   0x3CDA5F cmp     r14, rbp
//   0x3CDA62 jnb     loc_3CDBFB
//   0x3CDA68 mov     rax, rbx
//   0x3CDA6B mov     rbx, rdx
//   0x3CDA6E jmp     short loc_3CDA7D
//   0x3CDA70 mov     r14, [rax+20h]
//   0x3CDA74 cmp     r14, rbp
//   0x3CDA77 jnb     loc_3CDBD0
//   0x3CDA7D mov     rdi, rax
//   0x3CDA80 mov     r13, rax
//   0x3CDA83 call    __ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base; std::_Rb_tree_increment(std::_Rb_tree_node_base *)
//   0x3CDA88 cmp     rax, r12
//   0x3CDA8B jnz     short loc_3CDA70
//   0x3CDA8D mov     rdx, rbx
//   0x3CDA90 mov     rax, [rsp+0B8h+var_A8]
//   0x3CDA95 cmp     rbp, rax
//   0x3CDA98 jnb     loc_3CDB88
//   0x3CDA9E cmp     rbp, r14
//   0x3CDAA1 jb      loc_3CDC20
//   0x3CDAA7 cmp     r14, rbp
//   0x3CDAAA jz      loc_3CDCF0
//   0x3CDAB0 mov     rax, qword ptr [rsp+0B8h+var_80]
//   0x3CDAB5 xor     r14d, r14d
//   0x3CDAB8 mov     edi, 38h ; '8'; unsigned __int64
//   0x3CDABD cmp     rbp, rax
//   0x3CDAC0 movzx   eax, byte ptr [rdx]
//   0x3CDAC3 setb    r14b
//   0x3CDAC7 shl     r14d, 9
//   0x3CDACB or      r14d, eax
//   0x3CDACE mov     ebx, r14d
//   0x3CDAD1 or      bh, 1
//   0x3CDAD4 mov     dword ptr [rsp+0B8h+var_88], ebx
//   0x3CDAD8 call    __Znwm; operator new(ulong)
//   0x3CDADD mov     rdx, rbp
//   0x3CDAE0 mov     rsi, r13
//   0x3CDAE3 mov     [rax+30h], ebx
//   0x3CDAE6 mov     r14, rax
//   0x3CDAE9 mov     [rax+20h], rbp
//   0x3CDAED mov     qword ptr [rax+28h], 0
//   0x3CDAF5 mov     rax, qword ptr [rsp+0B8h+var_B0]
//   0x3CDAFA lea     rdi, [rax+3B8h]
//   0x3CDB01 call    sub_3B95C0
//   0x3CDB06 mov     rbx, rax
//   0x3CDB09 test    rdx, rdx
//   0x3CDB0C jz      loc_3CDBE0
//   0x3CDB12 test    rax, rax
//   0x3CDB15 jnz     short loc_3CDB20
//   0x3CDB17 cmp     r12, rdx
//   0x3CDB1A jnz     loc_3CDD41
//   0x3CDB20 mov     edi, 1
//   0x3CDB25 mov     rcx, r12
//   0x3CDB28 mov     rsi, r14
//   0x3CDB2B mov     rbx, r14
//   0x3CDB2E call    __ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_; std::_Rb_tree_insert_and_rebalance(bool,std::_Rb_tree_node_base *,std::_Rb_tree_node_base *,std::_Rb_tree_node_base&)
//   0x3CDB33 mov     rax, qword ptr [rsp+0B8h+var_B0]
//   0x3CDB38 add     qword ptr [rax+3E0h], 1
//   0x3CDB40 mov     edx, dword ptr [rsp+0B8h+var_88]
//   0x3CDB44 xor     esi, esi
//   0x3CDB46 mov     rdi, rbp
//   0x3CDB49 call    sub_3BB8A0
//   0x3CDB4E mov     rdx, [r15+18h]
//   0x3CDB52 mov     rax, qword ptr [rsp+0B8h+var_90]
//   0x3CDB57 add     rdx, 1
//   0x3CDB5B add     rbp, 1
//   0x3CDB5F mov     [r15+18h], rdx
//   0x3CDB63 cmp     rbp, rax
//   0x3CDB66 jb      loc_3CDA50
//   0x3CDB6C mov     r9, qword ptr [rsp+0B8h+var_B0]
//   0x3CDB71 mov     qword ptr [r9+400h], 0FFFFFFFFFFFFFFFFh
//   0x3CDB7C jmp     loc_3CD969
//   0x3CDB81 align 8
//   0x3CDB88 cmp     r14, rbp
//   0x3CDB8B jz      loc_3CDCF0
//   0x3CDB91 cmp     rbp, r14
//   0x3CDB94 jnb     loc_3CDAB0
//   0x3CDB9A mov     rax, qword ptr [rsp+0B8h+var_B0]
//   0x3CDB9F cmp     [rax+3D0h], r13
//   0x3CDBA6 jz      loc_3CDAB0
//   0x3CDBAC mov     rdi, r13
//   0x3CDBAF mov     [rsp+0B8h+var_88], rdx
//   0x3CDBB4 call    __ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base; std::_Rb_tree_decrement(std::_Rb_tree_node_base *)
//   0x3CDBB9 mov     rdx, [rsp+0B8h+var_88]
//   0x3CDBBE mov     r13, rax
//   0x3CDBC1 jmp     loc_3CDAB0
//   0x3CDBC6 align 10h
//   0x3CDBD0 mov     rdx, rbx
//   0x3CDBD3 mov     r13, rax
//   0x3CDBD6 jmp     loc_3CDA90
//   0x3CDBDB align 20h
//   0x3CDBE0 test    r14, r14
//   0x3CDBE3 jz      loc_3CDB40
//   0x3CDBE9 mov     esi, 38h ; '8'; unsigned __int64
//   0x3CDBEE mov     rdi, r14; void *
//   0x3CDBF1 call    __ZdlPvm; operator delete(void *,ulong)
//   0x3CDBF6 jmp     loc_3CDB40
//   0x3CDBFB mov     rax, [rsp+0B8h+var_A8]
//   0x3CDC00 mov     r13, rbx
//   0x3CDC03 cmp     rbp, rax
//   0x3CDC06 jnb     loc_3CDCDE
//   0x3CDC0C cmp     rbp, r14
//   0x3CDC0F jnb     loc_3CDCF0
//   0x3CDC15 nop     word ptr [rax+rax+00000000h]
//   0x3CDC20 mov     rax, [rsp+0B8h+var_A8]
//   0x3CDC25 mov     rbx, r13
//   0x3CDC28 cmp     rax, r14
//   0x3CDC2B cmovbe  r14, rax
//   0x3CDC2F sub     r14, rbp
//   0x3CDC32 lea     rax, [r14-1]
//   0x3CDC36 add     rdx, rax
//   0x3CDC39 add     rbp, rax
//   0x3CDC3C jmp     loc_3CDB52
//   0x3CDC41 align 8
//   0x3CDC48 mov     r13, qword ptr [rsp+0B8h+var_90]
//   0x3CDC4D jmp     short loc_3CDC78
//   0x3CDC4F align 10h
//   0x3CDC50 mov     rdx, [r15+18h]
//   0x3CDC54 mov     rcx, [rsp+0B8h+var_A0]
//   0x3CDC59 mov     rsi, rbp
//   0x3CDC5C mov     qword ptr [rsp+0B8h+var_60], r14
//   0x3CDC61 mov     rdi, qword ptr [rsp+0B8h+var_B0]
//   0x3CDC66 call    sub_3BD100
//   0x3CDC6B mov     rdx, [r15+18h]; int
//   0x3CDC6F cmp     rdx, rax
//   0x3CDC72 jnz     loc_3CDD50
//   0x3CDC78 mov     rax, qword ptr [rsp+0B8h+var_60]
//   0x3CDC7D mov     r14, r13
//   0x3CDC80 sub     r14, rax
//   0x3CDC83 sub     r14, rbp
//   0x3CDC86 test    rax, rax
//   0x3CDC89 jz      short loc_3CDC50
//   0x3CDC8B mov     rsi, qword ptr [rsp+0B8h+var_78]; int
//   0x3CDC90 mov     rdi, qword ptr [rsp+0B8h+var_70]; int
//   0x3CDC95 mov     r13, rax
//   0x3CDC98 lea     rax, [rax+rbp]
//   0x3CDC9C mov     qword ptr [rsp+0B8h+var_58], rbp
//   0x3CDCA1 mov     [rsp+0B8h+var_A8], rax; __int64
//   0x3CDCA6 mov     qword ptr [rsp+0B8h+var_58+8], rax
//   0x3CDCAB call    _rangeset_t_add
//   0x3CDCB0 mov     rdx, [r15+18h]
//   0x3CDCB4 mov     rcx, [rsp+0B8h+var_A0]
//   0x3CDCB9 mov     qword ptr [rsp+0B8h+var_60], r14
//   0x3CDCBE mov     rsi, [rsp+0B8h+var_A8]
//   0x3CDCC3 mov     rdi, qword ptr [rsp+0B8h+var_B0]
//   0x3CDCC8 add     rdx, r13
//   0x3CDCCB call    sub_3BD100
//   0x3CDCD0 mov     rdx, [r15+18h]
//   0x3CDCD4 mov     qword ptr [rsp+0B8h+var_98], rax
//   0x3CDCD9 jmp     loc_3CDA5B
//   0x3CDCDE cmp     r14, rbp
//   0x3CDCE1 jnz     loc_3CDB9A
//   0x3CDCE7 nop     word ptr [rax+rax+00000000h]
//   0x3CDCF0 mov     esi, [r13+30h]
//   0x3CDCF4 movzx   edx, byte ptr [rdx]
//   0x3CDCF7 mov     rdi, rbp
//   0x3CDCFA mov     eax, esi
//   0x3CDCFC and     eax, 0FFFFFE00h
//   0x3CDD01 or      edx, eax
//   0x3CDD03 or      dh, 1
//   0x3CDD06 mov     [r13+30h], edx
//   0x3CDD0A call    sub_3BB8A0
//   0x3CDD0F mov     rbx, [r13+28h]
//   0x3CDD13 test    rbx, rbx
//   0x3CDD16 jz      short loc_3CDD5A
//   0x3CDD18 mov     eax, [r13+30h]
//   0x3CDD1C and     eax, 600h
//   0x3CDD21 cmp     eax, 400h
//   0x3CDD26 jz      loc_3CDEF8
//   0x3CDD2C lea     rax, [r14+rbx]
//   0x3CDD30 mov     rdx, [r15+18h]
//   0x3CDD34 mov     rbx, r13
//   0x3CDD37 mov     qword ptr [rsp+0B8h+var_80], rax
//   0x3CDD3C jmp     loc_3CDB52
//   0x3CDD41 xor     edi, edi
//   0x3CDD43 cmp     rbp, [rdx+20h]
//   0x3CDD47 setb    dil
//   0x3CDD4B jmp     loc_3CDB25
//   0x3CDD50 mov     qword ptr [rsp+0B8h+var_98], rax
//   0x3CDD55 jmp     loc_3CDA5B
//   0x3CDD5A mov     rdx, [r15+18h]
//   0x3CDD5E mov     rbx, r13
//   0x3CDD61 jmp     loc_3CDB52
//   0x3CDD66 mov     rax, qword ptr [rsp+0B8h+var_80]
//   0x3CDD6B cmp     rbp, rax
//   0x3CDD6E setb    al
//   0x3CDD71 movzx   eax, al
//   0x3CDD74 shl     eax, 9
//   0x3CDD77 mov     [rsp+0B8h+var_48], eax
//   0x3CDD7B mov     rax, [r9+3C8h]
//   0x3CDD82 mov     rbx, r12
//   0x3CDD85 mov     qword ptr [rsp+0B8h+var_58], rbp
//   0x3CDD8A mov     qword ptr [rsp+0B8h+var_58+8], 0
//   0x3CDD93 test    rax, rax
//   0x3CDD96 jnz     short loc_3CDDAB
//   0x3CDD98 jmp     short loc_3CDDDA
//   0x3CDD9A align 20h
//   0x3CDDA0 mov     rbx, rax
//   0x3CDDA3 mov     rax, rcx
//   0x3CDDA6 test    rax, rax
//   0x3CDDA9 jz      short loc_3CDDC1
//   0x3CDDAB mov     rcx, [rax+10h]
//   0x3CDDAF mov     rdx, [rax+18h]
//   0x3CDDB3 cmp     [rax+20h], rbp
//   0x3CDDB7 jnb     short loc_3CDDA0
//   0x3CDDB9 mov     rax, rdx
//   0x3CDDBC test    rax, rax
//   0x3CDDBF jnz     short loc_3CDDAB
//   0x3CDDC1 cmp     rbx, r12
//   0x3CDDC4 jz      short loc_3CDDDA
//   0x3CDDC6 lea     rax, [rsp+0B8h+var_58]
//   0x3CDDCB mov     qword ptr [rsp+0B8h+var_78], rax
//   0x3CDDD0 cmp     rbp, [rbx+20h]
//   0x3CDDD4 jnb     loc_3CD9D8
//   0x3CDDDA lea     rdx, [rsp+0B8h+var_58]
//   0x3CDDDF lea     rdi, [r9+3B8h]
//   0x3CDDE6 mov     rsi, rbx
//   0x3CDDE9 mov     qword ptr [rsp+0B8h+var_B0], r9
//   0x3CDDEE mov     qword ptr [rsp+0B8h+var_78], rdx
//   0x3CDDF3 call    sub_3CD760
//   0x3CDDF8 mov     r9, qword ptr [rsp+0B8h+var_B0]
//   0x3CDDFD mov     rbx, rax
//   0x3CDE00 jmp     loc_3CD9D8
//   0x3CDE05 mov     r13, [r9+2E8h]
//   0x3CDE0C lea     rcx, [r9+2E0h]
//   0x3CDE13 test    r13, r13
//   0x3CDE16 jnz     short loc_3CDE43
//   0x3CDE18 jmp     loc_3CE006
//   0x3CDE1D align 40h
//   0x3CDE40 mov     r13, rax
//   0x3CDE43 mov     rdx, [r13+20h]
//   0x3CDE47 mov     rdi, [r13+10h]
//   0x3CDE4B xor     esi, esi
//   0x3CDE4D mov     rax, [r13+18h]
//   0x3CDE51 cmp     r14, rdx
//   0x3CDE54 jnb     short loc_3CDE5E
//   0x3CDE56 mov     rax, rdi
//   0x3CDE59 mov     esi, 1
//   0x3CDE5E test    rax, rax
//   0x3CDE61 jnz     short loc_3CDE40
//   0x3CDE63 test    sil, sil
//   0x3CDE66 jnz     short loc_3CDEC3
//   0x3CDE68 cmp     rdx, r14
//   0x3CDE6B jnb     loc_3CD9C5
//   0x3CDE71 mov     r8d, 1
//   0x3CDE77 cmp     r13, rcx
//   0x3CDE7A jnz     loc_3CDFF6
//   0x3CDE80 mov     edi, 28h ; '('; unsigned __int64
//   0x3CDE85 mov     [rsp+0B8h+var_A0], r9
//   0x3CDE8A mov     dword ptr [rsp+0B8h+var_A8], r8d
//   0x3CDE8F mov     qword ptr [rsp+0B8h+var_B0], rcx
//   0x3CDE94 call    __Znwm; operator new(ulong)
//   0x3CDE99 mov     rcx, qword ptr [rsp+0B8h+var_B0]
//   0x3CDE9E mov     edi, dword ptr [rsp+0B8h+var_A8]
//   0x3CDEA2 mov     rdx, r13
//   0x3CDEA5 mov     [rax+20h], r14
//   0x3CDEA9 mov     rsi, rax
//   0x3CDEAC call    __ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_; std::_Rb_tree_insert_and_rebalance(bool,std::_Rb_tree_node_base *,std::_Rb_tree_node_base *,std::_Rb_tree_node_base&)
//   0x3CDEB1 mov     r9, [rsp+0B8h+var_A0]
//   0x3CDEB6 add     qword ptr [r9+300h], 1
//   0x3CDEBE jmp     loc_3CD9C5
//   0x3CDEC3 cmp     r13, [r9+2F0h]
//   0x3CDECA jz      short loc_3CDE71
//   0x3CDECC mov     rdi, r13
//   0x3CDECF mov     [rsp+0B8h+var_A8], r9
//   0x3CDED4 mov     qword ptr [rsp+0B8h+var_B0], rcx
//   0x3CDED9 call    __ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base; std::_Rb_tree_decrement(std::_Rb_tree_node_base *)
//   0x3CDEDE mov     r9, [rsp+0B8h+var_A8]
//   0x3CDEE3 mov     rcx, qword ptr [rsp+0B8h+var_B0]
//   0x3CDEE8 mov     rdx, [rax+20h]
//   0x3CDEEC jmp     loc_3CDE68
//   0x3CDEF1 xor     eax, eax
//   0x3CDEF3 jmp     loc_3CDD77
//   0x3CDEF8 mov     rax, qword ptr [rsp+0B8h+var_B0]
//   0x3CDEFD mov     rdx, [rax+2E8h]
//   0x3CDF04 lea     rcx, [rax+2E0h]
//   0x3CDF0B test    rdx, rdx
//   0x3CDF0E jnz     short loc_3CDF43
//   0x3CDF10 jmp     loc_3CE051
//   0x3CDF15 align 40h
//   0x3CDF40 mov     rdx, rax
//   0x3CDF43 mov     rdi, [rdx+20h]
//   0x3CDF47 mov     rsi, [rdx+10h]
//   0x3CDF4B xor     r8d, r8d
//   0x3CDF4E mov     rax, [rdx+18h]
//   0x3CDF52 cmp     r14, rdi
//   0x3CDF55 jnb     short loc_3CDF60
//   0x3CDF57 mov     rax, rsi
//   0x3CDF5A mov     r8d, 1
//   0x3CDF60 test    rax, rax
//   0x3CDF63 jnz     short loc_3CDF40
//   0x3CDF65 test    r8b, r8b
//   0x3CDF68 jnz     short loc_3CDFC3
//   0x3CDF6A cmp     rdi, r14
//   0x3CDF6D jnb     loc_3CDD2C
//   0x3CDF73 mov     ebx, 1
//   0x3CDF78 cmp     rdx, rcx
//   0x3CDF7B jnz     loc_3CE043
//   0x3CDF81 mov     edi, 28h ; '('; unsigned __int64
//   0x3CDF86 mov     qword ptr [rsp+0B8h+var_80], rcx
//   0x3CDF8B mov     [rsp+0B8h+var_88], rdx
//   0x3CDF90 call    __Znwm; operator new(ulong)
//   0x3CDF95 mov     rcx, qword ptr [rsp+0B8h+var_80]
//   0x3CDF9A mov     rdx, [rsp+0B8h+var_88]
//   0x3CDF9F mov     edi, ebx
//   0x3CDFA1 mov     [rax+20h], r14
//   0x3CDFA5 mov     rsi, rax
//   0x3CDFA8 call    __ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_; std::_Rb_tree_insert_and_rebalance(bool,std::_Rb_tree_node_base *,std::_Rb_tree_node_base *,std::_Rb_tree_node_base&)
//   0x3CDFAD mov     rax, qword ptr [rsp+0B8h+var_B0]
//   0x3CDFB2 add     qword ptr [rax+300h], 1
//   0x3CDFBA mov     rbx, [r13+28h]
//   0x3CDFBE jmp     loc_3CDD2C
//   0x3CDFC3 mov     rax, qword ptr [rsp+0B8h+var_B0]
//   0x3CDFC8 cmp     rdx, [rax+2F0h]
//   0x3CDFCF jz      short loc_3CDF73
//   0x3CDFD1 mov     rdi, rdx
//   0x3CDFD4 mov     qword ptr [rsp+0B8h+var_80], rcx
//   0x3CDFD9 mov     [rsp+0B8h+var_88], rdx
//   0x3CDFDE call    __ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base; std::_Rb_tree_decrement(std::_Rb_tree_node_base *)
//   0x3CDFE3 mov     rcx, qword ptr [rsp+0B8h+var_80]
//   0x3CDFE8 mov     rdx, [rsp+0B8h+var_88]
//   0x3CDFED mov     rdi, [rax+20h]
//   0x3CDFF1 jmp     loc_3CDF6A
//   0x3CDFF6 xor     r8d, r8d
//   0x3CDFF9 cmp     r14, [r13+20h]
//   0x3CDFFD setb    r8b
//   0x3CE001 jmp     loc_3CDE80
//   0x3CE006 cmp     rcx, [r9+2F0h]
//   0x3CE00D jz      short loc_3CE035
//   0x3CE00F mov     rdi, rcx
//   0x3CE012 mov     [rsp+0B8h+var_A8], r9
//   0x3CE017 mov     qword ptr [rsp+0B8h+var_B0], rcx
//   0x3CE01C call    __ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base; std::_Rb_tree_decrement(std::_Rb_tree_node_base *)
//   0x3CE021 mov     rcx, qword ptr [rsp+0B8h+var_B0]
//   0x3CE026 mov     r9, [rsp+0B8h+var_A8]
//   0x3CE02B cmp     [rax+20h], r14
//   0x3CE02F jnb     loc_3CD9C5
//   0x3CE035 mov     r13, rcx
//   0x3CE038 mov     r8d, 1
//   0x3CE03E jmp     loc_3CDE80
//   0x3CE043 xor     ebx, ebx
//   0x3CE045 cmp     r14, [rdx+20h]
//   0x3CE049 setb    bl
//   0x3CE04C jmp     loc_3CDF81
//   0x3CE051 mov     rax, qword ptr [rsp+0B8h+var_B0]
//   0x3CE056 cmp     [rax+2F0h], rcx
//   0x3CE05D jz      short loc_3CE07B
//   0x3CE05F mov     rdi, rcx
//   0x3CE062 mov     [rsp+0B8h+var_88], rcx
//   0x3CE067 call    __ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base; std::_Rb_tree_decrement(std::_Rb_tree_node_base *)
//   0x3CE06C mov     rcx, [rsp+0B8h+var_88]
//   0x3CE071 cmp     [rax+20h], r14
//   0x3CE075 jnb     loc_3CDD2C
//   0x3CE07B mov     rdx, rcx
//   0x3CE07E mov     ebx, 1
//   0x3CE083 jmp     loc_3CDF81
//   0x3CE088 mov     rax, cs:under_debugger_ptr
//   0x3CE08F cmp     byte ptr [rax], 0
//   0x3CE092 jnz     loc_2B42CC
//   0x3CE098 mov     rax, qword ptr [rsp+0B8h+var_40]
//   0x3CE09D sub     rax, fs:28h
//   0x3CE0A6 jnz     short loc_3CE0E6
//   0x3CE0A8 mov     edi, 36h ; '6'
//   0x3CE0AD call    _interr
//   0x3CE0B2 mov     rax, cs:under_debugger_ptr
//   0x3CE0B9 cmp     byte ptr [rax], 0
//   0x3CE0BC jnz     loc_2B42CC
//   0x3CE0C2 mov     rax, qword ptr [rsp+0B8h+var_40]
//   0x3CE0C7 sub     rax, fs:28h
//   0x3CE0D0 jnz     short loc_3CE0E1
//   0x3CE0D2 mov     edi, 35h ; '5'
//   0x3CE0D7 call    _interr
//   0x3CE0DC call    ___stack_chk_fail
//   0x3CE0E1 call    ___stack_chk_fail
//   0x3CE0E6 call    ___stack_chk_fail
// ============================================================

void sub_3CD840(/* signature unknown */)
{
    // see disassembly above
}

