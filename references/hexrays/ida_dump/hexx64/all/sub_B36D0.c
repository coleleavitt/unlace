// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xB36D0
// Name:           sub_B36D0
// Function size:  6837 bytes (1539 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xB36D0 push    rbp
//   0xB36D1 mov     rbp, rsp
//   0xB36D4 push    r15
//   0xB36D6 push    r14
//   0xB36D8 push    r13
//   0xB36DA push    r12
//   0xB36DC push    rbx
//   0xB36DD sub     rsp, 138h
//   0xB36E4 mov     rax, fs:28h
//   0xB36ED mov     [rbp+var_38], rax
//   0xB36F1 xor     eax, eax
//   0xB36F3 test    rsi, rsi
//   0xB36F6 jz      short loc_B3704
//   0xB36F8 mov     r15, rsi
//   0xB36FB test    dword ptr [rsi+4], 40010h
//   0xB3702 jz      short loc_B3738
//   0xB3704 mov     byte ptr [rbp+var_138], 0
//   0xB370B mov     rax, [rbp+var_38]
//   0xB370F sub     rax, fs:28h
//   0xB3718 jnz     loc_B4CA0
//   0xB371E movzx   eax, byte ptr [rbp+var_138]
//   0xB3725 lea     rsp, [rbp-28h]
//   0xB3729 pop     rbx
//   0xB372A pop     r12
//   0xB372C pop     r13
//   0xB372E pop     r14
//   0xB3730 pop     r15
//   0xB3732 pop     rbp
//   0xB3733 retn
//   0xB3734 align 8
//   0xB3738 test    byte ptr [rsi+41h], 2
//   0xB373C jnz     short loc_B3704
//   0xB373E mov     rbx, rdi
//   0xB3741 mov     rdi, [rdi+40h]
//   0xB3745 call    sub_A2650
//   0xB374A mov     byte ptr [rbp+var_138], al
//   0xB3750 test    al, al
//   0xB3752 jnz     short loc_B3704
//   0xB3754 mov     rdi, [rbx+1E0h]
//   0xB375B mov     rcx, r15
//   0xB375E mov     rdx, rbx
//   0xB3761 mov     esi, 0Ch
//   0xB3766 call    sub_33E140
//   0xB376B test    eax, eax
//   0xB376D jnz     loc_B3B70
//   0xB3773 mov     rax, [rbx+1E0h]
//   0xB377A pxor    xmm0, xmm0
//   0xB377E cmp     dword ptr [r15], 3Ch; switch 61 cases
//   0xB3782 mov     [rbp+var_120], 0
//   0xB378D mov     [rbp+var_118], 0
//   0xB3798 mov     [rbp+var_110], 0
//   0xB37A3 mov     r13, [rax+70h]
//   0xB37A7 mov     [rbp+var_F0], 0
//   0xB37B2 mov     [rbp+var_E8], 0
//   0xB37BD mov     [rbp+var_E0], 0
//   0xB37C8 movups  [rbp+var_108], xmm0
//   0xB37CF movups  [rbp+var_D8], xmm0
//   0xB37D6 ja      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB37DC mov     eax, [r15]
//   0xB37DF lea     rdx, jpt_B37ED
//   0xB37E6 movsxd  rax, ds:(jpt_B37ED - 424EBCh)[rdx+rax*4]
//   0xB37EA add     rax, rdx
//   0xB37ED jmp     rax; switch jump
//   0xB37EF lea     r14, [rbp+var_60]; jumptable 00000000000B37ED case 60
//   0xB37F3 xor     ecx, ecx
//   0xB37F5 mov     rdx, r15
//   0xB37F8 mov     rsi, rbx
//   0xB37FB mov     rdi, r14
//   0xB37FE call    sub_124680
//   0xB3803 lea     rdi, [rbp+var_120]
//   0xB380A mov     rsi, r14
//   0xB380D call    sub_648D0
//   0xB3812 mov     rdi, [rbp+var_110]
//   0xB3819 pxor    xmm0, xmm0
//   0xB381D mov     r12, [rbp+var_50]
//   0xB3821 mov     [rbp+var_50], 0
//   0xB3829 movdqu  xmm1, [rbp+var_48]
//   0xB382E movups  [rbp+var_48], xmm0
//   0xB3832 test    rdi, rdi
//   0xB3835 jz      loc_B4401
//   0xB383B movaps  [rbp+var_150], xmm1
//   0xB3842 mov     qword ptr [rbp+var_108], 0
//   0xB384D call    _qfree
//   0xB3852 mov     rdi, [rbp+var_50]
//   0xB3856 movdqa  xmm1, [rbp+var_150]
//   0xB385E mov     [rbp+var_110], r12
//   0xB3865 movups  [rbp+var_108], xmm1
//   0xB386C test    rdi, rdi
//   0xB386F jz      short loc_B387E
//   0xB3871 mov     qword ptr [rbp+var_48], 0
//   0xB3879 call    _qfree
//   0xB387E mov     rdi, [rbp+var_60]
//   0xB3882 call    _qfree
//   0xB3887 xor     ecx, ecx
//   0xB3889 mov     rdx, r15
//   0xB388C mov     rsi, rbx
//   0xB388F mov     rdi, r14
//   0xB3892 call    sub_127A20
//   0xB3897 lea     rdi, [rbp+var_F0]
//   0xB389E mov     rsi, r14
//   0xB38A1 call    sub_648D0
//   0xB38A6 mov     rdi, [rbp+var_E0]
//   0xB38AD pxor    xmm0, xmm0
//   0xB38B1 mov     r12, [rbp+var_50]
//   0xB38B5 mov     [rbp+var_50], 0
//   0xB38BD movdqu  xmm1, [rbp+var_48]
//   0xB38C2 movups  [rbp+var_48], xmm0
//   0xB38C6 test    rdi, rdi
//   0xB38C9 jz      loc_B4414
//   0xB38CF movaps  [rbp+var_150], xmm1
//   0xB38D6 mov     qword ptr [rbp+var_D8], 0
//   0xB38E1 call    _qfree
//   0xB38E6 mov     rdi, [rbp+var_50]
//   0xB38EA movdqa  xmm1, [rbp+var_150]
//   0xB38F2 mov     [rbp+var_E0], r12
//   0xB38F9 movups  [rbp+var_D8], xmm1
//   0xB3900 test    rdi, rdi
//   0xB3903 jz      short loc_B3912
//   0xB3905 mov     qword ptr [rbp+var_48], 0
//   0xB390D call    _qfree
//   0xB3912 mov     rdi, [rbp+var_60]
//   0xB3916 call    _qfree
//   0xB391B mov     r12, [r15+10h]
//   0xB391F test    r12, r12
//   0xB3922 jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3928 lea     rax, [rbp+var_90]
//   0xB392F mov     qword ptr [rbp+var_150], rax
//   0xB3936 nop     word ptr [rax+rax+00000000h]
//   0xB3940 mov     eax, [r12]
//   0xB3944 lea     edx, [rax-38h]
//   0xB3947 cmp     edx, 1
//   0xB394A jbe     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3950 cmp     eax, 3Bh ; ';'
//   0xB3953 jnz     loc_B3AA3
//   0xB3959 mov     eax, [r15+44h]
//   0xB395D cmp     [r12+24h], eax
//   0xB3962 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3968 mov     rsi, [r12+18h]
//   0xB396D mov     rdi, [rbx+40h]
//   0xB3971 call    sub_1CFBB0
//   0xB3976 mov     rsi, [r15+18h]
//   0xB397A mov     rdi, [rbx+40h]
//   0xB397E mov     [rbp+var_140], rax
//   0xB3985 call    sub_1CFBB0
//   0xB398A mov     rcx, rax
//   0xB398D movsxd  rdx, dword ptr [r15+44h]
//   0xB3991 mov     rax, [rbp+var_140]
//   0xB3998 mov     [rbp+var_140], rcx
//   0xB399F sub     rax, rdx
//   0xB39A2 cmp     rax, rcx
//   0xB39A5 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB39AB mov     edx, [r13+54h]
//   0xB39AF mov     esi, [r13+3Ch]
//   0xB39B3 mov     [rbp+var_90], 0
//   0xB39BE mov     rdi, qword ptr [rbp+var_150]
//   0xB39C5 mov     [rbp+var_88], 0
//   0xB39D0 call    sub_63E80
//   0xB39D5 mov     rax, [rbx+40h]
//   0xB39D9 pxor    xmm0, xmm0
//   0xB39DD mov     [rbp+var_80], 0
//   0xB39E5 movups  [rbp+var_78], xmm0
//   0xB39E9 mov     rcx, [rbp+var_140]
//   0xB39F0 movsxd  rdx, dword ptr [r13+50h]
//   0xB39F4 add     rcx, [rax+5A0h]
//   0xB39FB mov     rdi, qword ptr [rbp+var_150]
//   0xB3A02 mov     rsi, rcx
//   0xB3A05 call    sub_122B20
//   0xB3A0A mov     rdx, [r12+8]
//   0xB3A0F xor     r8d, r8d
//   0xB3A12 mov     rcx, r15
//   0xB3A15 mov     rdi, rbx
//   0xB3A18 mov     rsi, qword ptr [rbp+var_150]
//   0xB3A1F call    sub_A9D90
//   0xB3A24 test    rax, rax
//   0xB3A27 jnz     loc_B4C10
//   0xB3A2D mov     ecx, 1
//   0xB3A32 mov     rdx, r12
//   0xB3A35 mov     rsi, rbx
//   0xB3A38 mov     rdi, r14
//   0xB3A3B call    sub_124680
//   0xB3A40 mov     rdx, [r12+8]
//   0xB3A45 mov     rcx, r15
//   0xB3A48 mov     rsi, r14
//   0xB3A4B mov     rdi, rbx
//   0xB3A4E mov     r8d, 1
//   0xB3A54 call    sub_A9AA0
//   0xB3A59 test    rax, rax
//   0xB3A5C jz      loc_B4B6A
//   0xB3A62 mov     rdi, [rbp+var_50]
//   0xB3A66 test    rdi, rdi
//   0xB3A69 jz      short loc_B3A78
//   0xB3A6B mov     qword ptr [rbp+var_48], 0
//   0xB3A73 call    _qfree
//   0xB3A78 mov     rdi, [rbp+var_60]
//   0xB3A7C call    _qfree
//   0xB3A81 mov     rdi, [rbp+var_80]
//   0xB3A85 test    rdi, rdi
//   0xB3A88 jz      short loc_B3A97
//   0xB3A8A mov     qword ptr [rbp+var_78], 0
//   0xB3A92 call    _qfree
//   0xB3A97 mov     rdi, [rbp+var_90]
//   0xB3A9E call    _qfree
//   0xB3AA3 xor     ecx, ecx
//   0xB3AA5 mov     rdx, r12
//   0xB3AA8 mov     rsi, rbx
//   0xB3AAB mov     rdi, r14
//   0xB3AAE call    sub_127A20
//   0xB3AB3 lea     rsi, [rbp+var_120]
//   0xB3ABA mov     rdi, r14
//   0xB3ABD call    sub_64780
//   0xB3AC2 test    al, al
//   0xB3AC4 jz      loc_B4390
//   0xB3ACA mov     rdi, [rbp+var_50]
//   0xB3ACE test    rdi, rdi
//   0xB3AD1 jz      short loc_B3AE0
//   0xB3AD3 mov     qword ptr [rbp+var_48], 0
//   0xB3ADB call    _qfree
//   0xB3AE0 mov     rdi, [rbp+var_60]
//   0xB3AE4 call    _qfree
//   0xB3AE9 nop     dword ptr [rax+00000000h]
//   0xB3AF0 mov     rsi, r15; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3AF3 mov     rdi, rbx
//   0xB3AF6 call    sub_AC200
//   0xB3AFB test    al, al
//   0xB3AFD jnz     loc_B4380
//   0xB3B03 mov     rsi, r15
//   0xB3B06 mov     rdi, rbx
//   0xB3B09 call    sub_18AA30
//   0xB3B0E test    al, al
//   0xB3B10 jnz     loc_B43E0
//   0xB3B16 mov     rdi, [rbp+var_E0]
//   0xB3B1D test    rdi, rdi
//   0xB3B20 jz      short loc_B3B32
//   0xB3B22 mov     qword ptr [rbp+var_D8], 0
//   0xB3B2D call    _qfree
//   0xB3B32 mov     rdi, [rbp+var_F0]
//   0xB3B39 call    _qfree
//   0xB3B3E mov     rdi, [rbp+var_110]
//   0xB3B45 test    rdi, rdi
//   0xB3B48 jz      short loc_B3B5A
//   0xB3B4A mov     qword ptr [rbp+var_108], 0
//   0xB3B55 call    _qfree
//   0xB3B5A mov     rdi, [rbp+var_120]
//   0xB3B61 call    _qfree
//   0xB3B66 jmp     loc_B370B
//   0xB3B6B align 10h
//   0xB3B70 cmp     eax, 0FFFFFFFFh
//   0xB3B73 setnz   byte ptr [rbp+var_138]
//   0xB3B7A jmp     loc_B370B
//   0xB3B7F align 20h
//   0xB3B80 mov     rsi, r15; jumptable 00000000000B37ED cases 29,30,34,35,39,40,45,46,50,51
//   0xB3B83 mov     rdi, rbx
//   0xB3B86 call    sub_98280
//   0xB3B8B test    al, al
//   0xB3B8D jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3B93 mov     r14d, 2Fh ; '/'
//   0xB3B99 nop     dword ptr [rax+00000000h]
//   0xB3BA0 mov     rdi, r15
//   0xB3BA3 call    sub_1B5B40
//   0xB3BA8 mov     rcx, rax
//   0xB3BAB mov     edx, r14d
//   0xB3BAE lea     rsi, aCmbDS; "cmb%d: %s"
//   0xB3BB5 mov     rdi, rbx
//   0xB3BB8 xor     eax, eax
//   0xB3BBA call    sub_A2520
//   0xB3BBF mov     byte ptr [rbp+var_138], 1
//   0xB3BC6 jmp     loc_B3B16
//   0xB3BCB align 10h
//   0xB3BD0 mov     rsi, r15; jumptable 00000000000B37ED case 19
//   0xB3BD3 mov     rdi, rbx
//   0xB3BD6 call    sub_9B500
//   0xB3BDB test    al, al
//   0xB3BDD jnz     loc_B43F6
//   0xB3BE3 mov     rsi, r15
//   0xB3BE6 mov     rdi, rbx
//   0xB3BE9 call    sub_968F0
//   0xB3BEE test    al, al
//   0xB3BF0 jnz     loc_B4427
//   0xB3BF6 mov     rsi, r15
//   0xB3BF9 mov     rdi, rbx
//   0xB3BFC call    sub_98540
//   0xB3C01 test    al, al
//   0xB3C03 jnz     loc_B4896
//   0xB3C09 mov     rsi, r15
//   0xB3C0C mov     rdi, rbx
//   0xB3C0F call    sub_97770
//   0xB3C14 test    al, al
//   0xB3C16 jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3C1C mov     r14d, 39h ; '9'
//   0xB3C22 jmp     loc_B3BA0
//   0xB3C27 pxor    xmm0, xmm0; jumptable 00000000000B37ED case 4
//   0xB3C2B lea     rdx, [r15+40h]
//   0xB3C2F mov     ecx, 1
//   0xB3C34 mov     rdi, rbx
//   0xB3C37 lea     r14, [rbp+var_C0]
//   0xB3C3E movups  [rbp+var_78], xmm0
//   0xB3C42 lea     r12, [rbp+var_90]
//   0xB3C49 mov     rsi, r14
//   0xB3C4C mov     [rbp+var_C0], 0
//   0xB3C57 mov     [rbp+var_B8], 0
//   0xB3C62 mov     [rbp+var_B0], 0
//   0xB3C6D mov     [rbp+var_90], 0
//   0xB3C78 mov     [rbp+var_88], 0
//   0xB3C83 mov     [rbp+var_80], 0
//   0xB3C8B mov     [rbp+var_140], rdx
//   0xB3C92 mov     qword ptr [rbp+var_150], r14
//   0xB3C99 movups  [rbp+var_A8], xmm0
//   0xB3CA0 call    sub_127FE0
//   0xB3CA5 sub     rsp, 8
//   0xB3CA9 mov     rdx, [r15+10h]
//   0xB3CAD mov     r9d, 80h
//   0xB3CB3 xor     ecx, ecx
//   0xB3CB5 push    101h
//   0xB3CBA mov     r8, r12
//   0xB3CBD mov     rsi, r14
//   0xB3CC0 mov     rdi, rbx
//   0xB3CC3 call    sub_129150
//   0xB3CC8 mov     r11, rax
//   0xB3CCB pop     r14
//   0xB3CCD pop     rax
//   0xB3CCE test    r11, r11
//   0xB3CD1 jz      short loc_B3D15
//   0xB3CD3 movzx   eax, byte ptr [r15+40h]
//   0xB3CD8 cmp     [r11+40h], al
//   0xB3CDC jz      loc_B4870
//   0xB3CE2 cmp     dword ptr [r15+44h], 4
//   0xB3CE7 jg      short loc_B3D15
//   0xB3CE9 mov     eax, [r11]
//   0xB3CEC sub     eax, 8
//   0xB3CEF cmp     eax, 1
//   0xB3CF2 jbe     loc_B4A4E
//   0xB3CF8 mov     rcx, qword ptr [rbp+var_150]
//   0xB3CFF mov     rdx, r15
//   0xB3D02 mov     rsi, r11
//   0xB3D05 mov     rdi, rbx
//   0xB3D08 call    sub_AE450
//   0xB3D0D test    al, al
//   0xB3D0F jnz     loc_B4C35
//   0xB3D15 mov     rdi, [rbp+var_80]
//   0xB3D19 test    rdi, rdi
//   0xB3D1C jz      short loc_B3D2B
//   0xB3D1E mov     qword ptr [rbp+var_78], 0
//   0xB3D26 call    _qfree
//   0xB3D2B mov     rdi, [rbp+var_90]
//   0xB3D32 call    _qfree
//   0xB3D37 mov     rdi, [rbp+var_B0]
//   0xB3D3E test    rdi, rdi
//   0xB3D41 jz      short loc_B3D53
//   0xB3D43 mov     qword ptr [rbp+var_A8], 0
//   0xB3D4E call    _qfree
//   0xB3D53 mov     rdi, [rbp+var_C0]
//   0xB3D5A call    _qfree
//   0xB3D5F mov     rsi, r15
//   0xB3D62 mov     rdi, rbx
//   0xB3D65 call    sub_186F90
//   0xB3D6A test    al, al
//   0xB3D6C jnz     loc_B3E63
//   0xB3D72 cmp     dword ptr [r15+44h], 2; jumptable 00000000000B37ED case 9
//   0xB3D77 jg      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3D7D lea     r14, [rbp+var_60]
//   0xB3D81 lea     rdi, [r15+20h]
//   0xB3D85 xor     edx, edx
//   0xB3D87 mov     rsi, r14
//   0xB3D8A call    sub_11FD80
//   0xB3D8F test    al, al
//   0xB3D91 jz      short loc_B3D9E
//   0xB3D93 cmp     [rbp+var_60], 0
//   0xB3D98 jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3D9E lea     rax, [r15+40h]
//   0xB3DA2 lea     r12, [rbp+var_90]
//   0xB3DA9 mov     rsi, rax
//   0xB3DAC mov     rdi, r12
//   0xB3DAF mov     qword ptr [rbp+var_150], rax
//   0xB3DB6 call    sub_123A40
//   0xB3DBB sub     rsp, 8
//   0xB3DBF xor     r9d, r9d
//   0xB3DC2 mov     rcx, r12
//   0xB3DC5 mov     rdx, r15
//   0xB3DC8 push    0
//   0xB3DCA mov     eax, dword ptr [rbp+var_90+4]
//   0xB3DD0 mov     rsi, rbx
//   0xB3DD3 mov     rdi, r13
//   0xB3DD6 lea     r8d, [rax+rax]
//   0xB3DDA call    sub_131730
//   0xB3DDF pop     rsi
//   0xB3DE0 pop     rdi
//   0xB3DE1 test    al, al
//   0xB3DE3 jz      loc_B4C5F
//   0xB3DE9 lea     rsi, [rbp+var_F0]
//   0xB3DF0 mov     ecx, 1
//   0xB3DF5 mov     rdx, r12
//   0xB3DF8 mov     rdi, rbx
//   0xB3DFB call    sub_127FE0
//   0xB3E00 sub     rsp, 8
//   0xB3E04 mov     rdx, [r15+10h]
//   0xB3E08 xor     r9d, r9d
//   0xB3E0B xor     r8d, r8d
//   0xB3E0E push    101h
//   0xB3E13 lea     rsi, [rbp+var_F0]
//   0xB3E1A xor     ecx, ecx
//   0xB3E1C mov     rdi, rbx
//   0xB3E1F call    sub_129150
//   0xB3E24 mov     [rbp+var_140], rax
//   0xB3E2B pop     rdx
//   0xB3E2C pop     rcx
//   0xB3E2D test    rax, rax
//   0xB3E30 jz      short loc_B3E3B
//   0xB3E32 cmp     dword ptr [rax], 4
//   0xB3E35 jz      loc_B4DCB
//   0xB3E3B mov     rdi, r12
//   0xB3E3E call    sub_11CDA0
//   0xB3E43 jmp     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3E48 align 10h
//   0xB3E50 mov     rsi, r15; jumptable 00000000000B37ED case 2
//   0xB3E53 mov     rdi, rbx
//   0xB3E56 call    sub_186F90
//   0xB3E5B test    al, al
//   0xB3E5D jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3E63 mov     r14d, 21h ; '!'
//   0xB3E69 jmp     loc_B3BA0
//   0xB3E6E mov     rsi, r15; jumptable 00000000000B37ED case 14
//   0xB3E71 mov     rdi, rbx
//   0xB3E74 call    sub_97480
//   0xB3E79 test    al, al
//   0xB3E7B jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3E81 mov     r14d, 2Ah ; '*'
//   0xB3E87 jmp     loc_B3BA0
//   0xB3E8C mov     rsi, r15; jumptable 00000000000B37ED case 13
//   0xB3E8F mov     rdi, rbx
//   0xB3E92 call    sub_9C9E0
//   0xB3E97 test    al, al
//   0xB3E99 jnz     loc_B43EB
//   0xB3E9F mov     rsi, r15
//   0xB3EA2 mov     rdi, rbx
//   0xB3EA5 call    sub_99C40
//   0xB3EAA test    al, al
//   0xB3EAC jnz     loc_B406E
//   0xB3EB2 mov     rsi, r15
//   0xB3EB5 mov     rdi, rbx
//   0xB3EB8 call    sub_9ED70
//   0xB3EBD test    al, al
//   0xB3EBF jnz     loc_B4B49
//   0xB3EC5 mov     rsi, r15
//   0xB3EC8 mov     rdi, rbx
//   0xB3ECB call    sub_97260
//   0xB3ED0 test    al, al
//   0xB3ED2 jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3ED8 mov     r14d, 38h ; '8'
//   0xB3EDE jmp     loc_B3BA0
//   0xB3EE3 align 8
//   0xB3EE8 cmp     byte ptr [r15+20h], 1; jumptable 00000000000B37ED case 12
//   0xB3EED jz      loc_B44D6
//   0xB3EF3 mov     rsi, r15
//   0xB3EF6 mov     rdi, rbx
//   0xB3EF9 call    sub_9C9E0
//   0xB3EFE test    al, al
//   0xB3F00 jnz     loc_B43EB
//   0xB3F06 mov     rsi, r15
//   0xB3F09 mov     rdi, rbx
//   0xB3F0C call    sub_9DED0
//   0xB3F11 test    al, al
//   0xB3F13 jnz     loc_B48A1
//   0xB3F19 mov     rsi, r15
//   0xB3F1C mov     rdi, rbx
//   0xB3F1F call    sub_99410
//   0xB3F24 test    al, al
//   0xB3F26 jnz     loc_B4B3E
//   0xB3F2C mov     rsi, r15
//   0xB3F2F mov     rdi, rbx
//   0xB3F32 call    sub_9F370
//   0xB3F37 test    al, al
//   0xB3F39 jnz     loc_B4B5F
//   0xB3F3F mov     rsi, r15
//   0xB3F42 mov     rdi, rbx
//   0xB3F45 call    sub_9CB20
//   0xB3F4A test    al, al
//   0xB3F4C jnz     loc_B4C54
//   0xB3F52 mov     rsi, r15
//   0xB3F55 mov     rdi, rbx
//   0xB3F58 call    sub_96180
//   0xB3F5D test    al, al
//   0xB3F5F jnz     loc_B4C95
//   0xB3F65 mov     rsi, r15
//   0xB3F68 mov     rdi, rbx
//   0xB3F6B call    sub_96550
//   0xB3F70 test    al, al
//   0xB3F72 jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3F78 mov     r14d, 2Dh ; '-'
//   0xB3F7E jmp     loc_B3BA0
//   0xB3F83 align 8
//   0xB3F88 mov     rsi, r15; jumptable 00000000000B37ED case 24
//   0xB3F8B mov     rdi, rbx
//   0xB3F8E call    sub_9EA00
//   0xB3F93 test    al, al
//   0xB3F95 jnz     loc_B44AA
//   0xB3F9B mov     rsi, r15
//   0xB3F9E mov     rdi, rbx
//   0xB3FA1 call    sub_986E0
//   0xB3FA6 test    al, al
//   0xB3FA8 jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3FAE mov     r14d, 34h ; '4'
//   0xB3FB4 jmp     loc_B3BA0
//   0xB3FB9 mov     rsi, r15; jumptable 00000000000B37ED case 23
//   0xB3FBC mov     rdi, rbx
//   0xB3FBF call    sub_96C00
//   0xB3FC4 test    al, al
//   0xB3FC6 jz      loc_B3BD0; jumptable 00000000000B37ED case 19
//   0xB3FCC mov     r14d, 29h ; ')'
//   0xB3FD2 jmp     loc_B3BA0
//   0xB3FD7 mov     rsi, r15; jumptable 00000000000B37ED case 11
//   0xB3FDA mov     rdi, rbx
//   0xB3FDD call    sub_9FDC0
//   0xB3FE2 test    al, al
//   0xB3FE4 jnz     loc_B44CB
//   0xB3FEA mov     rsi, r15
//   0xB3FED mov     rdi, rbx
//   0xB3FF0 call    sub_9CFB0
//   0xB3FF5 test    al, al
//   0xB3FF7 jnz     loc_B48B7
//   0xB3FFD mov     rsi, r15
//   0xB4000 mov     rdi, rbx
//   0xB4003 call    sub_9B900
//   0xB4008 test    al, al
//   0xB400A jnz     loc_B4B28
//   0xB4010 mov     rsi, r15
//   0xB4013 mov     rdi, rbx
//   0xB4016 call    sub_9D2D0
//   0xB401B test    al, al
//   0xB401D jnz     loc_B4B54
//   0xB4023 mov     rsi, r15
//   0xB4026 mov     rdi, rbx
//   0xB4029 call    sub_A0610
//   0xB402E test    al, al
//   0xB4030 jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4036 mov     r14d, 36h ; '6'
//   0xB403C jmp     loc_B3BA0
//   0xB4041 align 8
//   0xB4048 mov     rsi, r15; jumptable 00000000000B37ED case 5
//   0xB404B mov     rdi, rbx
//   0xB404E call    sub_9ED70
//   0xB4053 test    al, al
//   0xB4055 jnz     loc_B4B49
//   0xB405B mov     rsi, r15
//   0xB405E mov     rdi, rbx
//   0xB4061 call    sub_99C40
//   0xB4066 test    al, al
//   0xB4068 jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB406E mov     r14d, 12h
//   0xB4074 jmp     loc_B3BA0
//   0xB4079 cmp     byte ptr [r15+30h], 1; jumptable 00000000000B37ED case 1
//   0xB407E jz      loc_B4640
//   0xB4084 mov     rsi, r15
//   0xB4087 mov     rdi, rbx
//   0xB408A call    sub_9AAF0
//   0xB408F test    al, al
//   0xB4091 jnz     loc_B44B5
//   0xB4097 mov     rsi, r15
//   0xB409A mov     rdi, rbx
//   0xB409D call    sub_18AD00
//   0xB40A2 test    al, al
//   0xB40A4 jz      loc_B3E50; jumptable 00000000000B37ED case 2
//   0xB40AA mov     r14d, 3Bh ; ';'
//   0xB40B0 jmp     loc_B3BA0
//   0xB40B5 mov     rsi, r15; jumptable 00000000000B37ED case 10
//   0xB40B8 mov     rdi, rbx
//   0xB40BB call    sub_9B160
//   0xB40C0 test    al, al
//   0xB40C2 jnz     loc_B44C0
//   0xB40C8 mov     rsi, r15
//   0xB40CB mov     rdi, rbx
//   0xB40CE call    sub_A02B0
//   0xB40D3 test    al, al
//   0xB40D5 jnz     loc_B48AC
//   0xB40DB mov     rsi, r15
//   0xB40DE mov     rdi, rbx
//   0xB40E1 call    sub_9B2C0
//   0xB40E6 test    al, al
//   0xB40E8 jnz     loc_B4B33
//   0xB40EE mov     rsi, r15
//   0xB40F1 mov     rdi, rbx
//   0xB40F4 call    sub_98A40
//   0xB40F9 test    al, al
//   0xB40FB jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4101 mov     r14d, 37h ; '7'
//   0xB4107 jmp     loc_B3BA0
//   0xB410C align 10h
//   0xB4110 cmp     byte ptr [r15+40h], 8; jumptable 00000000000B37ED case 56
//   0xB4115 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB411B mov     rax, [r15+48h]
//   0xB411F mov     eax, [rax+11Ch]
//   0xB4125 cmp     eax, 5
//   0xB4128 jz      loc_B4432
//   0xB412E cmp     eax, 22h ; '"'
//   0xB4131 jz      loc_B4432
//   0xB4137 mov     edx, eax
//   0xB4139 and     edx, 0FFFFFFDFh
//   0xB413C cmp     edx, 2
//   0xB413F jz      loc_B4474
//   0xB4145 cmp     eax, 2
//   0xB4148 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB414E mov     rsi, r15
//   0xB4151 mov     rdi, rbx
//   0xB4154 call    sub_18A2C0
//   0xB4159 test    al, al
//   0xB415B jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4161 mov     r14d, 1Ch
//   0xB4167 jmp     loc_B3BA0
//   0xB416C align 10h
//   0xB4170 cmp     byte ptr [r15+20h], 6; jumptable 00000000000B37ED case 55
//   0xB4175 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB417B mov     rax, [rbx+40h]
//   0xB417F mov     rsi, [r15+28h]
//   0xB4183 cmp     [rax+28h], rsi
//   0xB4187 jz      short loc_B419A
//   0xB4189 lea     rdi, [rax+8]
//   0xB418D call    sub_332920
//   0xB4192 test    al, al
//   0xB4194 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB419A mov     esi, [r13+3Ch]
//   0xB419E mov     r9d, 1
//   0xB41A4 xor     r8d, r8d
//   0xB41A7 xor     ecx, ecx
//   0xB41A9 mov     rdx, r15
//   0xB41AC mov     rdi, rbx
//   0xB41AF call    sub_124B60
//   0xB41B4 mov     r12, rax
//   0xB41B7 test    rax, rax
//   0xB41BA jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB41C0 cmp     dword ptr [rax], 3Bh ; ';'
//   0xB41C3 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB41C9 mov     eax, [r13+54h]
//   0xB41CD cmp     [r12+24h], eax
//   0xB41D2 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB41D8 mov     rsi, [r15+18h]
//   0xB41DC mov     rdi, [rbx+40h]
//   0xB41E0 lea     r14, [r12+20h]
//   0xB41E5 call    sub_A25E0
//   0xB41EA mov     rsi, rax
//   0xB41ED xor     edx, edx
//   0xB41EF mov     rdi, r14
//   0xB41F2 call    sub_A2350
//   0xB41F7 test    al, al
//   0xB41F9 jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB41FF mov     rdi, [r15+28h]
//   0xB4203 call    _get_func
//   0xB4208 test    rax, rax
//   0xB420B jz      short loc_B4243
//   0xB420D test    byte ptr [rax+10h], 2
//   0xB4211 jz      short loc_B4243
//   0xB4213 mov     esi, [r13+3Ch]
//   0xB4217 mov     r9d, 1
//   0xB421D xor     r8d, r8d
//   0xB4220 xor     ecx, ecx
//   0xB4222 mov     rdx, r12
//   0xB4225 mov     rdi, rbx
//   0xB4228 call    sub_124B60
//   0xB422D mov     rsi, rax
//   0xB4230 mov     rdi, r13
//   0xB4233 mov     r14, rax
//   0xB4236 call    sub_A2620
//   0xB423B test    al, al
//   0xB423D jnz     loc_B5034
//   0xB4243 mov     rdi, r12
//   0xB4246 call    sub_11D5A0
//   0xB424B mov     eax, [rbx+18h]
//   0xB424E mov     r14d, 4
//   0xB4254 and     ah, 0FDh
//   0xB4257 or      al, 80h
//   0xB4259 mov     [rbx+18h], eax
//   0xB425C mov     dword ptr [r15], 38h ; '8'
//   0xB4263 jmp     loc_B3BA0
//   0xB4268 align 10h
//   0xB4270 cmp     byte ptr [r15+20h], 1; jumptable 00000000000B37ED case 59
//   0xB4275 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB427B mov     rdi, [r15+10h]
//   0xB427F call    sub_122A30
//   0xB4284 mov     r12, rax
//   0xB4287 test    rax, rax
//   0xB428A jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4290 cmp     dword ptr [rax], 4
//   0xB4293 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4299 movzx   eax, byte ptr [rax+20h]
//   0xB429D cmp     al, 2
//   0xB429F jz      short loc_B42B8
//   0xB42A1 sub     al, 1
//   0xB42A3 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB42A9 mov     rax, [r15+18h]
//   0xB42AD cmp     [r12+18h], rax
//   0xB42B2 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB42B8 lea     r13, [r15+20h]
//   0xB42BC lea     rdi, [r12+40h]
//   0xB42C1 xor     edx, edx
//   0xB42C3 mov     rsi, r13
//   0xB42C6 call    sub_125B60
//   0xB42CB test    al, al
//   0xB42CD jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB42D3 lea     rsi, [r12+20h]
//   0xB42D8 mov     rdi, r13
//   0xB42DB call    sub_125180
//   0xB42E0 mov     r14d, 9
//   0xB42E6 jmp     loc_B3BA0
//   0xB42EB align 10h
//   0xB42F0 mov     r12d, [r15+44h]; jumptable 00000000000B37ED case 54
//   0xB42F4 mov     esi, [r13+3Ch]
//   0xB42F8 mov     r10, r15
//   0xB42FB xor     r14d, r14d
//   0xB42FE mov     r9d, 1
//   0xB4304 xor     r8d, r8d
//   0xB4307 xor     ecx, ecx
//   0xB4309 mov     rdx, r10
//   0xB430C mov     rdi, rbx
//   0xB430F call    sub_124B60
//   0xB4314 mov     r10, rax
//   0xB4317 test    rax, rax
//   0xB431A jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4320 mov     eax, [rax]
//   0xB4322 cmp     eax, 3Bh ; ';'
//   0xB4325 jz      loc_B48C2
//   0xB432B ja      loc_B4750
//   0xB4331 cmp     eax, 0Ch
//   0xB4334 jz      loc_B4A00
//   0xB433A cmp     eax, 0Dh
//   0xB433D jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4343 cmp     byte ptr [r10+20h], 1
//   0xB4348 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB434E mov     esi, [r13+3Ch]
//   0xB4352 cmp     esi, [r10+28h]
//   0xB4356 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB435C jmp     short loc_B42FE
//   0xB435E align 20h
//   0xB4360 mov     rsi, r15; jumptable 00000000000B37ED case 42
//   0xB4363 mov     rdi, rbx
//   0xB4366 call    sub_B2870
//   0xB436B test    al, al
//   0xB436D jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4373 mov     r14d, 23h ; '#'
//   0xB4379 jmp     loc_B3BA0
//   0xB437E align 20h
//   0xB4380 mov     r14d, 1Ah
//   0xB4386 jmp     loc_B3BA0
//   0xB438B align 10h
//   0xB4390 lea     rsi, [rbp+var_110]
//   0xB4397 lea     rdi, [rbp+var_50]
//   0xB439B call    sub_318470
//   0xB43A0 mov     rdi, [rbp+var_50]
//   0xB43A4 test    al, al
//   0xB43A6 jnz     loc_B3ACE
//   0xB43AC test    rdi, rdi
//   0xB43AF jz      short loc_B43BE
//   0xB43B1 mov     qword ptr [rbp+var_48], 0
//   0xB43B9 call    _qfree
//   0xB43BE mov     rdi, [rbp+var_60]
//   0xB43C2 call    _qfree
//   0xB43C7 mov     r12, [r12+10h]
//   0xB43CC test    r12, r12
//   0xB43CF jnz     loc_B3940
//   0xB43D5 jmp     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB43DA align 20h
//   0xB43E0 mov     r14d, 35h ; '5'
//   0xB43E6 jmp     loc_B3BA0
//   0xB43EB mov     r14d, 32h ; '2'
//   0xB43F1 jmp     loc_B3BA0
//   0xB43F6 mov     r14d, 15h
//   0xB43FC jmp     loc_B3BA0
//   0xB4401 mov     [rbp+var_110], r12
//   0xB4408 movups  [rbp+var_108], xmm1
//   0xB440F jmp     loc_B387E
//   0xB4414 mov     [rbp+var_E0], r12
//   0xB441B movups  [rbp+var_D8], xmm1
//   0xB4422 jmp     loc_B3912
//   0xB4427 mov     r14d, 27h ; '''
//   0xB442D jmp     loc_B3BA0
//   0xB4432 mov     rdi, [r15+8]
//   0xB4436 call    sub_1229A0
//   0xB443B test    rax, rax
//   0xB443E jz      short loc_B4456
//   0xB4440 mov     rdx, rax
//   0xB4443 mov     rsi, r15
//   0xB4446 mov     rdi, rbx
//   0xB4449 call    sub_189980
//   0xB444E test    al, al
//   0xB4450 jnz     loc_B4CA5
//   0xB4456 cmp     byte ptr [r15+40h], 8
//   0xB445B jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4461 mov     rax, [r15+48h]
//   0xB4465 mov     eax, [rax+11Ch]
//   0xB446B cmp     eax, 5
//   0xB446E jnz     loc_B4137
//   0xB4474 mov     rsi, r15
//   0xB4477 mov     rdi, rbx
//   0xB447A call    sub_186F90
//   0xB447F test    al, al
//   0xB4481 jnz     loc_B3E63
//   0xB4487 cmp     byte ptr [r15+40h], 8
//   0xB448C jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4492 mov     rax, [r15+48h]
//   0xB4496 mov     eax, [rax+11Ch]
//   0xB449C cmp     eax, 5
//   0xB449F jz      loc_B414E
//   0xB44A5 jmp     loc_B4145
//   0xB44AA mov     r14d, 1Fh
//   0xB44B0 jmp     loc_B3BA0
//   0xB44B5 mov     r14d, 25h ; '%'
//   0xB44BB jmp     loc_B3BA0
//   0xB44C0 mov     r14d, 14h
//   0xB44C6 jmp     loc_B3BA0
//   0xB44CB mov     r14d, 13h
//   0xB44D1 jmp     loc_B3BA0
//   0xB44D6 mov     eax, [r15+28h]
//   0xB44DA cmp     [r13+3Ch], eax
//   0xB44DE jnz     loc_B3EF3
//   0xB44E4 lea     rax, [r15+40h]
//   0xB44E8 lea     r14, [r15+20h]
//   0xB44EC xor     edx, edx
//   0xB44EE mov     rsi, rax
//   0xB44F1 mov     rdi, r14
//   0xB44F4 mov     qword ptr [rbp+var_150], rax
//   0xB44FB call    sub_125B60
//   0xB4500 test    al, al
//   0xB4502 jz      loc_B3EF3
//   0xB4508 cmp     byte ptr [r15+30h], 2
//   0xB450D jnz     loc_B3EF3
//   0xB4513 lea     rdx, [rbp+var_F0]
//   0xB451A xor     r8d, r8d
//   0xB451D mov     rcx, r15
//   0xB4520 mov     rdi, rbx
//   0xB4523 lea     rsi, [rbp+var_120]
//   0xB452A call    sub_129B40
//   0xB452F mov     r12, rax
//   0xB4532 test    rax, rax
//   0xB4535 jz      loc_B3EF3
//   0xB453B lea     rax, [r15+30h]
//   0xB453F movsxd  rsi, dword ptr [r12+44h]
//   0xB4544 mov     edx, 1
//   0xB4549 mov     rdi, rax
//   0xB454C mov     [rbp+var_140], rax
//   0xB4553 call    sub_A2350
//   0xB4558 test    al, al
//   0xB455A jz      loc_B3EF3
//   0xB4560 mov     eax, [r12]
//   0xB4564 cmp     eax, 2
//   0xB4567 jz      loc_B50EA
//   0xB456D cmp     eax, 4
//   0xB4570 jnz     loc_B3EF3
//   0xB4576 cmp     byte ptr [r12+20h], 4
//   0xB457C jnz     loc_B3EF3
//   0xB4582 mov     rax, [r12+28h]
//   0xB4587 cmp     dword ptr [rax], 2
//   0xB458A jnz     loc_B3EF3
//   0xB4590 cmp     byte ptr [rax+20h], 1
//   0xB4594 jnz     loc_B3EF3
//   0xB459A mov     ecx, [rax+28h]
//   0xB459D cmp     [r13+38h], ecx
//   0xB45A1 jnz     loc_B3EF3
//   0xB45A7 cmp     byte ptr [rax+30h], 1
//   0xB45AB jnz     loc_B3EF3
//   0xB45B1 mov     eax, [rax+38h]
//   0xB45B4 cmp     [r13+3Ch], eax
//   0xB45B8 jnz     loc_B3EF3
//   0xB45BE lea     rdx, [rbp+var_F0]
//   0xB45C5 mov     r8, r15
//   0xB45C8 mov     rcx, r12
//   0xB45CB mov     rdi, rbx
//   0xB45CE lea     rsi, [rbp+var_120]
//   0xB45D5 call    sub_B02D0
//   0xB45DA test    al, al
//   0xB45DC jz      loc_B3EF3
//   0xB45E2 mov     dword ptr [r15], 3Ch ; '<'
//   0xB45E9 mov     rax, [r15+18h]
//   0xB45ED lea     rsi, [r12+40h]
//   0xB45F2 mov     rdx, [r12+18h]
//   0xB45F7 mov     rdi, qword ptr [rbp+var_150]
//   0xB45FE mov     [r15+18h], rdx
//   0xB4602 mov     [r12+18h], rax
//   0xB4607 call    sub_11CA10
//   0xB460C mov     rdi, r14
//   0xB460F call    sub_11CDA0
//   0xB4614 mov     rdi, [rbp+var_140]
//   0xB461B call    sub_11CDA0
//   0xB4620 mov     rdi, r12
//   0xB4623 call    sub_11D5A0
//   0xB4628 mov     eax, [rbx+18h]
//   0xB462B mov     r14d, 2
//   0xB4631 and     ah, 0FDh
//   0xB4634 or      al, 90h
//   0xB4636 mov     [rbx+18h], eax
//   0xB4639 jmp     loc_B3BA0
//   0xB463E align 20h
//   0xB4640 mov     eax, [r15+38h]
//   0xB4644 cmp     [r13+38h], eax
//   0xB4648 jnz     loc_B4084
//   0xB464E cmp     byte ptr [r15+40h], 1
//   0xB4653 jnz     loc_B4084
//   0xB4659 mov     eax, [r15+48h]
//   0xB465D cmp     [r13+3Ch], eax
//   0xB4661 jnz     loc_B4084
//   0xB4667 lea     rdx, [rbp+var_F0]
//   0xB466E xor     r8d, r8d
//   0xB4671 mov     rcx, r15
//   0xB4674 mov     rdi, rbx
//   0xB4677 lea     rsi, [rbp+var_120]
//   0xB467E call    sub_129320
//   0xB4683 mov     r12, rax
//   0xB4686 test    rax, rax
//   0xB4689 jz      loc_B4084
//   0xB468F mov     rax, [r15+18h]
//   0xB4693 cmp     [r12+18h], rax
//   0xB4698 jnz     loc_B4084
//   0xB469E cmp     dword ptr [r12], 0Dh
//   0xB46A3 jnz     loc_B4084
//   0xB46A9 cmp     byte ptr [r12+20h], 1
//   0xB46AF jnz     loc_B4084
//   0xB46B5 mov     eax, [r12+28h]
//   0xB46BA cmp     [r13+3Ch], eax
//   0xB46BE jnz     loc_B4084
//   0xB46C4 lea     rsi, [r12+40h]
//   0xB46C9 lea     rdi, [r12+20h]
//   0xB46CE xor     edx, edx
//   0xB46D0 call    sub_125B60
//   0xB46D5 test    al, al
//   0xB46D7 jz      loc_B4084
//   0xB46DD movsxd  rsi, dword ptr [r15+24h]
//   0xB46E1 lea     rdi, [r12+30h]
//   0xB46E6 mov     edx, 1
//   0xB46EB call    sub_A2350
//   0xB46F0 test    al, al
//   0xB46F2 jz      loc_B4084
//   0xB46F8 lea     rdx, [rbp+var_F0]
//   0xB46FF mov     r8, r15
//   0xB4702 mov     rcx, r12
//   0xB4705 mov     rdi, rbx
//   0xB4708 lea     rsi, [rbp+var_120]
//   0xB470F call    sub_B02D0
//   0xB4714 test    al, al
//   0xB4716 jz      loc_B4084
//   0xB471C mov     rdi, r12
//   0xB471F call    sub_11D5A0
//   0xB4724 mov     dword ptr [r15], 3Bh ; ';'
//   0xB472B lea     rdi, [r15+30h]
//   0xB472F call    sub_11CDA0
//   0xB4734 lea     rdi, [r15+40h]
//   0xB4738 call    sub_11CDA0
//   0xB473D or      dword ptr [rbx+18h], 10h
//   0xB4741 mov     r14d, 1
//   0xB4747 jmp     loc_B3BA0
//   0xB474C align 10h
//   0xB4750 cmp     eax, 3Ch ; '<'
//   0xB4753 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4759 cmp     byte ptr [r15+40h], 1
//   0xB475E jz      loc_B4C6C
//   0xB4764 cmp     byte ptr [r15+30h], 1
//   0xB4769 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB476F cmp     byte ptr [r10+40h], 1
//   0xB4774 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB477A mov     eax, [r15+38h]
//   0xB477E cmp     [r10+48h], eax
//   0xB4782 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4788 cmp     r12d, [r10+44h]
//   0xB478C jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4792 mov     esi, [r13+3Ch]
//   0xB4796 mov     r9d, 1
//   0xB479C xor     r8d, r8d
//   0xB479F xor     ecx, ecx
//   0xB47A1 mov     rdx, r10
//   0xB47A4 mov     rdi, rbx
//   0xB47A7 mov     qword ptr [rbp+var_150], r10
//   0xB47AE call    sub_124B60
//   0xB47B3 mov     rdi, rax
//   0xB47B6 test    rax, rax
//   0xB47B9 jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB47BF cmp     byte ptr [r15+40h], 1
//   0xB47C4 mov     r10, qword ptr [rbp+var_150]
//   0xB47CB jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB47D1 cmp     byte ptr [rax+40h], 1
//   0xB47D5 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB47DB mov     eax, [rax+48h]
//   0xB47DE cmp     [r15+48h], eax
//   0xB47E2 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB47E8 cmp     r12d, [rdi+44h]
//   0xB47EC jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB47F2 mov     [rbp+var_138], r10
//   0xB47F9 call    sub_11D5A0
//   0xB47FE mov     eax, [rbx+18h]
//   0xB4801 mov     r10, [rbp+var_138]
//   0xB4808 and     ah, 0FDh
//   0xB480B or      al, 80h
//   0xB480D mov     [rbx+18h], eax
//   0xB4810 mov     rdi, r10
//   0xB4813 call    sub_11D5A0
//   0xB4818 mov     eax, [rbx+18h]
//   0xB481B mov     rsi, r15
//   0xB481E mov     rdi, rbx
//   0xB4821 and     ah, 0FDh
//   0xB4824 or      al, 80h
//   0xB4826 mov     [rbx+18h], eax
//   0xB4829 call    sub_330990
//   0xB482E test    r14, r14
//   0xB4831 jz      short loc_B4846
//   0xB4833 mov     rdi, r14
//   0xB4836 call    sub_11D5A0
//   0xB483B mov     eax, [rbx+18h]
//   0xB483E and     ah, 0FDh
//   0xB4841 or      al, 80h
//   0xB4843 mov     [rbx+18h], eax
//   0xB4846 mov     rdi, r15
//   0xB4849 call    sub_1B5B40
//   0xB484E mov     rcx, rax
//   0xB4851 mov     edx, 5
//   0xB4856 mov     rdi, rbx
//   0xB4859 xor     eax, eax
//   0xB485B lea     rsi, aCmbDS; "cmb%d: %s"
//   0xB4862 call    sub_A2520
//   0xB4867 jmp     loc_B3BBF
//   0xB486C align 10h
//   0xB4870 cmp     dword ptr [r11], 4
//   0xB4874 jnz     loc_B3CE2
//   0xB487A mov     eax, [r15+44h]
//   0xB487E cmp     [r11+44h], eax
//   0xB4882 jg      loc_B4CB0
//   0xB4888 cmp     eax, 4
//   0xB488B jle     loc_B3CF8
//   0xB4891 jmp     loc_B3D15
//   0xB4896 mov     r14d, 31h ; '1'
//   0xB489C jmp     loc_B3BA0
//   0xB48A1 mov     r14d, 10h
//   0xB48A7 jmp     loc_B3BA0
//   0xB48AC mov     r14d, 19h
//   0xB48B2 jmp     loc_B3BA0
//   0xB48B7 mov     r14d, 16h
//   0xB48BD jmp     loc_B3BA0
//   0xB48C2 mov     eax, [r13+54h]
//   0xB48C6 cmp     [r10+24h], eax
//   0xB48CA jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB48D0 mov     rsi, [r15+18h]
//   0xB48D4 mov     rdi, [rbx+40h]
//   0xB48D8 mov     qword ptr [rbp+var_150], r10
//   0xB48DF lea     r12, [r10+20h]
//   0xB48E3 call    sub_A25E0
//   0xB48E8 mov     rsi, rax
//   0xB48EB xor     edx, edx
//   0xB48ED mov     rdi, r12
//   0xB48F0 call    sub_A2350
//   0xB48F5 test    al, al
//   0xB48F7 mov     r10, qword ptr [rbp+var_150]
//   0xB48FE jz      def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4904 mov     esi, [r13+3Ch]
//   0xB4908 mov     r9d, 1
//   0xB490E xor     r8d, r8d
//   0xB4911 xor     ecx, ecx
//   0xB4913 mov     rdx, r10
//   0xB4916 mov     rdi, rbx
//   0xB4919 mov     [rbp+var_138], r10
//   0xB4920 call    sub_124B60
//   0xB4925 mov     rsi, rax
//   0xB4928 mov     rdi, r13
//   0xB492B mov     r14, rax
//   0xB492E call    sub_A2620
//   0xB4933 mov     r10, [rbp+var_138]
//   0xB493A test    al, al
//   0xB493C jz      short loc_B497F
//   0xB493E mov     rdi, r14
//   0xB4941 call    sub_11D5A0
//   0xB4946 mov     eax, [rbx+18h]
//   0xB4949 mov     rdi, [rbx+40h]
//   0xB494D and     ah, 0FDh
//   0xB4950 or      al, 80h
//   0xB4952 mov     [rbx+18h], eax
//   0xB4955 mov     rsi, [r14+18h]
//   0xB4959 call    sub_1CFBB0
//   0xB495E mov     rsi, [r15+18h]
//   0xB4962 mov     rdi, [rbx+40h]
//   0xB4966 mov     r14, rax
//   0xB4969 call    sub_1CFBB0
//   0xB496E cmp     r14, rax
//   0xB4971 mov     r10, [rbp+var_138]
//   0xB4978 jz      short loc_B497F
//   0xB497A or      dword ptr [r15+4], 20h
//   0xB497F mov     rdi, r10
//   0xB4982 call    sub_11D5A0
//   0xB4987 mov     eax, [rbx+18h]
//   0xB498A lea     r12, [r15+30h]
//   0xB498E lea     rdi, [r15+20h]
//   0xB4992 mov     rsi, r12
//   0xB4995 and     ah, 0FDh
//   0xB4998 or      al, 80h
//   0xB499A mov     [rbx+18h], eax
//   0xB499D mov     dword ptr [r15], 39h ; '9'
//   0xB49A4 call    sub_125180
//   0xB49A9 lea     rax, [r15+40h]
//   0xB49AD mov     rdi, r12
//   0xB49B0 mov     rsi, rax
//   0xB49B3 mov     r14, rax
//   0xB49B6 call    sub_125180
//   0xB49BB mov     rdi, r14
//   0xB49BE call    sub_11CDA0
//   0xB49C3 mov     rdi, r15
//   0xB49C6 call    sub_1B5B40
//   0xB49CB mov     rcx, rax
//   0xB49CE mov     edx, 6
//   0xB49D3 mov     rdi, rbx
//   0xB49D6 xor     eax, eax
//   0xB49D8 lea     rsi, aCmbDS; "cmb%d: %s"
//   0xB49DF call    sub_A2520
//   0xB49E4 mov     edx, 6
//   0xB49E9 mov     rsi, r15
//   0xB49EC mov     rdi, rbx
//   0xB49EF call    sub_167810
//   0xB49F4 jmp     loc_B3BBF
//   0xB49F9 align 20h
//   0xB4A00 cmp     byte ptr [r10+20h], 1
//   0xB4A05 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4A0B mov     eax, [r10+28h]
//   0xB4A0F cmp     [r13+3Ch], eax
//   0xB4A13 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4A19 lea     rsi, [r10+40h]
//   0xB4A1D lea     rdi, [r10+20h]
//   0xB4A21 xor     edx, edx
//   0xB4A23 mov     qword ptr [rbp+var_150], r10
//   0xB4A2A call    sub_125B60
//   0xB4A2F test    al, al
//   0xB4A31 mov     r10, qword ptr [rbp+var_150]
//   0xB4A38 jz      short loc_B4A45
//   0xB4A3A cmp     byte ptr [r10+30h], 2
//   0xB4A3F jz      loc_B4F3E
//   0xB4A45 mov     esi, [r13+3Ch]
//   0xB4A49 jmp     loc_B42FE
//   0xB4A4E lea     rsi, [r15+20h]
//   0xB4A52 lea     rdi, [r11+20h]
//   0xB4A56 xor     edx, edx
//   0xB4A58 mov     [rbp+var_158], r11
//   0xB4A5F call    sub_125B60
//   0xB4A64 test    al, al
//   0xB4A66 mov     r11, [rbp+var_158]
//   0xB4A6D jz      loc_B3CF8
//   0xB4A73 cmp     byte ptr [r15+20h], 4
//   0xB4A78 jz      loc_B4F15
//   0xB4A7E mov     rdi, [rbp+var_140]
//   0xB4A85 lea     rdx, [r11+40h]
//   0xB4A89 mov     rsi, r13
//   0xB4A8C mov     [rbp+var_158], r11
//   0xB4A93 call    sub_127420
//   0xB4A98 test    al, al
//   0xB4A9A mov     r11, [rbp+var_158]
//   0xB4AA1 jz      loc_B3CF8
//   0xB4AA7 mov     eax, [r15+44h]
//   0xB4AAB cmp     [r11+44h], eax
//   0xB4AAF jl      loc_B3CF8
//   0xB4AB5 lea     r14, [rbp+var_60]
//   0xB4AB9 mov     ecx, 1
//   0xB4ABE mov     rdx, r11
//   0xB4AC1 mov     rsi, rbx
//   0xB4AC4 mov     rdi, r14
//   0xB4AC7 mov     [rbp+var_140], r11
//   0xB4ACE call    sub_124680
//   0xB4AD3 mov     r11, [rbp+var_140]
//   0xB4ADA mov     rsi, qword ptr [rbp+var_150]
//   0xB4AE1 mov     rcx, r15
//   0xB4AE4 mov     rdi, rbx
//   0xB4AE7 mov     r8d, 1
//   0xB4AED mov     rdx, [r11+8]
//   0xB4AF1 call    sub_A9AA0
//   0xB4AF6 test    rax, rax
//   0xB4AF9 mov     r11, [rbp+var_140]
//   0xB4B00 jz      loc_B4FDF
//   0xB4B06 mov     rdi, r14
//   0xB4B09 mov     [rbp+var_140], r11
//   0xB4B10 call    sub_93B40
//   0xB4B15 mov     r11, [rbp+var_140]
//   0xB4B1C jmp     loc_B3CF8
//   0xB4B21 align 8
//   0xB4B28 mov     r14d, 20h ; ' '
//   0xB4B2E jmp     loc_B3BA0
//   0xB4B33 mov     r14d, 2Bh ; '+'
//   0xB4B39 jmp     loc_B3BA0
//   0xB4B3E mov     r14d, 28h ; '('
//   0xB4B44 jmp     loc_B3BA0
//   0xB4B49 mov     r14d, 18h
//   0xB4B4F jmp     loc_B3BA0
//   0xB4B54 mov     r14d, 33h ; '3'
//   0xB4B5A jmp     loc_B3BA0
//   0xB4B5F mov     r14d, 11h
//   0xB4B65 jmp     loc_B3BA0
//   0xB4B6A mov     dword ptr [r15], 4
//   0xB4B71 lea     rsi, [r12+20h]
//   0xB4B76 lea     rdi, [r15+20h]
//   0xB4B7A call    sub_125180
//   0xB4B7F cmp     byte ptr [r15+20h], 1
//   0xB4B84 jz      loc_B4DAF
//   0xB4B8A mov     rdi, r12
//   0xB4B8D call    sub_11D5A0
//   0xB4B92 mov     eax, [rbx+18h]
//   0xB4B95 mov     rdi, r15
//   0xB4B98 and     ah, 0FDh
//   0xB4B9B or      al, 80h
//   0xB4B9D mov     [rbx+18h], eax
//   0xB4BA0 call    sub_1B5B40
//   0xB4BA5 mov     rcx, rax
//   0xB4BA8 mov     edx, 3
//   0xB4BAD mov     rdi, rbx
//   0xB4BB0 xor     eax, eax
//   0xB4BB2 lea     rsi, aCmbDS; "cmb%d: %s"
//   0xB4BB9 call    sub_A2520
//   0xB4BBE mov     edx, 6
//   0xB4BC3 mov     rsi, r15
//   0xB4BC6 mov     rdi, rbx
//   0xB4BC9 call    sub_167810
//   0xB4BCE mov     rdi, [rbp+var_50]
//   0xB4BD2 test    rdi, rdi
//   0xB4BD5 jz      short loc_B4BE2
//   0xB4BD7 xor     eax, eax
//   0xB4BD9 mov     qword ptr [rbp+var_48], rax
//   0xB4BDD call    _qfree
//   0xB4BE2 mov     rdi, [rbp+var_60]
//   0xB4BE6 call    _qfree
//   0xB4BEB mov     rdi, [rbp+var_80]
//   0xB4BEF test    rdi, rdi
//   0xB4BF2 jz      short loc_B4BFF
//   0xB4BF4 xor     eax, eax
//   0xB4BF6 mov     qword ptr [rbp+var_78], rax
//   0xB4BFA call    _qfree
//   0xB4BFF mov     rdi, [rbp+var_90]
//   0xB4C06 call    _qfree
//   0xB4C0B jmp     loc_B3BBF
//   0xB4C10 mov     rdi, [rbp+var_80]
//   0xB4C14 test    rdi, rdi
//   0xB4C17 jz      short loc_B4C24
//   0xB4C19 xor     eax, eax
//   0xB4C1B mov     qword ptr [rbp+var_78], rax
//   0xB4C1F call    _qfree
//   0xB4C24 mov     rdi, [rbp+var_90]
//   0xB4C2B call    _qfree
//   0xB4C30 jmp     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4C35 mov     r14d, 2Ch ; ','
//   0xB4C3B mov     rdi, r12
//   0xB4C3E call    sub_93B40
//   0xB4C43 mov     rdi, qword ptr [rbp+var_150]
//   0xB4C4A call    sub_93B40
//   0xB4C4F jmp     loc_B3BA0
//   0xB4C54 mov     r14d, 17h
//   0xB4C5A jmp     loc_B3BA0
//   0xB4C5F mov     rdi, r12
//   0xB4C62 call    sub_11CDA0
//   0xB4C67 jmp     loc_B3B16
//   0xB4C6C cmp     byte ptr [r10+40h], 1
//   0xB4C71 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4C77 mov     eax, [r10+48h]
//   0xB4C7B cmp     [r15+48h], eax
//   0xB4C7F jz      loc_B4E80
//   0xB4C85 cmp     byte ptr [r15+30h], 1
//   0xB4C8A jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4C90 jmp     loc_B477A
//   0xB4C95 mov     r14d, 1Eh
//   0xB4C9B jmp     loc_B3BA0
//   0xB4CA0 call    ___stack_chk_fail
//   0xB4CA5 mov     r14d, 1Bh
//   0xB4CAB jmp     loc_B3BA0
//   0xB4CB0 mov     rsi, qword ptr [rbp+var_150]
//   0xB4CB7 mov     rdi, r12
//   0xB4CBA mov     [rbp+var_158], r11
//   0xB4CC1 call    sub_A2310
//   0xB4CC6 test    al, al
//   0xB4CC8 mov     r11, [rbp+var_158]
//   0xB4CCF jz      loc_B3CE2
//   0xB4CD5 mov     rax, [rbx+1E0h]
//   0xB4CDC xor     edx, edx
//   0xB4CDE mov     rdi, r15
//   0xB4CE1 mov     rsi, [rax+70h]
//   0xB4CE5 call    sub_1205A0
//   0xB4CEA test    al, al
//   0xB4CEC mov     r11, [rbp+var_158]
//   0xB4CF3 jnz     loc_B3CE2
//   0xB4CF9 mov     rdx, [r11+8]
//   0xB4CFD mov     r8d, 1
//   0xB4D03 mov     rcx, r15
//   0xB4D06 mov     rdi, rbx
//   0xB4D09 mov     rsi, qword ptr [rbp+var_150]
//   0xB4D10 call    sub_A9AA0
//   0xB4D15 test    rax, rax
//   0xB4D18 mov     r11, [rbp+var_158]
//   0xB4D1F jnz     loc_B3CE2
//   0xB4D25 mov     rax, [rbx+1E0h]
//   0xB4D2C mov     r9, r15
//   0xB4D2F mov     rcx, r11
//   0xB4D32 mov     rdx, rbx
//   0xB4D35 lea     rsi, [rbp+var_128]
//   0xB4D3C lea     r8, [r11+40h]
//   0xB4D40 mov     rdi, [rax+70h]
//   0xB4D44 push    r10
//   0xB4D46 push    [rbp+var_140]
//   0xB4D4C call    sub_12FF70
//   0xB4D51 test    al, al
//   0xB4D53 pop     r8
//   0xB4D55 mov     r11, [rbp+var_158]
//   0xB4D5C pop     r9
//   0xB4D5E jz      loc_B3CE2
//   0xB4D64 lea     r14, [rbp+var_60]
//   0xB4D68 lea     rsi, [r11+20h]
//   0xB4D6C mov     rdi, r14
//   0xB4D6F call    sub_123A40
//   0xB4D74 mov     rax, [rbp+var_128]
//   0xB4D7B mov     r11, [rbp+var_158]
//   0xB4D82 test    rax, rax
//   0xB4D85 js      short loc_B4D94
//   0xB4D87 movsxd  rdx, dword ptr [rbp+var_60+4]
//   0xB4D8B cmp     rax, rdx
//   0xB4D8E jl      loc_B4F50
//   0xB4D94 mov     rdi, r14
//   0xB4D97 mov     [rbp+var_158], r11
//   0xB4D9E call    sub_11CDA0
//   0xB4DA3 mov     r11, [rbp+var_158]
//   0xB4DAA jmp     loc_B3CE2
//   0xB4DAF mov     eax, [r15+28h]
//   0xB4DB3 cmp     [r13+3Ch], eax
//   0xB4DB7 jnz     loc_B4B8A
//   0xB4DBD mov     rax, [r12+18h]
//   0xB4DC2 mov     [r15+18h], rax
//   0xB4DC6 jmp     loc_B4B8A
//   0xB4DCB lea     rdi, [rax+20h]
//   0xB4DCF xor     edx, edx
//   0xB4DD1 xor     esi, esi
//   0xB4DD3 call    sub_A2350
//   0xB4DD8 test    al, al
//   0xB4DDA jz      loc_B3E3B
//   0xB4DE0 mov     eax, [r15+4]
//   0xB4DE4 mov     rcx, [rbp+var_140]
//   0xB4DEB sar     eax, 8
//   0xB4DEE mov     edx, [rcx+44h]
//   0xB4DF1 and     eax, 7
//   0xB4DF4 jz      short loc_B4E08
//   0xB4DF6 lea     ecx, [rax-1]
//   0xB4DF9 mov     eax, 1
//   0xB4DFE shl     eax, cl
//   0xB4E00 cmp     eax, edx
//   0xB4E02 jl      loc_B3E3B
//   0xB4E08 cmp     [r15+44h], edx
//   0xB4E0C jge     loc_B3E3B
//   0xB4E12 xor     eax, eax
//   0xB4E14 pxor    xmm0, xmm0
//   0xB4E18 xor     ecx, ecx
//   0xB4E1A mov     rsi, r14
//   0xB4E1D mov     [rbp+var_60], rax
//   0xB4E21 mov     rdi, rbx
//   0xB4E24 mov     [rbp+var_58], rax
//   0xB4E28 mov     [rbp+var_50], rax
//   0xB4E2C mov     rax, [rbp+var_140]
//   0xB4E33 movups  [rbp+var_48], xmm0
//   0xB4E37 add     rax, 40h ; '@'
//   0xB4E3B mov     rdx, rax
//   0xB4E3E mov     [rbp+var_158], rax
//   0xB4E45 call    sub_127FE0
//   0xB4E4A mov     rcx, [r15+8]
//   0xB4E4E mov     r8d, 1
//   0xB4E54 mov     rsi, r14
//   0xB4E57 mov     rdi, rbx
//   0xB4E5A mov     rax, [rbp+var_140]
//   0xB4E61 mov     rdx, [rax+8]
//   0xB4E65 call    sub_A9D90
//   0xB4E6A test    rax, rax
//   0xB4E6D jz      loc_B5077
//   0xB4E73 mov     rdi, r14
//   0xB4E76 call    sub_93B40
//   0xB4E7B jmp     loc_B3E3B
//   0xB4E80 cmp     r12d, [r10+44h]
//   0xB4E84 jnz     loc_B4C85
//   0xB4E8A mov     rsi, [r15+18h]
//   0xB4E8E mov     rdi, [rbx+40h]
//   0xB4E92 lea     rax, [r15+30h]
//   0xB4E96 mov     qword ptr [rbp+var_150], r10
//   0xB4E9D mov     [rbp+var_140], rax
//   0xB4EA4 call    sub_330F80
//   0xB4EA9 mov     rdi, rax
//   0xB4EAC call    _getseg
//   0xB4EB1 mov     rsi, [rax+30h]
//   0xB4EB5 xor     edx, edx
//   0xB4EB7 lea     rdi, [r15+30h]
//   0xB4EBB call    sub_A2350
//   0xB4EC0 test    al, al
//   0xB4EC2 mov     r10, qword ptr [rbp+var_150]
//   0xB4EC9 jnz     short loc_B4EE4
//   0xB4ECB cmp     byte ptr [r15+30h], 1
//   0xB4ED0 jnz     def_B37ED; jumptable 00000000000B37ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4ED6 mov     eax, [r15+38h]
//   0xB4EDA cmp     [r13+40h], eax
//   0xB4EDE jnz     loc_B476F
//   0xB4EE4 mov     rdx, [r15+10h]
//   0xB4EE8 mov     esi, [r15+48h]
//   0xB4EEC xor     r8d, r8d
//   0xB4EEF xor     ecx, ecx
//   0xB4EF1 mov     rdi, rbx
//   0xB4EF4 mov     qword ptr [rbp+var_150], r10
//   0xB4EFB call    sub_129010
//   0xB4F00 mov     r10, qword ptr [rbp+var_150]
//   0xB4F07 cmp     r10, rax
//   0xB4F0A jnz     loc_B4764
//   0xB4F10 jmp     loc_B4810
//   0xB4F15 mov     rdi, [r15+28h]
//   0xB4F19 xor     edx, edx
//   0xB4F1B mov     rsi, r13
//   0xB4F1E mov     [rbp+var_158], r11
//   0xB4F25 call    sub_1205A0
//   0xB4F2A test    al, al
//   0xB4F2C mov     r11, [rbp+var_158]
//   0xB4F33 jnz     loc_B3CF8
//   0xB4F39 jmp     loc_B4A7E
//   0xB4F3E cmp     [r10+24h], r12d
//   0xB4F42 jnz     loc_B4A45
//   0xB4F48 mov     r14, r10
//   0xB4F4B jmp     loc_B4A45
//   0xB4F50 mov     rdx, [rbx+1E0h]
//   0xB4F57 mov     rdi, r14
//   0xB4F5A mov     [rbp+var_158], r11
//   0xB4F61 mov     rsi, [rdx+70h]
//   0xB4F65 mov     edx, eax
//   0xB4F67 call    sub_126F10
//   0xB4F6C test    al, al
//   0xB4F6E mov     r11, [rbp+var_158]
//   0xB4F75 jz      loc_B4D94
//   0xB4F7B lea     rsi, [r15+20h]
//   0xB4F7F xor     edx, edx
//   0xB4F81 mov     rdi, r14
//   0xB4F84 call    sub_125B60
//   0xB4F89 test    al, al
//   0xB4F8B mov     r11, [rbp+var_158]
//   0xB4F92 jz      loc_B4D94
//   0xB4F98 mov     rdx, [r11+8]
//   0xB4F9C mov     rcx, r15
//   0xB4F9F mov     rsi, r14
//   0xB4FA2 mov     rdi, rbx
//   0xB4FA5 call    sub_A9CB0
//   0xB4FAA test    al, al
//   0xB4FAC mov     r11, [rbp+var_158]
//   0xB4FB3 jnz     loc_B4D94
//   0xB4FB9 mov     rdi, r15
//   0xB4FBC call    sub_11D5A0
//   0xB4FC1 mov     eax, [rbx+18h]
//   0xB4FC4 mov     rdi, r14
//   0xB4FC7 mov     r14d, 6
//   0xB4FCD and     ah, 0FDh
//   0xB4FD0 or      al, 80h
//   0xB4FD2 mov     [rbx+18h], eax
//   0xB4FD5 call    sub_11CDA0
//   0xB4FDA jmp     loc_B4C3B
//   0xB4FDF mov     rdx, [r11+8]
//   0xB4FE3 mov     r8d, 1
//   0xB4FE9 mov     rcx, r15
//   0xB4FEC mov     rsi, r14
//   0xB4FEF mov     rdi, rbx
//   0xB4FF2 mov     [rbp+var_140], r11
//   0xB4FF9 call    sub_A9AA0
//   0xB4FFE test    rax, rax
//   0xB5001 mov     r11, [rbp+var_140]
//   0xB5008 jnz     loc_B4B06
//   0xB500E mov     rdi, r15
//   0xB5011 call    sub_11D5A0
//   0xB5016 mov     eax, [rbx+18h]
//   0xB5019 mov     rdi, r14
//   0xB501C mov     r14d, 8
//   0xB5022 and     ah, 0FDh
//   0xB5025 or      al, 80h
//   0xB5027 mov     [rbx+18h], eax
//   0xB502A call    sub_93B40
//   0xB502F jmp     loc_B4C3B
//   0xB5034 mov     rdi, r14
//   0xB5037 call    sub_11D5A0
//   0xB503C mov     eax, [rbx+18h]
//   0xB503F mov     rdi, [rbx+40h]
//   0xB5043 and     ah, 0FDh
//   0xB5046 or      al, 80h
//   0xB5048 mov     [rbx+18h], eax
//   0xB504B mov     rsi, [r14+18h]
//   0xB504F call    sub_1CFBB0
//   0xB5054 mov     rsi, [r15+18h]
//   0xB5058 mov     rdi, [rbx+40h]
//   0xB505C mov     r14, rax
//   0xB505F call    sub_1CFBB0
//   0xB5064 cmp     r14, rax
//   0xB5067 jz      loc_B4243
//   0xB506D or      dword ptr [r15+4], 20h
//   0xB5072 jmp     loc_B4243
//   0xB5077 mov     rdx, [rbp+var_158]
//   0xB507E mov     rdi, qword ptr [rbp+var_150]
//   0xB5085 mov     rsi, r13
//   0xB5088 call    sub_127420
//   0xB508D test    al, al
//   0xB508F jz      loc_B4E73
//   0xB5095 mov     rsi, [rbp+var_158]
//   0xB509C mov     rdi, qword ptr [rbp+var_150]
//   0xB50A3 call    sub_125180
//   0xB50A8 mov     rax, [rbp+var_140]
//   0xB50AF mov     dword ptr [r15], 9
//   0xB50B6 test    byte ptr [rax+4], 80h
//   0xB50BA jnz     short loc_B50CF
//   0xB50BC mov     rdi, rax
//   0xB50BF call    sub_11D5A0
//   0xB50C4 mov     eax, [rbx+18h]
//   0xB50C7 and     ah, 0FDh
//   0xB50CA or      al, 80h
//   0xB50CC mov     [rbx+18h], eax
//   0xB50CF mov     rdi, r14
//   0xB50D2 mov     r14d, 7
//   0xB50D8 call    sub_93B40
//   0xB50DD mov     rdi, r12
//   0xB50E0 call    sub_11CDA0
//   0xB50E5 jmp     loc_B3BA0
//   0xB50EA cmp     byte ptr [r12+20h], 1
//   0xB50F0 jnz     loc_B3EF3
//   0xB50F6 mov     eax, [r12+28h]
//   0xB50FB cmp     [r13+38h], eax
//   0xB50FF jnz     loc_B3EF3
//   0xB5105 cmp     byte ptr [r12+30h], 1
//   0xB510B jnz     loc_B3EF3
//   0xB5111 mov     eax, [r12+38h]
//   0xB5116 cmp     [r13+3Ch], eax
//   0xB511A jnz     loc_B3EF3
//   0xB5120 jmp     loc_B45BE
//   0xB5125 mov     rbx, rax
//   0xB5128 jmp     loc_3165A
//   0xB512D mov     rbx, rax
//   0xB5130 jmp     loc_31691
//   0xB5135 mov     rbx, rax
//   0xB5138 jmp     loc_316A0
//   0xB513D mov     rbx, rax
//   0xB5140 jmp     loc_316AA
//   0xB5145 mov     rbx, rax
//   0xB5148 jmp     loc_316B8
//   0xB514D mov     rbx, rax
//   0xB5150 jmp     loc_316CA
//   0xB5155 mov     rbx, rax
//   0xB5158 jmp     loc_316F3
//   0xB515D mov     rbx, rax
//   0xB5160 jmp     loc_316D2
//   0xB5165 mov     rbx, rax
//   0xB5168 jmp     loc_31704
//   0xB516D mov     rbx, rax
//   0xB5170 jmp     loc_316C0
//   0xB5175 mov     rbx, rax
//   0xB5178 jmp     loc_316EB
//   0xB517D mov     rbx, rax
//   0xB5180 jmp     loc_31662
// ============================================================

void sub_B36D0(/* signature unknown */)
{
    // see disassembly above
}

