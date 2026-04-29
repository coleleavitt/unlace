// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xAEB10
// Name:           sub_AEB10
// Function size:  6837 bytes (1539 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xAEB10 push    rbp
//   0xAEB11 mov     rbp, rsp
//   0xAEB14 push    r15
//   0xAEB16 push    r14
//   0xAEB18 push    r13
//   0xAEB1A push    r12
//   0xAEB1C push    rbx
//   0xAEB1D sub     rsp, 138h
//   0xAEB24 mov     rax, fs:28h
//   0xAEB2D mov     [rbp+var_38], rax
//   0xAEB31 xor     eax, eax
//   0xAEB33 test    rsi, rsi
//   0xAEB36 jz      short loc_AEB44
//   0xAEB38 mov     r15, rsi
//   0xAEB3B test    dword ptr [rsi+4], 40010h
//   0xAEB42 jz      short loc_AEB78
//   0xAEB44 mov     byte ptr [rbp+var_138], 0
//   0xAEB4B mov     rax, [rbp+var_38]
//   0xAEB4F sub     rax, fs:28h
//   0xAEB58 jnz     loc_B00E0
//   0xAEB5E movzx   eax, byte ptr [rbp+var_138]
//   0xAEB65 lea     rsp, [rbp-28h]
//   0xAEB69 pop     rbx
//   0xAEB6A pop     r12
//   0xAEB6C pop     r13
//   0xAEB6E pop     r14
//   0xAEB70 pop     r15
//   0xAEB72 pop     rbp
//   0xAEB73 retn
//   0xAEB74 align 8
//   0xAEB78 test    byte ptr [rsi+41h], 2
//   0xAEB7C jnz     short loc_AEB44
//   0xAEB7E mov     rbx, rdi
//   0xAEB81 mov     rdi, [rdi+40h]
//   0xAEB85 call    sub_9DA90
//   0xAEB8A mov     byte ptr [rbp+var_138], al
//   0xAEB90 test    al, al
//   0xAEB92 jnz     short loc_AEB44
//   0xAEB94 mov     rdi, [rbx+1E0h]
//   0xAEB9B mov     rcx, r15
//   0xAEB9E mov     rdx, rbx
//   0xAEBA1 mov     esi, 0Ch
//   0xAEBA6 call    sub_3380C0
//   0xAEBAB test    eax, eax
//   0xAEBAD jnz     loc_AEFB0
//   0xAEBB3 mov     rax, [rbx+1E0h]
//   0xAEBBA pxor    xmm0, xmm0
//   0xAEBBE cmp     dword ptr [r15], 3Ch; switch 61 cases
//   0xAEBC2 mov     [rbp+var_120], 0
//   0xAEBCD mov     [rbp+var_118], 0
//   0xAEBD8 mov     [rbp+var_110], 0
//   0xAEBE3 mov     r13, [rax+70h]
//   0xAEBE7 mov     [rbp+var_F0], 0
//   0xAEBF2 mov     [rbp+var_E8], 0
//   0xAEBFD mov     [rbp+var_E0], 0
//   0xAEC08 movups  [rbp+var_108], xmm0
//   0xAEC0F movups  [rbp+var_D8], xmm0
//   0xAEC16 ja      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAEC1C mov     eax, [r15]
//   0xAEC1F lea     rdx, jpt_AEC2D
//   0xAEC26 movsxd  rax, ds:(jpt_AEC2D - 40080Ch)[rdx+rax*4]
//   0xAEC2A add     rax, rdx
//   0xAEC2D jmp     rax; switch jump
//   0xAEC2F lea     r14, [rbp+var_60]; jumptable 00000000000AEC2D case 60
//   0xAEC33 xor     ecx, ecx
//   0xAEC35 mov     rdx, r15
//   0xAEC38 mov     rsi, rbx
//   0xAEC3B mov     rdi, r14
//   0xAEC3E call    sub_11FAC0
//   0xAEC43 lea     rdi, [rbp+var_120]
//   0xAEC4A mov     rsi, r14
//   0xAEC4D call    sub_5FE50
//   0xAEC52 mov     rdi, [rbp+var_110]
//   0xAEC59 pxor    xmm0, xmm0
//   0xAEC5D mov     r12, [rbp+var_50]
//   0xAEC61 mov     [rbp+var_50], 0
//   0xAEC69 movdqu  xmm1, [rbp+var_48]
//   0xAEC6E movups  [rbp+var_48], xmm0
//   0xAEC72 test    rdi, rdi
//   0xAEC75 jz      loc_AF841
//   0xAEC7B movaps  [rbp+var_150], xmm1
//   0xAEC82 mov     qword ptr [rbp+var_108], 0
//   0xAEC8D call    _qfree
//   0xAEC92 mov     rdi, [rbp+var_50]
//   0xAEC96 movdqa  xmm1, [rbp+var_150]
//   0xAEC9E mov     [rbp+var_110], r12
//   0xAECA5 movups  [rbp+var_108], xmm1
//   0xAECAC test    rdi, rdi
//   0xAECAF jz      short loc_AECBE
//   0xAECB1 mov     qword ptr [rbp+var_48], 0
//   0xAECB9 call    _qfree
//   0xAECBE mov     rdi, [rbp+var_60]
//   0xAECC2 call    _qfree
//   0xAECC7 xor     ecx, ecx
//   0xAECC9 mov     rdx, r15
//   0xAECCC mov     rsi, rbx
//   0xAECCF mov     rdi, r14
//   0xAECD2 call    sub_122E60
//   0xAECD7 lea     rdi, [rbp+var_F0]
//   0xAECDE mov     rsi, r14
//   0xAECE1 call    sub_5FE50
//   0xAECE6 mov     rdi, [rbp+var_E0]
//   0xAECED pxor    xmm0, xmm0
//   0xAECF1 mov     r12, [rbp+var_50]
//   0xAECF5 mov     [rbp+var_50], 0
//   0xAECFD movdqu  xmm1, [rbp+var_48]
//   0xAED02 movups  [rbp+var_48], xmm0
//   0xAED06 test    rdi, rdi
//   0xAED09 jz      loc_AF854
//   0xAED0F movaps  [rbp+var_150], xmm1
//   0xAED16 mov     qword ptr [rbp+var_D8], 0
//   0xAED21 call    _qfree
//   0xAED26 mov     rdi, [rbp+var_50]
//   0xAED2A movdqa  xmm1, [rbp+var_150]
//   0xAED32 mov     [rbp+var_E0], r12
//   0xAED39 movups  [rbp+var_D8], xmm1
//   0xAED40 test    rdi, rdi
//   0xAED43 jz      short loc_AED52
//   0xAED45 mov     qword ptr [rbp+var_48], 0
//   0xAED4D call    _qfree
//   0xAED52 mov     rdi, [rbp+var_60]
//   0xAED56 call    _qfree
//   0xAED5B mov     r12, [r15+10h]
//   0xAED5F test    r12, r12
//   0xAED62 jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAED68 lea     rax, [rbp+var_90]
//   0xAED6F mov     qword ptr [rbp+var_150], rax
//   0xAED76 nop     word ptr [rax+rax+00000000h]
//   0xAED80 mov     eax, [r12]
//   0xAED84 lea     edx, [rax-38h]
//   0xAED87 cmp     edx, 1
//   0xAED8A jbe     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAED90 cmp     eax, 3Bh ; ';'
//   0xAED93 jnz     loc_AEEE3
//   0xAED99 mov     eax, [r15+44h]
//   0xAED9D cmp     [r12+24h], eax
//   0xAEDA2 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAEDA8 mov     rsi, [r12+18h]
//   0xAEDAD mov     rdi, [rbx+40h]
//   0xAEDB1 call    sub_1CAD30
//   0xAEDB6 mov     rsi, [r15+18h]
//   0xAEDBA mov     rdi, [rbx+40h]
//   0xAEDBE mov     [rbp+var_140], rax
//   0xAEDC5 call    sub_1CAD30
//   0xAEDCA mov     rcx, rax
//   0xAEDCD movsxd  rdx, dword ptr [r15+44h]
//   0xAEDD1 mov     rax, [rbp+var_140]
//   0xAEDD8 mov     [rbp+var_140], rcx
//   0xAEDDF sub     rax, rdx
//   0xAEDE2 cmp     rax, rcx
//   0xAEDE5 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAEDEB mov     edx, [r13+54h]
//   0xAEDEF mov     esi, [r13+3Ch]
//   0xAEDF3 mov     [rbp+var_90], 0
//   0xAEDFE mov     rdi, qword ptr [rbp+var_150]
//   0xAEE05 mov     [rbp+var_88], 0
//   0xAEE10 call    sub_5F400
//   0xAEE15 mov     rax, [rbx+40h]
//   0xAEE19 pxor    xmm0, xmm0
//   0xAEE1D mov     [rbp+var_80], 0
//   0xAEE25 movups  [rbp+var_78], xmm0
//   0xAEE29 mov     rcx, [rbp+var_140]
//   0xAEE30 movsxd  rdx, dword ptr [r13+50h]
//   0xAEE34 add     rcx, [rax+5A0h]
//   0xAEE3B mov     rdi, qword ptr [rbp+var_150]
//   0xAEE42 mov     rsi, rcx
//   0xAEE45 call    sub_11DF60
//   0xAEE4A mov     rdx, [r12+8]
//   0xAEE4F xor     r8d, r8d
//   0xAEE52 mov     rcx, r15
//   0xAEE55 mov     rdi, rbx
//   0xAEE58 mov     rsi, qword ptr [rbp+var_150]
//   0xAEE5F call    sub_A51D0
//   0xAEE64 test    rax, rax
//   0xAEE67 jnz     loc_B0050
//   0xAEE6D mov     ecx, 1
//   0xAEE72 mov     rdx, r12
//   0xAEE75 mov     rsi, rbx
//   0xAEE78 mov     rdi, r14
//   0xAEE7B call    sub_11FAC0
//   0xAEE80 mov     rdx, [r12+8]
//   0xAEE85 mov     rcx, r15
//   0xAEE88 mov     rsi, r14
//   0xAEE8B mov     rdi, rbx
//   0xAEE8E mov     r8d, 1
//   0xAEE94 call    sub_A4EE0
//   0xAEE99 test    rax, rax
//   0xAEE9C jz      loc_AFFAA
//   0xAEEA2 mov     rdi, [rbp+var_50]
//   0xAEEA6 test    rdi, rdi
//   0xAEEA9 jz      short loc_AEEB8
//   0xAEEAB mov     qword ptr [rbp+var_48], 0
//   0xAEEB3 call    _qfree
//   0xAEEB8 mov     rdi, [rbp+var_60]
//   0xAEEBC call    _qfree
//   0xAEEC1 mov     rdi, [rbp+var_80]
//   0xAEEC5 test    rdi, rdi
//   0xAEEC8 jz      short loc_AEED7
//   0xAEECA mov     qword ptr [rbp+var_78], 0
//   0xAEED2 call    _qfree
//   0xAEED7 mov     rdi, [rbp+var_90]
//   0xAEEDE call    _qfree
//   0xAEEE3 xor     ecx, ecx
//   0xAEEE5 mov     rdx, r12
//   0xAEEE8 mov     rsi, rbx
//   0xAEEEB mov     rdi, r14
//   0xAEEEE call    sub_122E60
//   0xAEEF3 lea     rsi, [rbp+var_120]
//   0xAEEFA mov     rdi, r14
//   0xAEEFD call    sub_5FD00
//   0xAEF02 test    al, al
//   0xAEF04 jz      loc_AF7D0
//   0xAEF0A mov     rdi, [rbp+var_50]
//   0xAEF0E test    rdi, rdi
//   0xAEF11 jz      short loc_AEF20
//   0xAEF13 mov     qword ptr [rbp+var_48], 0
//   0xAEF1B call    _qfree
//   0xAEF20 mov     rdi, [rbp+var_60]
//   0xAEF24 call    _qfree
//   0xAEF29 nop     dword ptr [rax+00000000h]
//   0xAEF30 mov     rsi, r15; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAEF33 mov     rdi, rbx
//   0xAEF36 call    sub_A7640
//   0xAEF3B test    al, al
//   0xAEF3D jnz     loc_AF7C0
//   0xAEF43 mov     rsi, r15
//   0xAEF46 mov     rdi, rbx
//   0xAEF49 call    sub_185E70
//   0xAEF4E test    al, al
//   0xAEF50 jnz     loc_AF820
//   0xAEF56 mov     rdi, [rbp+var_E0]
//   0xAEF5D test    rdi, rdi
//   0xAEF60 jz      short loc_AEF72
//   0xAEF62 mov     qword ptr [rbp+var_D8], 0
//   0xAEF6D call    _qfree
//   0xAEF72 mov     rdi, [rbp+var_F0]
//   0xAEF79 call    _qfree
//   0xAEF7E mov     rdi, [rbp+var_110]
//   0xAEF85 test    rdi, rdi
//   0xAEF88 jz      short loc_AEF9A
//   0xAEF8A mov     qword ptr [rbp+var_108], 0
//   0xAEF95 call    _qfree
//   0xAEF9A mov     rdi, [rbp+var_120]
//   0xAEFA1 call    _qfree
//   0xAEFA6 jmp     loc_AEB4B
//   0xAEFAB align 10h
//   0xAEFB0 cmp     eax, 0FFFFFFFFh
//   0xAEFB3 setnz   byte ptr [rbp+var_138]
//   0xAEFBA jmp     loc_AEB4B
//   0xAEFBF align 20h
//   0xAEFC0 mov     rsi, r15; jumptable 00000000000AEC2D cases 29,30,34,35,39,40,45,46,50,51
//   0xAEFC3 mov     rdi, rbx
//   0xAEFC6 call    sub_936C0
//   0xAEFCB test    al, al
//   0xAEFCD jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAEFD3 mov     r14d, 2Fh ; '/'
//   0xAEFD9 nop     dword ptr [rax+00000000h]
//   0xAEFE0 mov     rdi, r15
//   0xAEFE3 call    sub_1B0E40
//   0xAEFE8 mov     rcx, rax
//   0xAEFEB mov     edx, r14d
//   0xAEFEE lea     rsi, aCmbDS; "cmb%d: %s"
//   0xAEFF5 mov     rdi, rbx
//   0xAEFF8 xor     eax, eax
//   0xAEFFA call    sub_9D960
//   0xAEFFF mov     byte ptr [rbp+var_138], 1
//   0xAF006 jmp     loc_AEF56
//   0xAF00B align 10h
//   0xAF010 mov     rsi, r15; jumptable 00000000000AEC2D case 19
//   0xAF013 mov     rdi, rbx
//   0xAF016 call    sub_96940
//   0xAF01B test    al, al
//   0xAF01D jnz     loc_AF836
//   0xAF023 mov     rsi, r15
//   0xAF026 mov     rdi, rbx
//   0xAF029 call    sub_91D30
//   0xAF02E test    al, al
//   0xAF030 jnz     loc_AF867
//   0xAF036 mov     rsi, r15
//   0xAF039 mov     rdi, rbx
//   0xAF03C call    sub_93980
//   0xAF041 test    al, al
//   0xAF043 jnz     loc_AFCD6
//   0xAF049 mov     rsi, r15
//   0xAF04C mov     rdi, rbx
//   0xAF04F call    sub_92BB0
//   0xAF054 test    al, al
//   0xAF056 jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF05C mov     r14d, 39h ; '9'
//   0xAF062 jmp     loc_AEFE0
//   0xAF067 pxor    xmm0, xmm0; jumptable 00000000000AEC2D case 4
//   0xAF06B lea     rdx, [r15+40h]
//   0xAF06F mov     ecx, 1
//   0xAF074 mov     rdi, rbx
//   0xAF077 lea     r14, [rbp+var_C0]
//   0xAF07E movups  [rbp+var_78], xmm0
//   0xAF082 lea     r12, [rbp+var_90]
//   0xAF089 mov     rsi, r14
//   0xAF08C mov     [rbp+var_C0], 0
//   0xAF097 mov     [rbp+var_B8], 0
//   0xAF0A2 mov     [rbp+var_B0], 0
//   0xAF0AD mov     [rbp+var_90], 0
//   0xAF0B8 mov     [rbp+var_88], 0
//   0xAF0C3 mov     [rbp+var_80], 0
//   0xAF0CB mov     [rbp+var_140], rdx
//   0xAF0D2 mov     qword ptr [rbp+var_150], r14
//   0xAF0D9 movups  [rbp+var_A8], xmm0
//   0xAF0E0 call    sub_123420
//   0xAF0E5 sub     rsp, 8
//   0xAF0E9 mov     rdx, [r15+10h]
//   0xAF0ED mov     r9d, 80h
//   0xAF0F3 xor     ecx, ecx
//   0xAF0F5 push    101h
//   0xAF0FA mov     r8, r12
//   0xAF0FD mov     rsi, r14
//   0xAF100 mov     rdi, rbx
//   0xAF103 call    sub_124590
//   0xAF108 mov     r11, rax
//   0xAF10B pop     r14
//   0xAF10D pop     rax
//   0xAF10E test    r11, r11
//   0xAF111 jz      short loc_AF155
//   0xAF113 movzx   eax, byte ptr [r15+40h]
//   0xAF118 cmp     [r11+40h], al
//   0xAF11C jz      loc_AFCB0
//   0xAF122 cmp     dword ptr [r15+44h], 4
//   0xAF127 jg      short loc_AF155
//   0xAF129 mov     eax, [r11]
//   0xAF12C sub     eax, 8
//   0xAF12F cmp     eax, 1
//   0xAF132 jbe     loc_AFE8E
//   0xAF138 mov     rcx, qword ptr [rbp+var_150]
//   0xAF13F mov     rdx, r15
//   0xAF142 mov     rsi, r11
//   0xAF145 mov     rdi, rbx
//   0xAF148 call    sub_A9890
//   0xAF14D test    al, al
//   0xAF14F jnz     loc_B0075
//   0xAF155 mov     rdi, [rbp+var_80]
//   0xAF159 test    rdi, rdi
//   0xAF15C jz      short loc_AF16B
//   0xAF15E mov     qword ptr [rbp+var_78], 0
//   0xAF166 call    _qfree
//   0xAF16B mov     rdi, [rbp+var_90]
//   0xAF172 call    _qfree
//   0xAF177 mov     rdi, [rbp+var_B0]
//   0xAF17E test    rdi, rdi
//   0xAF181 jz      short loc_AF193
//   0xAF183 mov     qword ptr [rbp+var_A8], 0
//   0xAF18E call    _qfree
//   0xAF193 mov     rdi, [rbp+var_C0]
//   0xAF19A call    _qfree
//   0xAF19F mov     rsi, r15
//   0xAF1A2 mov     rdi, rbx
//   0xAF1A5 call    sub_1823D0
//   0xAF1AA test    al, al
//   0xAF1AC jnz     loc_AF2A3
//   0xAF1B2 cmp     dword ptr [r15+44h], 2; jumptable 00000000000AEC2D case 9
//   0xAF1B7 jg      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF1BD lea     r14, [rbp+var_60]
//   0xAF1C1 lea     rdi, [r15+20h]
//   0xAF1C5 xor     edx, edx
//   0xAF1C7 mov     rsi, r14
//   0xAF1CA call    sub_11B1C0
//   0xAF1CF test    al, al
//   0xAF1D1 jz      short loc_AF1DE
//   0xAF1D3 cmp     [rbp+var_60], 0
//   0xAF1D8 jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF1DE lea     rax, [r15+40h]
//   0xAF1E2 lea     r12, [rbp+var_90]
//   0xAF1E9 mov     rsi, rax
//   0xAF1EC mov     rdi, r12
//   0xAF1EF mov     qword ptr [rbp+var_150], rax
//   0xAF1F6 call    sub_11EE80
//   0xAF1FB sub     rsp, 8
//   0xAF1FF xor     r9d, r9d
//   0xAF202 mov     rcx, r12
//   0xAF205 mov     rdx, r15
//   0xAF208 push    0
//   0xAF20A mov     eax, dword ptr [rbp+var_90+4]
//   0xAF210 mov     rsi, rbx
//   0xAF213 mov     rdi, r13
//   0xAF216 lea     r8d, [rax+rax]
//   0xAF21A call    sub_12CB70
//   0xAF21F pop     rsi
//   0xAF220 pop     rdi
//   0xAF221 test    al, al
//   0xAF223 jz      loc_B009F
//   0xAF229 lea     rsi, [rbp+var_F0]
//   0xAF230 mov     ecx, 1
//   0xAF235 mov     rdx, r12
//   0xAF238 mov     rdi, rbx
//   0xAF23B call    sub_123420
//   0xAF240 sub     rsp, 8
//   0xAF244 mov     rdx, [r15+10h]
//   0xAF248 xor     r9d, r9d
//   0xAF24B xor     r8d, r8d
//   0xAF24E push    101h
//   0xAF253 lea     rsi, [rbp+var_F0]
//   0xAF25A xor     ecx, ecx
//   0xAF25C mov     rdi, rbx
//   0xAF25F call    sub_124590
//   0xAF264 mov     [rbp+var_140], rax
//   0xAF26B pop     rdx
//   0xAF26C pop     rcx
//   0xAF26D test    rax, rax
//   0xAF270 jz      short loc_AF27B
//   0xAF272 cmp     dword ptr [rax], 4
//   0xAF275 jz      loc_B020B
//   0xAF27B mov     rdi, r12
//   0xAF27E call    sub_1181E0
//   0xAF283 jmp     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF288 align 10h
//   0xAF290 mov     rsi, r15; jumptable 00000000000AEC2D case 2
//   0xAF293 mov     rdi, rbx
//   0xAF296 call    sub_1823D0
//   0xAF29B test    al, al
//   0xAF29D jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF2A3 mov     r14d, 21h ; '!'
//   0xAF2A9 jmp     loc_AEFE0
//   0xAF2AE mov     rsi, r15; jumptable 00000000000AEC2D case 14
//   0xAF2B1 mov     rdi, rbx
//   0xAF2B4 call    sub_928C0
//   0xAF2B9 test    al, al
//   0xAF2BB jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF2C1 mov     r14d, 2Ah ; '*'
//   0xAF2C7 jmp     loc_AEFE0
//   0xAF2CC mov     rsi, r15; jumptable 00000000000AEC2D case 13
//   0xAF2CF mov     rdi, rbx
//   0xAF2D2 call    sub_97E20
//   0xAF2D7 test    al, al
//   0xAF2D9 jnz     loc_AF82B
//   0xAF2DF mov     rsi, r15
//   0xAF2E2 mov     rdi, rbx
//   0xAF2E5 call    sub_95080
//   0xAF2EA test    al, al
//   0xAF2EC jnz     loc_AF4AE
//   0xAF2F2 mov     rsi, r15
//   0xAF2F5 mov     rdi, rbx
//   0xAF2F8 call    sub_9A1B0
//   0xAF2FD test    al, al
//   0xAF2FF jnz     loc_AFF89
//   0xAF305 mov     rsi, r15
//   0xAF308 mov     rdi, rbx
//   0xAF30B call    sub_926A0
//   0xAF310 test    al, al
//   0xAF312 jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF318 mov     r14d, 38h ; '8'
//   0xAF31E jmp     loc_AEFE0
//   0xAF323 align 8
//   0xAF328 cmp     byte ptr [r15+20h], 1; jumptable 00000000000AEC2D case 12
//   0xAF32D jz      loc_AF916
//   0xAF333 mov     rsi, r15
//   0xAF336 mov     rdi, rbx
//   0xAF339 call    sub_97E20
//   0xAF33E test    al, al
//   0xAF340 jnz     loc_AF82B
//   0xAF346 mov     rsi, r15
//   0xAF349 mov     rdi, rbx
//   0xAF34C call    sub_99310
//   0xAF351 test    al, al
//   0xAF353 jnz     loc_AFCE1
//   0xAF359 mov     rsi, r15
//   0xAF35C mov     rdi, rbx
//   0xAF35F call    sub_94850
//   0xAF364 test    al, al
//   0xAF366 jnz     loc_AFF7E
//   0xAF36C mov     rsi, r15
//   0xAF36F mov     rdi, rbx
//   0xAF372 call    sub_9A7B0
//   0xAF377 test    al, al
//   0xAF379 jnz     loc_AFF9F
//   0xAF37F mov     rsi, r15
//   0xAF382 mov     rdi, rbx
//   0xAF385 call    sub_97F60
//   0xAF38A test    al, al
//   0xAF38C jnz     loc_B0094
//   0xAF392 mov     rsi, r15
//   0xAF395 mov     rdi, rbx
//   0xAF398 call    sub_915C0
//   0xAF39D test    al, al
//   0xAF39F jnz     loc_B00D5
//   0xAF3A5 mov     rsi, r15
//   0xAF3A8 mov     rdi, rbx
//   0xAF3AB call    sub_91990
//   0xAF3B0 test    al, al
//   0xAF3B2 jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF3B8 mov     r14d, 2Dh ; '-'
//   0xAF3BE jmp     loc_AEFE0
//   0xAF3C3 align 8
//   0xAF3C8 mov     rsi, r15; jumptable 00000000000AEC2D case 24
//   0xAF3CB mov     rdi, rbx
//   0xAF3CE call    sub_99E40
//   0xAF3D3 test    al, al
//   0xAF3D5 jnz     loc_AF8EA
//   0xAF3DB mov     rsi, r15
//   0xAF3DE mov     rdi, rbx
//   0xAF3E1 call    sub_93B20
//   0xAF3E6 test    al, al
//   0xAF3E8 jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF3EE mov     r14d, 34h ; '4'
//   0xAF3F4 jmp     loc_AEFE0
//   0xAF3F9 mov     rsi, r15; jumptable 00000000000AEC2D case 23
//   0xAF3FC mov     rdi, rbx
//   0xAF3FF call    sub_92040
//   0xAF404 test    al, al
//   0xAF406 jz      loc_AF010; jumptable 00000000000AEC2D case 19
//   0xAF40C mov     r14d, 29h ; ')'
//   0xAF412 jmp     loc_AEFE0
//   0xAF417 mov     rsi, r15; jumptable 00000000000AEC2D case 11
//   0xAF41A mov     rdi, rbx
//   0xAF41D call    sub_9B200
//   0xAF422 test    al, al
//   0xAF424 jnz     loc_AF90B
//   0xAF42A mov     rsi, r15
//   0xAF42D mov     rdi, rbx
//   0xAF430 call    sub_983F0
//   0xAF435 test    al, al
//   0xAF437 jnz     loc_AFCF7
//   0xAF43D mov     rsi, r15
//   0xAF440 mov     rdi, rbx
//   0xAF443 call    sub_96D40
//   0xAF448 test    al, al
//   0xAF44A jnz     loc_AFF68
//   0xAF450 mov     rsi, r15
//   0xAF453 mov     rdi, rbx
//   0xAF456 call    sub_98710
//   0xAF45B test    al, al
//   0xAF45D jnz     loc_AFF94
//   0xAF463 mov     rsi, r15
//   0xAF466 mov     rdi, rbx
//   0xAF469 call    sub_9BA50
//   0xAF46E test    al, al
//   0xAF470 jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF476 mov     r14d, 36h ; '6'
//   0xAF47C jmp     loc_AEFE0
//   0xAF481 align 8
//   0xAF488 mov     rsi, r15; jumptable 00000000000AEC2D case 5
//   0xAF48B mov     rdi, rbx
//   0xAF48E call    sub_9A1B0
//   0xAF493 test    al, al
//   0xAF495 jnz     loc_AFF89
//   0xAF49B mov     rsi, r15
//   0xAF49E mov     rdi, rbx
//   0xAF4A1 call    sub_95080
//   0xAF4A6 test    al, al
//   0xAF4A8 jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF4AE mov     r14d, 12h
//   0xAF4B4 jmp     loc_AEFE0
//   0xAF4B9 cmp     byte ptr [r15+30h], 1; jumptable 00000000000AEC2D case 1
//   0xAF4BE jz      loc_AFA80
//   0xAF4C4 mov     rsi, r15
//   0xAF4C7 mov     rdi, rbx
//   0xAF4CA call    sub_95F30
//   0xAF4CF test    al, al
//   0xAF4D1 jnz     loc_AF8F5
//   0xAF4D7 mov     rsi, r15
//   0xAF4DA mov     rdi, rbx
//   0xAF4DD call    sub_186140
//   0xAF4E2 test    al, al
//   0xAF4E4 jz      loc_AF290; jumptable 00000000000AEC2D case 2
//   0xAF4EA mov     r14d, 3Bh ; ';'
//   0xAF4F0 jmp     loc_AEFE0
//   0xAF4F5 mov     rsi, r15; jumptable 00000000000AEC2D case 10
//   0xAF4F8 mov     rdi, rbx
//   0xAF4FB call    sub_965A0
//   0xAF500 test    al, al
//   0xAF502 jnz     loc_AF900
//   0xAF508 mov     rsi, r15
//   0xAF50B mov     rdi, rbx
//   0xAF50E call    sub_9B6F0
//   0xAF513 test    al, al
//   0xAF515 jnz     loc_AFCEC
//   0xAF51B mov     rsi, r15
//   0xAF51E mov     rdi, rbx
//   0xAF521 call    sub_96700
//   0xAF526 test    al, al
//   0xAF528 jnz     loc_AFF73
//   0xAF52E mov     rsi, r15
//   0xAF531 mov     rdi, rbx
//   0xAF534 call    sub_93E80
//   0xAF539 test    al, al
//   0xAF53B jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF541 mov     r14d, 37h ; '7'
//   0xAF547 jmp     loc_AEFE0
//   0xAF54C align 10h
//   0xAF550 cmp     byte ptr [r15+40h], 8; jumptable 00000000000AEC2D case 56
//   0xAF555 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF55B mov     rax, [r15+48h]
//   0xAF55F mov     eax, [rax+11Ch]
//   0xAF565 cmp     eax, 5
//   0xAF568 jz      loc_AF872
//   0xAF56E cmp     eax, 22h ; '"'
//   0xAF571 jz      loc_AF872
//   0xAF577 mov     edx, eax
//   0xAF579 and     edx, 0FFFFFFDFh
//   0xAF57C cmp     edx, 2
//   0xAF57F jz      loc_AF8B4
//   0xAF585 cmp     eax, 2
//   0xAF588 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF58E mov     rsi, r15
//   0xAF591 mov     rdi, rbx
//   0xAF594 call    sub_185700
//   0xAF599 test    al, al
//   0xAF59B jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF5A1 mov     r14d, 1Ch
//   0xAF5A7 jmp     loc_AEFE0
//   0xAF5AC align 10h
//   0xAF5B0 cmp     byte ptr [r15+20h], 6; jumptable 00000000000AEC2D case 55
//   0xAF5B5 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF5BB mov     rax, [rbx+40h]
//   0xAF5BF mov     rsi, [r15+28h]
//   0xAF5C3 cmp     [rax+28h], rsi
//   0xAF5C7 jz      short loc_AF5DA
//   0xAF5C9 lea     rdi, [rax+8]
//   0xAF5CD call    sub_32CDA0
//   0xAF5D2 test    al, al
//   0xAF5D4 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF5DA mov     esi, [r13+3Ch]
//   0xAF5DE mov     r9d, 1
//   0xAF5E4 xor     r8d, r8d
//   0xAF5E7 xor     ecx, ecx
//   0xAF5E9 mov     rdx, r15
//   0xAF5EC mov     rdi, rbx
//   0xAF5EF call    sub_11FFA0
//   0xAF5F4 mov     r12, rax
//   0xAF5F7 test    rax, rax
//   0xAF5FA jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF600 cmp     dword ptr [rax], 3Bh ; ';'
//   0xAF603 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF609 mov     eax, [r13+54h]
//   0xAF60D cmp     [r12+24h], eax
//   0xAF612 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF618 mov     rsi, [r15+18h]
//   0xAF61C mov     rdi, [rbx+40h]
//   0xAF620 lea     r14, [r12+20h]
//   0xAF625 call    sub_9DA20
//   0xAF62A mov     rsi, rax
//   0xAF62D xor     edx, edx
//   0xAF62F mov     rdi, r14
//   0xAF632 call    sub_9D790
//   0xAF637 test    al, al
//   0xAF639 jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF63F mov     rdi, [r15+28h]
//   0xAF643 call    _get_func
//   0xAF648 test    rax, rax
//   0xAF64B jz      short loc_AF683
//   0xAF64D test    byte ptr [rax+10h], 2
//   0xAF651 jz      short loc_AF683
//   0xAF653 mov     esi, [r13+3Ch]
//   0xAF657 mov     r9d, 1
//   0xAF65D xor     r8d, r8d
//   0xAF660 xor     ecx, ecx
//   0xAF662 mov     rdx, r12
//   0xAF665 mov     rdi, rbx
//   0xAF668 call    sub_11FFA0
//   0xAF66D mov     rsi, rax
//   0xAF670 mov     rdi, r13
//   0xAF673 mov     r14, rax
//   0xAF676 call    sub_9DA60
//   0xAF67B test    al, al
//   0xAF67D jnz     loc_B0474
//   0xAF683 mov     rdi, r12
//   0xAF686 call    sub_1189E0
//   0xAF68B mov     eax, [rbx+18h]
//   0xAF68E mov     r14d, 4
//   0xAF694 and     ah, 0FDh
//   0xAF697 or      al, 80h
//   0xAF699 mov     [rbx+18h], eax
//   0xAF69C mov     dword ptr [r15], 38h ; '8'
//   0xAF6A3 jmp     loc_AEFE0
//   0xAF6A8 align 10h
//   0xAF6B0 cmp     byte ptr [r15+20h], 1; jumptable 00000000000AEC2D case 59
//   0xAF6B5 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF6BB mov     rdi, [r15+10h]
//   0xAF6BF call    sub_11DE70
//   0xAF6C4 mov     r12, rax
//   0xAF6C7 test    rax, rax
//   0xAF6CA jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF6D0 cmp     dword ptr [rax], 4
//   0xAF6D3 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF6D9 movzx   eax, byte ptr [rax+20h]
//   0xAF6DD cmp     al, 2
//   0xAF6DF jz      short loc_AF6F8
//   0xAF6E1 sub     al, 1
//   0xAF6E3 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF6E9 mov     rax, [r15+18h]
//   0xAF6ED cmp     [r12+18h], rax
//   0xAF6F2 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF6F8 lea     r13, [r15+20h]
//   0xAF6FC lea     rdi, [r12+40h]
//   0xAF701 xor     edx, edx
//   0xAF703 mov     rsi, r13
//   0xAF706 call    sub_120FA0
//   0xAF70B test    al, al
//   0xAF70D jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF713 lea     rsi, [r12+20h]
//   0xAF718 mov     rdi, r13
//   0xAF71B call    sub_1205C0
//   0xAF720 mov     r14d, 9
//   0xAF726 jmp     loc_AEFE0
//   0xAF72B align 10h
//   0xAF730 mov     r12d, [r15+44h]; jumptable 00000000000AEC2D case 54
//   0xAF734 mov     esi, [r13+3Ch]
//   0xAF738 mov     r10, r15
//   0xAF73B xor     r14d, r14d
//   0xAF73E mov     r9d, 1
//   0xAF744 xor     r8d, r8d
//   0xAF747 xor     ecx, ecx
//   0xAF749 mov     rdx, r10
//   0xAF74C mov     rdi, rbx
//   0xAF74F call    sub_11FFA0
//   0xAF754 mov     r10, rax
//   0xAF757 test    rax, rax
//   0xAF75A jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF760 mov     eax, [rax]
//   0xAF762 cmp     eax, 3Bh ; ';'
//   0xAF765 jz      loc_AFD02
//   0xAF76B ja      loc_AFB90
//   0xAF771 cmp     eax, 0Ch
//   0xAF774 jz      loc_AFE40
//   0xAF77A cmp     eax, 0Dh
//   0xAF77D jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF783 cmp     byte ptr [r10+20h], 1
//   0xAF788 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF78E mov     esi, [r13+3Ch]
//   0xAF792 cmp     esi, [r10+28h]
//   0xAF796 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF79C jmp     short loc_AF73E
//   0xAF79E align 20h
//   0xAF7A0 mov     rsi, r15; jumptable 00000000000AEC2D case 42
//   0xAF7A3 mov     rdi, rbx
//   0xAF7A6 call    sub_ADCB0
//   0xAF7AB test    al, al
//   0xAF7AD jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF7B3 mov     r14d, 23h ; '#'
//   0xAF7B9 jmp     loc_AEFE0
//   0xAF7BE align 20h
//   0xAF7C0 mov     r14d, 1Ah
//   0xAF7C6 jmp     loc_AEFE0
//   0xAF7CB align 10h
//   0xAF7D0 lea     rsi, [rbp+var_110]
//   0xAF7D7 lea     rdi, [rbp+var_50]
//   0xAF7DB call    sub_312BB0
//   0xAF7E0 mov     rdi, [rbp+var_50]
//   0xAF7E4 test    al, al
//   0xAF7E6 jnz     loc_AEF0E
//   0xAF7EC test    rdi, rdi
//   0xAF7EF jz      short loc_AF7FE
//   0xAF7F1 mov     qword ptr [rbp+var_48], 0
//   0xAF7F9 call    _qfree
//   0xAF7FE mov     rdi, [rbp+var_60]
//   0xAF802 call    _qfree
//   0xAF807 mov     r12, [r12+10h]
//   0xAF80C test    r12, r12
//   0xAF80F jnz     loc_AED80
//   0xAF815 jmp     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF81A align 20h
//   0xAF820 mov     r14d, 35h ; '5'
//   0xAF826 jmp     loc_AEFE0
//   0xAF82B mov     r14d, 32h ; '2'
//   0xAF831 jmp     loc_AEFE0
//   0xAF836 mov     r14d, 15h
//   0xAF83C jmp     loc_AEFE0
//   0xAF841 mov     [rbp+var_110], r12
//   0xAF848 movups  [rbp+var_108], xmm1
//   0xAF84F jmp     loc_AECBE
//   0xAF854 mov     [rbp+var_E0], r12
//   0xAF85B movups  [rbp+var_D8], xmm1
//   0xAF862 jmp     loc_AED52
//   0xAF867 mov     r14d, 27h ; '''
//   0xAF86D jmp     loc_AEFE0
//   0xAF872 mov     rdi, [r15+8]
//   0xAF876 call    sub_11DDE0
//   0xAF87B test    rax, rax
//   0xAF87E jz      short loc_AF896
//   0xAF880 mov     rdx, rax
//   0xAF883 mov     rsi, r15
//   0xAF886 mov     rdi, rbx
//   0xAF889 call    sub_184DC0
//   0xAF88E test    al, al
//   0xAF890 jnz     loc_B00E5
//   0xAF896 cmp     byte ptr [r15+40h], 8
//   0xAF89B jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF8A1 mov     rax, [r15+48h]
//   0xAF8A5 mov     eax, [rax+11Ch]
//   0xAF8AB cmp     eax, 5
//   0xAF8AE jnz     loc_AF577
//   0xAF8B4 mov     rsi, r15
//   0xAF8B7 mov     rdi, rbx
//   0xAF8BA call    sub_1823D0
//   0xAF8BF test    al, al
//   0xAF8C1 jnz     loc_AF2A3
//   0xAF8C7 cmp     byte ptr [r15+40h], 8
//   0xAF8CC jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAF8D2 mov     rax, [r15+48h]
//   0xAF8D6 mov     eax, [rax+11Ch]
//   0xAF8DC cmp     eax, 5
//   0xAF8DF jz      loc_AF58E
//   0xAF8E5 jmp     loc_AF585
//   0xAF8EA mov     r14d, 1Fh
//   0xAF8F0 jmp     loc_AEFE0
//   0xAF8F5 mov     r14d, 25h ; '%'
//   0xAF8FB jmp     loc_AEFE0
//   0xAF900 mov     r14d, 14h
//   0xAF906 jmp     loc_AEFE0
//   0xAF90B mov     r14d, 13h
//   0xAF911 jmp     loc_AEFE0
//   0xAF916 mov     eax, [r15+28h]
//   0xAF91A cmp     [r13+3Ch], eax
//   0xAF91E jnz     loc_AF333
//   0xAF924 lea     rax, [r15+40h]
//   0xAF928 lea     r14, [r15+20h]
//   0xAF92C xor     edx, edx
//   0xAF92E mov     rsi, rax
//   0xAF931 mov     rdi, r14
//   0xAF934 mov     qword ptr [rbp+var_150], rax
//   0xAF93B call    sub_120FA0
//   0xAF940 test    al, al
//   0xAF942 jz      loc_AF333
//   0xAF948 cmp     byte ptr [r15+30h], 2
//   0xAF94D jnz     loc_AF333
//   0xAF953 lea     rdx, [rbp+var_F0]
//   0xAF95A xor     r8d, r8d
//   0xAF95D mov     rcx, r15
//   0xAF960 mov     rdi, rbx
//   0xAF963 lea     rsi, [rbp+var_120]
//   0xAF96A call    sub_124F80
//   0xAF96F mov     r12, rax
//   0xAF972 test    rax, rax
//   0xAF975 jz      loc_AF333
//   0xAF97B lea     rax, [r15+30h]
//   0xAF97F movsxd  rsi, dword ptr [r12+44h]
//   0xAF984 mov     edx, 1
//   0xAF989 mov     rdi, rax
//   0xAF98C mov     [rbp+var_140], rax
//   0xAF993 call    sub_9D790
//   0xAF998 test    al, al
//   0xAF99A jz      loc_AF333
//   0xAF9A0 mov     eax, [r12]
//   0xAF9A4 cmp     eax, 2
//   0xAF9A7 jz      loc_B052A
//   0xAF9AD cmp     eax, 4
//   0xAF9B0 jnz     loc_AF333
//   0xAF9B6 cmp     byte ptr [r12+20h], 4
//   0xAF9BC jnz     loc_AF333
//   0xAF9C2 mov     rax, [r12+28h]
//   0xAF9C7 cmp     dword ptr [rax], 2
//   0xAF9CA jnz     loc_AF333
//   0xAF9D0 cmp     byte ptr [rax+20h], 1
//   0xAF9D4 jnz     loc_AF333
//   0xAF9DA mov     ecx, [rax+28h]
//   0xAF9DD cmp     [r13+38h], ecx
//   0xAF9E1 jnz     loc_AF333
//   0xAF9E7 cmp     byte ptr [rax+30h], 1
//   0xAF9EB jnz     loc_AF333
//   0xAF9F1 mov     eax, [rax+38h]
//   0xAF9F4 cmp     [r13+3Ch], eax
//   0xAF9F8 jnz     loc_AF333
//   0xAF9FE lea     rdx, [rbp+var_F0]
//   0xAFA05 mov     r8, r15
//   0xAFA08 mov     rcx, r12
//   0xAFA0B mov     rdi, rbx
//   0xAFA0E lea     rsi, [rbp+var_120]
//   0xAFA15 call    sub_AB710
//   0xAFA1A test    al, al
//   0xAFA1C jz      loc_AF333
//   0xAFA22 mov     dword ptr [r15], 3Ch ; '<'
//   0xAFA29 mov     rax, [r15+18h]
//   0xAFA2D lea     rsi, [r12+40h]
//   0xAFA32 mov     rdx, [r12+18h]
//   0xAFA37 mov     rdi, qword ptr [rbp+var_150]
//   0xAFA3E mov     [r15+18h], rdx
//   0xAFA42 mov     [r12+18h], rax
//   0xAFA47 call    sub_117E50
//   0xAFA4C mov     rdi, r14
//   0xAFA4F call    sub_1181E0
//   0xAFA54 mov     rdi, [rbp+var_140]
//   0xAFA5B call    sub_1181E0
//   0xAFA60 mov     rdi, r12
//   0xAFA63 call    sub_1189E0
//   0xAFA68 mov     eax, [rbx+18h]
//   0xAFA6B mov     r14d, 2
//   0xAFA71 and     ah, 0FDh
//   0xAFA74 or      al, 90h
//   0xAFA76 mov     [rbx+18h], eax
//   0xAFA79 jmp     loc_AEFE0
//   0xAFA7E align 20h
//   0xAFA80 mov     eax, [r15+38h]
//   0xAFA84 cmp     [r13+38h], eax
//   0xAFA88 jnz     loc_AF4C4
//   0xAFA8E cmp     byte ptr [r15+40h], 1
//   0xAFA93 jnz     loc_AF4C4
//   0xAFA99 mov     eax, [r15+48h]
//   0xAFA9D cmp     [r13+3Ch], eax
//   0xAFAA1 jnz     loc_AF4C4
//   0xAFAA7 lea     rdx, [rbp+var_F0]
//   0xAFAAE xor     r8d, r8d
//   0xAFAB1 mov     rcx, r15
//   0xAFAB4 mov     rdi, rbx
//   0xAFAB7 lea     rsi, [rbp+var_120]
//   0xAFABE call    sub_124760
//   0xAFAC3 mov     r12, rax
//   0xAFAC6 test    rax, rax
//   0xAFAC9 jz      loc_AF4C4
//   0xAFACF mov     rax, [r15+18h]
//   0xAFAD3 cmp     [r12+18h], rax
//   0xAFAD8 jnz     loc_AF4C4
//   0xAFADE cmp     dword ptr [r12], 0Dh
//   0xAFAE3 jnz     loc_AF4C4
//   0xAFAE9 cmp     byte ptr [r12+20h], 1
//   0xAFAEF jnz     loc_AF4C4
//   0xAFAF5 mov     eax, [r12+28h]
//   0xAFAFA cmp     [r13+3Ch], eax
//   0xAFAFE jnz     loc_AF4C4
//   0xAFB04 lea     rsi, [r12+40h]
//   0xAFB09 lea     rdi, [r12+20h]
//   0xAFB0E xor     edx, edx
//   0xAFB10 call    sub_120FA0
//   0xAFB15 test    al, al
//   0xAFB17 jz      loc_AF4C4
//   0xAFB1D movsxd  rsi, dword ptr [r15+24h]
//   0xAFB21 lea     rdi, [r12+30h]
//   0xAFB26 mov     edx, 1
//   0xAFB2B call    sub_9D790
//   0xAFB30 test    al, al
//   0xAFB32 jz      loc_AF4C4
//   0xAFB38 lea     rdx, [rbp+var_F0]
//   0xAFB3F mov     r8, r15
//   0xAFB42 mov     rcx, r12
//   0xAFB45 mov     rdi, rbx
//   0xAFB48 lea     rsi, [rbp+var_120]
//   0xAFB4F call    sub_AB710
//   0xAFB54 test    al, al
//   0xAFB56 jz      loc_AF4C4
//   0xAFB5C mov     rdi, r12
//   0xAFB5F call    sub_1189E0
//   0xAFB64 mov     dword ptr [r15], 3Bh ; ';'
//   0xAFB6B lea     rdi, [r15+30h]
//   0xAFB6F call    sub_1181E0
//   0xAFB74 lea     rdi, [r15+40h]
//   0xAFB78 call    sub_1181E0
//   0xAFB7D or      dword ptr [rbx+18h], 10h
//   0xAFB81 mov     r14d, 1
//   0xAFB87 jmp     loc_AEFE0
//   0xAFB8C align 10h
//   0xAFB90 cmp     eax, 3Ch ; '<'
//   0xAFB93 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFB99 cmp     byte ptr [r15+40h], 1
//   0xAFB9E jz      loc_B00AC
//   0xAFBA4 cmp     byte ptr [r15+30h], 1
//   0xAFBA9 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFBAF cmp     byte ptr [r10+40h], 1
//   0xAFBB4 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFBBA mov     eax, [r15+38h]
//   0xAFBBE cmp     [r10+48h], eax
//   0xAFBC2 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFBC8 cmp     r12d, [r10+44h]
//   0xAFBCC jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFBD2 mov     esi, [r13+3Ch]
//   0xAFBD6 mov     r9d, 1
//   0xAFBDC xor     r8d, r8d
//   0xAFBDF xor     ecx, ecx
//   0xAFBE1 mov     rdx, r10
//   0xAFBE4 mov     rdi, rbx
//   0xAFBE7 mov     qword ptr [rbp+var_150], r10
//   0xAFBEE call    sub_11FFA0
//   0xAFBF3 mov     rdi, rax
//   0xAFBF6 test    rax, rax
//   0xAFBF9 jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFBFF cmp     byte ptr [r15+40h], 1
//   0xAFC04 mov     r10, qword ptr [rbp+var_150]
//   0xAFC0B jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFC11 cmp     byte ptr [rax+40h], 1
//   0xAFC15 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFC1B mov     eax, [rax+48h]
//   0xAFC1E cmp     [r15+48h], eax
//   0xAFC22 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFC28 cmp     r12d, [rdi+44h]
//   0xAFC2C jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFC32 mov     [rbp+var_138], r10
//   0xAFC39 call    sub_1189E0
//   0xAFC3E mov     eax, [rbx+18h]
//   0xAFC41 mov     r10, [rbp+var_138]
//   0xAFC48 and     ah, 0FDh
//   0xAFC4B or      al, 80h
//   0xAFC4D mov     [rbx+18h], eax
//   0xAFC50 mov     rdi, r10
//   0xAFC53 call    sub_1189E0
//   0xAFC58 mov     eax, [rbx+18h]
//   0xAFC5B mov     rsi, r15
//   0xAFC5E mov     rdi, rbx
//   0xAFC61 and     ah, 0FDh
//   0xAFC64 or      al, 80h
//   0xAFC66 mov     [rbx+18h], eax
//   0xAFC69 call    sub_32AE00
//   0xAFC6E test    r14, r14
//   0xAFC71 jz      short loc_AFC86
//   0xAFC73 mov     rdi, r14
//   0xAFC76 call    sub_1189E0
//   0xAFC7B mov     eax, [rbx+18h]
//   0xAFC7E and     ah, 0FDh
//   0xAFC81 or      al, 80h
//   0xAFC83 mov     [rbx+18h], eax
//   0xAFC86 mov     rdi, r15
//   0xAFC89 call    sub_1B0E40
//   0xAFC8E mov     rcx, rax
//   0xAFC91 mov     edx, 5
//   0xAFC96 mov     rdi, rbx
//   0xAFC99 xor     eax, eax
//   0xAFC9B lea     rsi, aCmbDS; "cmb%d: %s"
//   0xAFCA2 call    sub_9D960
//   0xAFCA7 jmp     loc_AEFFF
//   0xAFCAC align 10h
//   0xAFCB0 cmp     dword ptr [r11], 4
//   0xAFCB4 jnz     loc_AF122
//   0xAFCBA mov     eax, [r15+44h]
//   0xAFCBE cmp     [r11+44h], eax
//   0xAFCC2 jg      loc_B00F0
//   0xAFCC8 cmp     eax, 4
//   0xAFCCB jle     loc_AF138
//   0xAFCD1 jmp     loc_AF155
//   0xAFCD6 mov     r14d, 31h ; '1'
//   0xAFCDC jmp     loc_AEFE0
//   0xAFCE1 mov     r14d, 10h
//   0xAFCE7 jmp     loc_AEFE0
//   0xAFCEC mov     r14d, 19h
//   0xAFCF2 jmp     loc_AEFE0
//   0xAFCF7 mov     r14d, 16h
//   0xAFCFD jmp     loc_AEFE0
//   0xAFD02 mov     eax, [r13+54h]
//   0xAFD06 cmp     [r10+24h], eax
//   0xAFD0A jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFD10 mov     rsi, [r15+18h]
//   0xAFD14 mov     rdi, [rbx+40h]
//   0xAFD18 mov     qword ptr [rbp+var_150], r10
//   0xAFD1F lea     r12, [r10+20h]
//   0xAFD23 call    sub_9DA20
//   0xAFD28 mov     rsi, rax
//   0xAFD2B xor     edx, edx
//   0xAFD2D mov     rdi, r12
//   0xAFD30 call    sub_9D790
//   0xAFD35 test    al, al
//   0xAFD37 mov     r10, qword ptr [rbp+var_150]
//   0xAFD3E jz      def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFD44 mov     esi, [r13+3Ch]
//   0xAFD48 mov     r9d, 1
//   0xAFD4E xor     r8d, r8d
//   0xAFD51 xor     ecx, ecx
//   0xAFD53 mov     rdx, r10
//   0xAFD56 mov     rdi, rbx
//   0xAFD59 mov     [rbp+var_138], r10
//   0xAFD60 call    sub_11FFA0
//   0xAFD65 mov     rsi, rax
//   0xAFD68 mov     rdi, r13
//   0xAFD6B mov     r14, rax
//   0xAFD6E call    sub_9DA60
//   0xAFD73 mov     r10, [rbp+var_138]
//   0xAFD7A test    al, al
//   0xAFD7C jz      short loc_AFDBF
//   0xAFD7E mov     rdi, r14
//   0xAFD81 call    sub_1189E0
//   0xAFD86 mov     eax, [rbx+18h]
//   0xAFD89 mov     rdi, [rbx+40h]
//   0xAFD8D and     ah, 0FDh
//   0xAFD90 or      al, 80h
//   0xAFD92 mov     [rbx+18h], eax
//   0xAFD95 mov     rsi, [r14+18h]
//   0xAFD99 call    sub_1CAD30
//   0xAFD9E mov     rsi, [r15+18h]
//   0xAFDA2 mov     rdi, [rbx+40h]
//   0xAFDA6 mov     r14, rax
//   0xAFDA9 call    sub_1CAD30
//   0xAFDAE cmp     r14, rax
//   0xAFDB1 mov     r10, [rbp+var_138]
//   0xAFDB8 jz      short loc_AFDBF
//   0xAFDBA or      dword ptr [r15+4], 20h
//   0xAFDBF mov     rdi, r10
//   0xAFDC2 call    sub_1189E0
//   0xAFDC7 mov     eax, [rbx+18h]
//   0xAFDCA lea     r12, [r15+30h]
//   0xAFDCE lea     rdi, [r15+20h]
//   0xAFDD2 mov     rsi, r12
//   0xAFDD5 and     ah, 0FDh
//   0xAFDD8 or      al, 80h
//   0xAFDDA mov     [rbx+18h], eax
//   0xAFDDD mov     dword ptr [r15], 39h ; '9'
//   0xAFDE4 call    sub_1205C0
//   0xAFDE9 lea     rax, [r15+40h]
//   0xAFDED mov     rdi, r12
//   0xAFDF0 mov     rsi, rax
//   0xAFDF3 mov     r14, rax
//   0xAFDF6 call    sub_1205C0
//   0xAFDFB mov     rdi, r14
//   0xAFDFE call    sub_1181E0
//   0xAFE03 mov     rdi, r15
//   0xAFE06 call    sub_1B0E40
//   0xAFE0B mov     rcx, rax
//   0xAFE0E mov     edx, 6
//   0xAFE13 mov     rdi, rbx
//   0xAFE16 xor     eax, eax
//   0xAFE18 lea     rsi, aCmbDS; "cmb%d: %s"
//   0xAFE1F call    sub_9D960
//   0xAFE24 mov     edx, 6
//   0xAFE29 mov     rsi, r15
//   0xAFE2C mov     rdi, rbx
//   0xAFE2F call    sub_162C50
//   0xAFE34 jmp     loc_AEFFF
//   0xAFE39 align 20h
//   0xAFE40 cmp     byte ptr [r10+20h], 1
//   0xAFE45 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFE4B mov     eax, [r10+28h]
//   0xAFE4F cmp     [r13+3Ch], eax
//   0xAFE53 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFE59 lea     rsi, [r10+40h]
//   0xAFE5D lea     rdi, [r10+20h]
//   0xAFE61 xor     edx, edx
//   0xAFE63 mov     qword ptr [rbp+var_150], r10
//   0xAFE6A call    sub_120FA0
//   0xAFE6F test    al, al
//   0xAFE71 mov     r10, qword ptr [rbp+var_150]
//   0xAFE78 jz      short loc_AFE85
//   0xAFE7A cmp     byte ptr [r10+30h], 2
//   0xAFE7F jz      loc_B037E
//   0xAFE85 mov     esi, [r13+3Ch]
//   0xAFE89 jmp     loc_AF73E
//   0xAFE8E lea     rsi, [r15+20h]
//   0xAFE92 lea     rdi, [r11+20h]
//   0xAFE96 xor     edx, edx
//   0xAFE98 mov     [rbp+var_158], r11
//   0xAFE9F call    sub_120FA0
//   0xAFEA4 test    al, al
//   0xAFEA6 mov     r11, [rbp+var_158]
//   0xAFEAD jz      loc_AF138
//   0xAFEB3 cmp     byte ptr [r15+20h], 4
//   0xAFEB8 jz      loc_B0355
//   0xAFEBE mov     rdi, [rbp+var_140]
//   0xAFEC5 lea     rdx, [r11+40h]
//   0xAFEC9 mov     rsi, r13
//   0xAFECC mov     [rbp+var_158], r11
//   0xAFED3 call    sub_122860
//   0xAFED8 test    al, al
//   0xAFEDA mov     r11, [rbp+var_158]
//   0xAFEE1 jz      loc_AF138
//   0xAFEE7 mov     eax, [r15+44h]
//   0xAFEEB cmp     [r11+44h], eax
//   0xAFEEF jl      loc_AF138
//   0xAFEF5 lea     r14, [rbp+var_60]
//   0xAFEF9 mov     ecx, 1
//   0xAFEFE mov     rdx, r11
//   0xAFF01 mov     rsi, rbx
//   0xAFF04 mov     rdi, r14
//   0xAFF07 mov     [rbp+var_140], r11
//   0xAFF0E call    sub_11FAC0
//   0xAFF13 mov     r11, [rbp+var_140]
//   0xAFF1A mov     rsi, qword ptr [rbp+var_150]
//   0xAFF21 mov     rcx, r15
//   0xAFF24 mov     rdi, rbx
//   0xAFF27 mov     r8d, 1
//   0xAFF2D mov     rdx, [r11+8]
//   0xAFF31 call    sub_A4EE0
//   0xAFF36 test    rax, rax
//   0xAFF39 mov     r11, [rbp+var_140]
//   0xAFF40 jz      loc_B041F
//   0xAFF46 mov     rdi, r14
//   0xAFF49 mov     [rbp+var_140], r11
//   0xAFF50 call    sub_8EF80
//   0xAFF55 mov     r11, [rbp+var_140]
//   0xAFF5C jmp     loc_AF138
//   0xAFF61 align 8
//   0xAFF68 mov     r14d, 20h ; ' '
//   0xAFF6E jmp     loc_AEFE0
//   0xAFF73 mov     r14d, 2Bh ; '+'
//   0xAFF79 jmp     loc_AEFE0
//   0xAFF7E mov     r14d, 28h ; '('
//   0xAFF84 jmp     loc_AEFE0
//   0xAFF89 mov     r14d, 18h
//   0xAFF8F jmp     loc_AEFE0
//   0xAFF94 mov     r14d, 33h ; '3'
//   0xAFF9A jmp     loc_AEFE0
//   0xAFF9F mov     r14d, 11h
//   0xAFFA5 jmp     loc_AEFE0
//   0xAFFAA mov     dword ptr [r15], 4
//   0xAFFB1 lea     rsi, [r12+20h]
//   0xAFFB6 lea     rdi, [r15+20h]
//   0xAFFBA call    sub_1205C0
//   0xAFFBF cmp     byte ptr [r15+20h], 1
//   0xAFFC4 jz      loc_B01EF
//   0xAFFCA mov     rdi, r12
//   0xAFFCD call    sub_1189E0
//   0xAFFD2 mov     eax, [rbx+18h]
//   0xAFFD5 mov     rdi, r15
//   0xAFFD8 and     ah, 0FDh
//   0xAFFDB or      al, 80h
//   0xAFFDD mov     [rbx+18h], eax
//   0xAFFE0 call    sub_1B0E40
//   0xAFFE5 mov     rcx, rax
//   0xAFFE8 mov     edx, 3
//   0xAFFED mov     rdi, rbx
//   0xAFFF0 xor     eax, eax
//   0xAFFF2 lea     rsi, aCmbDS; "cmb%d: %s"
//   0xAFFF9 call    sub_9D960
//   0xAFFFE mov     edx, 6
//   0xB0003 mov     rsi, r15
//   0xB0006 mov     rdi, rbx
//   0xB0009 call    sub_162C50
//   0xB000E mov     rdi, [rbp+var_50]
//   0xB0012 test    rdi, rdi
//   0xB0015 jz      short loc_B0022
//   0xB0017 xor     eax, eax
//   0xB0019 mov     qword ptr [rbp+var_48], rax
//   0xB001D call    _qfree
//   0xB0022 mov     rdi, [rbp+var_60]
//   0xB0026 call    _qfree
//   0xB002B mov     rdi, [rbp+var_80]
//   0xB002F test    rdi, rdi
//   0xB0032 jz      short loc_B003F
//   0xB0034 xor     eax, eax
//   0xB0036 mov     qword ptr [rbp+var_78], rax
//   0xB003A call    _qfree
//   0xB003F mov     rdi, [rbp+var_90]
//   0xB0046 call    _qfree
//   0xB004B jmp     loc_AEFFF
//   0xB0050 mov     rdi, [rbp+var_80]
//   0xB0054 test    rdi, rdi
//   0xB0057 jz      short loc_B0064
//   0xB0059 xor     eax, eax
//   0xB005B mov     qword ptr [rbp+var_78], rax
//   0xB005F call    _qfree
//   0xB0064 mov     rdi, [rbp+var_90]
//   0xB006B call    _qfree
//   0xB0070 jmp     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0075 mov     r14d, 2Ch ; ','
//   0xB007B mov     rdi, r12
//   0xB007E call    sub_8EF80
//   0xB0083 mov     rdi, qword ptr [rbp+var_150]
//   0xB008A call    sub_8EF80
//   0xB008F jmp     loc_AEFE0
//   0xB0094 mov     r14d, 17h
//   0xB009A jmp     loc_AEFE0
//   0xB009F mov     rdi, r12
//   0xB00A2 call    sub_1181E0
//   0xB00A7 jmp     loc_AEF56
//   0xB00AC cmp     byte ptr [r10+40h], 1
//   0xB00B1 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB00B7 mov     eax, [r10+48h]
//   0xB00BB cmp     [r15+48h], eax
//   0xB00BF jz      loc_B02C0
//   0xB00C5 cmp     byte ptr [r15+30h], 1
//   0xB00CA jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB00D0 jmp     loc_AFBBA
//   0xB00D5 mov     r14d, 1Eh
//   0xB00DB jmp     loc_AEFE0
//   0xB00E0 call    ___stack_chk_fail
//   0xB00E5 mov     r14d, 1Bh
//   0xB00EB jmp     loc_AEFE0
//   0xB00F0 mov     rsi, qword ptr [rbp+var_150]
//   0xB00F7 mov     rdi, r12
//   0xB00FA mov     [rbp+var_158], r11
//   0xB0101 call    sub_9D750
//   0xB0106 test    al, al
//   0xB0108 mov     r11, [rbp+var_158]
//   0xB010F jz      loc_AF122
//   0xB0115 mov     rax, [rbx+1E0h]
//   0xB011C xor     edx, edx
//   0xB011E mov     rdi, r15
//   0xB0121 mov     rsi, [rax+70h]
//   0xB0125 call    sub_11B9E0
//   0xB012A test    al, al
//   0xB012C mov     r11, [rbp+var_158]
//   0xB0133 jnz     loc_AF122
//   0xB0139 mov     rdx, [r11+8]
//   0xB013D mov     r8d, 1
//   0xB0143 mov     rcx, r15
//   0xB0146 mov     rdi, rbx
//   0xB0149 mov     rsi, qword ptr [rbp+var_150]
//   0xB0150 call    sub_A4EE0
//   0xB0155 test    rax, rax
//   0xB0158 mov     r11, [rbp+var_158]
//   0xB015F jnz     loc_AF122
//   0xB0165 mov     rax, [rbx+1E0h]
//   0xB016C mov     r9, r15
//   0xB016F mov     rcx, r11
//   0xB0172 mov     rdx, rbx
//   0xB0175 lea     rsi, [rbp+var_128]
//   0xB017C lea     r8, [r11+40h]
//   0xB0180 mov     rdi, [rax+70h]
//   0xB0184 push    r10
//   0xB0186 push    [rbp+var_140]
//   0xB018C call    sub_12B3B0
//   0xB0191 test    al, al
//   0xB0193 pop     r8
//   0xB0195 mov     r11, [rbp+var_158]
//   0xB019C pop     r9
//   0xB019E jz      loc_AF122
//   0xB01A4 lea     r14, [rbp+var_60]
//   0xB01A8 lea     rsi, [r11+20h]
//   0xB01AC mov     rdi, r14
//   0xB01AF call    sub_11EE80
//   0xB01B4 mov     rax, [rbp+var_128]
//   0xB01BB mov     r11, [rbp+var_158]
//   0xB01C2 test    rax, rax
//   0xB01C5 js      short loc_B01D4
//   0xB01C7 movsxd  rdx, dword ptr [rbp+var_60+4]
//   0xB01CB cmp     rax, rdx
//   0xB01CE jl      loc_B0390
//   0xB01D4 mov     rdi, r14
//   0xB01D7 mov     [rbp+var_158], r11
//   0xB01DE call    sub_1181E0
//   0xB01E3 mov     r11, [rbp+var_158]
//   0xB01EA jmp     loc_AF122
//   0xB01EF mov     eax, [r15+28h]
//   0xB01F3 cmp     [r13+3Ch], eax
//   0xB01F7 jnz     loc_AFFCA
//   0xB01FD mov     rax, [r12+18h]
//   0xB0202 mov     [r15+18h], rax
//   0xB0206 jmp     loc_AFFCA
//   0xB020B lea     rdi, [rax+20h]
//   0xB020F xor     edx, edx
//   0xB0211 xor     esi, esi
//   0xB0213 call    sub_9D790
//   0xB0218 test    al, al
//   0xB021A jz      loc_AF27B
//   0xB0220 mov     eax, [r15+4]
//   0xB0224 mov     rcx, [rbp+var_140]
//   0xB022B sar     eax, 8
//   0xB022E mov     edx, [rcx+44h]
//   0xB0231 and     eax, 7
//   0xB0234 jz      short loc_B0248
//   0xB0236 lea     ecx, [rax-1]
//   0xB0239 mov     eax, 1
//   0xB023E shl     eax, cl
//   0xB0240 cmp     eax, edx
//   0xB0242 jl      loc_AF27B
//   0xB0248 cmp     [r15+44h], edx
//   0xB024C jge     loc_AF27B
//   0xB0252 xor     eax, eax
//   0xB0254 pxor    xmm0, xmm0
//   0xB0258 xor     ecx, ecx
//   0xB025A mov     rsi, r14
//   0xB025D mov     [rbp+var_60], rax
//   0xB0261 mov     rdi, rbx
//   0xB0264 mov     [rbp+var_58], rax
//   0xB0268 mov     [rbp+var_50], rax
//   0xB026C mov     rax, [rbp+var_140]
//   0xB0273 movups  [rbp+var_48], xmm0
//   0xB0277 add     rax, 40h ; '@'
//   0xB027B mov     rdx, rax
//   0xB027E mov     [rbp+var_158], rax
//   0xB0285 call    sub_123420
//   0xB028A mov     rcx, [r15+8]
//   0xB028E mov     r8d, 1
//   0xB0294 mov     rsi, r14
//   0xB0297 mov     rdi, rbx
//   0xB029A mov     rax, [rbp+var_140]
//   0xB02A1 mov     rdx, [rax+8]
//   0xB02A5 call    sub_A51D0
//   0xB02AA test    rax, rax
//   0xB02AD jz      loc_B04B7
//   0xB02B3 mov     rdi, r14
//   0xB02B6 call    sub_8EF80
//   0xB02BB jmp     loc_AF27B
//   0xB02C0 cmp     r12d, [r10+44h]
//   0xB02C4 jnz     loc_B00C5
//   0xB02CA mov     rsi, [r15+18h]
//   0xB02CE mov     rdi, [rbx+40h]
//   0xB02D2 lea     rax, [r15+30h]
//   0xB02D6 mov     qword ptr [rbp+var_150], r10
//   0xB02DD mov     [rbp+var_140], rax
//   0xB02E4 call    sub_32B3E0
//   0xB02E9 mov     rdi, rax
//   0xB02EC call    _getseg
//   0xB02F1 mov     rsi, [rax+30h]
//   0xB02F5 xor     edx, edx
//   0xB02F7 lea     rdi, [r15+30h]
//   0xB02FB call    sub_9D790
//   0xB0300 test    al, al
//   0xB0302 mov     r10, qword ptr [rbp+var_150]
//   0xB0309 jnz     short loc_B0324
//   0xB030B cmp     byte ptr [r15+30h], 1
//   0xB0310 jnz     def_AEC2D; jumptable 00000000000AEC2D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0316 mov     eax, [r15+38h]
//   0xB031A cmp     [r13+40h], eax
//   0xB031E jnz     loc_AFBAF
//   0xB0324 mov     rdx, [r15+10h]
//   0xB0328 mov     esi, [r15+48h]
//   0xB032C xor     r8d, r8d
//   0xB032F xor     ecx, ecx
//   0xB0331 mov     rdi, rbx
//   0xB0334 mov     qword ptr [rbp+var_150], r10
//   0xB033B call    sub_124450
//   0xB0340 mov     r10, qword ptr [rbp+var_150]
//   0xB0347 cmp     r10, rax
//   0xB034A jnz     loc_AFBA4
//   0xB0350 jmp     loc_AFC50
//   0xB0355 mov     rdi, [r15+28h]
//   0xB0359 xor     edx, edx
//   0xB035B mov     rsi, r13
//   0xB035E mov     [rbp+var_158], r11
//   0xB0365 call    sub_11B9E0
//   0xB036A test    al, al
//   0xB036C mov     r11, [rbp+var_158]
//   0xB0373 jnz     loc_AF138
//   0xB0379 jmp     loc_AFEBE
//   0xB037E cmp     [r10+24h], r12d
//   0xB0382 jnz     loc_AFE85
//   0xB0388 mov     r14, r10
//   0xB038B jmp     loc_AFE85
//   0xB0390 mov     rdx, [rbx+1E0h]
//   0xB0397 mov     rdi, r14
//   0xB039A mov     [rbp+var_158], r11
//   0xB03A1 mov     rsi, [rdx+70h]
//   0xB03A5 mov     edx, eax
//   0xB03A7 call    sub_122350
//   0xB03AC test    al, al
//   0xB03AE mov     r11, [rbp+var_158]
//   0xB03B5 jz      loc_B01D4
//   0xB03BB lea     rsi, [r15+20h]
//   0xB03BF xor     edx, edx
//   0xB03C1 mov     rdi, r14
//   0xB03C4 call    sub_120FA0
//   0xB03C9 test    al, al
//   0xB03CB mov     r11, [rbp+var_158]
//   0xB03D2 jz      loc_B01D4
//   0xB03D8 mov     rdx, [r11+8]
//   0xB03DC mov     rcx, r15
//   0xB03DF mov     rsi, r14
//   0xB03E2 mov     rdi, rbx
//   0xB03E5 call    sub_A50F0
//   0xB03EA test    al, al
//   0xB03EC mov     r11, [rbp+var_158]
//   0xB03F3 jnz     loc_B01D4
//   0xB03F9 mov     rdi, r15
//   0xB03FC call    sub_1189E0
//   0xB0401 mov     eax, [rbx+18h]
//   0xB0404 mov     rdi, r14
//   0xB0407 mov     r14d, 6
//   0xB040D and     ah, 0FDh
//   0xB0410 or      al, 80h
//   0xB0412 mov     [rbx+18h], eax
//   0xB0415 call    sub_1181E0
//   0xB041A jmp     loc_B007B
//   0xB041F mov     rdx, [r11+8]
//   0xB0423 mov     r8d, 1
//   0xB0429 mov     rcx, r15
//   0xB042C mov     rsi, r14
//   0xB042F mov     rdi, rbx
//   0xB0432 mov     [rbp+var_140], r11
//   0xB0439 call    sub_A4EE0
//   0xB043E test    rax, rax
//   0xB0441 mov     r11, [rbp+var_140]
//   0xB0448 jnz     loc_AFF46
//   0xB044E mov     rdi, r15
//   0xB0451 call    sub_1189E0
//   0xB0456 mov     eax, [rbx+18h]
//   0xB0459 mov     rdi, r14
//   0xB045C mov     r14d, 8
//   0xB0462 and     ah, 0FDh
//   0xB0465 or      al, 80h
//   0xB0467 mov     [rbx+18h], eax
//   0xB046A call    sub_8EF80
//   0xB046F jmp     loc_B007B
//   0xB0474 mov     rdi, r14
//   0xB0477 call    sub_1189E0
//   0xB047C mov     eax, [rbx+18h]
//   0xB047F mov     rdi, [rbx+40h]
//   0xB0483 and     ah, 0FDh
//   0xB0486 or      al, 80h
//   0xB0488 mov     [rbx+18h], eax
//   0xB048B mov     rsi, [r14+18h]
//   0xB048F call    sub_1CAD30
//   0xB0494 mov     rsi, [r15+18h]
//   0xB0498 mov     rdi, [rbx+40h]
//   0xB049C mov     r14, rax
//   0xB049F call    sub_1CAD30
//   0xB04A4 cmp     r14, rax
//   0xB04A7 jz      loc_AF683
//   0xB04AD or      dword ptr [r15+4], 20h
//   0xB04B2 jmp     loc_AF683
//   0xB04B7 mov     rdx, [rbp+var_158]
//   0xB04BE mov     rdi, qword ptr [rbp+var_150]
//   0xB04C5 mov     rsi, r13
//   0xB04C8 call    sub_122860
//   0xB04CD test    al, al
//   0xB04CF jz      loc_B02B3
//   0xB04D5 mov     rsi, [rbp+var_158]
//   0xB04DC mov     rdi, qword ptr [rbp+var_150]
//   0xB04E3 call    sub_1205C0
//   0xB04E8 mov     rax, [rbp+var_140]
//   0xB04EF mov     dword ptr [r15], 9
//   0xB04F6 test    byte ptr [rax+4], 80h
//   0xB04FA jnz     short loc_B050F
//   0xB04FC mov     rdi, rax
//   0xB04FF call    sub_1189E0
//   0xB0504 mov     eax, [rbx+18h]
//   0xB0507 and     ah, 0FDh
//   0xB050A or      al, 80h
//   0xB050C mov     [rbx+18h], eax
//   0xB050F mov     rdi, r14
//   0xB0512 mov     r14d, 7
//   0xB0518 call    sub_8EF80
//   0xB051D mov     rdi, r12
//   0xB0520 call    sub_1181E0
//   0xB0525 jmp     loc_AEFE0
//   0xB052A cmp     byte ptr [r12+20h], 1
//   0xB0530 jnz     loc_AF333
//   0xB0536 mov     eax, [r12+28h]
//   0xB053B cmp     [r13+38h], eax
//   0xB053F jnz     loc_AF333
//   0xB0545 cmp     byte ptr [r12+30h], 1
//   0xB054B jnz     loc_AF333
//   0xB0551 mov     eax, [r12+38h]
//   0xB0556 cmp     [r13+3Ch], eax
//   0xB055A jnz     loc_AF333
//   0xB0560 jmp     loc_AF9FE
//   0xB0565 mov     rbx, rax
//   0xB0568 jmp     loc_304DA
//   0xB056D mov     rbx, rax
//   0xB0570 jmp     loc_30511
//   0xB0575 mov     rbx, rax
//   0xB0578 jmp     loc_30520
//   0xB057D mov     rbx, rax
//   0xB0580 jmp     loc_3052A
//   0xB0585 mov     rbx, rax
//   0xB0588 jmp     loc_30538
//   0xB058D mov     rbx, rax
//   0xB0590 jmp     loc_3054A
//   0xB0595 mov     rbx, rax
//   0xB0598 jmp     loc_30573
//   0xB059D mov     rbx, rax
//   0xB05A0 jmp     loc_30552
//   0xB05A5 mov     rbx, rax
//   0xB05A8 jmp     loc_30584
//   0xB05AD mov     rbx, rax
//   0xB05B0 jmp     loc_30540
//   0xB05B5 mov     rbx, rax
//   0xB05B8 jmp     loc_3056B
//   0xB05BD mov     rbx, rax
//   0xB05C0 jmp     loc_304E2
// ============================================================

void sub_AEB10(/* signature unknown */)
{
    // see disassembly above
}

