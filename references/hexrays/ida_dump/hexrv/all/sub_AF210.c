// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xAF210
// Name:           sub_AF210
// Function size:  6837 bytes (1539 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xAF210 push    rbp
//   0xAF211 mov     rbp, rsp
//   0xAF214 push    r15
//   0xAF216 push    r14
//   0xAF218 push    r13
//   0xAF21A push    r12
//   0xAF21C push    rbx
//   0xAF21D sub     rsp, 138h
//   0xAF224 mov     rax, fs:28h
//   0xAF22D mov     [rbp+var_38], rax
//   0xAF231 xor     eax, eax
//   0xAF233 test    rsi, rsi
//   0xAF236 jz      short loc_AF244
//   0xAF238 mov     r15, rsi
//   0xAF23B test    dword ptr [rsi+4], 40010h
//   0xAF242 jz      short loc_AF278
//   0xAF244 mov     byte ptr [rbp+var_138], 0
//   0xAF24B mov     rax, [rbp+var_38]
//   0xAF24F sub     rax, fs:28h
//   0xAF258 jnz     loc_B07E0
//   0xAF25E movzx   eax, byte ptr [rbp+var_138]
//   0xAF265 lea     rsp, [rbp-28h]
//   0xAF269 pop     rbx
//   0xAF26A pop     r12
//   0xAF26C pop     r13
//   0xAF26E pop     r14
//   0xAF270 pop     r15
//   0xAF272 pop     rbp
//   0xAF273 retn
//   0xAF274 align 8
//   0xAF278 test    byte ptr [rsi+41h], 2
//   0xAF27C jnz     short loc_AF244
//   0xAF27E mov     rbx, rdi
//   0xAF281 mov     rdi, [rdi+40h]
//   0xAF285 call    sub_9E190
//   0xAF28A mov     byte ptr [rbp+var_138], al
//   0xAF290 test    al, al
//   0xAF292 jnz     short loc_AF244
//   0xAF294 mov     rdi, [rbx+1E0h]
//   0xAF29B mov     rcx, r15
//   0xAF29E mov     rdx, rbx
//   0xAF2A1 mov     esi, 0Ch
//   0xAF2A6 call    sub_338EA0
//   0xAF2AB test    eax, eax
//   0xAF2AD jnz     loc_AF6B0
//   0xAF2B3 mov     rax, [rbx+1E0h]
//   0xAF2BA pxor    xmm0, xmm0
//   0xAF2BE cmp     dword ptr [r15], 3Ch; switch 61 cases
//   0xAF2C2 mov     [rbp+var_120], 0
//   0xAF2CD mov     [rbp+var_118], 0
//   0xAF2D8 mov     [rbp+var_110], 0
//   0xAF2E3 mov     r13, [rax+70h]
//   0xAF2E7 mov     [rbp+var_F0], 0
//   0xAF2F2 mov     [rbp+var_E8], 0
//   0xAF2FD mov     [rbp+var_E0], 0
//   0xAF308 movups  [rbp+var_108], xmm0
//   0xAF30F movups  [rbp+var_D8], xmm0
//   0xAF316 ja      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF31C mov     eax, [r15]
//   0xAF31F lea     rdx, jpt_AF32D
//   0xAF326 movsxd  rax, ds:(jpt_AF32D - 3FE8FCh)[rdx+rax*4]
//   0xAF32A add     rax, rdx
//   0xAF32D jmp     rax; switch jump
//   0xAF32F lea     r14, [rbp+var_60]; jumptable 00000000000AF32D case 60
//   0xAF333 xor     ecx, ecx
//   0xAF335 mov     rdx, r15
//   0xAF338 mov     rsi, rbx
//   0xAF33B mov     rdi, r14
//   0xAF33E call    sub_1201C0
//   0xAF343 lea     rdi, [rbp+var_120]
//   0xAF34A mov     rsi, r14
//   0xAF34D call    sub_60550
//   0xAF352 mov     rdi, [rbp+var_110]
//   0xAF359 pxor    xmm0, xmm0
//   0xAF35D mov     r12, [rbp+var_50]
//   0xAF361 mov     [rbp+var_50], 0
//   0xAF369 movdqu  xmm1, [rbp+var_48]
//   0xAF36E movups  [rbp+var_48], xmm0
//   0xAF372 test    rdi, rdi
//   0xAF375 jz      loc_AFF41
//   0xAF37B movaps  [rbp+var_150], xmm1
//   0xAF382 mov     qword ptr [rbp+var_108], 0
//   0xAF38D call    _qfree
//   0xAF392 mov     rdi, [rbp+var_50]
//   0xAF396 movdqa  xmm1, [rbp+var_150]
//   0xAF39E mov     [rbp+var_110], r12
//   0xAF3A5 movups  [rbp+var_108], xmm1
//   0xAF3AC test    rdi, rdi
//   0xAF3AF jz      short loc_AF3BE
//   0xAF3B1 mov     qword ptr [rbp+var_48], 0
//   0xAF3B9 call    _qfree
//   0xAF3BE mov     rdi, [rbp+var_60]
//   0xAF3C2 call    _qfree
//   0xAF3C7 xor     ecx, ecx
//   0xAF3C9 mov     rdx, r15
//   0xAF3CC mov     rsi, rbx
//   0xAF3CF mov     rdi, r14
//   0xAF3D2 call    sub_123560
//   0xAF3D7 lea     rdi, [rbp+var_F0]
//   0xAF3DE mov     rsi, r14
//   0xAF3E1 call    sub_60550
//   0xAF3E6 mov     rdi, [rbp+var_E0]
//   0xAF3ED pxor    xmm0, xmm0
//   0xAF3F1 mov     r12, [rbp+var_50]
//   0xAF3F5 mov     [rbp+var_50], 0
//   0xAF3FD movdqu  xmm1, [rbp+var_48]
//   0xAF402 movups  [rbp+var_48], xmm0
//   0xAF406 test    rdi, rdi
//   0xAF409 jz      loc_AFF54
//   0xAF40F movaps  [rbp+var_150], xmm1
//   0xAF416 mov     qword ptr [rbp+var_D8], 0
//   0xAF421 call    _qfree
//   0xAF426 mov     rdi, [rbp+var_50]
//   0xAF42A movdqa  xmm1, [rbp+var_150]
//   0xAF432 mov     [rbp+var_E0], r12
//   0xAF439 movups  [rbp+var_D8], xmm1
//   0xAF440 test    rdi, rdi
//   0xAF443 jz      short loc_AF452
//   0xAF445 mov     qword ptr [rbp+var_48], 0
//   0xAF44D call    _qfree
//   0xAF452 mov     rdi, [rbp+var_60]
//   0xAF456 call    _qfree
//   0xAF45B mov     r12, [r15+10h]
//   0xAF45F test    r12, r12
//   0xAF462 jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF468 lea     rax, [rbp+var_90]
//   0xAF46F mov     qword ptr [rbp+var_150], rax
//   0xAF476 nop     word ptr [rax+rax+00000000h]
//   0xAF480 mov     eax, [r12]
//   0xAF484 lea     edx, [rax-38h]
//   0xAF487 cmp     edx, 1
//   0xAF48A jbe     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF490 cmp     eax, 3Bh ; ';'
//   0xAF493 jnz     loc_AF5E3
//   0xAF499 mov     eax, [r15+44h]
//   0xAF49D cmp     [r12+24h], eax
//   0xAF4A2 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF4A8 mov     rsi, [r12+18h]
//   0xAF4AD mov     rdi, [rbx+40h]
//   0xAF4B1 call    sub_1CB530
//   0xAF4B6 mov     rsi, [r15+18h]
//   0xAF4BA mov     rdi, [rbx+40h]
//   0xAF4BE mov     [rbp+var_140], rax
//   0xAF4C5 call    sub_1CB530
//   0xAF4CA mov     rcx, rax
//   0xAF4CD movsxd  rdx, dword ptr [r15+44h]
//   0xAF4D1 mov     rax, [rbp+var_140]
//   0xAF4D8 mov     [rbp+var_140], rcx
//   0xAF4DF sub     rax, rdx
//   0xAF4E2 cmp     rax, rcx
//   0xAF4E5 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF4EB mov     edx, [r13+54h]
//   0xAF4EF mov     esi, [r13+3Ch]
//   0xAF4F3 mov     [rbp+var_90], 0
//   0xAF4FE mov     rdi, qword ptr [rbp+var_150]
//   0xAF505 mov     [rbp+var_88], 0
//   0xAF510 call    sub_5FB00
//   0xAF515 mov     rax, [rbx+40h]
//   0xAF519 pxor    xmm0, xmm0
//   0xAF51D mov     [rbp+var_80], 0
//   0xAF525 movups  [rbp+var_78], xmm0
//   0xAF529 mov     rcx, [rbp+var_140]
//   0xAF530 movsxd  rdx, dword ptr [r13+50h]
//   0xAF534 add     rcx, [rax+5A0h]
//   0xAF53B mov     rdi, qword ptr [rbp+var_150]
//   0xAF542 mov     rsi, rcx
//   0xAF545 call    sub_11E660
//   0xAF54A mov     rdx, [r12+8]
//   0xAF54F xor     r8d, r8d
//   0xAF552 mov     rcx, r15
//   0xAF555 mov     rdi, rbx
//   0xAF558 mov     rsi, qword ptr [rbp+var_150]
//   0xAF55F call    sub_A58D0
//   0xAF564 test    rax, rax
//   0xAF567 jnz     loc_B0750
//   0xAF56D mov     ecx, 1
//   0xAF572 mov     rdx, r12
//   0xAF575 mov     rsi, rbx
//   0xAF578 mov     rdi, r14
//   0xAF57B call    sub_1201C0
//   0xAF580 mov     rdx, [r12+8]
//   0xAF585 mov     rcx, r15
//   0xAF588 mov     rsi, r14
//   0xAF58B mov     rdi, rbx
//   0xAF58E mov     r8d, 1
//   0xAF594 call    sub_A55E0
//   0xAF599 test    rax, rax
//   0xAF59C jz      loc_B06AA
//   0xAF5A2 mov     rdi, [rbp+var_50]
//   0xAF5A6 test    rdi, rdi
//   0xAF5A9 jz      short loc_AF5B8
//   0xAF5AB mov     qword ptr [rbp+var_48], 0
//   0xAF5B3 call    _qfree
//   0xAF5B8 mov     rdi, [rbp+var_60]
//   0xAF5BC call    _qfree
//   0xAF5C1 mov     rdi, [rbp+var_80]
//   0xAF5C5 test    rdi, rdi
//   0xAF5C8 jz      short loc_AF5D7
//   0xAF5CA mov     qword ptr [rbp+var_78], 0
//   0xAF5D2 call    _qfree
//   0xAF5D7 mov     rdi, [rbp+var_90]
//   0xAF5DE call    _qfree
//   0xAF5E3 xor     ecx, ecx
//   0xAF5E5 mov     rdx, r12
//   0xAF5E8 mov     rsi, rbx
//   0xAF5EB mov     rdi, r14
//   0xAF5EE call    sub_123560
//   0xAF5F3 lea     rsi, [rbp+var_120]
//   0xAF5FA mov     rdi, r14
//   0xAF5FD call    sub_60400
//   0xAF602 test    al, al
//   0xAF604 jz      loc_AFED0
//   0xAF60A mov     rdi, [rbp+var_50]
//   0xAF60E test    rdi, rdi
//   0xAF611 jz      short loc_AF620
//   0xAF613 mov     qword ptr [rbp+var_48], 0
//   0xAF61B call    _qfree
//   0xAF620 mov     rdi, [rbp+var_60]
//   0xAF624 call    _qfree
//   0xAF629 nop     dword ptr [rax+00000000h]
//   0xAF630 mov     rsi, r15; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF633 mov     rdi, rbx
//   0xAF636 call    sub_A7D40
//   0xAF63B test    al, al
//   0xAF63D jnz     loc_AFEC0
//   0xAF643 mov     rsi, r15
//   0xAF646 mov     rdi, rbx
//   0xAF649 call    sub_186570
//   0xAF64E test    al, al
//   0xAF650 jnz     loc_AFF20
//   0xAF656 mov     rdi, [rbp+var_E0]
//   0xAF65D test    rdi, rdi
//   0xAF660 jz      short loc_AF672
//   0xAF662 mov     qword ptr [rbp+var_D8], 0
//   0xAF66D call    _qfree
//   0xAF672 mov     rdi, [rbp+var_F0]
//   0xAF679 call    _qfree
//   0xAF67E mov     rdi, [rbp+var_110]
//   0xAF685 test    rdi, rdi
//   0xAF688 jz      short loc_AF69A
//   0xAF68A mov     qword ptr [rbp+var_108], 0
//   0xAF695 call    _qfree
//   0xAF69A mov     rdi, [rbp+var_120]
//   0xAF6A1 call    _qfree
//   0xAF6A6 jmp     loc_AF24B
//   0xAF6AB align 10h
//   0xAF6B0 cmp     eax, 0FFFFFFFFh
//   0xAF6B3 setnz   byte ptr [rbp+var_138]
//   0xAF6BA jmp     loc_AF24B
//   0xAF6BF align 20h
//   0xAF6C0 mov     rsi, r15; jumptable 00000000000AF32D cases 29,30,34,35,39,40,45,46,50,51
//   0xAF6C3 mov     rdi, rbx
//   0xAF6C6 call    sub_93DC0
//   0xAF6CB test    al, al
//   0xAF6CD jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF6D3 mov     r14d, 2Fh ; '/'
//   0xAF6D9 nop     dword ptr [rax+00000000h]
//   0xAF6E0 mov     rdi, r15
//   0xAF6E3 call    sub_1B1540
//   0xAF6E8 mov     rcx, rax
//   0xAF6EB mov     edx, r14d
//   0xAF6EE lea     rsi, aCmbDS; "cmb%d: %s"
//   0xAF6F5 mov     rdi, rbx
//   0xAF6F8 xor     eax, eax
//   0xAF6FA call    sub_9E060
//   0xAF6FF mov     byte ptr [rbp+var_138], 1
//   0xAF706 jmp     loc_AF656
//   0xAF70B align 10h
//   0xAF710 mov     rsi, r15; jumptable 00000000000AF32D case 19
//   0xAF713 mov     rdi, rbx
//   0xAF716 call    sub_97040
//   0xAF71B test    al, al
//   0xAF71D jnz     loc_AFF36
//   0xAF723 mov     rsi, r15
//   0xAF726 mov     rdi, rbx
//   0xAF729 call    sub_92430
//   0xAF72E test    al, al
//   0xAF730 jnz     loc_AFF67
//   0xAF736 mov     rsi, r15
//   0xAF739 mov     rdi, rbx
//   0xAF73C call    sub_94080
//   0xAF741 test    al, al
//   0xAF743 jnz     loc_B03D6
//   0xAF749 mov     rsi, r15
//   0xAF74C mov     rdi, rbx
//   0xAF74F call    sub_932B0
//   0xAF754 test    al, al
//   0xAF756 jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF75C mov     r14d, 39h ; '9'
//   0xAF762 jmp     loc_AF6E0
//   0xAF767 pxor    xmm0, xmm0; jumptable 00000000000AF32D case 4
//   0xAF76B lea     rdx, [r15+40h]
//   0xAF76F mov     ecx, 1
//   0xAF774 mov     rdi, rbx
//   0xAF777 lea     r14, [rbp+var_C0]
//   0xAF77E movups  [rbp+var_78], xmm0
//   0xAF782 lea     r12, [rbp+var_90]
//   0xAF789 mov     rsi, r14
//   0xAF78C mov     [rbp+var_C0], 0
//   0xAF797 mov     [rbp+var_B8], 0
//   0xAF7A2 mov     [rbp+var_B0], 0
//   0xAF7AD mov     [rbp+var_90], 0
//   0xAF7B8 mov     [rbp+var_88], 0
//   0xAF7C3 mov     [rbp+var_80], 0
//   0xAF7CB mov     [rbp+var_140], rdx
//   0xAF7D2 mov     qword ptr [rbp+var_150], r14
//   0xAF7D9 movups  [rbp+var_A8], xmm0
//   0xAF7E0 call    sub_123B20
//   0xAF7E5 sub     rsp, 8
//   0xAF7E9 mov     rdx, [r15+10h]
//   0xAF7ED mov     r9d, 80h
//   0xAF7F3 xor     ecx, ecx
//   0xAF7F5 push    101h
//   0xAF7FA mov     r8, r12
//   0xAF7FD mov     rsi, r14
//   0xAF800 mov     rdi, rbx
//   0xAF803 call    sub_124C90
//   0xAF808 mov     r11, rax
//   0xAF80B pop     r14
//   0xAF80D pop     rax
//   0xAF80E test    r11, r11
//   0xAF811 jz      short loc_AF855
//   0xAF813 movzx   eax, byte ptr [r15+40h]
//   0xAF818 cmp     [r11+40h], al
//   0xAF81C jz      loc_B03B0
//   0xAF822 cmp     dword ptr [r15+44h], 4
//   0xAF827 jg      short loc_AF855
//   0xAF829 mov     eax, [r11]
//   0xAF82C sub     eax, 8
//   0xAF82F cmp     eax, 1
//   0xAF832 jbe     loc_B058E
//   0xAF838 mov     rcx, qword ptr [rbp+var_150]
//   0xAF83F mov     rdx, r15
//   0xAF842 mov     rsi, r11
//   0xAF845 mov     rdi, rbx
//   0xAF848 call    sub_A9F90
//   0xAF84D test    al, al
//   0xAF84F jnz     loc_B0775
//   0xAF855 mov     rdi, [rbp+var_80]
//   0xAF859 test    rdi, rdi
//   0xAF85C jz      short loc_AF86B
//   0xAF85E mov     qword ptr [rbp+var_78], 0
//   0xAF866 call    _qfree
//   0xAF86B mov     rdi, [rbp+var_90]
//   0xAF872 call    _qfree
//   0xAF877 mov     rdi, [rbp+var_B0]
//   0xAF87E test    rdi, rdi
//   0xAF881 jz      short loc_AF893
//   0xAF883 mov     qword ptr [rbp+var_A8], 0
//   0xAF88E call    _qfree
//   0xAF893 mov     rdi, [rbp+var_C0]
//   0xAF89A call    _qfree
//   0xAF89F mov     rsi, r15
//   0xAF8A2 mov     rdi, rbx
//   0xAF8A5 call    sub_182AD0
//   0xAF8AA test    al, al
//   0xAF8AC jnz     loc_AF9A3
//   0xAF8B2 cmp     dword ptr [r15+44h], 2; jumptable 00000000000AF32D case 9
//   0xAF8B7 jg      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF8BD lea     r14, [rbp+var_60]
//   0xAF8C1 lea     rdi, [r15+20h]
//   0xAF8C5 xor     edx, edx
//   0xAF8C7 mov     rsi, r14
//   0xAF8CA call    sub_11B8C0
//   0xAF8CF test    al, al
//   0xAF8D1 jz      short loc_AF8DE
//   0xAF8D3 cmp     [rbp+var_60], 0
//   0xAF8D8 jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF8DE lea     rax, [r15+40h]
//   0xAF8E2 lea     r12, [rbp+var_90]
//   0xAF8E9 mov     rsi, rax
//   0xAF8EC mov     rdi, r12
//   0xAF8EF mov     qword ptr [rbp+var_150], rax
//   0xAF8F6 call    sub_11F580
//   0xAF8FB sub     rsp, 8
//   0xAF8FF xor     r9d, r9d
//   0xAF902 mov     rcx, r12
//   0xAF905 mov     rdx, r15
//   0xAF908 push    0
//   0xAF90A mov     eax, dword ptr [rbp+var_90+4]
//   0xAF910 mov     rsi, rbx
//   0xAF913 mov     rdi, r13
//   0xAF916 lea     r8d, [rax+rax]
//   0xAF91A call    sub_12D270
//   0xAF91F pop     rsi
//   0xAF920 pop     rdi
//   0xAF921 test    al, al
//   0xAF923 jz      loc_B079F
//   0xAF929 lea     rsi, [rbp+var_F0]
//   0xAF930 mov     ecx, 1
//   0xAF935 mov     rdx, r12
//   0xAF938 mov     rdi, rbx
//   0xAF93B call    sub_123B20
//   0xAF940 sub     rsp, 8
//   0xAF944 mov     rdx, [r15+10h]
//   0xAF948 xor     r9d, r9d
//   0xAF94B xor     r8d, r8d
//   0xAF94E push    101h
//   0xAF953 lea     rsi, [rbp+var_F0]
//   0xAF95A xor     ecx, ecx
//   0xAF95C mov     rdi, rbx
//   0xAF95F call    sub_124C90
//   0xAF964 mov     [rbp+var_140], rax
//   0xAF96B pop     rdx
//   0xAF96C pop     rcx
//   0xAF96D test    rax, rax
//   0xAF970 jz      short loc_AF97B
//   0xAF972 cmp     dword ptr [rax], 4
//   0xAF975 jz      loc_B090B
//   0xAF97B mov     rdi, r12
//   0xAF97E call    sub_1188E0
//   0xAF983 jmp     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF988 align 10h
//   0xAF990 mov     rsi, r15; jumptable 00000000000AF32D case 2
//   0xAF993 mov     rdi, rbx
//   0xAF996 call    sub_182AD0
//   0xAF99B test    al, al
//   0xAF99D jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF9A3 mov     r14d, 21h ; '!'
//   0xAF9A9 jmp     loc_AF6E0
//   0xAF9AE mov     rsi, r15; jumptable 00000000000AF32D case 14
//   0xAF9B1 mov     rdi, rbx
//   0xAF9B4 call    sub_92FC0
//   0xAF9B9 test    al, al
//   0xAF9BB jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF9C1 mov     r14d, 2Ah ; '*'
//   0xAF9C7 jmp     loc_AF6E0
//   0xAF9CC mov     rsi, r15; jumptable 00000000000AF32D case 13
//   0xAF9CF mov     rdi, rbx
//   0xAF9D2 call    sub_98520
//   0xAF9D7 test    al, al
//   0xAF9D9 jnz     loc_AFF2B
//   0xAF9DF mov     rsi, r15
//   0xAF9E2 mov     rdi, rbx
//   0xAF9E5 call    sub_95780
//   0xAF9EA test    al, al
//   0xAF9EC jnz     loc_AFBAE
//   0xAF9F2 mov     rsi, r15
//   0xAF9F5 mov     rdi, rbx
//   0xAF9F8 call    sub_9A8B0
//   0xAF9FD test    al, al
//   0xAF9FF jnz     loc_B0689
//   0xAFA05 mov     rsi, r15
//   0xAFA08 mov     rdi, rbx
//   0xAFA0B call    sub_92DA0
//   0xAFA10 test    al, al
//   0xAFA12 jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFA18 mov     r14d, 38h ; '8'
//   0xAFA1E jmp     loc_AF6E0
//   0xAFA23 align 8
//   0xAFA28 cmp     byte ptr [r15+20h], 1; jumptable 00000000000AF32D case 12
//   0xAFA2D jz      loc_B0016
//   0xAFA33 mov     rsi, r15
//   0xAFA36 mov     rdi, rbx
//   0xAFA39 call    sub_98520
//   0xAFA3E test    al, al
//   0xAFA40 jnz     loc_AFF2B
//   0xAFA46 mov     rsi, r15
//   0xAFA49 mov     rdi, rbx
//   0xAFA4C call    sub_99A10
//   0xAFA51 test    al, al
//   0xAFA53 jnz     loc_B03E1
//   0xAFA59 mov     rsi, r15
//   0xAFA5C mov     rdi, rbx
//   0xAFA5F call    sub_94F50
//   0xAFA64 test    al, al
//   0xAFA66 jnz     loc_B067E
//   0xAFA6C mov     rsi, r15
//   0xAFA6F mov     rdi, rbx
//   0xAFA72 call    sub_9AEB0
//   0xAFA77 test    al, al
//   0xAFA79 jnz     loc_B069F
//   0xAFA7F mov     rsi, r15
//   0xAFA82 mov     rdi, rbx
//   0xAFA85 call    sub_98660
//   0xAFA8A test    al, al
//   0xAFA8C jnz     loc_B0794
//   0xAFA92 mov     rsi, r15
//   0xAFA95 mov     rdi, rbx
//   0xAFA98 call    sub_91CC0
//   0xAFA9D test    al, al
//   0xAFA9F jnz     loc_B07D5
//   0xAFAA5 mov     rsi, r15
//   0xAFAA8 mov     rdi, rbx
//   0xAFAAB call    sub_92090
//   0xAFAB0 test    al, al
//   0xAFAB2 jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFAB8 mov     r14d, 2Dh ; '-'
//   0xAFABE jmp     loc_AF6E0
//   0xAFAC3 align 8
//   0xAFAC8 mov     rsi, r15; jumptable 00000000000AF32D case 24
//   0xAFACB mov     rdi, rbx
//   0xAFACE call    sub_9A540
//   0xAFAD3 test    al, al
//   0xAFAD5 jnz     loc_AFFEA
//   0xAFADB mov     rsi, r15
//   0xAFADE mov     rdi, rbx
//   0xAFAE1 call    sub_94220
//   0xAFAE6 test    al, al
//   0xAFAE8 jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFAEE mov     r14d, 34h ; '4'
//   0xAFAF4 jmp     loc_AF6E0
//   0xAFAF9 mov     rsi, r15; jumptable 00000000000AF32D case 23
//   0xAFAFC mov     rdi, rbx
//   0xAFAFF call    sub_92740
//   0xAFB04 test    al, al
//   0xAFB06 jz      loc_AF710; jumptable 00000000000AF32D case 19
//   0xAFB0C mov     r14d, 29h ; ')'
//   0xAFB12 jmp     loc_AF6E0
//   0xAFB17 mov     rsi, r15; jumptable 00000000000AF32D case 11
//   0xAFB1A mov     rdi, rbx
//   0xAFB1D call    sub_9B900
//   0xAFB22 test    al, al
//   0xAFB24 jnz     loc_B000B
//   0xAFB2A mov     rsi, r15
//   0xAFB2D mov     rdi, rbx
//   0xAFB30 call    sub_98AF0
//   0xAFB35 test    al, al
//   0xAFB37 jnz     loc_B03F7
//   0xAFB3D mov     rsi, r15
//   0xAFB40 mov     rdi, rbx
//   0xAFB43 call    sub_97440
//   0xAFB48 test    al, al
//   0xAFB4A jnz     loc_B0668
//   0xAFB50 mov     rsi, r15
//   0xAFB53 mov     rdi, rbx
//   0xAFB56 call    sub_98E10
//   0xAFB5B test    al, al
//   0xAFB5D jnz     loc_B0694
//   0xAFB63 mov     rsi, r15
//   0xAFB66 mov     rdi, rbx
//   0xAFB69 call    sub_9C150
//   0xAFB6E test    al, al
//   0xAFB70 jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFB76 mov     r14d, 36h ; '6'
//   0xAFB7C jmp     loc_AF6E0
//   0xAFB81 align 8
//   0xAFB88 mov     rsi, r15; jumptable 00000000000AF32D case 5
//   0xAFB8B mov     rdi, rbx
//   0xAFB8E call    sub_9A8B0
//   0xAFB93 test    al, al
//   0xAFB95 jnz     loc_B0689
//   0xAFB9B mov     rsi, r15
//   0xAFB9E mov     rdi, rbx
//   0xAFBA1 call    sub_95780
//   0xAFBA6 test    al, al
//   0xAFBA8 jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFBAE mov     r14d, 12h
//   0xAFBB4 jmp     loc_AF6E0
//   0xAFBB9 cmp     byte ptr [r15+30h], 1; jumptable 00000000000AF32D case 1
//   0xAFBBE jz      loc_B0180
//   0xAFBC4 mov     rsi, r15
//   0xAFBC7 mov     rdi, rbx
//   0xAFBCA call    sub_96630
//   0xAFBCF test    al, al
//   0xAFBD1 jnz     loc_AFFF5
//   0xAFBD7 mov     rsi, r15
//   0xAFBDA mov     rdi, rbx
//   0xAFBDD call    sub_186840
//   0xAFBE2 test    al, al
//   0xAFBE4 jz      loc_AF990; jumptable 00000000000AF32D case 2
//   0xAFBEA mov     r14d, 3Bh ; ';'
//   0xAFBF0 jmp     loc_AF6E0
//   0xAFBF5 mov     rsi, r15; jumptable 00000000000AF32D case 10
//   0xAFBF8 mov     rdi, rbx
//   0xAFBFB call    sub_96CA0
//   0xAFC00 test    al, al
//   0xAFC02 jnz     loc_B0000
//   0xAFC08 mov     rsi, r15
//   0xAFC0B mov     rdi, rbx
//   0xAFC0E call    sub_9BDF0
//   0xAFC13 test    al, al
//   0xAFC15 jnz     loc_B03EC
//   0xAFC1B mov     rsi, r15
//   0xAFC1E mov     rdi, rbx
//   0xAFC21 call    sub_96E00
//   0xAFC26 test    al, al
//   0xAFC28 jnz     loc_B0673
//   0xAFC2E mov     rsi, r15
//   0xAFC31 mov     rdi, rbx
//   0xAFC34 call    sub_94580
//   0xAFC39 test    al, al
//   0xAFC3B jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFC41 mov     r14d, 37h ; '7'
//   0xAFC47 jmp     loc_AF6E0
//   0xAFC4C align 10h
//   0xAFC50 cmp     byte ptr [r15+40h], 8; jumptable 00000000000AF32D case 56
//   0xAFC55 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFC5B mov     rax, [r15+48h]
//   0xAFC5F mov     eax, [rax+11Ch]
//   0xAFC65 cmp     eax, 5
//   0xAFC68 jz      loc_AFF72
//   0xAFC6E cmp     eax, 22h ; '"'
//   0xAFC71 jz      loc_AFF72
//   0xAFC77 mov     edx, eax
//   0xAFC79 and     edx, 0FFFFFFDFh
//   0xAFC7C cmp     edx, 2
//   0xAFC7F jz      loc_AFFB4
//   0xAFC85 cmp     eax, 2
//   0xAFC88 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFC8E mov     rsi, r15
//   0xAFC91 mov     rdi, rbx
//   0xAFC94 call    sub_185E00
//   0xAFC99 test    al, al
//   0xAFC9B jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFCA1 mov     r14d, 1Ch
//   0xAFCA7 jmp     loc_AF6E0
//   0xAFCAC align 10h
//   0xAFCB0 cmp     byte ptr [r15+20h], 6; jumptable 00000000000AF32D case 55
//   0xAFCB5 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFCBB mov     rax, [rbx+40h]
//   0xAFCBF mov     rsi, [r15+28h]
//   0xAFCC3 cmp     [rax+28h], rsi
//   0xAFCC7 jz      short loc_AFCDA
//   0xAFCC9 lea     rdi, [rax+8]
//   0xAFCCD call    sub_32D560
//   0xAFCD2 test    al, al
//   0xAFCD4 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFCDA mov     esi, [r13+3Ch]
//   0xAFCDE mov     r9d, 1
//   0xAFCE4 xor     r8d, r8d
//   0xAFCE7 xor     ecx, ecx
//   0xAFCE9 mov     rdx, r15
//   0xAFCEC mov     rdi, rbx
//   0xAFCEF call    sub_1206A0
//   0xAFCF4 mov     r12, rax
//   0xAFCF7 test    rax, rax
//   0xAFCFA jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFD00 cmp     dword ptr [rax], 3Bh ; ';'
//   0xAFD03 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFD09 mov     eax, [r13+54h]
//   0xAFD0D cmp     [r12+24h], eax
//   0xAFD12 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFD18 mov     rsi, [r15+18h]
//   0xAFD1C mov     rdi, [rbx+40h]
//   0xAFD20 lea     r14, [r12+20h]
//   0xAFD25 call    sub_9E120
//   0xAFD2A mov     rsi, rax
//   0xAFD2D xor     edx, edx
//   0xAFD2F mov     rdi, r14
//   0xAFD32 call    sub_9DE90
//   0xAFD37 test    al, al
//   0xAFD39 jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFD3F mov     rdi, [r15+28h]
//   0xAFD43 call    _get_func
//   0xAFD48 test    rax, rax
//   0xAFD4B jz      short loc_AFD83
//   0xAFD4D test    byte ptr [rax+10h], 2
//   0xAFD51 jz      short loc_AFD83
//   0xAFD53 mov     esi, [r13+3Ch]
//   0xAFD57 mov     r9d, 1
//   0xAFD5D xor     r8d, r8d
//   0xAFD60 xor     ecx, ecx
//   0xAFD62 mov     rdx, r12
//   0xAFD65 mov     rdi, rbx
//   0xAFD68 call    sub_1206A0
//   0xAFD6D mov     rsi, rax
//   0xAFD70 mov     rdi, r13
//   0xAFD73 mov     r14, rax
//   0xAFD76 call    sub_9E160
//   0xAFD7B test    al, al
//   0xAFD7D jnz     loc_B0B74
//   0xAFD83 mov     rdi, r12
//   0xAFD86 call    sub_1190E0
//   0xAFD8B mov     eax, [rbx+18h]
//   0xAFD8E mov     r14d, 4
//   0xAFD94 and     ah, 0FDh
//   0xAFD97 or      al, 80h
//   0xAFD99 mov     [rbx+18h], eax
//   0xAFD9C mov     dword ptr [r15], 38h ; '8'
//   0xAFDA3 jmp     loc_AF6E0
//   0xAFDA8 align 10h
//   0xAFDB0 cmp     byte ptr [r15+20h], 1; jumptable 00000000000AF32D case 59
//   0xAFDB5 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFDBB mov     rdi, [r15+10h]
//   0xAFDBF call    sub_11E570
//   0xAFDC4 mov     r12, rax
//   0xAFDC7 test    rax, rax
//   0xAFDCA jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFDD0 cmp     dword ptr [rax], 4
//   0xAFDD3 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFDD9 movzx   eax, byte ptr [rax+20h]
//   0xAFDDD cmp     al, 2
//   0xAFDDF jz      short loc_AFDF8
//   0xAFDE1 sub     al, 1
//   0xAFDE3 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFDE9 mov     rax, [r15+18h]
//   0xAFDED cmp     [r12+18h], rax
//   0xAFDF2 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFDF8 lea     r13, [r15+20h]
//   0xAFDFC lea     rdi, [r12+40h]
//   0xAFE01 xor     edx, edx
//   0xAFE03 mov     rsi, r13
//   0xAFE06 call    sub_1216A0
//   0xAFE0B test    al, al
//   0xAFE0D jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFE13 lea     rsi, [r12+20h]
//   0xAFE18 mov     rdi, r13
//   0xAFE1B call    sub_120CC0
//   0xAFE20 mov     r14d, 9
//   0xAFE26 jmp     loc_AF6E0
//   0xAFE2B align 10h
//   0xAFE30 mov     r12d, [r15+44h]; jumptable 00000000000AF32D case 54
//   0xAFE34 mov     esi, [r13+3Ch]
//   0xAFE38 mov     r10, r15
//   0xAFE3B xor     r14d, r14d
//   0xAFE3E mov     r9d, 1
//   0xAFE44 xor     r8d, r8d
//   0xAFE47 xor     ecx, ecx
//   0xAFE49 mov     rdx, r10
//   0xAFE4C mov     rdi, rbx
//   0xAFE4F call    sub_1206A0
//   0xAFE54 mov     r10, rax
//   0xAFE57 test    rax, rax
//   0xAFE5A jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFE60 mov     eax, [rax]
//   0xAFE62 cmp     eax, 3Bh ; ';'
//   0xAFE65 jz      loc_B0402
//   0xAFE6B ja      loc_B0290
//   0xAFE71 cmp     eax, 0Ch
//   0xAFE74 jz      loc_B0540
//   0xAFE7A cmp     eax, 0Dh
//   0xAFE7D jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFE83 cmp     byte ptr [r10+20h], 1
//   0xAFE88 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFE8E mov     esi, [r13+3Ch]
//   0xAFE92 cmp     esi, [r10+28h]
//   0xAFE96 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFE9C jmp     short loc_AFE3E
//   0xAFE9E align 20h
//   0xAFEA0 mov     rsi, r15; jumptable 00000000000AF32D case 42
//   0xAFEA3 mov     rdi, rbx
//   0xAFEA6 call    sub_AE3B0
//   0xAFEAB test    al, al
//   0xAFEAD jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFEB3 mov     r14d, 23h ; '#'
//   0xAFEB9 jmp     loc_AF6E0
//   0xAFEBE align 20h
//   0xAFEC0 mov     r14d, 1Ah
//   0xAFEC6 jmp     loc_AF6E0
//   0xAFECB align 10h
//   0xAFED0 lea     rsi, [rbp+var_110]
//   0xAFED7 lea     rdi, [rbp+var_50]
//   0xAFEDB call    sub_313370
//   0xAFEE0 mov     rdi, [rbp+var_50]
//   0xAFEE4 test    al, al
//   0xAFEE6 jnz     loc_AF60E
//   0xAFEEC test    rdi, rdi
//   0xAFEEF jz      short loc_AFEFE
//   0xAFEF1 mov     qword ptr [rbp+var_48], 0
//   0xAFEF9 call    _qfree
//   0xAFEFE mov     rdi, [rbp+var_60]
//   0xAFF02 call    _qfree
//   0xAFF07 mov     r12, [r12+10h]
//   0xAFF0C test    r12, r12
//   0xAFF0F jnz     loc_AF480
//   0xAFF15 jmp     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFF1A align 20h
//   0xAFF20 mov     r14d, 35h ; '5'
//   0xAFF26 jmp     loc_AF6E0
//   0xAFF2B mov     r14d, 32h ; '2'
//   0xAFF31 jmp     loc_AF6E0
//   0xAFF36 mov     r14d, 15h
//   0xAFF3C jmp     loc_AF6E0
//   0xAFF41 mov     [rbp+var_110], r12
//   0xAFF48 movups  [rbp+var_108], xmm1
//   0xAFF4F jmp     loc_AF3BE
//   0xAFF54 mov     [rbp+var_E0], r12
//   0xAFF5B movups  [rbp+var_D8], xmm1
//   0xAFF62 jmp     loc_AF452
//   0xAFF67 mov     r14d, 27h ; '''
//   0xAFF6D jmp     loc_AF6E0
//   0xAFF72 mov     rdi, [r15+8]
//   0xAFF76 call    sub_11E4E0
//   0xAFF7B test    rax, rax
//   0xAFF7E jz      short loc_AFF96
//   0xAFF80 mov     rdx, rax
//   0xAFF83 mov     rsi, r15
//   0xAFF86 mov     rdi, rbx
//   0xAFF89 call    sub_1854C0
//   0xAFF8E test    al, al
//   0xAFF90 jnz     loc_B07E5
//   0xAFF96 cmp     byte ptr [r15+40h], 8
//   0xAFF9B jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFFA1 mov     rax, [r15+48h]
//   0xAFFA5 mov     eax, [rax+11Ch]
//   0xAFFAB cmp     eax, 5
//   0xAFFAE jnz     loc_AFC77
//   0xAFFB4 mov     rsi, r15
//   0xAFFB7 mov     rdi, rbx
//   0xAFFBA call    sub_182AD0
//   0xAFFBF test    al, al
//   0xAFFC1 jnz     loc_AF9A3
//   0xAFFC7 cmp     byte ptr [r15+40h], 8
//   0xAFFCC jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFFD2 mov     rax, [r15+48h]
//   0xAFFD6 mov     eax, [rax+11Ch]
//   0xAFFDC cmp     eax, 5
//   0xAFFDF jz      loc_AFC8E
//   0xAFFE5 jmp     loc_AFC85
//   0xAFFEA mov     r14d, 1Fh
//   0xAFFF0 jmp     loc_AF6E0
//   0xAFFF5 mov     r14d, 25h ; '%'
//   0xAFFFB jmp     loc_AF6E0
//   0xB0000 mov     r14d, 14h
//   0xB0006 jmp     loc_AF6E0
//   0xB000B mov     r14d, 13h
//   0xB0011 jmp     loc_AF6E0
//   0xB0016 mov     eax, [r15+28h]
//   0xB001A cmp     [r13+3Ch], eax
//   0xB001E jnz     loc_AFA33
//   0xB0024 lea     rax, [r15+40h]
//   0xB0028 lea     r14, [r15+20h]
//   0xB002C xor     edx, edx
//   0xB002E mov     rsi, rax
//   0xB0031 mov     rdi, r14
//   0xB0034 mov     qword ptr [rbp+var_150], rax
//   0xB003B call    sub_1216A0
//   0xB0040 test    al, al
//   0xB0042 jz      loc_AFA33
//   0xB0048 cmp     byte ptr [r15+30h], 2
//   0xB004D jnz     loc_AFA33
//   0xB0053 lea     rdx, [rbp+var_F0]
//   0xB005A xor     r8d, r8d
//   0xB005D mov     rcx, r15
//   0xB0060 mov     rdi, rbx
//   0xB0063 lea     rsi, [rbp+var_120]
//   0xB006A call    sub_125680
//   0xB006F mov     r12, rax
//   0xB0072 test    rax, rax
//   0xB0075 jz      loc_AFA33
//   0xB007B lea     rax, [r15+30h]
//   0xB007F movsxd  rsi, dword ptr [r12+44h]
//   0xB0084 mov     edx, 1
//   0xB0089 mov     rdi, rax
//   0xB008C mov     [rbp+var_140], rax
//   0xB0093 call    sub_9DE90
//   0xB0098 test    al, al
//   0xB009A jz      loc_AFA33
//   0xB00A0 mov     eax, [r12]
//   0xB00A4 cmp     eax, 2
//   0xB00A7 jz      loc_B0C2A
//   0xB00AD cmp     eax, 4
//   0xB00B0 jnz     loc_AFA33
//   0xB00B6 cmp     byte ptr [r12+20h], 4
//   0xB00BC jnz     loc_AFA33
//   0xB00C2 mov     rax, [r12+28h]
//   0xB00C7 cmp     dword ptr [rax], 2
//   0xB00CA jnz     loc_AFA33
//   0xB00D0 cmp     byte ptr [rax+20h], 1
//   0xB00D4 jnz     loc_AFA33
//   0xB00DA mov     ecx, [rax+28h]
//   0xB00DD cmp     [r13+38h], ecx
//   0xB00E1 jnz     loc_AFA33
//   0xB00E7 cmp     byte ptr [rax+30h], 1
//   0xB00EB jnz     loc_AFA33
//   0xB00F1 mov     eax, [rax+38h]
//   0xB00F4 cmp     [r13+3Ch], eax
//   0xB00F8 jnz     loc_AFA33
//   0xB00FE lea     rdx, [rbp+var_F0]
//   0xB0105 mov     r8, r15
//   0xB0108 mov     rcx, r12
//   0xB010B mov     rdi, rbx
//   0xB010E lea     rsi, [rbp+var_120]
//   0xB0115 call    sub_ABE10
//   0xB011A test    al, al
//   0xB011C jz      loc_AFA33
//   0xB0122 mov     dword ptr [r15], 3Ch ; '<'
//   0xB0129 mov     rax, [r15+18h]
//   0xB012D lea     rsi, [r12+40h]
//   0xB0132 mov     rdx, [r12+18h]
//   0xB0137 mov     rdi, qword ptr [rbp+var_150]
//   0xB013E mov     [r15+18h], rdx
//   0xB0142 mov     [r12+18h], rax
//   0xB0147 call    sub_118550
//   0xB014C mov     rdi, r14
//   0xB014F call    sub_1188E0
//   0xB0154 mov     rdi, [rbp+var_140]
//   0xB015B call    sub_1188E0
//   0xB0160 mov     rdi, r12
//   0xB0163 call    sub_1190E0
//   0xB0168 mov     eax, [rbx+18h]
//   0xB016B mov     r14d, 2
//   0xB0171 and     ah, 0FDh
//   0xB0174 or      al, 90h
//   0xB0176 mov     [rbx+18h], eax
//   0xB0179 jmp     loc_AF6E0
//   0xB017E align 20h
//   0xB0180 mov     eax, [r15+38h]
//   0xB0184 cmp     [r13+38h], eax
//   0xB0188 jnz     loc_AFBC4
//   0xB018E cmp     byte ptr [r15+40h], 1
//   0xB0193 jnz     loc_AFBC4
//   0xB0199 mov     eax, [r15+48h]
//   0xB019D cmp     [r13+3Ch], eax
//   0xB01A1 jnz     loc_AFBC4
//   0xB01A7 lea     rdx, [rbp+var_F0]
//   0xB01AE xor     r8d, r8d
//   0xB01B1 mov     rcx, r15
//   0xB01B4 mov     rdi, rbx
//   0xB01B7 lea     rsi, [rbp+var_120]
//   0xB01BE call    sub_124E60
//   0xB01C3 mov     r12, rax
//   0xB01C6 test    rax, rax
//   0xB01C9 jz      loc_AFBC4
//   0xB01CF mov     rax, [r15+18h]
//   0xB01D3 cmp     [r12+18h], rax
//   0xB01D8 jnz     loc_AFBC4
//   0xB01DE cmp     dword ptr [r12], 0Dh
//   0xB01E3 jnz     loc_AFBC4
//   0xB01E9 cmp     byte ptr [r12+20h], 1
//   0xB01EF jnz     loc_AFBC4
//   0xB01F5 mov     eax, [r12+28h]
//   0xB01FA cmp     [r13+3Ch], eax
//   0xB01FE jnz     loc_AFBC4
//   0xB0204 lea     rsi, [r12+40h]
//   0xB0209 lea     rdi, [r12+20h]
//   0xB020E xor     edx, edx
//   0xB0210 call    sub_1216A0
//   0xB0215 test    al, al
//   0xB0217 jz      loc_AFBC4
//   0xB021D movsxd  rsi, dword ptr [r15+24h]
//   0xB0221 lea     rdi, [r12+30h]
//   0xB0226 mov     edx, 1
//   0xB022B call    sub_9DE90
//   0xB0230 test    al, al
//   0xB0232 jz      loc_AFBC4
//   0xB0238 lea     rdx, [rbp+var_F0]
//   0xB023F mov     r8, r15
//   0xB0242 mov     rcx, r12
//   0xB0245 mov     rdi, rbx
//   0xB0248 lea     rsi, [rbp+var_120]
//   0xB024F call    sub_ABE10
//   0xB0254 test    al, al
//   0xB0256 jz      loc_AFBC4
//   0xB025C mov     rdi, r12
//   0xB025F call    sub_1190E0
//   0xB0264 mov     dword ptr [r15], 3Bh ; ';'
//   0xB026B lea     rdi, [r15+30h]
//   0xB026F call    sub_1188E0
//   0xB0274 lea     rdi, [r15+40h]
//   0xB0278 call    sub_1188E0
//   0xB027D or      dword ptr [rbx+18h], 10h
//   0xB0281 mov     r14d, 1
//   0xB0287 jmp     loc_AF6E0
//   0xB028C align 10h
//   0xB0290 cmp     eax, 3Ch ; '<'
//   0xB0293 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0299 cmp     byte ptr [r15+40h], 1
//   0xB029E jz      loc_B07AC
//   0xB02A4 cmp     byte ptr [r15+30h], 1
//   0xB02A9 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB02AF cmp     byte ptr [r10+40h], 1
//   0xB02B4 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB02BA mov     eax, [r15+38h]
//   0xB02BE cmp     [r10+48h], eax
//   0xB02C2 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB02C8 cmp     r12d, [r10+44h]
//   0xB02CC jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB02D2 mov     esi, [r13+3Ch]
//   0xB02D6 mov     r9d, 1
//   0xB02DC xor     r8d, r8d
//   0xB02DF xor     ecx, ecx
//   0xB02E1 mov     rdx, r10
//   0xB02E4 mov     rdi, rbx
//   0xB02E7 mov     qword ptr [rbp+var_150], r10
//   0xB02EE call    sub_1206A0
//   0xB02F3 mov     rdi, rax
//   0xB02F6 test    rax, rax
//   0xB02F9 jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB02FF cmp     byte ptr [r15+40h], 1
//   0xB0304 mov     r10, qword ptr [rbp+var_150]
//   0xB030B jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0311 cmp     byte ptr [rax+40h], 1
//   0xB0315 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB031B mov     eax, [rax+48h]
//   0xB031E cmp     [r15+48h], eax
//   0xB0322 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0328 cmp     r12d, [rdi+44h]
//   0xB032C jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0332 mov     [rbp+var_138], r10
//   0xB0339 call    sub_1190E0
//   0xB033E mov     eax, [rbx+18h]
//   0xB0341 mov     r10, [rbp+var_138]
//   0xB0348 and     ah, 0FDh
//   0xB034B or      al, 80h
//   0xB034D mov     [rbx+18h], eax
//   0xB0350 mov     rdi, r10
//   0xB0353 call    sub_1190E0
//   0xB0358 mov     eax, [rbx+18h]
//   0xB035B mov     rsi, r15
//   0xB035E mov     rdi, rbx
//   0xB0361 and     ah, 0FDh
//   0xB0364 or      al, 80h
//   0xB0366 mov     [rbx+18h], eax
//   0xB0369 call    sub_32B5C0
//   0xB036E test    r14, r14
//   0xB0371 jz      short loc_B0386
//   0xB0373 mov     rdi, r14
//   0xB0376 call    sub_1190E0
//   0xB037B mov     eax, [rbx+18h]
//   0xB037E and     ah, 0FDh
//   0xB0381 or      al, 80h
//   0xB0383 mov     [rbx+18h], eax
//   0xB0386 mov     rdi, r15
//   0xB0389 call    sub_1B1540
//   0xB038E mov     rcx, rax
//   0xB0391 mov     edx, 5
//   0xB0396 mov     rdi, rbx
//   0xB0399 xor     eax, eax
//   0xB039B lea     rsi, aCmbDS; "cmb%d: %s"
//   0xB03A2 call    sub_9E060
//   0xB03A7 jmp     loc_AF6FF
//   0xB03AC align 10h
//   0xB03B0 cmp     dword ptr [r11], 4
//   0xB03B4 jnz     loc_AF822
//   0xB03BA mov     eax, [r15+44h]
//   0xB03BE cmp     [r11+44h], eax
//   0xB03C2 jg      loc_B07F0
//   0xB03C8 cmp     eax, 4
//   0xB03CB jle     loc_AF838
//   0xB03D1 jmp     loc_AF855
//   0xB03D6 mov     r14d, 31h ; '1'
//   0xB03DC jmp     loc_AF6E0
//   0xB03E1 mov     r14d, 10h
//   0xB03E7 jmp     loc_AF6E0
//   0xB03EC mov     r14d, 19h
//   0xB03F2 jmp     loc_AF6E0
//   0xB03F7 mov     r14d, 16h
//   0xB03FD jmp     loc_AF6E0
//   0xB0402 mov     eax, [r13+54h]
//   0xB0406 cmp     [r10+24h], eax
//   0xB040A jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0410 mov     rsi, [r15+18h]
//   0xB0414 mov     rdi, [rbx+40h]
//   0xB0418 mov     qword ptr [rbp+var_150], r10
//   0xB041F lea     r12, [r10+20h]
//   0xB0423 call    sub_9E120
//   0xB0428 mov     rsi, rax
//   0xB042B xor     edx, edx
//   0xB042D mov     rdi, r12
//   0xB0430 call    sub_9DE90
//   0xB0435 test    al, al
//   0xB0437 mov     r10, qword ptr [rbp+var_150]
//   0xB043E jz      def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0444 mov     esi, [r13+3Ch]
//   0xB0448 mov     r9d, 1
//   0xB044E xor     r8d, r8d
//   0xB0451 xor     ecx, ecx
//   0xB0453 mov     rdx, r10
//   0xB0456 mov     rdi, rbx
//   0xB0459 mov     [rbp+var_138], r10
//   0xB0460 call    sub_1206A0
//   0xB0465 mov     rsi, rax
//   0xB0468 mov     rdi, r13
//   0xB046B mov     r14, rax
//   0xB046E call    sub_9E160
//   0xB0473 mov     r10, [rbp+var_138]
//   0xB047A test    al, al
//   0xB047C jz      short loc_B04BF
//   0xB047E mov     rdi, r14
//   0xB0481 call    sub_1190E0
//   0xB0486 mov     eax, [rbx+18h]
//   0xB0489 mov     rdi, [rbx+40h]
//   0xB048D and     ah, 0FDh
//   0xB0490 or      al, 80h
//   0xB0492 mov     [rbx+18h], eax
//   0xB0495 mov     rsi, [r14+18h]
//   0xB0499 call    sub_1CB530
//   0xB049E mov     rsi, [r15+18h]
//   0xB04A2 mov     rdi, [rbx+40h]
//   0xB04A6 mov     r14, rax
//   0xB04A9 call    sub_1CB530
//   0xB04AE cmp     r14, rax
//   0xB04B1 mov     r10, [rbp+var_138]
//   0xB04B8 jz      short loc_B04BF
//   0xB04BA or      dword ptr [r15+4], 20h
//   0xB04BF mov     rdi, r10
//   0xB04C2 call    sub_1190E0
//   0xB04C7 mov     eax, [rbx+18h]
//   0xB04CA lea     r12, [r15+30h]
//   0xB04CE lea     rdi, [r15+20h]
//   0xB04D2 mov     rsi, r12
//   0xB04D5 and     ah, 0FDh
//   0xB04D8 or      al, 80h
//   0xB04DA mov     [rbx+18h], eax
//   0xB04DD mov     dword ptr [r15], 39h ; '9'
//   0xB04E4 call    sub_120CC0
//   0xB04E9 lea     rax, [r15+40h]
//   0xB04ED mov     rdi, r12
//   0xB04F0 mov     rsi, rax
//   0xB04F3 mov     r14, rax
//   0xB04F6 call    sub_120CC0
//   0xB04FB mov     rdi, r14
//   0xB04FE call    sub_1188E0
//   0xB0503 mov     rdi, r15
//   0xB0506 call    sub_1B1540
//   0xB050B mov     rcx, rax
//   0xB050E mov     edx, 6
//   0xB0513 mov     rdi, rbx
//   0xB0516 xor     eax, eax
//   0xB0518 lea     rsi, aCmbDS; "cmb%d: %s"
//   0xB051F call    sub_9E060
//   0xB0524 mov     edx, 6
//   0xB0529 mov     rsi, r15
//   0xB052C mov     rdi, rbx
//   0xB052F call    sub_163350
//   0xB0534 jmp     loc_AF6FF
//   0xB0539 align 20h
//   0xB0540 cmp     byte ptr [r10+20h], 1
//   0xB0545 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB054B mov     eax, [r10+28h]
//   0xB054F cmp     [r13+3Ch], eax
//   0xB0553 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0559 lea     rsi, [r10+40h]
//   0xB055D lea     rdi, [r10+20h]
//   0xB0561 xor     edx, edx
//   0xB0563 mov     qword ptr [rbp+var_150], r10
//   0xB056A call    sub_1216A0
//   0xB056F test    al, al
//   0xB0571 mov     r10, qword ptr [rbp+var_150]
//   0xB0578 jz      short loc_B0585
//   0xB057A cmp     byte ptr [r10+30h], 2
//   0xB057F jz      loc_B0A7E
//   0xB0585 mov     esi, [r13+3Ch]
//   0xB0589 jmp     loc_AFE3E
//   0xB058E lea     rsi, [r15+20h]
//   0xB0592 lea     rdi, [r11+20h]
//   0xB0596 xor     edx, edx
//   0xB0598 mov     [rbp+var_158], r11
//   0xB059F call    sub_1216A0
//   0xB05A4 test    al, al
//   0xB05A6 mov     r11, [rbp+var_158]
//   0xB05AD jz      loc_AF838
//   0xB05B3 cmp     byte ptr [r15+20h], 4
//   0xB05B8 jz      loc_B0A55
//   0xB05BE mov     rdi, [rbp+var_140]
//   0xB05C5 lea     rdx, [r11+40h]
//   0xB05C9 mov     rsi, r13
//   0xB05CC mov     [rbp+var_158], r11
//   0xB05D3 call    sub_122F60
//   0xB05D8 test    al, al
//   0xB05DA mov     r11, [rbp+var_158]
//   0xB05E1 jz      loc_AF838
//   0xB05E7 mov     eax, [r15+44h]
//   0xB05EB cmp     [r11+44h], eax
//   0xB05EF jl      loc_AF838
//   0xB05F5 lea     r14, [rbp+var_60]
//   0xB05F9 mov     ecx, 1
//   0xB05FE mov     rdx, r11
//   0xB0601 mov     rsi, rbx
//   0xB0604 mov     rdi, r14
//   0xB0607 mov     [rbp+var_140], r11
//   0xB060E call    sub_1201C0
//   0xB0613 mov     r11, [rbp+var_140]
//   0xB061A mov     rsi, qword ptr [rbp+var_150]
//   0xB0621 mov     rcx, r15
//   0xB0624 mov     rdi, rbx
//   0xB0627 mov     r8d, 1
//   0xB062D mov     rdx, [r11+8]
//   0xB0631 call    sub_A55E0
//   0xB0636 test    rax, rax
//   0xB0639 mov     r11, [rbp+var_140]
//   0xB0640 jz      loc_B0B1F
//   0xB0646 mov     rdi, r14
//   0xB0649 mov     [rbp+var_140], r11
//   0xB0650 call    sub_8F680
//   0xB0655 mov     r11, [rbp+var_140]
//   0xB065C jmp     loc_AF838
//   0xB0661 align 8
//   0xB0668 mov     r14d, 20h ; ' '
//   0xB066E jmp     loc_AF6E0
//   0xB0673 mov     r14d, 2Bh ; '+'
//   0xB0679 jmp     loc_AF6E0
//   0xB067E mov     r14d, 28h ; '('
//   0xB0684 jmp     loc_AF6E0
//   0xB0689 mov     r14d, 18h
//   0xB068F jmp     loc_AF6E0
//   0xB0694 mov     r14d, 33h ; '3'
//   0xB069A jmp     loc_AF6E0
//   0xB069F mov     r14d, 11h
//   0xB06A5 jmp     loc_AF6E0
//   0xB06AA mov     dword ptr [r15], 4
//   0xB06B1 lea     rsi, [r12+20h]
//   0xB06B6 lea     rdi, [r15+20h]
//   0xB06BA call    sub_120CC0
//   0xB06BF cmp     byte ptr [r15+20h], 1
//   0xB06C4 jz      loc_B08EF
//   0xB06CA mov     rdi, r12
//   0xB06CD call    sub_1190E0
//   0xB06D2 mov     eax, [rbx+18h]
//   0xB06D5 mov     rdi, r15
//   0xB06D8 and     ah, 0FDh
//   0xB06DB or      al, 80h
//   0xB06DD mov     [rbx+18h], eax
//   0xB06E0 call    sub_1B1540
//   0xB06E5 mov     rcx, rax
//   0xB06E8 mov     edx, 3
//   0xB06ED mov     rdi, rbx
//   0xB06F0 xor     eax, eax
//   0xB06F2 lea     rsi, aCmbDS; "cmb%d: %s"
//   0xB06F9 call    sub_9E060
//   0xB06FE mov     edx, 6
//   0xB0703 mov     rsi, r15
//   0xB0706 mov     rdi, rbx
//   0xB0709 call    sub_163350
//   0xB070E mov     rdi, [rbp+var_50]
//   0xB0712 test    rdi, rdi
//   0xB0715 jz      short loc_B0722
//   0xB0717 xor     eax, eax
//   0xB0719 mov     qword ptr [rbp+var_48], rax
//   0xB071D call    _qfree
//   0xB0722 mov     rdi, [rbp+var_60]
//   0xB0726 call    _qfree
//   0xB072B mov     rdi, [rbp+var_80]
//   0xB072F test    rdi, rdi
//   0xB0732 jz      short loc_B073F
//   0xB0734 xor     eax, eax
//   0xB0736 mov     qword ptr [rbp+var_78], rax
//   0xB073A call    _qfree
//   0xB073F mov     rdi, [rbp+var_90]
//   0xB0746 call    _qfree
//   0xB074B jmp     loc_AF6FF
//   0xB0750 mov     rdi, [rbp+var_80]
//   0xB0754 test    rdi, rdi
//   0xB0757 jz      short loc_B0764
//   0xB0759 xor     eax, eax
//   0xB075B mov     qword ptr [rbp+var_78], rax
//   0xB075F call    _qfree
//   0xB0764 mov     rdi, [rbp+var_90]
//   0xB076B call    _qfree
//   0xB0770 jmp     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0775 mov     r14d, 2Ch ; ','
//   0xB077B mov     rdi, r12
//   0xB077E call    sub_8F680
//   0xB0783 mov     rdi, qword ptr [rbp+var_150]
//   0xB078A call    sub_8F680
//   0xB078F jmp     loc_AF6E0
//   0xB0794 mov     r14d, 17h
//   0xB079A jmp     loc_AF6E0
//   0xB079F mov     rdi, r12
//   0xB07A2 call    sub_1188E0
//   0xB07A7 jmp     loc_AF656
//   0xB07AC cmp     byte ptr [r10+40h], 1
//   0xB07B1 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB07B7 mov     eax, [r10+48h]
//   0xB07BB cmp     [r15+48h], eax
//   0xB07BF jz      loc_B09C0
//   0xB07C5 cmp     byte ptr [r15+30h], 1
//   0xB07CA jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB07D0 jmp     loc_B02BA
//   0xB07D5 mov     r14d, 1Eh
//   0xB07DB jmp     loc_AF6E0
//   0xB07E0 call    ___stack_chk_fail
//   0xB07E5 mov     r14d, 1Bh
//   0xB07EB jmp     loc_AF6E0
//   0xB07F0 mov     rsi, qword ptr [rbp+var_150]
//   0xB07F7 mov     rdi, r12
//   0xB07FA mov     [rbp+var_158], r11
//   0xB0801 call    sub_9DE50
//   0xB0806 test    al, al
//   0xB0808 mov     r11, [rbp+var_158]
//   0xB080F jz      loc_AF822
//   0xB0815 mov     rax, [rbx+1E0h]
//   0xB081C xor     edx, edx
//   0xB081E mov     rdi, r15
//   0xB0821 mov     rsi, [rax+70h]
//   0xB0825 call    sub_11C0E0
//   0xB082A test    al, al
//   0xB082C mov     r11, [rbp+var_158]
//   0xB0833 jnz     loc_AF822
//   0xB0839 mov     rdx, [r11+8]
//   0xB083D mov     r8d, 1
//   0xB0843 mov     rcx, r15
//   0xB0846 mov     rdi, rbx
//   0xB0849 mov     rsi, qword ptr [rbp+var_150]
//   0xB0850 call    sub_A55E0
//   0xB0855 test    rax, rax
//   0xB0858 mov     r11, [rbp+var_158]
//   0xB085F jnz     loc_AF822
//   0xB0865 mov     rax, [rbx+1E0h]
//   0xB086C mov     r9, r15
//   0xB086F mov     rcx, r11
//   0xB0872 mov     rdx, rbx
//   0xB0875 lea     rsi, [rbp+var_128]
//   0xB087C lea     r8, [r11+40h]
//   0xB0880 mov     rdi, [rax+70h]
//   0xB0884 push    r10
//   0xB0886 push    [rbp+var_140]
//   0xB088C call    sub_12BAB0
//   0xB0891 test    al, al
//   0xB0893 pop     r8
//   0xB0895 mov     r11, [rbp+var_158]
//   0xB089C pop     r9
//   0xB089E jz      loc_AF822
//   0xB08A4 lea     r14, [rbp+var_60]
//   0xB08A8 lea     rsi, [r11+20h]
//   0xB08AC mov     rdi, r14
//   0xB08AF call    sub_11F580
//   0xB08B4 mov     rax, [rbp+var_128]
//   0xB08BB mov     r11, [rbp+var_158]
//   0xB08C2 test    rax, rax
//   0xB08C5 js      short loc_B08D4
//   0xB08C7 movsxd  rdx, dword ptr [rbp+var_60+4]
//   0xB08CB cmp     rax, rdx
//   0xB08CE jl      loc_B0A90
//   0xB08D4 mov     rdi, r14
//   0xB08D7 mov     [rbp+var_158], r11
//   0xB08DE call    sub_1188E0
//   0xB08E3 mov     r11, [rbp+var_158]
//   0xB08EA jmp     loc_AF822
//   0xB08EF mov     eax, [r15+28h]
//   0xB08F3 cmp     [r13+3Ch], eax
//   0xB08F7 jnz     loc_B06CA
//   0xB08FD mov     rax, [r12+18h]
//   0xB0902 mov     [r15+18h], rax
//   0xB0906 jmp     loc_B06CA
//   0xB090B lea     rdi, [rax+20h]
//   0xB090F xor     edx, edx
//   0xB0911 xor     esi, esi
//   0xB0913 call    sub_9DE90
//   0xB0918 test    al, al
//   0xB091A jz      loc_AF97B
//   0xB0920 mov     eax, [r15+4]
//   0xB0924 mov     rcx, [rbp+var_140]
//   0xB092B sar     eax, 8
//   0xB092E mov     edx, [rcx+44h]
//   0xB0931 and     eax, 7
//   0xB0934 jz      short loc_B0948
//   0xB0936 lea     ecx, [rax-1]
//   0xB0939 mov     eax, 1
//   0xB093E shl     eax, cl
//   0xB0940 cmp     eax, edx
//   0xB0942 jl      loc_AF97B
//   0xB0948 cmp     [r15+44h], edx
//   0xB094C jge     loc_AF97B
//   0xB0952 xor     eax, eax
//   0xB0954 pxor    xmm0, xmm0
//   0xB0958 xor     ecx, ecx
//   0xB095A mov     rsi, r14
//   0xB095D mov     [rbp+var_60], rax
//   0xB0961 mov     rdi, rbx
//   0xB0964 mov     [rbp+var_58], rax
//   0xB0968 mov     [rbp+var_50], rax
//   0xB096C mov     rax, [rbp+var_140]
//   0xB0973 movups  [rbp+var_48], xmm0
//   0xB0977 add     rax, 40h ; '@'
//   0xB097B mov     rdx, rax
//   0xB097E mov     [rbp+var_158], rax
//   0xB0985 call    sub_123B20
//   0xB098A mov     rcx, [r15+8]
//   0xB098E mov     r8d, 1
//   0xB0994 mov     rsi, r14
//   0xB0997 mov     rdi, rbx
//   0xB099A mov     rax, [rbp+var_140]
//   0xB09A1 mov     rdx, [rax+8]
//   0xB09A5 call    sub_A58D0
//   0xB09AA test    rax, rax
//   0xB09AD jz      loc_B0BB7
//   0xB09B3 mov     rdi, r14
//   0xB09B6 call    sub_8F680
//   0xB09BB jmp     loc_AF97B
//   0xB09C0 cmp     r12d, [r10+44h]
//   0xB09C4 jnz     loc_B07C5
//   0xB09CA mov     rsi, [r15+18h]
//   0xB09CE mov     rdi, [rbx+40h]
//   0xB09D2 lea     rax, [r15+30h]
//   0xB09D6 mov     qword ptr [rbp+var_150], r10
//   0xB09DD mov     [rbp+var_140], rax
//   0xB09E4 call    sub_32BBA0
//   0xB09E9 mov     rdi, rax
//   0xB09EC call    _getseg
//   0xB09F1 mov     rsi, [rax+30h]
//   0xB09F5 xor     edx, edx
//   0xB09F7 lea     rdi, [r15+30h]
//   0xB09FB call    sub_9DE90
//   0xB0A00 test    al, al
//   0xB0A02 mov     r10, qword ptr [rbp+var_150]
//   0xB0A09 jnz     short loc_B0A24
//   0xB0A0B cmp     byte ptr [r15+30h], 1
//   0xB0A10 jnz     def_AF32D; jumptable 00000000000AF32D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0A16 mov     eax, [r15+38h]
//   0xB0A1A cmp     [r13+40h], eax
//   0xB0A1E jnz     loc_B02AF
//   0xB0A24 mov     rdx, [r15+10h]
//   0xB0A28 mov     esi, [r15+48h]
//   0xB0A2C xor     r8d, r8d
//   0xB0A2F xor     ecx, ecx
//   0xB0A31 mov     rdi, rbx
//   0xB0A34 mov     qword ptr [rbp+var_150], r10
//   0xB0A3B call    sub_124B50
//   0xB0A40 mov     r10, qword ptr [rbp+var_150]
//   0xB0A47 cmp     r10, rax
//   0xB0A4A jnz     loc_B02A4
//   0xB0A50 jmp     loc_B0350
//   0xB0A55 mov     rdi, [r15+28h]
//   0xB0A59 xor     edx, edx
//   0xB0A5B mov     rsi, r13
//   0xB0A5E mov     [rbp+var_158], r11
//   0xB0A65 call    sub_11C0E0
//   0xB0A6A test    al, al
//   0xB0A6C mov     r11, [rbp+var_158]
//   0xB0A73 jnz     loc_AF838
//   0xB0A79 jmp     loc_B05BE
//   0xB0A7E cmp     [r10+24h], r12d
//   0xB0A82 jnz     loc_B0585
//   0xB0A88 mov     r14, r10
//   0xB0A8B jmp     loc_B0585
//   0xB0A90 mov     rdx, [rbx+1E0h]
//   0xB0A97 mov     rdi, r14
//   0xB0A9A mov     [rbp+var_158], r11
//   0xB0AA1 mov     rsi, [rdx+70h]
//   0xB0AA5 mov     edx, eax
//   0xB0AA7 call    sub_122A50
//   0xB0AAC test    al, al
//   0xB0AAE mov     r11, [rbp+var_158]
//   0xB0AB5 jz      loc_B08D4
//   0xB0ABB lea     rsi, [r15+20h]
//   0xB0ABF xor     edx, edx
//   0xB0AC1 mov     rdi, r14
//   0xB0AC4 call    sub_1216A0
//   0xB0AC9 test    al, al
//   0xB0ACB mov     r11, [rbp+var_158]
//   0xB0AD2 jz      loc_B08D4
//   0xB0AD8 mov     rdx, [r11+8]
//   0xB0ADC mov     rcx, r15
//   0xB0ADF mov     rsi, r14
//   0xB0AE2 mov     rdi, rbx
//   0xB0AE5 call    sub_A57F0
//   0xB0AEA test    al, al
//   0xB0AEC mov     r11, [rbp+var_158]
//   0xB0AF3 jnz     loc_B08D4
//   0xB0AF9 mov     rdi, r15
//   0xB0AFC call    sub_1190E0
//   0xB0B01 mov     eax, [rbx+18h]
//   0xB0B04 mov     rdi, r14
//   0xB0B07 mov     r14d, 6
//   0xB0B0D and     ah, 0FDh
//   0xB0B10 or      al, 80h
//   0xB0B12 mov     [rbx+18h], eax
//   0xB0B15 call    sub_1188E0
//   0xB0B1A jmp     loc_B077B
//   0xB0B1F mov     rdx, [r11+8]
//   0xB0B23 mov     r8d, 1
//   0xB0B29 mov     rcx, r15
//   0xB0B2C mov     rsi, r14
//   0xB0B2F mov     rdi, rbx
//   0xB0B32 mov     [rbp+var_140], r11
//   0xB0B39 call    sub_A55E0
//   0xB0B3E test    rax, rax
//   0xB0B41 mov     r11, [rbp+var_140]
//   0xB0B48 jnz     loc_B0646
//   0xB0B4E mov     rdi, r15
//   0xB0B51 call    sub_1190E0
//   0xB0B56 mov     eax, [rbx+18h]
//   0xB0B59 mov     rdi, r14
//   0xB0B5C mov     r14d, 8
//   0xB0B62 and     ah, 0FDh
//   0xB0B65 or      al, 80h
//   0xB0B67 mov     [rbx+18h], eax
//   0xB0B6A call    sub_8F680
//   0xB0B6F jmp     loc_B077B
//   0xB0B74 mov     rdi, r14
//   0xB0B77 call    sub_1190E0
//   0xB0B7C mov     eax, [rbx+18h]
//   0xB0B7F mov     rdi, [rbx+40h]
//   0xB0B83 and     ah, 0FDh
//   0xB0B86 or      al, 80h
//   0xB0B88 mov     [rbx+18h], eax
//   0xB0B8B mov     rsi, [r14+18h]
//   0xB0B8F call    sub_1CB530
//   0xB0B94 mov     rsi, [r15+18h]
//   0xB0B98 mov     rdi, [rbx+40h]
//   0xB0B9C mov     r14, rax
//   0xB0B9F call    sub_1CB530
//   0xB0BA4 cmp     r14, rax
//   0xB0BA7 jz      loc_AFD83
//   0xB0BAD or      dword ptr [r15+4], 20h
//   0xB0BB2 jmp     loc_AFD83
//   0xB0BB7 mov     rdx, [rbp+var_158]
//   0xB0BBE mov     rdi, qword ptr [rbp+var_150]
//   0xB0BC5 mov     rsi, r13
//   0xB0BC8 call    sub_122F60
//   0xB0BCD test    al, al
//   0xB0BCF jz      loc_B09B3
//   0xB0BD5 mov     rsi, [rbp+var_158]
//   0xB0BDC mov     rdi, qword ptr [rbp+var_150]
//   0xB0BE3 call    sub_120CC0
//   0xB0BE8 mov     rax, [rbp+var_140]
//   0xB0BEF mov     dword ptr [r15], 9
//   0xB0BF6 test    byte ptr [rax+4], 80h
//   0xB0BFA jnz     short loc_B0C0F
//   0xB0BFC mov     rdi, rax
//   0xB0BFF call    sub_1190E0
//   0xB0C04 mov     eax, [rbx+18h]
//   0xB0C07 and     ah, 0FDh
//   0xB0C0A or      al, 80h
//   0xB0C0C mov     [rbx+18h], eax
//   0xB0C0F mov     rdi, r14
//   0xB0C12 mov     r14d, 7
//   0xB0C18 call    sub_8F680
//   0xB0C1D mov     rdi, r12
//   0xB0C20 call    sub_1188E0
//   0xB0C25 jmp     loc_AF6E0
//   0xB0C2A cmp     byte ptr [r12+20h], 1
//   0xB0C30 jnz     loc_AFA33
//   0xB0C36 mov     eax, [r12+28h]
//   0xB0C3B cmp     [r13+38h], eax
//   0xB0C3F jnz     loc_AFA33
//   0xB0C45 cmp     byte ptr [r12+30h], 1
//   0xB0C4B jnz     loc_AFA33
//   0xB0C51 mov     eax, [r12+38h]
//   0xB0C56 cmp     [r13+3Ch], eax
//   0xB0C5A jnz     loc_AFA33
//   0xB0C60 jmp     loc_B00FE
//   0xB0C65 mov     rbx, rax
//   0xB0C68 jmp     loc_304DA
//   0xB0C6D mov     rbx, rax
//   0xB0C70 jmp     loc_30511
//   0xB0C75 mov     rbx, rax
//   0xB0C78 jmp     loc_30520
//   0xB0C7D mov     rbx, rax
//   0xB0C80 jmp     loc_3052A
//   0xB0C85 mov     rbx, rax
//   0xB0C88 jmp     loc_30538
//   0xB0C8D mov     rbx, rax
//   0xB0C90 jmp     loc_3054A
//   0xB0C95 mov     rbx, rax
//   0xB0C98 jmp     loc_30573
//   0xB0C9D mov     rbx, rax
//   0xB0CA0 jmp     loc_30552
//   0xB0CA5 mov     rbx, rax
//   0xB0CA8 jmp     loc_30584
//   0xB0CAD mov     rbx, rax
//   0xB0CB0 jmp     loc_30540
//   0xB0CB5 mov     rbx, rax
//   0xB0CB8 jmp     loc_3056B
//   0xB0CBD mov     rbx, rax
//   0xB0CC0 jmp     loc_304E2
// ============================================================

void sub_AF210(/* signature unknown */)
{
    // see disassembly above
}

