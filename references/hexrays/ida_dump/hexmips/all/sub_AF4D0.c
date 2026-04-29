// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xAF4D0
// Name:           sub_AF4D0
// Function size:  6837 bytes (1539 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xAF4D0 push    rbp
//   0xAF4D1 mov     rbp, rsp
//   0xAF4D4 push    r15
//   0xAF4D6 push    r14
//   0xAF4D8 push    r13
//   0xAF4DA push    r12
//   0xAF4DC push    rbx
//   0xAF4DD sub     rsp, 138h
//   0xAF4E4 mov     rax, fs:28h
//   0xAF4ED mov     [rbp+var_38], rax
//   0xAF4F1 xor     eax, eax
//   0xAF4F3 test    rsi, rsi
//   0xAF4F6 jz      short loc_AF504
//   0xAF4F8 mov     r15, rsi
//   0xAF4FB test    dword ptr [rsi+4], 40010h
//   0xAF502 jz      short loc_AF538
//   0xAF504 mov     byte ptr [rbp+var_138], 0
//   0xAF50B mov     rax, [rbp+var_38]
//   0xAF50F sub     rax, fs:28h
//   0xAF518 jnz     loc_B0AA0
//   0xAF51E movzx   eax, byte ptr [rbp+var_138]
//   0xAF525 lea     rsp, [rbp-28h]
//   0xAF529 pop     rbx
//   0xAF52A pop     r12
//   0xAF52C pop     r13
//   0xAF52E pop     r14
//   0xAF530 pop     r15
//   0xAF532 pop     rbp
//   0xAF533 retn
//   0xAF534 align 8
//   0xAF538 test    byte ptr [rsi+41h], 2
//   0xAF53C jnz     short loc_AF504
//   0xAF53E mov     rbx, rdi
//   0xAF541 mov     rdi, [rdi+40h]
//   0xAF545 call    sub_9E450
//   0xAF54A mov     byte ptr [rbp+var_138], al
//   0xAF550 test    al, al
//   0xAF552 jnz     short loc_AF504
//   0xAF554 mov     rdi, [rbx+1E0h]
//   0xAF55B mov     rcx, r15
//   0xAF55E mov     rdx, rbx
//   0xAF561 mov     esi, 0Ch
//   0xAF566 call    sub_339220
//   0xAF56B test    eax, eax
//   0xAF56D jnz     loc_AF970
//   0xAF573 mov     rax, [rbx+1E0h]
//   0xAF57A pxor    xmm0, xmm0
//   0xAF57E cmp     dword ptr [r15], 3Ch; switch 61 cases
//   0xAF582 mov     [rbp+var_120], 0
//   0xAF58D mov     [rbp+var_118], 0
//   0xAF598 mov     [rbp+var_110], 0
//   0xAF5A3 mov     r13, [rax+70h]
//   0xAF5A7 mov     [rbp+var_F0], 0
//   0xAF5B2 mov     [rbp+var_E8], 0
//   0xAF5BD mov     [rbp+var_E0], 0
//   0xAF5C8 movups  [rbp+var_108], xmm0
//   0xAF5CF movups  [rbp+var_D8], xmm0
//   0xAF5D6 ja      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF5DC mov     eax, [r15]
//   0xAF5DF lea     rdx, jpt_AF5ED
//   0xAF5E6 movsxd  rax, ds:(jpt_AF5ED - 4078ECh)[rdx+rax*4]
//   0xAF5EA add     rax, rdx
//   0xAF5ED jmp     rax; switch jump
//   0xAF5EF lea     r14, [rbp+var_60]; jumptable 00000000000AF5ED case 60
//   0xAF5F3 xor     ecx, ecx
//   0xAF5F5 mov     rdx, r15
//   0xAF5F8 mov     rsi, rbx
//   0xAF5FB mov     rdi, r14
//   0xAF5FE call    sub_120480
//   0xAF603 lea     rdi, [rbp+var_120]
//   0xAF60A mov     rsi, r14
//   0xAF60D call    sub_606D0
//   0xAF612 mov     rdi, [rbp+var_110]
//   0xAF619 pxor    xmm0, xmm0
//   0xAF61D mov     r12, [rbp+var_50]
//   0xAF621 mov     [rbp+var_50], 0
//   0xAF629 movdqu  xmm1, [rbp+var_48]
//   0xAF62E movups  [rbp+var_48], xmm0
//   0xAF632 test    rdi, rdi
//   0xAF635 jz      loc_B0201
//   0xAF63B movaps  [rbp+var_150], xmm1
//   0xAF642 mov     qword ptr [rbp+var_108], 0
//   0xAF64D call    _qfree
//   0xAF652 mov     rdi, [rbp+var_50]
//   0xAF656 movdqa  xmm1, [rbp+var_150]
//   0xAF65E mov     [rbp+var_110], r12
//   0xAF665 movups  [rbp+var_108], xmm1
//   0xAF66C test    rdi, rdi
//   0xAF66F jz      short loc_AF67E
//   0xAF671 mov     qword ptr [rbp+var_48], 0
//   0xAF679 call    _qfree
//   0xAF67E mov     rdi, [rbp+var_60]
//   0xAF682 call    _qfree
//   0xAF687 xor     ecx, ecx
//   0xAF689 mov     rdx, r15
//   0xAF68C mov     rsi, rbx
//   0xAF68F mov     rdi, r14
//   0xAF692 call    sub_123820
//   0xAF697 lea     rdi, [rbp+var_F0]
//   0xAF69E mov     rsi, r14
//   0xAF6A1 call    sub_606D0
//   0xAF6A6 mov     rdi, [rbp+var_E0]
//   0xAF6AD pxor    xmm0, xmm0
//   0xAF6B1 mov     r12, [rbp+var_50]
//   0xAF6B5 mov     [rbp+var_50], 0
//   0xAF6BD movdqu  xmm1, [rbp+var_48]
//   0xAF6C2 movups  [rbp+var_48], xmm0
//   0xAF6C6 test    rdi, rdi
//   0xAF6C9 jz      loc_B0214
//   0xAF6CF movaps  [rbp+var_150], xmm1
//   0xAF6D6 mov     qword ptr [rbp+var_D8], 0
//   0xAF6E1 call    _qfree
//   0xAF6E6 mov     rdi, [rbp+var_50]
//   0xAF6EA movdqa  xmm1, [rbp+var_150]
//   0xAF6F2 mov     [rbp+var_E0], r12
//   0xAF6F9 movups  [rbp+var_D8], xmm1
//   0xAF700 test    rdi, rdi
//   0xAF703 jz      short loc_AF712
//   0xAF705 mov     qword ptr [rbp+var_48], 0
//   0xAF70D call    _qfree
//   0xAF712 mov     rdi, [rbp+var_60]
//   0xAF716 call    _qfree
//   0xAF71B mov     r12, [r15+10h]
//   0xAF71F test    r12, r12
//   0xAF722 jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF728 lea     rax, [rbp+var_90]
//   0xAF72F mov     qword ptr [rbp+var_150], rax
//   0xAF736 nop     word ptr [rax+rax+00000000h]
//   0xAF740 mov     eax, [r12]
//   0xAF744 lea     edx, [rax-38h]
//   0xAF747 cmp     edx, 1
//   0xAF74A jbe     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF750 cmp     eax, 3Bh ; ';'
//   0xAF753 jnz     loc_AF8A3
//   0xAF759 mov     eax, [r15+44h]
//   0xAF75D cmp     [r12+24h], eax
//   0xAF762 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF768 mov     rsi, [r12+18h]
//   0xAF76D mov     rdi, [rbx+40h]
//   0xAF771 call    sub_1CB7F0
//   0xAF776 mov     rsi, [r15+18h]
//   0xAF77A mov     rdi, [rbx+40h]
//   0xAF77E mov     [rbp+var_140], rax
//   0xAF785 call    sub_1CB7F0
//   0xAF78A mov     rcx, rax
//   0xAF78D movsxd  rdx, dword ptr [r15+44h]
//   0xAF791 mov     rax, [rbp+var_140]
//   0xAF798 mov     [rbp+var_140], rcx
//   0xAF79F sub     rax, rdx
//   0xAF7A2 cmp     rax, rcx
//   0xAF7A5 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF7AB mov     edx, [r13+54h]
//   0xAF7AF mov     esi, [r13+3Ch]
//   0xAF7B3 mov     [rbp+var_90], 0
//   0xAF7BE mov     rdi, qword ptr [rbp+var_150]
//   0xAF7C5 mov     [rbp+var_88], 0
//   0xAF7D0 call    sub_5FC80
//   0xAF7D5 mov     rax, [rbx+40h]
//   0xAF7D9 pxor    xmm0, xmm0
//   0xAF7DD mov     [rbp+var_80], 0
//   0xAF7E5 movups  [rbp+var_78], xmm0
//   0xAF7E9 mov     rcx, [rbp+var_140]
//   0xAF7F0 movsxd  rdx, dword ptr [r13+50h]
//   0xAF7F4 add     rcx, [rax+5A0h]
//   0xAF7FB mov     rdi, qword ptr [rbp+var_150]
//   0xAF802 mov     rsi, rcx
//   0xAF805 call    sub_11E920
//   0xAF80A mov     rdx, [r12+8]
//   0xAF80F xor     r8d, r8d
//   0xAF812 mov     rcx, r15
//   0xAF815 mov     rdi, rbx
//   0xAF818 mov     rsi, qword ptr [rbp+var_150]
//   0xAF81F call    sub_A5B90
//   0xAF824 test    rax, rax
//   0xAF827 jnz     loc_B0A10
//   0xAF82D mov     ecx, 1
//   0xAF832 mov     rdx, r12
//   0xAF835 mov     rsi, rbx
//   0xAF838 mov     rdi, r14
//   0xAF83B call    sub_120480
//   0xAF840 mov     rdx, [r12+8]
//   0xAF845 mov     rcx, r15
//   0xAF848 mov     rsi, r14
//   0xAF84B mov     rdi, rbx
//   0xAF84E mov     r8d, 1
//   0xAF854 call    sub_A58A0
//   0xAF859 test    rax, rax
//   0xAF85C jz      loc_B096A
//   0xAF862 mov     rdi, [rbp+var_50]
//   0xAF866 test    rdi, rdi
//   0xAF869 jz      short loc_AF878
//   0xAF86B mov     qword ptr [rbp+var_48], 0
//   0xAF873 call    _qfree
//   0xAF878 mov     rdi, [rbp+var_60]
//   0xAF87C call    _qfree
//   0xAF881 mov     rdi, [rbp+var_80]
//   0xAF885 test    rdi, rdi
//   0xAF888 jz      short loc_AF897
//   0xAF88A mov     qword ptr [rbp+var_78], 0
//   0xAF892 call    _qfree
//   0xAF897 mov     rdi, [rbp+var_90]
//   0xAF89E call    _qfree
//   0xAF8A3 xor     ecx, ecx
//   0xAF8A5 mov     rdx, r12
//   0xAF8A8 mov     rsi, rbx
//   0xAF8AB mov     rdi, r14
//   0xAF8AE call    sub_123820
//   0xAF8B3 lea     rsi, [rbp+var_120]
//   0xAF8BA mov     rdi, r14
//   0xAF8BD call    sub_60580
//   0xAF8C2 test    al, al
//   0xAF8C4 jz      loc_B0190
//   0xAF8CA mov     rdi, [rbp+var_50]
//   0xAF8CE test    rdi, rdi
//   0xAF8D1 jz      short loc_AF8E0
//   0xAF8D3 mov     qword ptr [rbp+var_48], 0
//   0xAF8DB call    _qfree
//   0xAF8E0 mov     rdi, [rbp+var_60]
//   0xAF8E4 call    _qfree
//   0xAF8E9 nop     dword ptr [rax+00000000h]
//   0xAF8F0 mov     rsi, r15; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF8F3 mov     rdi, rbx
//   0xAF8F6 call    sub_A8000
//   0xAF8FB test    al, al
//   0xAF8FD jnz     loc_B0180
//   0xAF903 mov     rsi, r15
//   0xAF906 mov     rdi, rbx
//   0xAF909 call    sub_186830
//   0xAF90E test    al, al
//   0xAF910 jnz     loc_B01E0
//   0xAF916 mov     rdi, [rbp+var_E0]
//   0xAF91D test    rdi, rdi
//   0xAF920 jz      short loc_AF932
//   0xAF922 mov     qword ptr [rbp+var_D8], 0
//   0xAF92D call    _qfree
//   0xAF932 mov     rdi, [rbp+var_F0]
//   0xAF939 call    _qfree
//   0xAF93E mov     rdi, [rbp+var_110]
//   0xAF945 test    rdi, rdi
//   0xAF948 jz      short loc_AF95A
//   0xAF94A mov     qword ptr [rbp+var_108], 0
//   0xAF955 call    _qfree
//   0xAF95A mov     rdi, [rbp+var_120]
//   0xAF961 call    _qfree
//   0xAF966 jmp     loc_AF50B
//   0xAF96B align 10h
//   0xAF970 cmp     eax, 0FFFFFFFFh
//   0xAF973 setnz   byte ptr [rbp+var_138]
//   0xAF97A jmp     loc_AF50B
//   0xAF97F align 20h
//   0xAF980 mov     rsi, r15; jumptable 00000000000AF5ED cases 29,30,34,35,39,40,45,46,50,51
//   0xAF983 mov     rdi, rbx
//   0xAF986 call    sub_94080
//   0xAF98B test    al, al
//   0xAF98D jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF993 mov     r14d, 2Fh ; '/'
//   0xAF999 nop     dword ptr [rax+00000000h]
//   0xAF9A0 mov     rdi, r15
//   0xAF9A3 call    sub_1B1800
//   0xAF9A8 mov     rcx, rax
//   0xAF9AB mov     edx, r14d
//   0xAF9AE lea     rsi, aCmbDS; "cmb%d: %s"
//   0xAF9B5 mov     rdi, rbx
//   0xAF9B8 xor     eax, eax
//   0xAF9BA call    sub_9E320
//   0xAF9BF mov     byte ptr [rbp+var_138], 1
//   0xAF9C6 jmp     loc_AF916
//   0xAF9CB align 10h
//   0xAF9D0 mov     rsi, r15; jumptable 00000000000AF5ED case 19
//   0xAF9D3 mov     rdi, rbx
//   0xAF9D6 call    sub_97300
//   0xAF9DB test    al, al
//   0xAF9DD jnz     loc_B01F6
//   0xAF9E3 mov     rsi, r15
//   0xAF9E6 mov     rdi, rbx
//   0xAF9E9 call    sub_926F0
//   0xAF9EE test    al, al
//   0xAF9F0 jnz     loc_B0227
//   0xAF9F6 mov     rsi, r15
//   0xAF9F9 mov     rdi, rbx
//   0xAF9FC call    sub_94340
//   0xAFA01 test    al, al
//   0xAFA03 jnz     loc_B0696
//   0xAFA09 mov     rsi, r15
//   0xAFA0C mov     rdi, rbx
//   0xAFA0F call    sub_93570
//   0xAFA14 test    al, al
//   0xAFA16 jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFA1C mov     r14d, 39h ; '9'
//   0xAFA22 jmp     loc_AF9A0
//   0xAFA27 pxor    xmm0, xmm0; jumptable 00000000000AF5ED case 4
//   0xAFA2B lea     rdx, [r15+40h]
//   0xAFA2F mov     ecx, 1
//   0xAFA34 mov     rdi, rbx
//   0xAFA37 lea     r14, [rbp+var_C0]
//   0xAFA3E movups  [rbp+var_78], xmm0
//   0xAFA42 lea     r12, [rbp+var_90]
//   0xAFA49 mov     rsi, r14
//   0xAFA4C mov     [rbp+var_C0], 0
//   0xAFA57 mov     [rbp+var_B8], 0
//   0xAFA62 mov     [rbp+var_B0], 0
//   0xAFA6D mov     [rbp+var_90], 0
//   0xAFA78 mov     [rbp+var_88], 0
//   0xAFA83 mov     [rbp+var_80], 0
//   0xAFA8B mov     [rbp+var_140], rdx
//   0xAFA92 mov     qword ptr [rbp+var_150], r14
//   0xAFA99 movups  [rbp+var_A8], xmm0
//   0xAFAA0 call    sub_123DE0
//   0xAFAA5 sub     rsp, 8
//   0xAFAA9 mov     rdx, [r15+10h]
//   0xAFAAD mov     r9d, 80h
//   0xAFAB3 xor     ecx, ecx
//   0xAFAB5 push    101h
//   0xAFABA mov     r8, r12
//   0xAFABD mov     rsi, r14
//   0xAFAC0 mov     rdi, rbx
//   0xAFAC3 call    sub_124F50
//   0xAFAC8 mov     r11, rax
//   0xAFACB pop     r14
//   0xAFACD pop     rax
//   0xAFACE test    r11, r11
//   0xAFAD1 jz      short loc_AFB15
//   0xAFAD3 movzx   eax, byte ptr [r15+40h]
//   0xAFAD8 cmp     [r11+40h], al
//   0xAFADC jz      loc_B0670
//   0xAFAE2 cmp     dword ptr [r15+44h], 4
//   0xAFAE7 jg      short loc_AFB15
//   0xAFAE9 mov     eax, [r11]
//   0xAFAEC sub     eax, 8
//   0xAFAEF cmp     eax, 1
//   0xAFAF2 jbe     loc_B084E
//   0xAFAF8 mov     rcx, qword ptr [rbp+var_150]
//   0xAFAFF mov     rdx, r15
//   0xAFB02 mov     rsi, r11
//   0xAFB05 mov     rdi, rbx
//   0xAFB08 call    sub_AA250
//   0xAFB0D test    al, al
//   0xAFB0F jnz     loc_B0A35
//   0xAFB15 mov     rdi, [rbp+var_80]
//   0xAFB19 test    rdi, rdi
//   0xAFB1C jz      short loc_AFB2B
//   0xAFB1E mov     qword ptr [rbp+var_78], 0
//   0xAFB26 call    _qfree
//   0xAFB2B mov     rdi, [rbp+var_90]
//   0xAFB32 call    _qfree
//   0xAFB37 mov     rdi, [rbp+var_B0]
//   0xAFB3E test    rdi, rdi
//   0xAFB41 jz      short loc_AFB53
//   0xAFB43 mov     qword ptr [rbp+var_A8], 0
//   0xAFB4E call    _qfree
//   0xAFB53 mov     rdi, [rbp+var_C0]
//   0xAFB5A call    _qfree
//   0xAFB5F mov     rsi, r15
//   0xAFB62 mov     rdi, rbx
//   0xAFB65 call    sub_182D90
//   0xAFB6A test    al, al
//   0xAFB6C jnz     loc_AFC63
//   0xAFB72 cmp     dword ptr [r15+44h], 2; jumptable 00000000000AF5ED case 9
//   0xAFB77 jg      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFB7D lea     r14, [rbp+var_60]
//   0xAFB81 lea     rdi, [r15+20h]
//   0xAFB85 xor     edx, edx
//   0xAFB87 mov     rsi, r14
//   0xAFB8A call    sub_11BB80
//   0xAFB8F test    al, al
//   0xAFB91 jz      short loc_AFB9E
//   0xAFB93 cmp     [rbp+var_60], 0
//   0xAFB98 jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFB9E lea     rax, [r15+40h]
//   0xAFBA2 lea     r12, [rbp+var_90]
//   0xAFBA9 mov     rsi, rax
//   0xAFBAC mov     rdi, r12
//   0xAFBAF mov     qword ptr [rbp+var_150], rax
//   0xAFBB6 call    sub_11F840
//   0xAFBBB sub     rsp, 8
//   0xAFBBF xor     r9d, r9d
//   0xAFBC2 mov     rcx, r12
//   0xAFBC5 mov     rdx, r15
//   0xAFBC8 push    0
//   0xAFBCA mov     eax, dword ptr [rbp+var_90+4]
//   0xAFBD0 mov     rsi, rbx
//   0xAFBD3 mov     rdi, r13
//   0xAFBD6 lea     r8d, [rax+rax]
//   0xAFBDA call    sub_12D530
//   0xAFBDF pop     rsi
//   0xAFBE0 pop     rdi
//   0xAFBE1 test    al, al
//   0xAFBE3 jz      loc_B0A5F
//   0xAFBE9 lea     rsi, [rbp+var_F0]
//   0xAFBF0 mov     ecx, 1
//   0xAFBF5 mov     rdx, r12
//   0xAFBF8 mov     rdi, rbx
//   0xAFBFB call    sub_123DE0
//   0xAFC00 sub     rsp, 8
//   0xAFC04 mov     rdx, [r15+10h]
//   0xAFC08 xor     r9d, r9d
//   0xAFC0B xor     r8d, r8d
//   0xAFC0E push    101h
//   0xAFC13 lea     rsi, [rbp+var_F0]
//   0xAFC1A xor     ecx, ecx
//   0xAFC1C mov     rdi, rbx
//   0xAFC1F call    sub_124F50
//   0xAFC24 mov     [rbp+var_140], rax
//   0xAFC2B pop     rdx
//   0xAFC2C pop     rcx
//   0xAFC2D test    rax, rax
//   0xAFC30 jz      short loc_AFC3B
//   0xAFC32 cmp     dword ptr [rax], 4
//   0xAFC35 jz      loc_B0BCB
//   0xAFC3B mov     rdi, r12
//   0xAFC3E call    sub_118BA0
//   0xAFC43 jmp     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFC48 align 10h
//   0xAFC50 mov     rsi, r15; jumptable 00000000000AF5ED case 2
//   0xAFC53 mov     rdi, rbx
//   0xAFC56 call    sub_182D90
//   0xAFC5B test    al, al
//   0xAFC5D jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFC63 mov     r14d, 21h ; '!'
//   0xAFC69 jmp     loc_AF9A0
//   0xAFC6E mov     rsi, r15; jumptable 00000000000AF5ED case 14
//   0xAFC71 mov     rdi, rbx
//   0xAFC74 call    sub_93280
//   0xAFC79 test    al, al
//   0xAFC7B jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFC81 mov     r14d, 2Ah ; '*'
//   0xAFC87 jmp     loc_AF9A0
//   0xAFC8C mov     rsi, r15; jumptable 00000000000AF5ED case 13
//   0xAFC8F mov     rdi, rbx
//   0xAFC92 call    sub_987E0
//   0xAFC97 test    al, al
//   0xAFC99 jnz     loc_B01EB
//   0xAFC9F mov     rsi, r15
//   0xAFCA2 mov     rdi, rbx
//   0xAFCA5 call    sub_95A40
//   0xAFCAA test    al, al
//   0xAFCAC jnz     loc_AFE6E
//   0xAFCB2 mov     rsi, r15
//   0xAFCB5 mov     rdi, rbx
//   0xAFCB8 call    sub_9AB70
//   0xAFCBD test    al, al
//   0xAFCBF jnz     loc_B0949
//   0xAFCC5 mov     rsi, r15
//   0xAFCC8 mov     rdi, rbx
//   0xAFCCB call    sub_93060
//   0xAFCD0 test    al, al
//   0xAFCD2 jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFCD8 mov     r14d, 38h ; '8'
//   0xAFCDE jmp     loc_AF9A0
//   0xAFCE3 align 8
//   0xAFCE8 cmp     byte ptr [r15+20h], 1; jumptable 00000000000AF5ED case 12
//   0xAFCED jz      loc_B02D6
//   0xAFCF3 mov     rsi, r15
//   0xAFCF6 mov     rdi, rbx
//   0xAFCF9 call    sub_987E0
//   0xAFCFE test    al, al
//   0xAFD00 jnz     loc_B01EB
//   0xAFD06 mov     rsi, r15
//   0xAFD09 mov     rdi, rbx
//   0xAFD0C call    sub_99CD0
//   0xAFD11 test    al, al
//   0xAFD13 jnz     loc_B06A1
//   0xAFD19 mov     rsi, r15
//   0xAFD1C mov     rdi, rbx
//   0xAFD1F call    sub_95210
//   0xAFD24 test    al, al
//   0xAFD26 jnz     loc_B093E
//   0xAFD2C mov     rsi, r15
//   0xAFD2F mov     rdi, rbx
//   0xAFD32 call    sub_9B170
//   0xAFD37 test    al, al
//   0xAFD39 jnz     loc_B095F
//   0xAFD3F mov     rsi, r15
//   0xAFD42 mov     rdi, rbx
//   0xAFD45 call    sub_98920
//   0xAFD4A test    al, al
//   0xAFD4C jnz     loc_B0A54
//   0xAFD52 mov     rsi, r15
//   0xAFD55 mov     rdi, rbx
//   0xAFD58 call    sub_91F80
//   0xAFD5D test    al, al
//   0xAFD5F jnz     loc_B0A95
//   0xAFD65 mov     rsi, r15
//   0xAFD68 mov     rdi, rbx
//   0xAFD6B call    sub_92350
//   0xAFD70 test    al, al
//   0xAFD72 jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFD78 mov     r14d, 2Dh ; '-'
//   0xAFD7E jmp     loc_AF9A0
//   0xAFD83 align 8
//   0xAFD88 mov     rsi, r15; jumptable 00000000000AF5ED case 24
//   0xAFD8B mov     rdi, rbx
//   0xAFD8E call    sub_9A800
//   0xAFD93 test    al, al
//   0xAFD95 jnz     loc_B02AA
//   0xAFD9B mov     rsi, r15
//   0xAFD9E mov     rdi, rbx
//   0xAFDA1 call    sub_944E0
//   0xAFDA6 test    al, al
//   0xAFDA8 jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFDAE mov     r14d, 34h ; '4'
//   0xAFDB4 jmp     loc_AF9A0
//   0xAFDB9 mov     rsi, r15; jumptable 00000000000AF5ED case 23
//   0xAFDBC mov     rdi, rbx
//   0xAFDBF call    sub_92A00
//   0xAFDC4 test    al, al
//   0xAFDC6 jz      loc_AF9D0; jumptable 00000000000AF5ED case 19
//   0xAFDCC mov     r14d, 29h ; ')'
//   0xAFDD2 jmp     loc_AF9A0
//   0xAFDD7 mov     rsi, r15; jumptable 00000000000AF5ED case 11
//   0xAFDDA mov     rdi, rbx
//   0xAFDDD call    sub_9BBC0
//   0xAFDE2 test    al, al
//   0xAFDE4 jnz     loc_B02CB
//   0xAFDEA mov     rsi, r15
//   0xAFDED mov     rdi, rbx
//   0xAFDF0 call    sub_98DB0
//   0xAFDF5 test    al, al
//   0xAFDF7 jnz     loc_B06B7
//   0xAFDFD mov     rsi, r15
//   0xAFE00 mov     rdi, rbx
//   0xAFE03 call    sub_97700
//   0xAFE08 test    al, al
//   0xAFE0A jnz     loc_B0928
//   0xAFE10 mov     rsi, r15
//   0xAFE13 mov     rdi, rbx
//   0xAFE16 call    sub_990D0
//   0xAFE1B test    al, al
//   0xAFE1D jnz     loc_B0954
//   0xAFE23 mov     rsi, r15
//   0xAFE26 mov     rdi, rbx
//   0xAFE29 call    sub_9C410
//   0xAFE2E test    al, al
//   0xAFE30 jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFE36 mov     r14d, 36h ; '6'
//   0xAFE3C jmp     loc_AF9A0
//   0xAFE41 align 8
//   0xAFE48 mov     rsi, r15; jumptable 00000000000AF5ED case 5
//   0xAFE4B mov     rdi, rbx
//   0xAFE4E call    sub_9AB70
//   0xAFE53 test    al, al
//   0xAFE55 jnz     loc_B0949
//   0xAFE5B mov     rsi, r15
//   0xAFE5E mov     rdi, rbx
//   0xAFE61 call    sub_95A40
//   0xAFE66 test    al, al
//   0xAFE68 jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFE6E mov     r14d, 12h
//   0xAFE74 jmp     loc_AF9A0
//   0xAFE79 cmp     byte ptr [r15+30h], 1; jumptable 00000000000AF5ED case 1
//   0xAFE7E jz      loc_B0440
//   0xAFE84 mov     rsi, r15
//   0xAFE87 mov     rdi, rbx
//   0xAFE8A call    sub_968F0
//   0xAFE8F test    al, al
//   0xAFE91 jnz     loc_B02B5
//   0xAFE97 mov     rsi, r15
//   0xAFE9A mov     rdi, rbx
//   0xAFE9D call    sub_186B00
//   0xAFEA2 test    al, al
//   0xAFEA4 jz      loc_AFC50; jumptable 00000000000AF5ED case 2
//   0xAFEAA mov     r14d, 3Bh ; ';'
//   0xAFEB0 jmp     loc_AF9A0
//   0xAFEB5 mov     rsi, r15; jumptable 00000000000AF5ED case 10
//   0xAFEB8 mov     rdi, rbx
//   0xAFEBB call    sub_96F60
//   0xAFEC0 test    al, al
//   0xAFEC2 jnz     loc_B02C0
//   0xAFEC8 mov     rsi, r15
//   0xAFECB mov     rdi, rbx
//   0xAFECE call    sub_9C0B0
//   0xAFED3 test    al, al
//   0xAFED5 jnz     loc_B06AC
//   0xAFEDB mov     rsi, r15
//   0xAFEDE mov     rdi, rbx
//   0xAFEE1 call    sub_970C0
//   0xAFEE6 test    al, al
//   0xAFEE8 jnz     loc_B0933
//   0xAFEEE mov     rsi, r15
//   0xAFEF1 mov     rdi, rbx
//   0xAFEF4 call    sub_94840
//   0xAFEF9 test    al, al
//   0xAFEFB jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFF01 mov     r14d, 37h ; '7'
//   0xAFF07 jmp     loc_AF9A0
//   0xAFF0C align 10h
//   0xAFF10 cmp     byte ptr [r15+40h], 8; jumptable 00000000000AF5ED case 56
//   0xAFF15 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFF1B mov     rax, [r15+48h]
//   0xAFF1F mov     eax, [rax+11Ch]
//   0xAFF25 cmp     eax, 5
//   0xAFF28 jz      loc_B0232
//   0xAFF2E cmp     eax, 22h ; '"'
//   0xAFF31 jz      loc_B0232
//   0xAFF37 mov     edx, eax
//   0xAFF39 and     edx, 0FFFFFFDFh
//   0xAFF3C cmp     edx, 2
//   0xAFF3F jz      loc_B0274
//   0xAFF45 cmp     eax, 2
//   0xAFF48 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFF4E mov     rsi, r15
//   0xAFF51 mov     rdi, rbx
//   0xAFF54 call    sub_1860C0
//   0xAFF59 test    al, al
//   0xAFF5B jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFF61 mov     r14d, 1Ch
//   0xAFF67 jmp     loc_AF9A0
//   0xAFF6C align 10h
//   0xAFF70 cmp     byte ptr [r15+20h], 6; jumptable 00000000000AF5ED case 55
//   0xAFF75 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFF7B mov     rax, [rbx+40h]
//   0xAFF7F mov     rsi, [r15+28h]
//   0xAFF83 cmp     [rax+28h], rsi
//   0xAFF87 jz      short loc_AFF9A
//   0xAFF89 lea     rdi, [rax+8]
//   0xAFF8D call    sub_32D8E0
//   0xAFF92 test    al, al
//   0xAFF94 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFF9A mov     esi, [r13+3Ch]
//   0xAFF9E mov     r9d, 1
//   0xAFFA4 xor     r8d, r8d
//   0xAFFA7 xor     ecx, ecx
//   0xAFFA9 mov     rdx, r15
//   0xAFFAC mov     rdi, rbx
//   0xAFFAF call    sub_120960
//   0xAFFB4 mov     r12, rax
//   0xAFFB7 test    rax, rax
//   0xAFFBA jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFFC0 cmp     dword ptr [rax], 3Bh ; ';'
//   0xAFFC3 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFFC9 mov     eax, [r13+54h]
//   0xAFFCD cmp     [r12+24h], eax
//   0xAFFD2 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFFD8 mov     rsi, [r15+18h]
//   0xAFFDC mov     rdi, [rbx+40h]
//   0xAFFE0 lea     r14, [r12+20h]
//   0xAFFE5 call    sub_9E3E0
//   0xAFFEA mov     rsi, rax
//   0xAFFED xor     edx, edx
//   0xAFFEF mov     rdi, r14
//   0xAFFF2 call    sub_9E150
//   0xAFFF7 test    al, al
//   0xAFFF9 jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFFFF mov     rdi, [r15+28h]
//   0xB0003 call    _get_func
//   0xB0008 test    rax, rax
//   0xB000B jz      short loc_B0043
//   0xB000D test    byte ptr [rax+10h], 2
//   0xB0011 jz      short loc_B0043
//   0xB0013 mov     esi, [r13+3Ch]
//   0xB0017 mov     r9d, 1
//   0xB001D xor     r8d, r8d
//   0xB0020 xor     ecx, ecx
//   0xB0022 mov     rdx, r12
//   0xB0025 mov     rdi, rbx
//   0xB0028 call    sub_120960
//   0xB002D mov     rsi, rax
//   0xB0030 mov     rdi, r13
//   0xB0033 mov     r14, rax
//   0xB0036 call    sub_9E420
//   0xB003B test    al, al
//   0xB003D jnz     loc_B0E34
//   0xB0043 mov     rdi, r12
//   0xB0046 call    sub_1193A0
//   0xB004B mov     eax, [rbx+18h]
//   0xB004E mov     r14d, 4
//   0xB0054 and     ah, 0FDh
//   0xB0057 or      al, 80h
//   0xB0059 mov     [rbx+18h], eax
//   0xB005C mov     dword ptr [r15], 38h ; '8'
//   0xB0063 jmp     loc_AF9A0
//   0xB0068 align 10h
//   0xB0070 cmp     byte ptr [r15+20h], 1; jumptable 00000000000AF5ED case 59
//   0xB0075 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB007B mov     rdi, [r15+10h]
//   0xB007F call    sub_11E830
//   0xB0084 mov     r12, rax
//   0xB0087 test    rax, rax
//   0xB008A jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0090 cmp     dword ptr [rax], 4
//   0xB0093 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0099 movzx   eax, byte ptr [rax+20h]
//   0xB009D cmp     al, 2
//   0xB009F jz      short loc_B00B8
//   0xB00A1 sub     al, 1
//   0xB00A3 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB00A9 mov     rax, [r15+18h]
//   0xB00AD cmp     [r12+18h], rax
//   0xB00B2 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB00B8 lea     r13, [r15+20h]
//   0xB00BC lea     rdi, [r12+40h]
//   0xB00C1 xor     edx, edx
//   0xB00C3 mov     rsi, r13
//   0xB00C6 call    sub_121960
//   0xB00CB test    al, al
//   0xB00CD jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB00D3 lea     rsi, [r12+20h]
//   0xB00D8 mov     rdi, r13
//   0xB00DB call    sub_120F80
//   0xB00E0 mov     r14d, 9
//   0xB00E6 jmp     loc_AF9A0
//   0xB00EB align 10h
//   0xB00F0 mov     r12d, [r15+44h]; jumptable 00000000000AF5ED case 54
//   0xB00F4 mov     esi, [r13+3Ch]
//   0xB00F8 mov     r10, r15
//   0xB00FB xor     r14d, r14d
//   0xB00FE mov     r9d, 1
//   0xB0104 xor     r8d, r8d
//   0xB0107 xor     ecx, ecx
//   0xB0109 mov     rdx, r10
//   0xB010C mov     rdi, rbx
//   0xB010F call    sub_120960
//   0xB0114 mov     r10, rax
//   0xB0117 test    rax, rax
//   0xB011A jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0120 mov     eax, [rax]
//   0xB0122 cmp     eax, 3Bh ; ';'
//   0xB0125 jz      loc_B06C2
//   0xB012B ja      loc_B0550
//   0xB0131 cmp     eax, 0Ch
//   0xB0134 jz      loc_B0800
//   0xB013A cmp     eax, 0Dh
//   0xB013D jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0143 cmp     byte ptr [r10+20h], 1
//   0xB0148 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB014E mov     esi, [r13+3Ch]
//   0xB0152 cmp     esi, [r10+28h]
//   0xB0156 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB015C jmp     short loc_B00FE
//   0xB015E align 20h
//   0xB0160 mov     rsi, r15; jumptable 00000000000AF5ED case 42
//   0xB0163 mov     rdi, rbx
//   0xB0166 call    sub_AE670
//   0xB016B test    al, al
//   0xB016D jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0173 mov     r14d, 23h ; '#'
//   0xB0179 jmp     loc_AF9A0
//   0xB017E align 20h
//   0xB0180 mov     r14d, 1Ah
//   0xB0186 jmp     loc_AF9A0
//   0xB018B align 10h
//   0xB0190 lea     rsi, [rbp+var_110]
//   0xB0197 lea     rdi, [rbp+var_50]
//   0xB019B call    sub_3136F0
//   0xB01A0 mov     rdi, [rbp+var_50]
//   0xB01A4 test    al, al
//   0xB01A6 jnz     loc_AF8CE
//   0xB01AC test    rdi, rdi
//   0xB01AF jz      short loc_B01BE
//   0xB01B1 mov     qword ptr [rbp+var_48], 0
//   0xB01B9 call    _qfree
//   0xB01BE mov     rdi, [rbp+var_60]
//   0xB01C2 call    _qfree
//   0xB01C7 mov     r12, [r12+10h]
//   0xB01CC test    r12, r12
//   0xB01CF jnz     loc_AF740
//   0xB01D5 jmp     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB01DA align 20h
//   0xB01E0 mov     r14d, 35h ; '5'
//   0xB01E6 jmp     loc_AF9A0
//   0xB01EB mov     r14d, 32h ; '2'
//   0xB01F1 jmp     loc_AF9A0
//   0xB01F6 mov     r14d, 15h
//   0xB01FC jmp     loc_AF9A0
//   0xB0201 mov     [rbp+var_110], r12
//   0xB0208 movups  [rbp+var_108], xmm1
//   0xB020F jmp     loc_AF67E
//   0xB0214 mov     [rbp+var_E0], r12
//   0xB021B movups  [rbp+var_D8], xmm1
//   0xB0222 jmp     loc_AF712
//   0xB0227 mov     r14d, 27h ; '''
//   0xB022D jmp     loc_AF9A0
//   0xB0232 mov     rdi, [r15+8]
//   0xB0236 call    sub_11E7A0
//   0xB023B test    rax, rax
//   0xB023E jz      short loc_B0256
//   0xB0240 mov     rdx, rax
//   0xB0243 mov     rsi, r15
//   0xB0246 mov     rdi, rbx
//   0xB0249 call    sub_185780
//   0xB024E test    al, al
//   0xB0250 jnz     loc_B0AA5
//   0xB0256 cmp     byte ptr [r15+40h], 8
//   0xB025B jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0261 mov     rax, [r15+48h]
//   0xB0265 mov     eax, [rax+11Ch]
//   0xB026B cmp     eax, 5
//   0xB026E jnz     loc_AFF37
//   0xB0274 mov     rsi, r15
//   0xB0277 mov     rdi, rbx
//   0xB027A call    sub_182D90
//   0xB027F test    al, al
//   0xB0281 jnz     loc_AFC63
//   0xB0287 cmp     byte ptr [r15+40h], 8
//   0xB028C jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0292 mov     rax, [r15+48h]
//   0xB0296 mov     eax, [rax+11Ch]
//   0xB029C cmp     eax, 5
//   0xB029F jz      loc_AFF4E
//   0xB02A5 jmp     loc_AFF45
//   0xB02AA mov     r14d, 1Fh
//   0xB02B0 jmp     loc_AF9A0
//   0xB02B5 mov     r14d, 25h ; '%'
//   0xB02BB jmp     loc_AF9A0
//   0xB02C0 mov     r14d, 14h
//   0xB02C6 jmp     loc_AF9A0
//   0xB02CB mov     r14d, 13h
//   0xB02D1 jmp     loc_AF9A0
//   0xB02D6 mov     eax, [r15+28h]
//   0xB02DA cmp     [r13+3Ch], eax
//   0xB02DE jnz     loc_AFCF3
//   0xB02E4 lea     rax, [r15+40h]
//   0xB02E8 lea     r14, [r15+20h]
//   0xB02EC xor     edx, edx
//   0xB02EE mov     rsi, rax
//   0xB02F1 mov     rdi, r14
//   0xB02F4 mov     qword ptr [rbp+var_150], rax
//   0xB02FB call    sub_121960
//   0xB0300 test    al, al
//   0xB0302 jz      loc_AFCF3
//   0xB0308 cmp     byte ptr [r15+30h], 2
//   0xB030D jnz     loc_AFCF3
//   0xB0313 lea     rdx, [rbp+var_F0]
//   0xB031A xor     r8d, r8d
//   0xB031D mov     rcx, r15
//   0xB0320 mov     rdi, rbx
//   0xB0323 lea     rsi, [rbp+var_120]
//   0xB032A call    sub_125940
//   0xB032F mov     r12, rax
//   0xB0332 test    rax, rax
//   0xB0335 jz      loc_AFCF3
//   0xB033B lea     rax, [r15+30h]
//   0xB033F movsxd  rsi, dword ptr [r12+44h]
//   0xB0344 mov     edx, 1
//   0xB0349 mov     rdi, rax
//   0xB034C mov     [rbp+var_140], rax
//   0xB0353 call    sub_9E150
//   0xB0358 test    al, al
//   0xB035A jz      loc_AFCF3
//   0xB0360 mov     eax, [r12]
//   0xB0364 cmp     eax, 2
//   0xB0367 jz      loc_B0EEA
//   0xB036D cmp     eax, 4
//   0xB0370 jnz     loc_AFCF3
//   0xB0376 cmp     byte ptr [r12+20h], 4
//   0xB037C jnz     loc_AFCF3
//   0xB0382 mov     rax, [r12+28h]
//   0xB0387 cmp     dword ptr [rax], 2
//   0xB038A jnz     loc_AFCF3
//   0xB0390 cmp     byte ptr [rax+20h], 1
//   0xB0394 jnz     loc_AFCF3
//   0xB039A mov     ecx, [rax+28h]
//   0xB039D cmp     [r13+38h], ecx
//   0xB03A1 jnz     loc_AFCF3
//   0xB03A7 cmp     byte ptr [rax+30h], 1
//   0xB03AB jnz     loc_AFCF3
//   0xB03B1 mov     eax, [rax+38h]
//   0xB03B4 cmp     [r13+3Ch], eax
//   0xB03B8 jnz     loc_AFCF3
//   0xB03BE lea     rdx, [rbp+var_F0]
//   0xB03C5 mov     r8, r15
//   0xB03C8 mov     rcx, r12
//   0xB03CB mov     rdi, rbx
//   0xB03CE lea     rsi, [rbp+var_120]
//   0xB03D5 call    sub_AC0D0
//   0xB03DA test    al, al
//   0xB03DC jz      loc_AFCF3
//   0xB03E2 mov     dword ptr [r15], 3Ch ; '<'
//   0xB03E9 mov     rax, [r15+18h]
//   0xB03ED lea     rsi, [r12+40h]
//   0xB03F2 mov     rdx, [r12+18h]
//   0xB03F7 mov     rdi, qword ptr [rbp+var_150]
//   0xB03FE mov     [r15+18h], rdx
//   0xB0402 mov     [r12+18h], rax
//   0xB0407 call    sub_118810
//   0xB040C mov     rdi, r14
//   0xB040F call    sub_118BA0
//   0xB0414 mov     rdi, [rbp+var_140]
//   0xB041B call    sub_118BA0
//   0xB0420 mov     rdi, r12
//   0xB0423 call    sub_1193A0
//   0xB0428 mov     eax, [rbx+18h]
//   0xB042B mov     r14d, 2
//   0xB0431 and     ah, 0FDh
//   0xB0434 or      al, 90h
//   0xB0436 mov     [rbx+18h], eax
//   0xB0439 jmp     loc_AF9A0
//   0xB043E align 20h
//   0xB0440 mov     eax, [r15+38h]
//   0xB0444 cmp     [r13+38h], eax
//   0xB0448 jnz     loc_AFE84
//   0xB044E cmp     byte ptr [r15+40h], 1
//   0xB0453 jnz     loc_AFE84
//   0xB0459 mov     eax, [r15+48h]
//   0xB045D cmp     [r13+3Ch], eax
//   0xB0461 jnz     loc_AFE84
//   0xB0467 lea     rdx, [rbp+var_F0]
//   0xB046E xor     r8d, r8d
//   0xB0471 mov     rcx, r15
//   0xB0474 mov     rdi, rbx
//   0xB0477 lea     rsi, [rbp+var_120]
//   0xB047E call    sub_125120
//   0xB0483 mov     r12, rax
//   0xB0486 test    rax, rax
//   0xB0489 jz      loc_AFE84
//   0xB048F mov     rax, [r15+18h]
//   0xB0493 cmp     [r12+18h], rax
//   0xB0498 jnz     loc_AFE84
//   0xB049E cmp     dword ptr [r12], 0Dh
//   0xB04A3 jnz     loc_AFE84
//   0xB04A9 cmp     byte ptr [r12+20h], 1
//   0xB04AF jnz     loc_AFE84
//   0xB04B5 mov     eax, [r12+28h]
//   0xB04BA cmp     [r13+3Ch], eax
//   0xB04BE jnz     loc_AFE84
//   0xB04C4 lea     rsi, [r12+40h]
//   0xB04C9 lea     rdi, [r12+20h]
//   0xB04CE xor     edx, edx
//   0xB04D0 call    sub_121960
//   0xB04D5 test    al, al
//   0xB04D7 jz      loc_AFE84
//   0xB04DD movsxd  rsi, dword ptr [r15+24h]
//   0xB04E1 lea     rdi, [r12+30h]
//   0xB04E6 mov     edx, 1
//   0xB04EB call    sub_9E150
//   0xB04F0 test    al, al
//   0xB04F2 jz      loc_AFE84
//   0xB04F8 lea     rdx, [rbp+var_F0]
//   0xB04FF mov     r8, r15
//   0xB0502 mov     rcx, r12
//   0xB0505 mov     rdi, rbx
//   0xB0508 lea     rsi, [rbp+var_120]
//   0xB050F call    sub_AC0D0
//   0xB0514 test    al, al
//   0xB0516 jz      loc_AFE84
//   0xB051C mov     rdi, r12
//   0xB051F call    sub_1193A0
//   0xB0524 mov     dword ptr [r15], 3Bh ; ';'
//   0xB052B lea     rdi, [r15+30h]
//   0xB052F call    sub_118BA0
//   0xB0534 lea     rdi, [r15+40h]
//   0xB0538 call    sub_118BA0
//   0xB053D or      dword ptr [rbx+18h], 10h
//   0xB0541 mov     r14d, 1
//   0xB0547 jmp     loc_AF9A0
//   0xB054C align 10h
//   0xB0550 cmp     eax, 3Ch ; '<'
//   0xB0553 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0559 cmp     byte ptr [r15+40h], 1
//   0xB055E jz      loc_B0A6C
//   0xB0564 cmp     byte ptr [r15+30h], 1
//   0xB0569 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB056F cmp     byte ptr [r10+40h], 1
//   0xB0574 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB057A mov     eax, [r15+38h]
//   0xB057E cmp     [r10+48h], eax
//   0xB0582 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0588 cmp     r12d, [r10+44h]
//   0xB058C jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0592 mov     esi, [r13+3Ch]
//   0xB0596 mov     r9d, 1
//   0xB059C xor     r8d, r8d
//   0xB059F xor     ecx, ecx
//   0xB05A1 mov     rdx, r10
//   0xB05A4 mov     rdi, rbx
//   0xB05A7 mov     qword ptr [rbp+var_150], r10
//   0xB05AE call    sub_120960
//   0xB05B3 mov     rdi, rax
//   0xB05B6 test    rax, rax
//   0xB05B9 jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB05BF cmp     byte ptr [r15+40h], 1
//   0xB05C4 mov     r10, qword ptr [rbp+var_150]
//   0xB05CB jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB05D1 cmp     byte ptr [rax+40h], 1
//   0xB05D5 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB05DB mov     eax, [rax+48h]
//   0xB05DE cmp     [r15+48h], eax
//   0xB05E2 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB05E8 cmp     r12d, [rdi+44h]
//   0xB05EC jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB05F2 mov     [rbp+var_138], r10
//   0xB05F9 call    sub_1193A0
//   0xB05FE mov     eax, [rbx+18h]
//   0xB0601 mov     r10, [rbp+var_138]
//   0xB0608 and     ah, 0FDh
//   0xB060B or      al, 80h
//   0xB060D mov     [rbx+18h], eax
//   0xB0610 mov     rdi, r10
//   0xB0613 call    sub_1193A0
//   0xB0618 mov     eax, [rbx+18h]
//   0xB061B mov     rsi, r15
//   0xB061E mov     rdi, rbx
//   0xB0621 and     ah, 0FDh
//   0xB0624 or      al, 80h
//   0xB0626 mov     [rbx+18h], eax
//   0xB0629 call    sub_32B940
//   0xB062E test    r14, r14
//   0xB0631 jz      short loc_B0646
//   0xB0633 mov     rdi, r14
//   0xB0636 call    sub_1193A0
//   0xB063B mov     eax, [rbx+18h]
//   0xB063E and     ah, 0FDh
//   0xB0641 or      al, 80h
//   0xB0643 mov     [rbx+18h], eax
//   0xB0646 mov     rdi, r15
//   0xB0649 call    sub_1B1800
//   0xB064E mov     rcx, rax
//   0xB0651 mov     edx, 5
//   0xB0656 mov     rdi, rbx
//   0xB0659 xor     eax, eax
//   0xB065B lea     rsi, aCmbDS; "cmb%d: %s"
//   0xB0662 call    sub_9E320
//   0xB0667 jmp     loc_AF9BF
//   0xB066C align 10h
//   0xB0670 cmp     dword ptr [r11], 4
//   0xB0674 jnz     loc_AFAE2
//   0xB067A mov     eax, [r15+44h]
//   0xB067E cmp     [r11+44h], eax
//   0xB0682 jg      loc_B0AB0
//   0xB0688 cmp     eax, 4
//   0xB068B jle     loc_AFAF8
//   0xB0691 jmp     loc_AFB15
//   0xB0696 mov     r14d, 31h ; '1'
//   0xB069C jmp     loc_AF9A0
//   0xB06A1 mov     r14d, 10h
//   0xB06A7 jmp     loc_AF9A0
//   0xB06AC mov     r14d, 19h
//   0xB06B2 jmp     loc_AF9A0
//   0xB06B7 mov     r14d, 16h
//   0xB06BD jmp     loc_AF9A0
//   0xB06C2 mov     eax, [r13+54h]
//   0xB06C6 cmp     [r10+24h], eax
//   0xB06CA jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB06D0 mov     rsi, [r15+18h]
//   0xB06D4 mov     rdi, [rbx+40h]
//   0xB06D8 mov     qword ptr [rbp+var_150], r10
//   0xB06DF lea     r12, [r10+20h]
//   0xB06E3 call    sub_9E3E0
//   0xB06E8 mov     rsi, rax
//   0xB06EB xor     edx, edx
//   0xB06ED mov     rdi, r12
//   0xB06F0 call    sub_9E150
//   0xB06F5 test    al, al
//   0xB06F7 mov     r10, qword ptr [rbp+var_150]
//   0xB06FE jz      def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0704 mov     esi, [r13+3Ch]
//   0xB0708 mov     r9d, 1
//   0xB070E xor     r8d, r8d
//   0xB0711 xor     ecx, ecx
//   0xB0713 mov     rdx, r10
//   0xB0716 mov     rdi, rbx
//   0xB0719 mov     [rbp+var_138], r10
//   0xB0720 call    sub_120960
//   0xB0725 mov     rsi, rax
//   0xB0728 mov     rdi, r13
//   0xB072B mov     r14, rax
//   0xB072E call    sub_9E420
//   0xB0733 mov     r10, [rbp+var_138]
//   0xB073A test    al, al
//   0xB073C jz      short loc_B077F
//   0xB073E mov     rdi, r14
//   0xB0741 call    sub_1193A0
//   0xB0746 mov     eax, [rbx+18h]
//   0xB0749 mov     rdi, [rbx+40h]
//   0xB074D and     ah, 0FDh
//   0xB0750 or      al, 80h
//   0xB0752 mov     [rbx+18h], eax
//   0xB0755 mov     rsi, [r14+18h]
//   0xB0759 call    sub_1CB7F0
//   0xB075E mov     rsi, [r15+18h]
//   0xB0762 mov     rdi, [rbx+40h]
//   0xB0766 mov     r14, rax
//   0xB0769 call    sub_1CB7F0
//   0xB076E cmp     r14, rax
//   0xB0771 mov     r10, [rbp+var_138]
//   0xB0778 jz      short loc_B077F
//   0xB077A or      dword ptr [r15+4], 20h
//   0xB077F mov     rdi, r10
//   0xB0782 call    sub_1193A0
//   0xB0787 mov     eax, [rbx+18h]
//   0xB078A lea     r12, [r15+30h]
//   0xB078E lea     rdi, [r15+20h]
//   0xB0792 mov     rsi, r12
//   0xB0795 and     ah, 0FDh
//   0xB0798 or      al, 80h
//   0xB079A mov     [rbx+18h], eax
//   0xB079D mov     dword ptr [r15], 39h ; '9'
//   0xB07A4 call    sub_120F80
//   0xB07A9 lea     rax, [r15+40h]
//   0xB07AD mov     rdi, r12
//   0xB07B0 mov     rsi, rax
//   0xB07B3 mov     r14, rax
//   0xB07B6 call    sub_120F80
//   0xB07BB mov     rdi, r14
//   0xB07BE call    sub_118BA0
//   0xB07C3 mov     rdi, r15
//   0xB07C6 call    sub_1B1800
//   0xB07CB mov     rcx, rax
//   0xB07CE mov     edx, 6
//   0xB07D3 mov     rdi, rbx
//   0xB07D6 xor     eax, eax
//   0xB07D8 lea     rsi, aCmbDS; "cmb%d: %s"
//   0xB07DF call    sub_9E320
//   0xB07E4 mov     edx, 6
//   0xB07E9 mov     rsi, r15
//   0xB07EC mov     rdi, rbx
//   0xB07EF call    sub_163610
//   0xB07F4 jmp     loc_AF9BF
//   0xB07F9 align 20h
//   0xB0800 cmp     byte ptr [r10+20h], 1
//   0xB0805 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB080B mov     eax, [r10+28h]
//   0xB080F cmp     [r13+3Ch], eax
//   0xB0813 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0819 lea     rsi, [r10+40h]
//   0xB081D lea     rdi, [r10+20h]
//   0xB0821 xor     edx, edx
//   0xB0823 mov     qword ptr [rbp+var_150], r10
//   0xB082A call    sub_121960
//   0xB082F test    al, al
//   0xB0831 mov     r10, qword ptr [rbp+var_150]
//   0xB0838 jz      short loc_B0845
//   0xB083A cmp     byte ptr [r10+30h], 2
//   0xB083F jz      loc_B0D3E
//   0xB0845 mov     esi, [r13+3Ch]
//   0xB0849 jmp     loc_B00FE
//   0xB084E lea     rsi, [r15+20h]
//   0xB0852 lea     rdi, [r11+20h]
//   0xB0856 xor     edx, edx
//   0xB0858 mov     [rbp+var_158], r11
//   0xB085F call    sub_121960
//   0xB0864 test    al, al
//   0xB0866 mov     r11, [rbp+var_158]
//   0xB086D jz      loc_AFAF8
//   0xB0873 cmp     byte ptr [r15+20h], 4
//   0xB0878 jz      loc_B0D15
//   0xB087E mov     rdi, [rbp+var_140]
//   0xB0885 lea     rdx, [r11+40h]
//   0xB0889 mov     rsi, r13
//   0xB088C mov     [rbp+var_158], r11
//   0xB0893 call    sub_123220
//   0xB0898 test    al, al
//   0xB089A mov     r11, [rbp+var_158]
//   0xB08A1 jz      loc_AFAF8
//   0xB08A7 mov     eax, [r15+44h]
//   0xB08AB cmp     [r11+44h], eax
//   0xB08AF jl      loc_AFAF8
//   0xB08B5 lea     r14, [rbp+var_60]
//   0xB08B9 mov     ecx, 1
//   0xB08BE mov     rdx, r11
//   0xB08C1 mov     rsi, rbx
//   0xB08C4 mov     rdi, r14
//   0xB08C7 mov     [rbp+var_140], r11
//   0xB08CE call    sub_120480
//   0xB08D3 mov     r11, [rbp+var_140]
//   0xB08DA mov     rsi, qword ptr [rbp+var_150]
//   0xB08E1 mov     rcx, r15
//   0xB08E4 mov     rdi, rbx
//   0xB08E7 mov     r8d, 1
//   0xB08ED mov     rdx, [r11+8]
//   0xB08F1 call    sub_A58A0
//   0xB08F6 test    rax, rax
//   0xB08F9 mov     r11, [rbp+var_140]
//   0xB0900 jz      loc_B0DDF
//   0xB0906 mov     rdi, r14
//   0xB0909 mov     [rbp+var_140], r11
//   0xB0910 call    sub_8F940
//   0xB0915 mov     r11, [rbp+var_140]
//   0xB091C jmp     loc_AFAF8
//   0xB0921 align 8
//   0xB0928 mov     r14d, 20h ; ' '
//   0xB092E jmp     loc_AF9A0
//   0xB0933 mov     r14d, 2Bh ; '+'
//   0xB0939 jmp     loc_AF9A0
//   0xB093E mov     r14d, 28h ; '('
//   0xB0944 jmp     loc_AF9A0
//   0xB0949 mov     r14d, 18h
//   0xB094F jmp     loc_AF9A0
//   0xB0954 mov     r14d, 33h ; '3'
//   0xB095A jmp     loc_AF9A0
//   0xB095F mov     r14d, 11h
//   0xB0965 jmp     loc_AF9A0
//   0xB096A mov     dword ptr [r15], 4
//   0xB0971 lea     rsi, [r12+20h]
//   0xB0976 lea     rdi, [r15+20h]
//   0xB097A call    sub_120F80
//   0xB097F cmp     byte ptr [r15+20h], 1
//   0xB0984 jz      loc_B0BAF
//   0xB098A mov     rdi, r12
//   0xB098D call    sub_1193A0
//   0xB0992 mov     eax, [rbx+18h]
//   0xB0995 mov     rdi, r15
//   0xB0998 and     ah, 0FDh
//   0xB099B or      al, 80h
//   0xB099D mov     [rbx+18h], eax
//   0xB09A0 call    sub_1B1800
//   0xB09A5 mov     rcx, rax
//   0xB09A8 mov     edx, 3
//   0xB09AD mov     rdi, rbx
//   0xB09B0 xor     eax, eax
//   0xB09B2 lea     rsi, aCmbDS; "cmb%d: %s"
//   0xB09B9 call    sub_9E320
//   0xB09BE mov     edx, 6
//   0xB09C3 mov     rsi, r15
//   0xB09C6 mov     rdi, rbx
//   0xB09C9 call    sub_163610
//   0xB09CE mov     rdi, [rbp+var_50]
//   0xB09D2 test    rdi, rdi
//   0xB09D5 jz      short loc_B09E2
//   0xB09D7 xor     eax, eax
//   0xB09D9 mov     qword ptr [rbp+var_48], rax
//   0xB09DD call    _qfree
//   0xB09E2 mov     rdi, [rbp+var_60]
//   0xB09E6 call    _qfree
//   0xB09EB mov     rdi, [rbp+var_80]
//   0xB09EF test    rdi, rdi
//   0xB09F2 jz      short loc_B09FF
//   0xB09F4 xor     eax, eax
//   0xB09F6 mov     qword ptr [rbp+var_78], rax
//   0xB09FA call    _qfree
//   0xB09FF mov     rdi, [rbp+var_90]
//   0xB0A06 call    _qfree
//   0xB0A0B jmp     loc_AF9BF
//   0xB0A10 mov     rdi, [rbp+var_80]
//   0xB0A14 test    rdi, rdi
//   0xB0A17 jz      short loc_B0A24
//   0xB0A19 xor     eax, eax
//   0xB0A1B mov     qword ptr [rbp+var_78], rax
//   0xB0A1F call    _qfree
//   0xB0A24 mov     rdi, [rbp+var_90]
//   0xB0A2B call    _qfree
//   0xB0A30 jmp     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0A35 mov     r14d, 2Ch ; ','
//   0xB0A3B mov     rdi, r12
//   0xB0A3E call    sub_8F940
//   0xB0A43 mov     rdi, qword ptr [rbp+var_150]
//   0xB0A4A call    sub_8F940
//   0xB0A4F jmp     loc_AF9A0
//   0xB0A54 mov     r14d, 17h
//   0xB0A5A jmp     loc_AF9A0
//   0xB0A5F mov     rdi, r12
//   0xB0A62 call    sub_118BA0
//   0xB0A67 jmp     loc_AF916
//   0xB0A6C cmp     byte ptr [r10+40h], 1
//   0xB0A71 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0A77 mov     eax, [r10+48h]
//   0xB0A7B cmp     [r15+48h], eax
//   0xB0A7F jz      loc_B0C80
//   0xB0A85 cmp     byte ptr [r15+30h], 1
//   0xB0A8A jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0A90 jmp     loc_B057A
//   0xB0A95 mov     r14d, 1Eh
//   0xB0A9B jmp     loc_AF9A0
//   0xB0AA0 call    ___stack_chk_fail
//   0xB0AA5 mov     r14d, 1Bh
//   0xB0AAB jmp     loc_AF9A0
//   0xB0AB0 mov     rsi, qword ptr [rbp+var_150]
//   0xB0AB7 mov     rdi, r12
//   0xB0ABA mov     [rbp+var_158], r11
//   0xB0AC1 call    sub_9E110
//   0xB0AC6 test    al, al
//   0xB0AC8 mov     r11, [rbp+var_158]
//   0xB0ACF jz      loc_AFAE2
//   0xB0AD5 mov     rax, [rbx+1E0h]
//   0xB0ADC xor     edx, edx
//   0xB0ADE mov     rdi, r15
//   0xB0AE1 mov     rsi, [rax+70h]
//   0xB0AE5 call    sub_11C3A0
//   0xB0AEA test    al, al
//   0xB0AEC mov     r11, [rbp+var_158]
//   0xB0AF3 jnz     loc_AFAE2
//   0xB0AF9 mov     rdx, [r11+8]
//   0xB0AFD mov     r8d, 1
//   0xB0B03 mov     rcx, r15
//   0xB0B06 mov     rdi, rbx
//   0xB0B09 mov     rsi, qword ptr [rbp+var_150]
//   0xB0B10 call    sub_A58A0
//   0xB0B15 test    rax, rax
//   0xB0B18 mov     r11, [rbp+var_158]
//   0xB0B1F jnz     loc_AFAE2
//   0xB0B25 mov     rax, [rbx+1E0h]
//   0xB0B2C mov     r9, r15
//   0xB0B2F mov     rcx, r11
//   0xB0B32 mov     rdx, rbx
//   0xB0B35 lea     rsi, [rbp+var_128]
//   0xB0B3C lea     r8, [r11+40h]
//   0xB0B40 mov     rdi, [rax+70h]
//   0xB0B44 push    r10
//   0xB0B46 push    [rbp+var_140]
//   0xB0B4C call    sub_12BD70
//   0xB0B51 test    al, al
//   0xB0B53 pop     r8
//   0xB0B55 mov     r11, [rbp+var_158]
//   0xB0B5C pop     r9
//   0xB0B5E jz      loc_AFAE2
//   0xB0B64 lea     r14, [rbp+var_60]
//   0xB0B68 lea     rsi, [r11+20h]
//   0xB0B6C mov     rdi, r14
//   0xB0B6F call    sub_11F840
//   0xB0B74 mov     rax, [rbp+var_128]
//   0xB0B7B mov     r11, [rbp+var_158]
//   0xB0B82 test    rax, rax
//   0xB0B85 js      short loc_B0B94
//   0xB0B87 movsxd  rdx, dword ptr [rbp+var_60+4]
//   0xB0B8B cmp     rax, rdx
//   0xB0B8E jl      loc_B0D50
//   0xB0B94 mov     rdi, r14
//   0xB0B97 mov     [rbp+var_158], r11
//   0xB0B9E call    sub_118BA0
//   0xB0BA3 mov     r11, [rbp+var_158]
//   0xB0BAA jmp     loc_AFAE2
//   0xB0BAF mov     eax, [r15+28h]
//   0xB0BB3 cmp     [r13+3Ch], eax
//   0xB0BB7 jnz     loc_B098A
//   0xB0BBD mov     rax, [r12+18h]
//   0xB0BC2 mov     [r15+18h], rax
//   0xB0BC6 jmp     loc_B098A
//   0xB0BCB lea     rdi, [rax+20h]
//   0xB0BCF xor     edx, edx
//   0xB0BD1 xor     esi, esi
//   0xB0BD3 call    sub_9E150
//   0xB0BD8 test    al, al
//   0xB0BDA jz      loc_AFC3B
//   0xB0BE0 mov     eax, [r15+4]
//   0xB0BE4 mov     rcx, [rbp+var_140]
//   0xB0BEB sar     eax, 8
//   0xB0BEE mov     edx, [rcx+44h]
//   0xB0BF1 and     eax, 7
//   0xB0BF4 jz      short loc_B0C08
//   0xB0BF6 lea     ecx, [rax-1]
//   0xB0BF9 mov     eax, 1
//   0xB0BFE shl     eax, cl
//   0xB0C00 cmp     eax, edx
//   0xB0C02 jl      loc_AFC3B
//   0xB0C08 cmp     [r15+44h], edx
//   0xB0C0C jge     loc_AFC3B
//   0xB0C12 xor     eax, eax
//   0xB0C14 pxor    xmm0, xmm0
//   0xB0C18 xor     ecx, ecx
//   0xB0C1A mov     rsi, r14
//   0xB0C1D mov     [rbp+var_60], rax
//   0xB0C21 mov     rdi, rbx
//   0xB0C24 mov     [rbp+var_58], rax
//   0xB0C28 mov     [rbp+var_50], rax
//   0xB0C2C mov     rax, [rbp+var_140]
//   0xB0C33 movups  [rbp+var_48], xmm0
//   0xB0C37 add     rax, 40h ; '@'
//   0xB0C3B mov     rdx, rax
//   0xB0C3E mov     [rbp+var_158], rax
//   0xB0C45 call    sub_123DE0
//   0xB0C4A mov     rcx, [r15+8]
//   0xB0C4E mov     r8d, 1
//   0xB0C54 mov     rsi, r14
//   0xB0C57 mov     rdi, rbx
//   0xB0C5A mov     rax, [rbp+var_140]
//   0xB0C61 mov     rdx, [rax+8]
//   0xB0C65 call    sub_A5B90
//   0xB0C6A test    rax, rax
//   0xB0C6D jz      loc_B0E77
//   0xB0C73 mov     rdi, r14
//   0xB0C76 call    sub_8F940
//   0xB0C7B jmp     loc_AFC3B
//   0xB0C80 cmp     r12d, [r10+44h]
//   0xB0C84 jnz     loc_B0A85
//   0xB0C8A mov     rsi, [r15+18h]
//   0xB0C8E mov     rdi, [rbx+40h]
//   0xB0C92 lea     rax, [r15+30h]
//   0xB0C96 mov     qword ptr [rbp+var_150], r10
//   0xB0C9D mov     [rbp+var_140], rax
//   0xB0CA4 call    sub_32BF20
//   0xB0CA9 mov     rdi, rax
//   0xB0CAC call    _getseg
//   0xB0CB1 mov     rsi, [rax+30h]
//   0xB0CB5 xor     edx, edx
//   0xB0CB7 lea     rdi, [r15+30h]
//   0xB0CBB call    sub_9E150
//   0xB0CC0 test    al, al
//   0xB0CC2 mov     r10, qword ptr [rbp+var_150]
//   0xB0CC9 jnz     short loc_B0CE4
//   0xB0CCB cmp     byte ptr [r15+30h], 1
//   0xB0CD0 jnz     def_AF5ED; jumptable 00000000000AF5ED default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0CD6 mov     eax, [r15+38h]
//   0xB0CDA cmp     [r13+40h], eax
//   0xB0CDE jnz     loc_B056F
//   0xB0CE4 mov     rdx, [r15+10h]
//   0xB0CE8 mov     esi, [r15+48h]
//   0xB0CEC xor     r8d, r8d
//   0xB0CEF xor     ecx, ecx
//   0xB0CF1 mov     rdi, rbx
//   0xB0CF4 mov     qword ptr [rbp+var_150], r10
//   0xB0CFB call    sub_124E10
//   0xB0D00 mov     r10, qword ptr [rbp+var_150]
//   0xB0D07 cmp     r10, rax
//   0xB0D0A jnz     loc_B0564
//   0xB0D10 jmp     loc_B0610
//   0xB0D15 mov     rdi, [r15+28h]
//   0xB0D19 xor     edx, edx
//   0xB0D1B mov     rsi, r13
//   0xB0D1E mov     [rbp+var_158], r11
//   0xB0D25 call    sub_11C3A0
//   0xB0D2A test    al, al
//   0xB0D2C mov     r11, [rbp+var_158]
//   0xB0D33 jnz     loc_AFAF8
//   0xB0D39 jmp     loc_B087E
//   0xB0D3E cmp     [r10+24h], r12d
//   0xB0D42 jnz     loc_B0845
//   0xB0D48 mov     r14, r10
//   0xB0D4B jmp     loc_B0845
//   0xB0D50 mov     rdx, [rbx+1E0h]
//   0xB0D57 mov     rdi, r14
//   0xB0D5A mov     [rbp+var_158], r11
//   0xB0D61 mov     rsi, [rdx+70h]
//   0xB0D65 mov     edx, eax
//   0xB0D67 call    sub_122D10
//   0xB0D6C test    al, al
//   0xB0D6E mov     r11, [rbp+var_158]
//   0xB0D75 jz      loc_B0B94
//   0xB0D7B lea     rsi, [r15+20h]
//   0xB0D7F xor     edx, edx
//   0xB0D81 mov     rdi, r14
//   0xB0D84 call    sub_121960
//   0xB0D89 test    al, al
//   0xB0D8B mov     r11, [rbp+var_158]
//   0xB0D92 jz      loc_B0B94
//   0xB0D98 mov     rdx, [r11+8]
//   0xB0D9C mov     rcx, r15
//   0xB0D9F mov     rsi, r14
//   0xB0DA2 mov     rdi, rbx
//   0xB0DA5 call    sub_A5AB0
//   0xB0DAA test    al, al
//   0xB0DAC mov     r11, [rbp+var_158]
//   0xB0DB3 jnz     loc_B0B94
//   0xB0DB9 mov     rdi, r15
//   0xB0DBC call    sub_1193A0
//   0xB0DC1 mov     eax, [rbx+18h]
//   0xB0DC4 mov     rdi, r14
//   0xB0DC7 mov     r14d, 6
//   0xB0DCD and     ah, 0FDh
//   0xB0DD0 or      al, 80h
//   0xB0DD2 mov     [rbx+18h], eax
//   0xB0DD5 call    sub_118BA0
//   0xB0DDA jmp     loc_B0A3B
//   0xB0DDF mov     rdx, [r11+8]
//   0xB0DE3 mov     r8d, 1
//   0xB0DE9 mov     rcx, r15
//   0xB0DEC mov     rsi, r14
//   0xB0DEF mov     rdi, rbx
//   0xB0DF2 mov     [rbp+var_140], r11
//   0xB0DF9 call    sub_A58A0
//   0xB0DFE test    rax, rax
//   0xB0E01 mov     r11, [rbp+var_140]
//   0xB0E08 jnz     loc_B0906
//   0xB0E0E mov     rdi, r15
//   0xB0E11 call    sub_1193A0
//   0xB0E16 mov     eax, [rbx+18h]
//   0xB0E19 mov     rdi, r14
//   0xB0E1C mov     r14d, 8
//   0xB0E22 and     ah, 0FDh
//   0xB0E25 or      al, 80h
//   0xB0E27 mov     [rbx+18h], eax
//   0xB0E2A call    sub_8F940
//   0xB0E2F jmp     loc_B0A3B
//   0xB0E34 mov     rdi, r14
//   0xB0E37 call    sub_1193A0
//   0xB0E3C mov     eax, [rbx+18h]
//   0xB0E3F mov     rdi, [rbx+40h]
//   0xB0E43 and     ah, 0FDh
//   0xB0E46 or      al, 80h
//   0xB0E48 mov     [rbx+18h], eax
//   0xB0E4B mov     rsi, [r14+18h]
//   0xB0E4F call    sub_1CB7F0
//   0xB0E54 mov     rsi, [r15+18h]
//   0xB0E58 mov     rdi, [rbx+40h]
//   0xB0E5C mov     r14, rax
//   0xB0E5F call    sub_1CB7F0
//   0xB0E64 cmp     r14, rax
//   0xB0E67 jz      loc_B0043
//   0xB0E6D or      dword ptr [r15+4], 20h
//   0xB0E72 jmp     loc_B0043
//   0xB0E77 mov     rdx, [rbp+var_158]
//   0xB0E7E mov     rdi, qword ptr [rbp+var_150]
//   0xB0E85 mov     rsi, r13
//   0xB0E88 call    sub_123220
//   0xB0E8D test    al, al
//   0xB0E8F jz      loc_B0C73
//   0xB0E95 mov     rsi, [rbp+var_158]
//   0xB0E9C mov     rdi, qword ptr [rbp+var_150]
//   0xB0EA3 call    sub_120F80
//   0xB0EA8 mov     rax, [rbp+var_140]
//   0xB0EAF mov     dword ptr [r15], 9
//   0xB0EB6 test    byte ptr [rax+4], 80h
//   0xB0EBA jnz     short loc_B0ECF
//   0xB0EBC mov     rdi, rax
//   0xB0EBF call    sub_1193A0
//   0xB0EC4 mov     eax, [rbx+18h]
//   0xB0EC7 and     ah, 0FDh
//   0xB0ECA or      al, 80h
//   0xB0ECC mov     [rbx+18h], eax
//   0xB0ECF mov     rdi, r14
//   0xB0ED2 mov     r14d, 7
//   0xB0ED8 call    sub_8F940
//   0xB0EDD mov     rdi, r12
//   0xB0EE0 call    sub_118BA0
//   0xB0EE5 jmp     loc_AF9A0
//   0xB0EEA cmp     byte ptr [r12+20h], 1
//   0xB0EF0 jnz     loc_AFCF3
//   0xB0EF6 mov     eax, [r12+28h]
//   0xB0EFB cmp     [r13+38h], eax
//   0xB0EFF jnz     loc_AFCF3
//   0xB0F05 cmp     byte ptr [r12+30h], 1
//   0xB0F0B jnz     loc_AFCF3
//   0xB0F11 mov     eax, [r12+38h]
//   0xB0F16 cmp     [r13+3Ch], eax
//   0xB0F1A jnz     loc_AFCF3
//   0xB0F20 jmp     loc_B03BE
//   0xB0F25 mov     rbx, rax
//   0xB0F28 jmp     loc_304DA
//   0xB0F2D mov     rbx, rax
//   0xB0F30 jmp     loc_30511
//   0xB0F35 mov     rbx, rax
//   0xB0F38 jmp     loc_30520
//   0xB0F3D mov     rbx, rax
//   0xB0F40 jmp     loc_3052A
//   0xB0F45 mov     rbx, rax
//   0xB0F48 jmp     loc_30538
//   0xB0F4D mov     rbx, rax
//   0xB0F50 jmp     loc_3054A
//   0xB0F55 mov     rbx, rax
//   0xB0F58 jmp     loc_30573
//   0xB0F5D mov     rbx, rax
//   0xB0F60 jmp     loc_30552
//   0xB0F65 mov     rbx, rax
//   0xB0F68 jmp     loc_30584
//   0xB0F6D mov     rbx, rax
//   0xB0F70 jmp     loc_30540
//   0xB0F75 mov     rbx, rax
//   0xB0F78 jmp     loc_3056B
//   0xB0F7D mov     rbx, rax
//   0xB0F80 jmp     loc_304E2
// ============================================================

void sub_AF4D0(/* signature unknown */)
{
    // see disassembly above
}

