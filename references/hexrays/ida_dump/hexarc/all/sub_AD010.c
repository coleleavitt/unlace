// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xAD010
// Name:           sub_AD010
// Function size:  6837 bytes (1539 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xAD010 push    rbp
//   0xAD011 mov     rbp, rsp
//   0xAD014 push    r15
//   0xAD016 push    r14
//   0xAD018 push    r13
//   0xAD01A push    r12
//   0xAD01C push    rbx
//   0xAD01D sub     rsp, 138h
//   0xAD024 mov     rax, fs:28h
//   0xAD02D mov     [rbp+var_38], rax
//   0xAD031 xor     eax, eax
//   0xAD033 test    rsi, rsi
//   0xAD036 jz      short loc_AD044
//   0xAD038 mov     r15, rsi
//   0xAD03B test    dword ptr [rsi+4], 40010h
//   0xAD042 jz      short loc_AD078
//   0xAD044 mov     byte ptr [rbp+var_138], 0
//   0xAD04B mov     rax, [rbp+var_38]
//   0xAD04F sub     rax, fs:28h
//   0xAD058 jnz     loc_AE5E0
//   0xAD05E movzx   eax, byte ptr [rbp+var_138]
//   0xAD065 lea     rsp, [rbp-28h]
//   0xAD069 pop     rbx
//   0xAD06A pop     r12
//   0xAD06C pop     r13
//   0xAD06E pop     r14
//   0xAD070 pop     r15
//   0xAD072 pop     rbp
//   0xAD073 retn
//   0xAD074 align 8
//   0xAD078 test    byte ptr [rsi+41h], 2
//   0xAD07C jnz     short loc_AD044
//   0xAD07E mov     rbx, rdi
//   0xAD081 mov     rdi, [rdi+40h]
//   0xAD085 call    sub_9BF90
//   0xAD08A mov     byte ptr [rbp+var_138], al
//   0xAD090 test    al, al
//   0xAD092 jnz     short loc_AD044
//   0xAD094 mov     rdi, [rbx+1E0h]
//   0xAD09B mov     rcx, r15
//   0xAD09E mov     rdx, rbx
//   0xAD0A1 mov     esi, 0Ch
//   0xAD0A6 call    sub_3368C0
//   0xAD0AB test    eax, eax
//   0xAD0AD jnz     loc_AD4B0
//   0xAD0B3 mov     rax, [rbx+1E0h]
//   0xAD0BA pxor    xmm0, xmm0
//   0xAD0BE cmp     dword ptr [r15], 3Ch; switch 61 cases
//   0xAD0C2 mov     [rbp+var_120], 0
//   0xAD0CD mov     [rbp+var_118], 0
//   0xAD0D8 mov     [rbp+var_110], 0
//   0xAD0E3 mov     r13, [rax+70h]
//   0xAD0E7 mov     [rbp+var_F0], 0
//   0xAD0F2 mov     [rbp+var_E8], 0
//   0xAD0FD mov     [rbp+var_E0], 0
//   0xAD108 movups  [rbp+var_108], xmm0
//   0xAD10F movups  [rbp+var_D8], xmm0
//   0xAD116 ja      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAD11C mov     eax, [r15]
//   0xAD11F lea     rdx, jpt_AD12D
//   0xAD126 movsxd  rax, ds:(jpt_AD12D - 3FA7ACh)[rdx+rax*4]
//   0xAD12A add     rax, rdx
//   0xAD12D jmp     rax; switch jump
//   0xAD12F lea     r14, [rbp+var_60]; jumptable 00000000000AD12D case 60
//   0xAD133 xor     ecx, ecx
//   0xAD135 mov     rdx, r15
//   0xAD138 mov     rsi, rbx
//   0xAD13B mov     rdi, r14
//   0xAD13E call    sub_11DFC0
//   0xAD143 lea     rdi, [rbp+var_120]
//   0xAD14A mov     rsi, r14
//   0xAD14D call    sub_5E350
//   0xAD152 mov     rdi, [rbp+var_110]
//   0xAD159 pxor    xmm0, xmm0
//   0xAD15D mov     r12, [rbp+var_50]
//   0xAD161 mov     [rbp+var_50], 0
//   0xAD169 movdqu  xmm1, [rbp+var_48]
//   0xAD16E movups  [rbp+var_48], xmm0
//   0xAD172 test    rdi, rdi
//   0xAD175 jz      loc_ADD41
//   0xAD17B movaps  [rbp+var_150], xmm1
//   0xAD182 mov     qword ptr [rbp+var_108], 0
//   0xAD18D call    _qfree
//   0xAD192 mov     rdi, [rbp+var_50]
//   0xAD196 movdqa  xmm1, [rbp+var_150]
//   0xAD19E mov     [rbp+var_110], r12
//   0xAD1A5 movups  [rbp+var_108], xmm1
//   0xAD1AC test    rdi, rdi
//   0xAD1AF jz      short loc_AD1BE
//   0xAD1B1 mov     qword ptr [rbp+var_48], 0
//   0xAD1B9 call    _qfree
//   0xAD1BE mov     rdi, [rbp+var_60]
//   0xAD1C2 call    _qfree
//   0xAD1C7 xor     ecx, ecx
//   0xAD1C9 mov     rdx, r15
//   0xAD1CC mov     rsi, rbx
//   0xAD1CF mov     rdi, r14
//   0xAD1D2 call    sub_121360
//   0xAD1D7 lea     rdi, [rbp+var_F0]
//   0xAD1DE mov     rsi, r14
//   0xAD1E1 call    sub_5E350
//   0xAD1E6 mov     rdi, [rbp+var_E0]
//   0xAD1ED pxor    xmm0, xmm0
//   0xAD1F1 mov     r12, [rbp+var_50]
//   0xAD1F5 mov     [rbp+var_50], 0
//   0xAD1FD movdqu  xmm1, [rbp+var_48]
//   0xAD202 movups  [rbp+var_48], xmm0
//   0xAD206 test    rdi, rdi
//   0xAD209 jz      loc_ADD54
//   0xAD20F movaps  [rbp+var_150], xmm1
//   0xAD216 mov     qword ptr [rbp+var_D8], 0
//   0xAD221 call    _qfree
//   0xAD226 mov     rdi, [rbp+var_50]
//   0xAD22A movdqa  xmm1, [rbp+var_150]
//   0xAD232 mov     [rbp+var_E0], r12
//   0xAD239 movups  [rbp+var_D8], xmm1
//   0xAD240 test    rdi, rdi
//   0xAD243 jz      short loc_AD252
//   0xAD245 mov     qword ptr [rbp+var_48], 0
//   0xAD24D call    _qfree
//   0xAD252 mov     rdi, [rbp+var_60]
//   0xAD256 call    _qfree
//   0xAD25B mov     r12, [r15+10h]
//   0xAD25F test    r12, r12
//   0xAD262 jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAD268 lea     rax, [rbp+var_90]
//   0xAD26F mov     qword ptr [rbp+var_150], rax
//   0xAD276 nop     word ptr [rax+rax+00000000h]
//   0xAD280 mov     eax, [r12]
//   0xAD284 lea     edx, [rax-38h]
//   0xAD287 cmp     edx, 1
//   0xAD28A jbe     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAD290 cmp     eax, 3Bh ; ';'
//   0xAD293 jnz     loc_AD3E3
//   0xAD299 mov     eax, [r15+44h]
//   0xAD29D cmp     [r12+24h], eax
//   0xAD2A2 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAD2A8 mov     rsi, [r12+18h]
//   0xAD2AD mov     rdi, [rbx+40h]
//   0xAD2B1 call    sub_1C8C90
//   0xAD2B6 mov     rsi, [r15+18h]
//   0xAD2BA mov     rdi, [rbx+40h]
//   0xAD2BE mov     [rbp+var_140], rax
//   0xAD2C5 call    sub_1C8C90
//   0xAD2CA mov     rcx, rax
//   0xAD2CD movsxd  rdx, dword ptr [r15+44h]
//   0xAD2D1 mov     rax, [rbp+var_140]
//   0xAD2D8 mov     [rbp+var_140], rcx
//   0xAD2DF sub     rax, rdx
//   0xAD2E2 cmp     rax, rcx
//   0xAD2E5 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAD2EB mov     edx, [r13+54h]
//   0xAD2EF mov     esi, [r13+3Ch]
//   0xAD2F3 mov     [rbp+var_90], 0
//   0xAD2FE mov     rdi, qword ptr [rbp+var_150]
//   0xAD305 mov     [rbp+var_88], 0
//   0xAD310 call    sub_5D900
//   0xAD315 mov     rax, [rbx+40h]
//   0xAD319 pxor    xmm0, xmm0
//   0xAD31D mov     [rbp+var_80], 0
//   0xAD325 movups  [rbp+var_78], xmm0
//   0xAD329 mov     rcx, [rbp+var_140]
//   0xAD330 movsxd  rdx, dword ptr [r13+50h]
//   0xAD334 add     rcx, [rax+5A0h]
//   0xAD33B mov     rdi, qword ptr [rbp+var_150]
//   0xAD342 mov     rsi, rcx
//   0xAD345 call    sub_11C460
//   0xAD34A mov     rdx, [r12+8]
//   0xAD34F xor     r8d, r8d
//   0xAD352 mov     rcx, r15
//   0xAD355 mov     rdi, rbx
//   0xAD358 mov     rsi, qword ptr [rbp+var_150]
//   0xAD35F call    sub_A36D0
//   0xAD364 test    rax, rax
//   0xAD367 jnz     loc_AE550
//   0xAD36D mov     ecx, 1
//   0xAD372 mov     rdx, r12
//   0xAD375 mov     rsi, rbx
//   0xAD378 mov     rdi, r14
//   0xAD37B call    sub_11DFC0
//   0xAD380 mov     rdx, [r12+8]
//   0xAD385 mov     rcx, r15
//   0xAD388 mov     rsi, r14
//   0xAD38B mov     rdi, rbx
//   0xAD38E mov     r8d, 1
//   0xAD394 call    sub_A33E0
//   0xAD399 test    rax, rax
//   0xAD39C jz      loc_AE4AA
//   0xAD3A2 mov     rdi, [rbp+var_50]
//   0xAD3A6 test    rdi, rdi
//   0xAD3A9 jz      short loc_AD3B8
//   0xAD3AB mov     qword ptr [rbp+var_48], 0
//   0xAD3B3 call    _qfree
//   0xAD3B8 mov     rdi, [rbp+var_60]
//   0xAD3BC call    _qfree
//   0xAD3C1 mov     rdi, [rbp+var_80]
//   0xAD3C5 test    rdi, rdi
//   0xAD3C8 jz      short loc_AD3D7
//   0xAD3CA mov     qword ptr [rbp+var_78], 0
//   0xAD3D2 call    _qfree
//   0xAD3D7 mov     rdi, [rbp+var_90]
//   0xAD3DE call    _qfree
//   0xAD3E3 xor     ecx, ecx
//   0xAD3E5 mov     rdx, r12
//   0xAD3E8 mov     rsi, rbx
//   0xAD3EB mov     rdi, r14
//   0xAD3EE call    sub_121360
//   0xAD3F3 lea     rsi, [rbp+var_120]
//   0xAD3FA mov     rdi, r14
//   0xAD3FD call    sub_5E200
//   0xAD402 test    al, al
//   0xAD404 jz      loc_ADCD0
//   0xAD40A mov     rdi, [rbp+var_50]
//   0xAD40E test    rdi, rdi
//   0xAD411 jz      short loc_AD420
//   0xAD413 mov     qword ptr [rbp+var_48], 0
//   0xAD41B call    _qfree
//   0xAD420 mov     rdi, [rbp+var_60]
//   0xAD424 call    _qfree
//   0xAD429 nop     dword ptr [rax+00000000h]
//   0xAD430 mov     rsi, r15; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAD433 mov     rdi, rbx
//   0xAD436 call    sub_A5B40
//   0xAD43B test    al, al
//   0xAD43D jnz     loc_ADCC0
//   0xAD443 mov     rsi, r15
//   0xAD446 mov     rdi, rbx
//   0xAD449 call    sub_184370
//   0xAD44E test    al, al
//   0xAD450 jnz     loc_ADD20
//   0xAD456 mov     rdi, [rbp+var_E0]
//   0xAD45D test    rdi, rdi
//   0xAD460 jz      short loc_AD472
//   0xAD462 mov     qword ptr [rbp+var_D8], 0
//   0xAD46D call    _qfree
//   0xAD472 mov     rdi, [rbp+var_F0]
//   0xAD479 call    _qfree
//   0xAD47E mov     rdi, [rbp+var_110]
//   0xAD485 test    rdi, rdi
//   0xAD488 jz      short loc_AD49A
//   0xAD48A mov     qword ptr [rbp+var_108], 0
//   0xAD495 call    _qfree
//   0xAD49A mov     rdi, [rbp+var_120]
//   0xAD4A1 call    _qfree
//   0xAD4A6 jmp     loc_AD04B
//   0xAD4AB align 10h
//   0xAD4B0 cmp     eax, 0FFFFFFFFh
//   0xAD4B3 setnz   byte ptr [rbp+var_138]
//   0xAD4BA jmp     loc_AD04B
//   0xAD4BF align 20h
//   0xAD4C0 mov     rsi, r15; jumptable 00000000000AD12D cases 29,30,34,35,39,40,45,46,50,51
//   0xAD4C3 mov     rdi, rbx
//   0xAD4C6 call    sub_91BC0
//   0xAD4CB test    al, al
//   0xAD4CD jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAD4D3 mov     r14d, 2Fh ; '/'
//   0xAD4D9 nop     dword ptr [rax+00000000h]
//   0xAD4E0 mov     rdi, r15
//   0xAD4E3 call    sub_1AF340
//   0xAD4E8 mov     rcx, rax
//   0xAD4EB mov     edx, r14d
//   0xAD4EE lea     rsi, aCmbDS; "cmb%d: %s"
//   0xAD4F5 mov     rdi, rbx
//   0xAD4F8 xor     eax, eax
//   0xAD4FA call    sub_9BE60
//   0xAD4FF mov     byte ptr [rbp+var_138], 1
//   0xAD506 jmp     loc_AD456
//   0xAD50B align 10h
//   0xAD510 mov     rsi, r15; jumptable 00000000000AD12D case 19
//   0xAD513 mov     rdi, rbx
//   0xAD516 call    sub_94E40
//   0xAD51B test    al, al
//   0xAD51D jnz     loc_ADD36
//   0xAD523 mov     rsi, r15
//   0xAD526 mov     rdi, rbx
//   0xAD529 call    sub_90230
//   0xAD52E test    al, al
//   0xAD530 jnz     loc_ADD67
//   0xAD536 mov     rsi, r15
//   0xAD539 mov     rdi, rbx
//   0xAD53C call    sub_91E80
//   0xAD541 test    al, al
//   0xAD543 jnz     loc_AE1D6
//   0xAD549 mov     rsi, r15
//   0xAD54C mov     rdi, rbx
//   0xAD54F call    sub_910B0
//   0xAD554 test    al, al
//   0xAD556 jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAD55C mov     r14d, 39h ; '9'
//   0xAD562 jmp     loc_AD4E0
//   0xAD567 pxor    xmm0, xmm0; jumptable 00000000000AD12D case 4
//   0xAD56B lea     rdx, [r15+40h]
//   0xAD56F mov     ecx, 1
//   0xAD574 mov     rdi, rbx
//   0xAD577 lea     r14, [rbp+var_C0]
//   0xAD57E movups  [rbp+var_78], xmm0
//   0xAD582 lea     r12, [rbp+var_90]
//   0xAD589 mov     rsi, r14
//   0xAD58C mov     [rbp+var_C0], 0
//   0xAD597 mov     [rbp+var_B8], 0
//   0xAD5A2 mov     [rbp+var_B0], 0
//   0xAD5AD mov     [rbp+var_90], 0
//   0xAD5B8 mov     [rbp+var_88], 0
//   0xAD5C3 mov     [rbp+var_80], 0
//   0xAD5CB mov     [rbp+var_140], rdx
//   0xAD5D2 mov     qword ptr [rbp+var_150], r14
//   0xAD5D9 movups  [rbp+var_A8], xmm0
//   0xAD5E0 call    sub_121920
//   0xAD5E5 sub     rsp, 8
//   0xAD5E9 mov     rdx, [r15+10h]
//   0xAD5ED mov     r9d, 80h
//   0xAD5F3 xor     ecx, ecx
//   0xAD5F5 push    101h
//   0xAD5FA mov     r8, r12
//   0xAD5FD mov     rsi, r14
//   0xAD600 mov     rdi, rbx
//   0xAD603 call    sub_122A90
//   0xAD608 mov     r11, rax
//   0xAD60B pop     r14
//   0xAD60D pop     rax
//   0xAD60E test    r11, r11
//   0xAD611 jz      short loc_AD655
//   0xAD613 movzx   eax, byte ptr [r15+40h]
//   0xAD618 cmp     [r11+40h], al
//   0xAD61C jz      loc_AE1B0
//   0xAD622 cmp     dword ptr [r15+44h], 4
//   0xAD627 jg      short loc_AD655
//   0xAD629 mov     eax, [r11]
//   0xAD62C sub     eax, 8
//   0xAD62F cmp     eax, 1
//   0xAD632 jbe     loc_AE38E
//   0xAD638 mov     rcx, qword ptr [rbp+var_150]
//   0xAD63F mov     rdx, r15
//   0xAD642 mov     rsi, r11
//   0xAD645 mov     rdi, rbx
//   0xAD648 call    sub_A7D90
//   0xAD64D test    al, al
//   0xAD64F jnz     loc_AE575
//   0xAD655 mov     rdi, [rbp+var_80]
//   0xAD659 test    rdi, rdi
//   0xAD65C jz      short loc_AD66B
//   0xAD65E mov     qword ptr [rbp+var_78], 0
//   0xAD666 call    _qfree
//   0xAD66B mov     rdi, [rbp+var_90]
//   0xAD672 call    _qfree
//   0xAD677 mov     rdi, [rbp+var_B0]
//   0xAD67E test    rdi, rdi
//   0xAD681 jz      short loc_AD693
//   0xAD683 mov     qword ptr [rbp+var_A8], 0
//   0xAD68E call    _qfree
//   0xAD693 mov     rdi, [rbp+var_C0]
//   0xAD69A call    _qfree
//   0xAD69F mov     rsi, r15
//   0xAD6A2 mov     rdi, rbx
//   0xAD6A5 call    sub_1808D0
//   0xAD6AA test    al, al
//   0xAD6AC jnz     loc_AD7A3
//   0xAD6B2 cmp     dword ptr [r15+44h], 2; jumptable 00000000000AD12D case 9
//   0xAD6B7 jg      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAD6BD lea     r14, [rbp+var_60]
//   0xAD6C1 lea     rdi, [r15+20h]
//   0xAD6C5 xor     edx, edx
//   0xAD6C7 mov     rsi, r14
//   0xAD6CA call    sub_1196C0
//   0xAD6CF test    al, al
//   0xAD6D1 jz      short loc_AD6DE
//   0xAD6D3 cmp     [rbp+var_60], 0
//   0xAD6D8 jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAD6DE lea     rax, [r15+40h]
//   0xAD6E2 lea     r12, [rbp+var_90]
//   0xAD6E9 mov     rsi, rax
//   0xAD6EC mov     rdi, r12
//   0xAD6EF mov     qword ptr [rbp+var_150], rax
//   0xAD6F6 call    sub_11D380
//   0xAD6FB sub     rsp, 8
//   0xAD6FF xor     r9d, r9d
//   0xAD702 mov     rcx, r12
//   0xAD705 mov     rdx, r15
//   0xAD708 push    0
//   0xAD70A mov     eax, dword ptr [rbp+var_90+4]
//   0xAD710 mov     rsi, rbx
//   0xAD713 mov     rdi, r13
//   0xAD716 lea     r8d, [rax+rax]
//   0xAD71A call    sub_12B070
//   0xAD71F pop     rsi
//   0xAD720 pop     rdi
//   0xAD721 test    al, al
//   0xAD723 jz      loc_AE59F
//   0xAD729 lea     rsi, [rbp+var_F0]
//   0xAD730 mov     ecx, 1
//   0xAD735 mov     rdx, r12
//   0xAD738 mov     rdi, rbx
//   0xAD73B call    sub_121920
//   0xAD740 sub     rsp, 8
//   0xAD744 mov     rdx, [r15+10h]
//   0xAD748 xor     r9d, r9d
//   0xAD74B xor     r8d, r8d
//   0xAD74E push    101h
//   0xAD753 lea     rsi, [rbp+var_F0]
//   0xAD75A xor     ecx, ecx
//   0xAD75C mov     rdi, rbx
//   0xAD75F call    sub_122A90
//   0xAD764 mov     [rbp+var_140], rax
//   0xAD76B pop     rdx
//   0xAD76C pop     rcx
//   0xAD76D test    rax, rax
//   0xAD770 jz      short loc_AD77B
//   0xAD772 cmp     dword ptr [rax], 4
//   0xAD775 jz      loc_AE70B
//   0xAD77B mov     rdi, r12
//   0xAD77E call    sub_1166E0
//   0xAD783 jmp     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAD788 align 10h
//   0xAD790 mov     rsi, r15; jumptable 00000000000AD12D case 2
//   0xAD793 mov     rdi, rbx
//   0xAD796 call    sub_1808D0
//   0xAD79B test    al, al
//   0xAD79D jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAD7A3 mov     r14d, 21h ; '!'
//   0xAD7A9 jmp     loc_AD4E0
//   0xAD7AE mov     rsi, r15; jumptable 00000000000AD12D case 14
//   0xAD7B1 mov     rdi, rbx
//   0xAD7B4 call    sub_90DC0
//   0xAD7B9 test    al, al
//   0xAD7BB jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAD7C1 mov     r14d, 2Ah ; '*'
//   0xAD7C7 jmp     loc_AD4E0
//   0xAD7CC mov     rsi, r15; jumptable 00000000000AD12D case 13
//   0xAD7CF mov     rdi, rbx
//   0xAD7D2 call    sub_96320
//   0xAD7D7 test    al, al
//   0xAD7D9 jnz     loc_ADD2B
//   0xAD7DF mov     rsi, r15
//   0xAD7E2 mov     rdi, rbx
//   0xAD7E5 call    sub_93580
//   0xAD7EA test    al, al
//   0xAD7EC jnz     loc_AD9AE
//   0xAD7F2 mov     rsi, r15
//   0xAD7F5 mov     rdi, rbx
//   0xAD7F8 call    sub_986B0
//   0xAD7FD test    al, al
//   0xAD7FF jnz     loc_AE489
//   0xAD805 mov     rsi, r15
//   0xAD808 mov     rdi, rbx
//   0xAD80B call    sub_90BA0
//   0xAD810 test    al, al
//   0xAD812 jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAD818 mov     r14d, 38h ; '8'
//   0xAD81E jmp     loc_AD4E0
//   0xAD823 align 8
//   0xAD828 cmp     byte ptr [r15+20h], 1; jumptable 00000000000AD12D case 12
//   0xAD82D jz      loc_ADE16
//   0xAD833 mov     rsi, r15
//   0xAD836 mov     rdi, rbx
//   0xAD839 call    sub_96320
//   0xAD83E test    al, al
//   0xAD840 jnz     loc_ADD2B
//   0xAD846 mov     rsi, r15
//   0xAD849 mov     rdi, rbx
//   0xAD84C call    sub_97810
//   0xAD851 test    al, al
//   0xAD853 jnz     loc_AE1E1
//   0xAD859 mov     rsi, r15
//   0xAD85C mov     rdi, rbx
//   0xAD85F call    sub_92D50
//   0xAD864 test    al, al
//   0xAD866 jnz     loc_AE47E
//   0xAD86C mov     rsi, r15
//   0xAD86F mov     rdi, rbx
//   0xAD872 call    sub_98CB0
//   0xAD877 test    al, al
//   0xAD879 jnz     loc_AE49F
//   0xAD87F mov     rsi, r15
//   0xAD882 mov     rdi, rbx
//   0xAD885 call    sub_96460
//   0xAD88A test    al, al
//   0xAD88C jnz     loc_AE594
//   0xAD892 mov     rsi, r15
//   0xAD895 mov     rdi, rbx
//   0xAD898 call    sub_8FAC0
//   0xAD89D test    al, al
//   0xAD89F jnz     loc_AE5D5
//   0xAD8A5 mov     rsi, r15
//   0xAD8A8 mov     rdi, rbx
//   0xAD8AB call    sub_8FE90
//   0xAD8B0 test    al, al
//   0xAD8B2 jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAD8B8 mov     r14d, 2Dh ; '-'
//   0xAD8BE jmp     loc_AD4E0
//   0xAD8C3 align 8
//   0xAD8C8 mov     rsi, r15; jumptable 00000000000AD12D case 24
//   0xAD8CB mov     rdi, rbx
//   0xAD8CE call    sub_98340
//   0xAD8D3 test    al, al
//   0xAD8D5 jnz     loc_ADDEA
//   0xAD8DB mov     rsi, r15
//   0xAD8DE mov     rdi, rbx
//   0xAD8E1 call    sub_92020
//   0xAD8E6 test    al, al
//   0xAD8E8 jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAD8EE mov     r14d, 34h ; '4'
//   0xAD8F4 jmp     loc_AD4E0
//   0xAD8F9 mov     rsi, r15; jumptable 00000000000AD12D case 23
//   0xAD8FC mov     rdi, rbx
//   0xAD8FF call    sub_90540
//   0xAD904 test    al, al
//   0xAD906 jz      loc_AD510; jumptable 00000000000AD12D case 19
//   0xAD90C mov     r14d, 29h ; ')'
//   0xAD912 jmp     loc_AD4E0
//   0xAD917 mov     rsi, r15; jumptable 00000000000AD12D case 11
//   0xAD91A mov     rdi, rbx
//   0xAD91D call    sub_99700
//   0xAD922 test    al, al
//   0xAD924 jnz     loc_ADE0B
//   0xAD92A mov     rsi, r15
//   0xAD92D mov     rdi, rbx
//   0xAD930 call    sub_968F0
//   0xAD935 test    al, al
//   0xAD937 jnz     loc_AE1F7
//   0xAD93D mov     rsi, r15
//   0xAD940 mov     rdi, rbx
//   0xAD943 call    sub_95240
//   0xAD948 test    al, al
//   0xAD94A jnz     loc_AE468
//   0xAD950 mov     rsi, r15
//   0xAD953 mov     rdi, rbx
//   0xAD956 call    sub_96C10
//   0xAD95B test    al, al
//   0xAD95D jnz     loc_AE494
//   0xAD963 mov     rsi, r15
//   0xAD966 mov     rdi, rbx
//   0xAD969 call    sub_99F50
//   0xAD96E test    al, al
//   0xAD970 jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAD976 mov     r14d, 36h ; '6'
//   0xAD97C jmp     loc_AD4E0
//   0xAD981 align 8
//   0xAD988 mov     rsi, r15; jumptable 00000000000AD12D case 5
//   0xAD98B mov     rdi, rbx
//   0xAD98E call    sub_986B0
//   0xAD993 test    al, al
//   0xAD995 jnz     loc_AE489
//   0xAD99B mov     rsi, r15
//   0xAD99E mov     rdi, rbx
//   0xAD9A1 call    sub_93580
//   0xAD9A6 test    al, al
//   0xAD9A8 jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAD9AE mov     r14d, 12h
//   0xAD9B4 jmp     loc_AD4E0
//   0xAD9B9 cmp     byte ptr [r15+30h], 1; jumptable 00000000000AD12D case 1
//   0xAD9BE jz      loc_ADF80
//   0xAD9C4 mov     rsi, r15
//   0xAD9C7 mov     rdi, rbx
//   0xAD9CA call    sub_94430
//   0xAD9CF test    al, al
//   0xAD9D1 jnz     loc_ADDF5
//   0xAD9D7 mov     rsi, r15
//   0xAD9DA mov     rdi, rbx
//   0xAD9DD call    sub_184640
//   0xAD9E2 test    al, al
//   0xAD9E4 jz      loc_AD790; jumptable 00000000000AD12D case 2
//   0xAD9EA mov     r14d, 3Bh ; ';'
//   0xAD9F0 jmp     loc_AD4E0
//   0xAD9F5 mov     rsi, r15; jumptable 00000000000AD12D case 10
//   0xAD9F8 mov     rdi, rbx
//   0xAD9FB call    sub_94AA0
//   0xADA00 test    al, al
//   0xADA02 jnz     loc_ADE00
//   0xADA08 mov     rsi, r15
//   0xADA0B mov     rdi, rbx
//   0xADA0E call    sub_99BF0
//   0xADA13 test    al, al
//   0xADA15 jnz     loc_AE1EC
//   0xADA1B mov     rsi, r15
//   0xADA1E mov     rdi, rbx
//   0xADA21 call    sub_94C00
//   0xADA26 test    al, al
//   0xADA28 jnz     loc_AE473
//   0xADA2E mov     rsi, r15
//   0xADA31 mov     rdi, rbx
//   0xADA34 call    sub_92380
//   0xADA39 test    al, al
//   0xADA3B jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADA41 mov     r14d, 37h ; '7'
//   0xADA47 jmp     loc_AD4E0
//   0xADA4C align 10h
//   0xADA50 cmp     byte ptr [r15+40h], 8; jumptable 00000000000AD12D case 56
//   0xADA55 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADA5B mov     rax, [r15+48h]
//   0xADA5F mov     eax, [rax+11Ch]
//   0xADA65 cmp     eax, 5
//   0xADA68 jz      loc_ADD72
//   0xADA6E cmp     eax, 22h ; '"'
//   0xADA71 jz      loc_ADD72
//   0xADA77 mov     edx, eax
//   0xADA79 and     edx, 0FFFFFFDFh
//   0xADA7C cmp     edx, 2
//   0xADA7F jz      loc_ADDB4
//   0xADA85 cmp     eax, 2
//   0xADA88 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADA8E mov     rsi, r15
//   0xADA91 mov     rdi, rbx
//   0xADA94 call    sub_183C00
//   0xADA99 test    al, al
//   0xADA9B jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADAA1 mov     r14d, 1Ch
//   0xADAA7 jmp     loc_AD4E0
//   0xADAAC align 10h
//   0xADAB0 cmp     byte ptr [r15+20h], 6; jumptable 00000000000AD12D case 55
//   0xADAB5 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADABB mov     rax, [rbx+40h]
//   0xADABF mov     rsi, [r15+28h]
//   0xADAC3 cmp     [rax+28h], rsi
//   0xADAC7 jz      short loc_ADADA
//   0xADAC9 lea     rdi, [rax+8]
//   0xADACD call    sub_32B2E0
//   0xADAD2 test    al, al
//   0xADAD4 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADADA mov     esi, [r13+3Ch]
//   0xADADE mov     r9d, 1
//   0xADAE4 xor     r8d, r8d
//   0xADAE7 xor     ecx, ecx
//   0xADAE9 mov     rdx, r15
//   0xADAEC mov     rdi, rbx
//   0xADAEF call    sub_11E4A0
//   0xADAF4 mov     r12, rax
//   0xADAF7 test    rax, rax
//   0xADAFA jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADB00 cmp     dword ptr [rax], 3Bh ; ';'
//   0xADB03 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADB09 mov     eax, [r13+54h]
//   0xADB0D cmp     [r12+24h], eax
//   0xADB12 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADB18 mov     rsi, [r15+18h]
//   0xADB1C mov     rdi, [rbx+40h]
//   0xADB20 lea     r14, [r12+20h]
//   0xADB25 call    sub_9BF20
//   0xADB2A mov     rsi, rax
//   0xADB2D xor     edx, edx
//   0xADB2F mov     rdi, r14
//   0xADB32 call    sub_9BC90
//   0xADB37 test    al, al
//   0xADB39 jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADB3F mov     rdi, [r15+28h]
//   0xADB43 call    _get_func
//   0xADB48 test    rax, rax
//   0xADB4B jz      short loc_ADB83
//   0xADB4D test    byte ptr [rax+10h], 2
//   0xADB51 jz      short loc_ADB83
//   0xADB53 mov     esi, [r13+3Ch]
//   0xADB57 mov     r9d, 1
//   0xADB5D xor     r8d, r8d
//   0xADB60 xor     ecx, ecx
//   0xADB62 mov     rdx, r12
//   0xADB65 mov     rdi, rbx
//   0xADB68 call    sub_11E4A0
//   0xADB6D mov     rsi, rax
//   0xADB70 mov     rdi, r13
//   0xADB73 mov     r14, rax
//   0xADB76 call    sub_9BF60
//   0xADB7B test    al, al
//   0xADB7D jnz     loc_AE974
//   0xADB83 mov     rdi, r12
//   0xADB86 call    sub_116EE0
//   0xADB8B mov     eax, [rbx+18h]
//   0xADB8E mov     r14d, 4
//   0xADB94 and     ah, 0FDh
//   0xADB97 or      al, 80h
//   0xADB99 mov     [rbx+18h], eax
//   0xADB9C mov     dword ptr [r15], 38h ; '8'
//   0xADBA3 jmp     loc_AD4E0
//   0xADBA8 align 10h
//   0xADBB0 cmp     byte ptr [r15+20h], 1; jumptable 00000000000AD12D case 59
//   0xADBB5 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADBBB mov     rdi, [r15+10h]
//   0xADBBF call    sub_11C370
//   0xADBC4 mov     r12, rax
//   0xADBC7 test    rax, rax
//   0xADBCA jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADBD0 cmp     dword ptr [rax], 4
//   0xADBD3 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADBD9 movzx   eax, byte ptr [rax+20h]
//   0xADBDD cmp     al, 2
//   0xADBDF jz      short loc_ADBF8
//   0xADBE1 sub     al, 1
//   0xADBE3 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADBE9 mov     rax, [r15+18h]
//   0xADBED cmp     [r12+18h], rax
//   0xADBF2 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADBF8 lea     r13, [r15+20h]
//   0xADBFC lea     rdi, [r12+40h]
//   0xADC01 xor     edx, edx
//   0xADC03 mov     rsi, r13
//   0xADC06 call    sub_11F4A0
//   0xADC0B test    al, al
//   0xADC0D jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADC13 lea     rsi, [r12+20h]
//   0xADC18 mov     rdi, r13
//   0xADC1B call    sub_11EAC0
//   0xADC20 mov     r14d, 9
//   0xADC26 jmp     loc_AD4E0
//   0xADC2B align 10h
//   0xADC30 mov     r12d, [r15+44h]; jumptable 00000000000AD12D case 54
//   0xADC34 mov     esi, [r13+3Ch]
//   0xADC38 mov     r10, r15
//   0xADC3B xor     r14d, r14d
//   0xADC3E mov     r9d, 1
//   0xADC44 xor     r8d, r8d
//   0xADC47 xor     ecx, ecx
//   0xADC49 mov     rdx, r10
//   0xADC4C mov     rdi, rbx
//   0xADC4F call    sub_11E4A0
//   0xADC54 mov     r10, rax
//   0xADC57 test    rax, rax
//   0xADC5A jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADC60 mov     eax, [rax]
//   0xADC62 cmp     eax, 3Bh ; ';'
//   0xADC65 jz      loc_AE202
//   0xADC6B ja      loc_AE090
//   0xADC71 cmp     eax, 0Ch
//   0xADC74 jz      loc_AE340
//   0xADC7A cmp     eax, 0Dh
//   0xADC7D jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADC83 cmp     byte ptr [r10+20h], 1
//   0xADC88 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADC8E mov     esi, [r13+3Ch]
//   0xADC92 cmp     esi, [r10+28h]
//   0xADC96 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADC9C jmp     short loc_ADC3E
//   0xADC9E align 20h
//   0xADCA0 mov     rsi, r15; jumptable 00000000000AD12D case 42
//   0xADCA3 mov     rdi, rbx
//   0xADCA6 call    sub_AC1B0
//   0xADCAB test    al, al
//   0xADCAD jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADCB3 mov     r14d, 23h ; '#'
//   0xADCB9 jmp     loc_AD4E0
//   0xADCBE align 20h
//   0xADCC0 mov     r14d, 1Ah
//   0xADCC6 jmp     loc_AD4E0
//   0xADCCB align 10h
//   0xADCD0 lea     rsi, [rbp+var_110]
//   0xADCD7 lea     rdi, [rbp+var_50]
//   0xADCDB call    sub_3110F0
//   0xADCE0 mov     rdi, [rbp+var_50]
//   0xADCE4 test    al, al
//   0xADCE6 jnz     loc_AD40E
//   0xADCEC test    rdi, rdi
//   0xADCEF jz      short loc_ADCFE
//   0xADCF1 mov     qword ptr [rbp+var_48], 0
//   0xADCF9 call    _qfree
//   0xADCFE mov     rdi, [rbp+var_60]
//   0xADD02 call    _qfree
//   0xADD07 mov     r12, [r12+10h]
//   0xADD0C test    r12, r12
//   0xADD0F jnz     loc_AD280
//   0xADD15 jmp     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADD1A align 20h
//   0xADD20 mov     r14d, 35h ; '5'
//   0xADD26 jmp     loc_AD4E0
//   0xADD2B mov     r14d, 32h ; '2'
//   0xADD31 jmp     loc_AD4E0
//   0xADD36 mov     r14d, 15h
//   0xADD3C jmp     loc_AD4E0
//   0xADD41 mov     [rbp+var_110], r12
//   0xADD48 movups  [rbp+var_108], xmm1
//   0xADD4F jmp     loc_AD1BE
//   0xADD54 mov     [rbp+var_E0], r12
//   0xADD5B movups  [rbp+var_D8], xmm1
//   0xADD62 jmp     loc_AD252
//   0xADD67 mov     r14d, 27h ; '''
//   0xADD6D jmp     loc_AD4E0
//   0xADD72 mov     rdi, [r15+8]
//   0xADD76 call    sub_11C2E0
//   0xADD7B test    rax, rax
//   0xADD7E jz      short loc_ADD96
//   0xADD80 mov     rdx, rax
//   0xADD83 mov     rsi, r15
//   0xADD86 mov     rdi, rbx
//   0xADD89 call    sub_1832C0
//   0xADD8E test    al, al
//   0xADD90 jnz     loc_AE5E5
//   0xADD96 cmp     byte ptr [r15+40h], 8
//   0xADD9B jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADDA1 mov     rax, [r15+48h]
//   0xADDA5 mov     eax, [rax+11Ch]
//   0xADDAB cmp     eax, 5
//   0xADDAE jnz     loc_ADA77
//   0xADDB4 mov     rsi, r15
//   0xADDB7 mov     rdi, rbx
//   0xADDBA call    sub_1808D0
//   0xADDBF test    al, al
//   0xADDC1 jnz     loc_AD7A3
//   0xADDC7 cmp     byte ptr [r15+40h], 8
//   0xADDCC jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xADDD2 mov     rax, [r15+48h]
//   0xADDD6 mov     eax, [rax+11Ch]
//   0xADDDC cmp     eax, 5
//   0xADDDF jz      loc_ADA8E
//   0xADDE5 jmp     loc_ADA85
//   0xADDEA mov     r14d, 1Fh
//   0xADDF0 jmp     loc_AD4E0
//   0xADDF5 mov     r14d, 25h ; '%'
//   0xADDFB jmp     loc_AD4E0
//   0xADE00 mov     r14d, 14h
//   0xADE06 jmp     loc_AD4E0
//   0xADE0B mov     r14d, 13h
//   0xADE11 jmp     loc_AD4E0
//   0xADE16 mov     eax, [r15+28h]
//   0xADE1A cmp     [r13+3Ch], eax
//   0xADE1E jnz     loc_AD833
//   0xADE24 lea     rax, [r15+40h]
//   0xADE28 lea     r14, [r15+20h]
//   0xADE2C xor     edx, edx
//   0xADE2E mov     rsi, rax
//   0xADE31 mov     rdi, r14
//   0xADE34 mov     qword ptr [rbp+var_150], rax
//   0xADE3B call    sub_11F4A0
//   0xADE40 test    al, al
//   0xADE42 jz      loc_AD833
//   0xADE48 cmp     byte ptr [r15+30h], 2
//   0xADE4D jnz     loc_AD833
//   0xADE53 lea     rdx, [rbp+var_F0]
//   0xADE5A xor     r8d, r8d
//   0xADE5D mov     rcx, r15
//   0xADE60 mov     rdi, rbx
//   0xADE63 lea     rsi, [rbp+var_120]
//   0xADE6A call    sub_123480
//   0xADE6F mov     r12, rax
//   0xADE72 test    rax, rax
//   0xADE75 jz      loc_AD833
//   0xADE7B lea     rax, [r15+30h]
//   0xADE7F movsxd  rsi, dword ptr [r12+44h]
//   0xADE84 mov     edx, 1
//   0xADE89 mov     rdi, rax
//   0xADE8C mov     [rbp+var_140], rax
//   0xADE93 call    sub_9BC90
//   0xADE98 test    al, al
//   0xADE9A jz      loc_AD833
//   0xADEA0 mov     eax, [r12]
//   0xADEA4 cmp     eax, 2
//   0xADEA7 jz      loc_AEA2A
//   0xADEAD cmp     eax, 4
//   0xADEB0 jnz     loc_AD833
//   0xADEB6 cmp     byte ptr [r12+20h], 4
//   0xADEBC jnz     loc_AD833
//   0xADEC2 mov     rax, [r12+28h]
//   0xADEC7 cmp     dword ptr [rax], 2
//   0xADECA jnz     loc_AD833
//   0xADED0 cmp     byte ptr [rax+20h], 1
//   0xADED4 jnz     loc_AD833
//   0xADEDA mov     ecx, [rax+28h]
//   0xADEDD cmp     [r13+38h], ecx
//   0xADEE1 jnz     loc_AD833
//   0xADEE7 cmp     byte ptr [rax+30h], 1
//   0xADEEB jnz     loc_AD833
//   0xADEF1 mov     eax, [rax+38h]
//   0xADEF4 cmp     [r13+3Ch], eax
//   0xADEF8 jnz     loc_AD833
//   0xADEFE lea     rdx, [rbp+var_F0]
//   0xADF05 mov     r8, r15
//   0xADF08 mov     rcx, r12
//   0xADF0B mov     rdi, rbx
//   0xADF0E lea     rsi, [rbp+var_120]
//   0xADF15 call    sub_A9C10
//   0xADF1A test    al, al
//   0xADF1C jz      loc_AD833
//   0xADF22 mov     dword ptr [r15], 3Ch ; '<'
//   0xADF29 mov     rax, [r15+18h]
//   0xADF2D lea     rsi, [r12+40h]
//   0xADF32 mov     rdx, [r12+18h]
//   0xADF37 mov     rdi, qword ptr [rbp+var_150]
//   0xADF3E mov     [r15+18h], rdx
//   0xADF42 mov     [r12+18h], rax
//   0xADF47 call    sub_116350
//   0xADF4C mov     rdi, r14
//   0xADF4F call    sub_1166E0
//   0xADF54 mov     rdi, [rbp+var_140]
//   0xADF5B call    sub_1166E0
//   0xADF60 mov     rdi, r12
//   0xADF63 call    sub_116EE0
//   0xADF68 mov     eax, [rbx+18h]
//   0xADF6B mov     r14d, 2
//   0xADF71 and     ah, 0FDh
//   0xADF74 or      al, 90h
//   0xADF76 mov     [rbx+18h], eax
//   0xADF79 jmp     loc_AD4E0
//   0xADF7E align 20h
//   0xADF80 mov     eax, [r15+38h]
//   0xADF84 cmp     [r13+38h], eax
//   0xADF88 jnz     loc_AD9C4
//   0xADF8E cmp     byte ptr [r15+40h], 1
//   0xADF93 jnz     loc_AD9C4
//   0xADF99 mov     eax, [r15+48h]
//   0xADF9D cmp     [r13+3Ch], eax
//   0xADFA1 jnz     loc_AD9C4
//   0xADFA7 lea     rdx, [rbp+var_F0]
//   0xADFAE xor     r8d, r8d
//   0xADFB1 mov     rcx, r15
//   0xADFB4 mov     rdi, rbx
//   0xADFB7 lea     rsi, [rbp+var_120]
//   0xADFBE call    sub_122C60
//   0xADFC3 mov     r12, rax
//   0xADFC6 test    rax, rax
//   0xADFC9 jz      loc_AD9C4
//   0xADFCF mov     rax, [r15+18h]
//   0xADFD3 cmp     [r12+18h], rax
//   0xADFD8 jnz     loc_AD9C4
//   0xADFDE cmp     dword ptr [r12], 0Dh
//   0xADFE3 jnz     loc_AD9C4
//   0xADFE9 cmp     byte ptr [r12+20h], 1
//   0xADFEF jnz     loc_AD9C4
//   0xADFF5 mov     eax, [r12+28h]
//   0xADFFA cmp     [r13+3Ch], eax
//   0xADFFE jnz     loc_AD9C4
//   0xAE004 lea     rsi, [r12+40h]
//   0xAE009 lea     rdi, [r12+20h]
//   0xAE00E xor     edx, edx
//   0xAE010 call    sub_11F4A0
//   0xAE015 test    al, al
//   0xAE017 jz      loc_AD9C4
//   0xAE01D movsxd  rsi, dword ptr [r15+24h]
//   0xAE021 lea     rdi, [r12+30h]
//   0xAE026 mov     edx, 1
//   0xAE02B call    sub_9BC90
//   0xAE030 test    al, al
//   0xAE032 jz      loc_AD9C4
//   0xAE038 lea     rdx, [rbp+var_F0]
//   0xAE03F mov     r8, r15
//   0xAE042 mov     rcx, r12
//   0xAE045 mov     rdi, rbx
//   0xAE048 lea     rsi, [rbp+var_120]
//   0xAE04F call    sub_A9C10
//   0xAE054 test    al, al
//   0xAE056 jz      loc_AD9C4
//   0xAE05C mov     rdi, r12
//   0xAE05F call    sub_116EE0
//   0xAE064 mov     dword ptr [r15], 3Bh ; ';'
//   0xAE06B lea     rdi, [r15+30h]
//   0xAE06F call    sub_1166E0
//   0xAE074 lea     rdi, [r15+40h]
//   0xAE078 call    sub_1166E0
//   0xAE07D or      dword ptr [rbx+18h], 10h
//   0xAE081 mov     r14d, 1
//   0xAE087 jmp     loc_AD4E0
//   0xAE08C align 10h
//   0xAE090 cmp     eax, 3Ch ; '<'
//   0xAE093 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAE099 cmp     byte ptr [r15+40h], 1
//   0xAE09E jz      loc_AE5AC
//   0xAE0A4 cmp     byte ptr [r15+30h], 1
//   0xAE0A9 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAE0AF cmp     byte ptr [r10+40h], 1
//   0xAE0B4 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAE0BA mov     eax, [r15+38h]
//   0xAE0BE cmp     [r10+48h], eax
//   0xAE0C2 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAE0C8 cmp     r12d, [r10+44h]
//   0xAE0CC jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAE0D2 mov     esi, [r13+3Ch]
//   0xAE0D6 mov     r9d, 1
//   0xAE0DC xor     r8d, r8d
//   0xAE0DF xor     ecx, ecx
//   0xAE0E1 mov     rdx, r10
//   0xAE0E4 mov     rdi, rbx
//   0xAE0E7 mov     qword ptr [rbp+var_150], r10
//   0xAE0EE call    sub_11E4A0
//   0xAE0F3 mov     rdi, rax
//   0xAE0F6 test    rax, rax
//   0xAE0F9 jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAE0FF cmp     byte ptr [r15+40h], 1
//   0xAE104 mov     r10, qword ptr [rbp+var_150]
//   0xAE10B jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAE111 cmp     byte ptr [rax+40h], 1
//   0xAE115 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAE11B mov     eax, [rax+48h]
//   0xAE11E cmp     [r15+48h], eax
//   0xAE122 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAE128 cmp     r12d, [rdi+44h]
//   0xAE12C jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAE132 mov     [rbp+var_138], r10
//   0xAE139 call    sub_116EE0
//   0xAE13E mov     eax, [rbx+18h]
//   0xAE141 mov     r10, [rbp+var_138]
//   0xAE148 and     ah, 0FDh
//   0xAE14B or      al, 80h
//   0xAE14D mov     [rbx+18h], eax
//   0xAE150 mov     rdi, r10
//   0xAE153 call    sub_116EE0
//   0xAE158 mov     eax, [rbx+18h]
//   0xAE15B mov     rsi, r15
//   0xAE15E mov     rdi, rbx
//   0xAE161 and     ah, 0FDh
//   0xAE164 or      al, 80h
//   0xAE166 mov     [rbx+18h], eax
//   0xAE169 call    sub_329340
//   0xAE16E test    r14, r14
//   0xAE171 jz      short loc_AE186
//   0xAE173 mov     rdi, r14
//   0xAE176 call    sub_116EE0
//   0xAE17B mov     eax, [rbx+18h]
//   0xAE17E and     ah, 0FDh
//   0xAE181 or      al, 80h
//   0xAE183 mov     [rbx+18h], eax
//   0xAE186 mov     rdi, r15
//   0xAE189 call    sub_1AF340
//   0xAE18E mov     rcx, rax
//   0xAE191 mov     edx, 5
//   0xAE196 mov     rdi, rbx
//   0xAE199 xor     eax, eax
//   0xAE19B lea     rsi, aCmbDS; "cmb%d: %s"
//   0xAE1A2 call    sub_9BE60
//   0xAE1A7 jmp     loc_AD4FF
//   0xAE1AC align 10h
//   0xAE1B0 cmp     dword ptr [r11], 4
//   0xAE1B4 jnz     loc_AD622
//   0xAE1BA mov     eax, [r15+44h]
//   0xAE1BE cmp     [r11+44h], eax
//   0xAE1C2 jg      loc_AE5F0
//   0xAE1C8 cmp     eax, 4
//   0xAE1CB jle     loc_AD638
//   0xAE1D1 jmp     loc_AD655
//   0xAE1D6 mov     r14d, 31h ; '1'
//   0xAE1DC jmp     loc_AD4E0
//   0xAE1E1 mov     r14d, 10h
//   0xAE1E7 jmp     loc_AD4E0
//   0xAE1EC mov     r14d, 19h
//   0xAE1F2 jmp     loc_AD4E0
//   0xAE1F7 mov     r14d, 16h
//   0xAE1FD jmp     loc_AD4E0
//   0xAE202 mov     eax, [r13+54h]
//   0xAE206 cmp     [r10+24h], eax
//   0xAE20A jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAE210 mov     rsi, [r15+18h]
//   0xAE214 mov     rdi, [rbx+40h]
//   0xAE218 mov     qword ptr [rbp+var_150], r10
//   0xAE21F lea     r12, [r10+20h]
//   0xAE223 call    sub_9BF20
//   0xAE228 mov     rsi, rax
//   0xAE22B xor     edx, edx
//   0xAE22D mov     rdi, r12
//   0xAE230 call    sub_9BC90
//   0xAE235 test    al, al
//   0xAE237 mov     r10, qword ptr [rbp+var_150]
//   0xAE23E jz      def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAE244 mov     esi, [r13+3Ch]
//   0xAE248 mov     r9d, 1
//   0xAE24E xor     r8d, r8d
//   0xAE251 xor     ecx, ecx
//   0xAE253 mov     rdx, r10
//   0xAE256 mov     rdi, rbx
//   0xAE259 mov     [rbp+var_138], r10
//   0xAE260 call    sub_11E4A0
//   0xAE265 mov     rsi, rax
//   0xAE268 mov     rdi, r13
//   0xAE26B mov     r14, rax
//   0xAE26E call    sub_9BF60
//   0xAE273 mov     r10, [rbp+var_138]
//   0xAE27A test    al, al
//   0xAE27C jz      short loc_AE2BF
//   0xAE27E mov     rdi, r14
//   0xAE281 call    sub_116EE0
//   0xAE286 mov     eax, [rbx+18h]
//   0xAE289 mov     rdi, [rbx+40h]
//   0xAE28D and     ah, 0FDh
//   0xAE290 or      al, 80h
//   0xAE292 mov     [rbx+18h], eax
//   0xAE295 mov     rsi, [r14+18h]
//   0xAE299 call    sub_1C8C90
//   0xAE29E mov     rsi, [r15+18h]
//   0xAE2A2 mov     rdi, [rbx+40h]
//   0xAE2A6 mov     r14, rax
//   0xAE2A9 call    sub_1C8C90
//   0xAE2AE cmp     r14, rax
//   0xAE2B1 mov     r10, [rbp+var_138]
//   0xAE2B8 jz      short loc_AE2BF
//   0xAE2BA or      dword ptr [r15+4], 20h
//   0xAE2BF mov     rdi, r10
//   0xAE2C2 call    sub_116EE0
//   0xAE2C7 mov     eax, [rbx+18h]
//   0xAE2CA lea     r12, [r15+30h]
//   0xAE2CE lea     rdi, [r15+20h]
//   0xAE2D2 mov     rsi, r12
//   0xAE2D5 and     ah, 0FDh
//   0xAE2D8 or      al, 80h
//   0xAE2DA mov     [rbx+18h], eax
//   0xAE2DD mov     dword ptr [r15], 39h ; '9'
//   0xAE2E4 call    sub_11EAC0
//   0xAE2E9 lea     rax, [r15+40h]
//   0xAE2ED mov     rdi, r12
//   0xAE2F0 mov     rsi, rax
//   0xAE2F3 mov     r14, rax
//   0xAE2F6 call    sub_11EAC0
//   0xAE2FB mov     rdi, r14
//   0xAE2FE call    sub_1166E0
//   0xAE303 mov     rdi, r15
//   0xAE306 call    sub_1AF340
//   0xAE30B mov     rcx, rax
//   0xAE30E mov     edx, 6
//   0xAE313 mov     rdi, rbx
//   0xAE316 xor     eax, eax
//   0xAE318 lea     rsi, aCmbDS; "cmb%d: %s"
//   0xAE31F call    sub_9BE60
//   0xAE324 mov     edx, 6
//   0xAE329 mov     rsi, r15
//   0xAE32C mov     rdi, rbx
//   0xAE32F call    sub_161150
//   0xAE334 jmp     loc_AD4FF
//   0xAE339 align 20h
//   0xAE340 cmp     byte ptr [r10+20h], 1
//   0xAE345 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAE34B mov     eax, [r10+28h]
//   0xAE34F cmp     [r13+3Ch], eax
//   0xAE353 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAE359 lea     rsi, [r10+40h]
//   0xAE35D lea     rdi, [r10+20h]
//   0xAE361 xor     edx, edx
//   0xAE363 mov     qword ptr [rbp+var_150], r10
//   0xAE36A call    sub_11F4A0
//   0xAE36F test    al, al
//   0xAE371 mov     r10, qword ptr [rbp+var_150]
//   0xAE378 jz      short loc_AE385
//   0xAE37A cmp     byte ptr [r10+30h], 2
//   0xAE37F jz      loc_AE87E
//   0xAE385 mov     esi, [r13+3Ch]
//   0xAE389 jmp     loc_ADC3E
//   0xAE38E lea     rsi, [r15+20h]
//   0xAE392 lea     rdi, [r11+20h]
//   0xAE396 xor     edx, edx
//   0xAE398 mov     [rbp+var_158], r11
//   0xAE39F call    sub_11F4A0
//   0xAE3A4 test    al, al
//   0xAE3A6 mov     r11, [rbp+var_158]
//   0xAE3AD jz      loc_AD638
//   0xAE3B3 cmp     byte ptr [r15+20h], 4
//   0xAE3B8 jz      loc_AE855
//   0xAE3BE mov     rdi, [rbp+var_140]
//   0xAE3C5 lea     rdx, [r11+40h]
//   0xAE3C9 mov     rsi, r13
//   0xAE3CC mov     [rbp+var_158], r11
//   0xAE3D3 call    sub_120D60
//   0xAE3D8 test    al, al
//   0xAE3DA mov     r11, [rbp+var_158]
//   0xAE3E1 jz      loc_AD638
//   0xAE3E7 mov     eax, [r15+44h]
//   0xAE3EB cmp     [r11+44h], eax
//   0xAE3EF jl      loc_AD638
//   0xAE3F5 lea     r14, [rbp+var_60]
//   0xAE3F9 mov     ecx, 1
//   0xAE3FE mov     rdx, r11
//   0xAE401 mov     rsi, rbx
//   0xAE404 mov     rdi, r14
//   0xAE407 mov     [rbp+var_140], r11
//   0xAE40E call    sub_11DFC0
//   0xAE413 mov     r11, [rbp+var_140]
//   0xAE41A mov     rsi, qword ptr [rbp+var_150]
//   0xAE421 mov     rcx, r15
//   0xAE424 mov     rdi, rbx
//   0xAE427 mov     r8d, 1
//   0xAE42D mov     rdx, [r11+8]
//   0xAE431 call    sub_A33E0
//   0xAE436 test    rax, rax
//   0xAE439 mov     r11, [rbp+var_140]
//   0xAE440 jz      loc_AE91F
//   0xAE446 mov     rdi, r14
//   0xAE449 mov     [rbp+var_140], r11
//   0xAE450 call    sub_8D480
//   0xAE455 mov     r11, [rbp+var_140]
//   0xAE45C jmp     loc_AD638
//   0xAE461 align 8
//   0xAE468 mov     r14d, 20h ; ' '
//   0xAE46E jmp     loc_AD4E0
//   0xAE473 mov     r14d, 2Bh ; '+'
//   0xAE479 jmp     loc_AD4E0
//   0xAE47E mov     r14d, 28h ; '('
//   0xAE484 jmp     loc_AD4E0
//   0xAE489 mov     r14d, 18h
//   0xAE48F jmp     loc_AD4E0
//   0xAE494 mov     r14d, 33h ; '3'
//   0xAE49A jmp     loc_AD4E0
//   0xAE49F mov     r14d, 11h
//   0xAE4A5 jmp     loc_AD4E0
//   0xAE4AA mov     dword ptr [r15], 4
//   0xAE4B1 lea     rsi, [r12+20h]
//   0xAE4B6 lea     rdi, [r15+20h]
//   0xAE4BA call    sub_11EAC0
//   0xAE4BF cmp     byte ptr [r15+20h], 1
//   0xAE4C4 jz      loc_AE6EF
//   0xAE4CA mov     rdi, r12
//   0xAE4CD call    sub_116EE0
//   0xAE4D2 mov     eax, [rbx+18h]
//   0xAE4D5 mov     rdi, r15
//   0xAE4D8 and     ah, 0FDh
//   0xAE4DB or      al, 80h
//   0xAE4DD mov     [rbx+18h], eax
//   0xAE4E0 call    sub_1AF340
//   0xAE4E5 mov     rcx, rax
//   0xAE4E8 mov     edx, 3
//   0xAE4ED mov     rdi, rbx
//   0xAE4F0 xor     eax, eax
//   0xAE4F2 lea     rsi, aCmbDS; "cmb%d: %s"
//   0xAE4F9 call    sub_9BE60
//   0xAE4FE mov     edx, 6
//   0xAE503 mov     rsi, r15
//   0xAE506 mov     rdi, rbx
//   0xAE509 call    sub_161150
//   0xAE50E mov     rdi, [rbp+var_50]
//   0xAE512 test    rdi, rdi
//   0xAE515 jz      short loc_AE522
//   0xAE517 xor     eax, eax
//   0xAE519 mov     qword ptr [rbp+var_48], rax
//   0xAE51D call    _qfree
//   0xAE522 mov     rdi, [rbp+var_60]
//   0xAE526 call    _qfree
//   0xAE52B mov     rdi, [rbp+var_80]
//   0xAE52F test    rdi, rdi
//   0xAE532 jz      short loc_AE53F
//   0xAE534 xor     eax, eax
//   0xAE536 mov     qword ptr [rbp+var_78], rax
//   0xAE53A call    _qfree
//   0xAE53F mov     rdi, [rbp+var_90]
//   0xAE546 call    _qfree
//   0xAE54B jmp     loc_AD4FF
//   0xAE550 mov     rdi, [rbp+var_80]
//   0xAE554 test    rdi, rdi
//   0xAE557 jz      short loc_AE564
//   0xAE559 xor     eax, eax
//   0xAE55B mov     qword ptr [rbp+var_78], rax
//   0xAE55F call    _qfree
//   0xAE564 mov     rdi, [rbp+var_90]
//   0xAE56B call    _qfree
//   0xAE570 jmp     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAE575 mov     r14d, 2Ch ; ','
//   0xAE57B mov     rdi, r12
//   0xAE57E call    sub_8D480
//   0xAE583 mov     rdi, qword ptr [rbp+var_150]
//   0xAE58A call    sub_8D480
//   0xAE58F jmp     loc_AD4E0
//   0xAE594 mov     r14d, 17h
//   0xAE59A jmp     loc_AD4E0
//   0xAE59F mov     rdi, r12
//   0xAE5A2 call    sub_1166E0
//   0xAE5A7 jmp     loc_AD456
//   0xAE5AC cmp     byte ptr [r10+40h], 1
//   0xAE5B1 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAE5B7 mov     eax, [r10+48h]
//   0xAE5BB cmp     [r15+48h], eax
//   0xAE5BF jz      loc_AE7C0
//   0xAE5C5 cmp     byte ptr [r15+30h], 1
//   0xAE5CA jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAE5D0 jmp     loc_AE0BA
//   0xAE5D5 mov     r14d, 1Eh
//   0xAE5DB jmp     loc_AD4E0
//   0xAE5E0 call    ___stack_chk_fail
//   0xAE5E5 mov     r14d, 1Bh
//   0xAE5EB jmp     loc_AD4E0
//   0xAE5F0 mov     rsi, qword ptr [rbp+var_150]
//   0xAE5F7 mov     rdi, r12
//   0xAE5FA mov     [rbp+var_158], r11
//   0xAE601 call    sub_9BC50
//   0xAE606 test    al, al
//   0xAE608 mov     r11, [rbp+var_158]
//   0xAE60F jz      loc_AD622
//   0xAE615 mov     rax, [rbx+1E0h]
//   0xAE61C xor     edx, edx
//   0xAE61E mov     rdi, r15
//   0xAE621 mov     rsi, [rax+70h]
//   0xAE625 call    sub_119EE0
//   0xAE62A test    al, al
//   0xAE62C mov     r11, [rbp+var_158]
//   0xAE633 jnz     loc_AD622
//   0xAE639 mov     rdx, [r11+8]
//   0xAE63D mov     r8d, 1
//   0xAE643 mov     rcx, r15
//   0xAE646 mov     rdi, rbx
//   0xAE649 mov     rsi, qword ptr [rbp+var_150]
//   0xAE650 call    sub_A33E0
//   0xAE655 test    rax, rax
//   0xAE658 mov     r11, [rbp+var_158]
//   0xAE65F jnz     loc_AD622
//   0xAE665 mov     rax, [rbx+1E0h]
//   0xAE66C mov     r9, r15
//   0xAE66F mov     rcx, r11
//   0xAE672 mov     rdx, rbx
//   0xAE675 lea     rsi, [rbp+var_128]
//   0xAE67C lea     r8, [r11+40h]
//   0xAE680 mov     rdi, [rax+70h]
//   0xAE684 push    r10
//   0xAE686 push    [rbp+var_140]
//   0xAE68C call    sub_1298B0
//   0xAE691 test    al, al
//   0xAE693 pop     r8
//   0xAE695 mov     r11, [rbp+var_158]
//   0xAE69C pop     r9
//   0xAE69E jz      loc_AD622
//   0xAE6A4 lea     r14, [rbp+var_60]
//   0xAE6A8 lea     rsi, [r11+20h]
//   0xAE6AC mov     rdi, r14
//   0xAE6AF call    sub_11D380
//   0xAE6B4 mov     rax, [rbp+var_128]
//   0xAE6BB mov     r11, [rbp+var_158]
//   0xAE6C2 test    rax, rax
//   0xAE6C5 js      short loc_AE6D4
//   0xAE6C7 movsxd  rdx, dword ptr [rbp+var_60+4]
//   0xAE6CB cmp     rax, rdx
//   0xAE6CE jl      loc_AE890
//   0xAE6D4 mov     rdi, r14
//   0xAE6D7 mov     [rbp+var_158], r11
//   0xAE6DE call    sub_1166E0
//   0xAE6E3 mov     r11, [rbp+var_158]
//   0xAE6EA jmp     loc_AD622
//   0xAE6EF mov     eax, [r15+28h]
//   0xAE6F3 cmp     [r13+3Ch], eax
//   0xAE6F7 jnz     loc_AE4CA
//   0xAE6FD mov     rax, [r12+18h]
//   0xAE702 mov     [r15+18h], rax
//   0xAE706 jmp     loc_AE4CA
//   0xAE70B lea     rdi, [rax+20h]
//   0xAE70F xor     edx, edx
//   0xAE711 xor     esi, esi
//   0xAE713 call    sub_9BC90
//   0xAE718 test    al, al
//   0xAE71A jz      loc_AD77B
//   0xAE720 mov     eax, [r15+4]
//   0xAE724 mov     rcx, [rbp+var_140]
//   0xAE72B sar     eax, 8
//   0xAE72E mov     edx, [rcx+44h]
//   0xAE731 and     eax, 7
//   0xAE734 jz      short loc_AE748
//   0xAE736 lea     ecx, [rax-1]
//   0xAE739 mov     eax, 1
//   0xAE73E shl     eax, cl
//   0xAE740 cmp     eax, edx
//   0xAE742 jl      loc_AD77B
//   0xAE748 cmp     [r15+44h], edx
//   0xAE74C jge     loc_AD77B
//   0xAE752 xor     eax, eax
//   0xAE754 pxor    xmm0, xmm0
//   0xAE758 xor     ecx, ecx
//   0xAE75A mov     rsi, r14
//   0xAE75D mov     [rbp+var_60], rax
//   0xAE761 mov     rdi, rbx
//   0xAE764 mov     [rbp+var_58], rax
//   0xAE768 mov     [rbp+var_50], rax
//   0xAE76C mov     rax, [rbp+var_140]
//   0xAE773 movups  [rbp+var_48], xmm0
//   0xAE777 add     rax, 40h ; '@'
//   0xAE77B mov     rdx, rax
//   0xAE77E mov     [rbp+var_158], rax
//   0xAE785 call    sub_121920
//   0xAE78A mov     rcx, [r15+8]
//   0xAE78E mov     r8d, 1
//   0xAE794 mov     rsi, r14
//   0xAE797 mov     rdi, rbx
//   0xAE79A mov     rax, [rbp+var_140]
//   0xAE7A1 mov     rdx, [rax+8]
//   0xAE7A5 call    sub_A36D0
//   0xAE7AA test    rax, rax
//   0xAE7AD jz      loc_AE9B7
//   0xAE7B3 mov     rdi, r14
//   0xAE7B6 call    sub_8D480
//   0xAE7BB jmp     loc_AD77B
//   0xAE7C0 cmp     r12d, [r10+44h]
//   0xAE7C4 jnz     loc_AE5C5
//   0xAE7CA mov     rsi, [r15+18h]
//   0xAE7CE mov     rdi, [rbx+40h]
//   0xAE7D2 lea     rax, [r15+30h]
//   0xAE7D6 mov     qword ptr [rbp+var_150], r10
//   0xAE7DD mov     [rbp+var_140], rax
//   0xAE7E4 call    sub_329920
//   0xAE7E9 mov     rdi, rax
//   0xAE7EC call    _getseg
//   0xAE7F1 mov     rsi, [rax+30h]
//   0xAE7F5 xor     edx, edx
//   0xAE7F7 lea     rdi, [r15+30h]
//   0xAE7FB call    sub_9BC90
//   0xAE800 test    al, al
//   0xAE802 mov     r10, qword ptr [rbp+var_150]
//   0xAE809 jnz     short loc_AE824
//   0xAE80B cmp     byte ptr [r15+30h], 1
//   0xAE810 jnz     def_AD12D; jumptable 00000000000AD12D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAE816 mov     eax, [r15+38h]
//   0xAE81A cmp     [r13+40h], eax
//   0xAE81E jnz     loc_AE0AF
//   0xAE824 mov     rdx, [r15+10h]
//   0xAE828 mov     esi, [r15+48h]
//   0xAE82C xor     r8d, r8d
//   0xAE82F xor     ecx, ecx
//   0xAE831 mov     rdi, rbx
//   0xAE834 mov     qword ptr [rbp+var_150], r10
//   0xAE83B call    sub_122950
//   0xAE840 mov     r10, qword ptr [rbp+var_150]
//   0xAE847 cmp     r10, rax
//   0xAE84A jnz     loc_AE0A4
//   0xAE850 jmp     loc_AE150
//   0xAE855 mov     rdi, [r15+28h]
//   0xAE859 xor     edx, edx
//   0xAE85B mov     rsi, r13
//   0xAE85E mov     [rbp+var_158], r11
//   0xAE865 call    sub_119EE0
//   0xAE86A test    al, al
//   0xAE86C mov     r11, [rbp+var_158]
//   0xAE873 jnz     loc_AD638
//   0xAE879 jmp     loc_AE3BE
//   0xAE87E cmp     [r10+24h], r12d
//   0xAE882 jnz     loc_AE385
//   0xAE888 mov     r14, r10
//   0xAE88B jmp     loc_AE385
//   0xAE890 mov     rdx, [rbx+1E0h]
//   0xAE897 mov     rdi, r14
//   0xAE89A mov     [rbp+var_158], r11
//   0xAE8A1 mov     rsi, [rdx+70h]
//   0xAE8A5 mov     edx, eax
//   0xAE8A7 call    sub_120850
//   0xAE8AC test    al, al
//   0xAE8AE mov     r11, [rbp+var_158]
//   0xAE8B5 jz      loc_AE6D4
//   0xAE8BB lea     rsi, [r15+20h]
//   0xAE8BF xor     edx, edx
//   0xAE8C1 mov     rdi, r14
//   0xAE8C4 call    sub_11F4A0
//   0xAE8C9 test    al, al
//   0xAE8CB mov     r11, [rbp+var_158]
//   0xAE8D2 jz      loc_AE6D4
//   0xAE8D8 mov     rdx, [r11+8]
//   0xAE8DC mov     rcx, r15
//   0xAE8DF mov     rsi, r14
//   0xAE8E2 mov     rdi, rbx
//   0xAE8E5 call    sub_A35F0
//   0xAE8EA test    al, al
//   0xAE8EC mov     r11, [rbp+var_158]
//   0xAE8F3 jnz     loc_AE6D4
//   0xAE8F9 mov     rdi, r15
//   0xAE8FC call    sub_116EE0
//   0xAE901 mov     eax, [rbx+18h]
//   0xAE904 mov     rdi, r14
//   0xAE907 mov     r14d, 6
//   0xAE90D and     ah, 0FDh
//   0xAE910 or      al, 80h
//   0xAE912 mov     [rbx+18h], eax
//   0xAE915 call    sub_1166E0
//   0xAE91A jmp     loc_AE57B
//   0xAE91F mov     rdx, [r11+8]
//   0xAE923 mov     r8d, 1
//   0xAE929 mov     rcx, r15
//   0xAE92C mov     rsi, r14
//   0xAE92F mov     rdi, rbx
//   0xAE932 mov     [rbp+var_140], r11
//   0xAE939 call    sub_A33E0
//   0xAE93E test    rax, rax
//   0xAE941 mov     r11, [rbp+var_140]
//   0xAE948 jnz     loc_AE446
//   0xAE94E mov     rdi, r15
//   0xAE951 call    sub_116EE0
//   0xAE956 mov     eax, [rbx+18h]
//   0xAE959 mov     rdi, r14
//   0xAE95C mov     r14d, 8
//   0xAE962 and     ah, 0FDh
//   0xAE965 or      al, 80h
//   0xAE967 mov     [rbx+18h], eax
//   0xAE96A call    sub_8D480
//   0xAE96F jmp     loc_AE57B
//   0xAE974 mov     rdi, r14
//   0xAE977 call    sub_116EE0
//   0xAE97C mov     eax, [rbx+18h]
//   0xAE97F mov     rdi, [rbx+40h]
//   0xAE983 and     ah, 0FDh
//   0xAE986 or      al, 80h
//   0xAE988 mov     [rbx+18h], eax
//   0xAE98B mov     rsi, [r14+18h]
//   0xAE98F call    sub_1C8C90
//   0xAE994 mov     rsi, [r15+18h]
//   0xAE998 mov     rdi, [rbx+40h]
//   0xAE99C mov     r14, rax
//   0xAE99F call    sub_1C8C90
//   0xAE9A4 cmp     r14, rax
//   0xAE9A7 jz      loc_ADB83
//   0xAE9AD or      dword ptr [r15+4], 20h
//   0xAE9B2 jmp     loc_ADB83
//   0xAE9B7 mov     rdx, [rbp+var_158]
//   0xAE9BE mov     rdi, qword ptr [rbp+var_150]
//   0xAE9C5 mov     rsi, r13
//   0xAE9C8 call    sub_120D60
//   0xAE9CD test    al, al
//   0xAE9CF jz      loc_AE7B3
//   0xAE9D5 mov     rsi, [rbp+var_158]
//   0xAE9DC mov     rdi, qword ptr [rbp+var_150]
//   0xAE9E3 call    sub_11EAC0
//   0xAE9E8 mov     rax, [rbp+var_140]
//   0xAE9EF mov     dword ptr [r15], 9
//   0xAE9F6 test    byte ptr [rax+4], 80h
//   0xAE9FA jnz     short loc_AEA0F
//   0xAE9FC mov     rdi, rax
//   0xAE9FF call    sub_116EE0
//   0xAEA04 mov     eax, [rbx+18h]
//   0xAEA07 and     ah, 0FDh
//   0xAEA0A or      al, 80h
//   0xAEA0C mov     [rbx+18h], eax
//   0xAEA0F mov     rdi, r14
//   0xAEA12 mov     r14d, 7
//   0xAEA18 call    sub_8D480
//   0xAEA1D mov     rdi, r12
//   0xAEA20 call    sub_1166E0
//   0xAEA25 jmp     loc_AD4E0
//   0xAEA2A cmp     byte ptr [r12+20h], 1
//   0xAEA30 jnz     loc_AD833
//   0xAEA36 mov     eax, [r12+28h]
//   0xAEA3B cmp     [r13+38h], eax
//   0xAEA3F jnz     loc_AD833
//   0xAEA45 cmp     byte ptr [r12+30h], 1
//   0xAEA4B jnz     loc_AD833
//   0xAEA51 mov     eax, [r12+38h]
//   0xAEA56 cmp     [r13+3Ch], eax
//   0xAEA5A jnz     loc_AD833
//   0xAEA60 jmp     loc_ADEFE
//   0xAEA65 mov     rbx, rax
//   0xAEA68 jmp     loc_2F4DA
//   0xAEA6D mov     rbx, rax
//   0xAEA70 jmp     loc_2F511
//   0xAEA75 mov     rbx, rax
//   0xAEA78 jmp     loc_2F520
//   0xAEA7D mov     rbx, rax
//   0xAEA80 jmp     loc_2F52A
//   0xAEA85 mov     rbx, rax
//   0xAEA88 jmp     loc_2F538
//   0xAEA8D mov     rbx, rax
//   0xAEA90 jmp     loc_2F54A
//   0xAEA95 mov     rbx, rax
//   0xAEA98 jmp     loc_2F573
//   0xAEA9D mov     rbx, rax
//   0xAEAA0 jmp     loc_2F552
//   0xAEAA5 mov     rbx, rax
//   0xAEAA8 jmp     loc_2F584
//   0xAEAAD mov     rbx, rax
//   0xAEAB0 jmp     loc_2F540
//   0xAEAB5 mov     rbx, rax
//   0xAEAB8 jmp     loc_2F56B
//   0xAEABD mov     rbx, rax
//   0xAEAC0 jmp     loc_2F4E2
// ============================================================

void sub_AD010(/* signature unknown */)
{
    // see disassembly above
}

