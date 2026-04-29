// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xAFC90
// Name:           sub_AFC90
// Function size:  6837 bytes (1539 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xAFC90 push    rbp
//   0xAFC91 mov     rbp, rsp
//   0xAFC94 push    r15
//   0xAFC96 push    r14
//   0xAFC98 push    r13
//   0xAFC9A push    r12
//   0xAFC9C push    rbx
//   0xAFC9D sub     rsp, 138h
//   0xAFCA4 mov     rax, fs:28h
//   0xAFCAD mov     [rbp+var_38], rax
//   0xAFCB1 xor     eax, eax
//   0xAFCB3 test    rsi, rsi
//   0xAFCB6 jz      short loc_AFCC4
//   0xAFCB8 mov     r15, rsi
//   0xAFCBB test    dword ptr [rsi+4], 40010h
//   0xAFCC2 jz      short loc_AFCF8
//   0xAFCC4 mov     byte ptr [rbp+var_138], 0
//   0xAFCCB mov     rax, [rbp+var_38]
//   0xAFCCF sub     rax, fs:28h
//   0xAFCD8 jnz     loc_B1260
//   0xAFCDE movzx   eax, byte ptr [rbp+var_138]
//   0xAFCE5 lea     rsp, [rbp-28h]
//   0xAFCE9 pop     rbx
//   0xAFCEA pop     r12
//   0xAFCEC pop     r13
//   0xAFCEE pop     r14
//   0xAFCF0 pop     r15
//   0xAFCF2 pop     rbp
//   0xAFCF3 retn
//   0xAFCF4 align 8
//   0xAFCF8 test    byte ptr [rsi+41h], 2
//   0xAFCFC jnz     short loc_AFCC4
//   0xAFCFE mov     rbx, rdi
//   0xAFD01 mov     rdi, [rdi+40h]
//   0xAFD05 call    sub_9EC10
//   0xAFD0A mov     byte ptr [rbp+var_138], al
//   0xAFD10 test    al, al
//   0xAFD12 jnz     short loc_AFCC4
//   0xAFD14 mov     rdi, [rbx+1E0h]
//   0xAFD1B mov     rcx, r15
//   0xAFD1E mov     rdx, rbx
//   0xAFD21 mov     esi, 0Ch
//   0xAFD26 call    sub_339EC0
//   0xAFD2B test    eax, eax
//   0xAFD2D jnz     loc_B0130
//   0xAFD33 mov     rax, [rbx+1E0h]
//   0xAFD3A pxor    xmm0, xmm0
//   0xAFD3E cmp     dword ptr [r15], 3Ch; switch 61 cases
//   0xAFD42 mov     [rbp+var_120], 0
//   0xAFD4D mov     [rbp+var_118], 0
//   0xAFD58 mov     [rbp+var_110], 0
//   0xAFD63 mov     r13, [rax+70h]
//   0xAFD67 mov     [rbp+var_F0], 0
//   0xAFD72 mov     [rbp+var_E8], 0
//   0xAFD7D mov     [rbp+var_E0], 0
//   0xAFD88 movups  [rbp+var_108], xmm0
//   0xAFD8F movups  [rbp+var_D8], xmm0
//   0xAFD96 ja      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFD9C mov     eax, [r15]
//   0xAFD9F lea     rdx, jpt_AFDAD
//   0xAFDA6 movsxd  rax, ds:(jpt_AFDAD - 41227Ch)[rdx+rax*4]
//   0xAFDAA add     rax, rdx
//   0xAFDAD jmp     rax; switch jump
//   0xAFDAF lea     r14, [rbp+var_60]; jumptable 00000000000AFDAD case 60
//   0xAFDB3 xor     ecx, ecx
//   0xAFDB5 mov     rdx, r15
//   0xAFDB8 mov     rsi, rbx
//   0xAFDBB mov     rdi, r14
//   0xAFDBE call    sub_120C40
//   0xAFDC3 lea     rdi, [rbp+var_120]
//   0xAFDCA mov     rsi, r14
//   0xAFDCD call    sub_60E90
//   0xAFDD2 mov     rdi, [rbp+var_110]
//   0xAFDD9 pxor    xmm0, xmm0
//   0xAFDDD mov     r12, [rbp+var_50]
//   0xAFDE1 mov     [rbp+var_50], 0
//   0xAFDE9 movdqu  xmm1, [rbp+var_48]
//   0xAFDEE movups  [rbp+var_48], xmm0
//   0xAFDF2 test    rdi, rdi
//   0xAFDF5 jz      loc_B09C1
//   0xAFDFB movaps  [rbp+var_150], xmm1
//   0xAFE02 mov     qword ptr [rbp+var_108], 0
//   0xAFE0D call    _qfree
//   0xAFE12 mov     rdi, [rbp+var_50]
//   0xAFE16 movdqa  xmm1, [rbp+var_150]
//   0xAFE1E mov     [rbp+var_110], r12
//   0xAFE25 movups  [rbp+var_108], xmm1
//   0xAFE2C test    rdi, rdi
//   0xAFE2F jz      short loc_AFE3E
//   0xAFE31 mov     qword ptr [rbp+var_48], 0
//   0xAFE39 call    _qfree
//   0xAFE3E mov     rdi, [rbp+var_60]
//   0xAFE42 call    _qfree
//   0xAFE47 xor     ecx, ecx
//   0xAFE49 mov     rdx, r15
//   0xAFE4C mov     rsi, rbx
//   0xAFE4F mov     rdi, r14
//   0xAFE52 call    sub_123FE0
//   0xAFE57 lea     rdi, [rbp+var_F0]
//   0xAFE5E mov     rsi, r14
//   0xAFE61 call    sub_60E90
//   0xAFE66 mov     rdi, [rbp+var_E0]
//   0xAFE6D pxor    xmm0, xmm0
//   0xAFE71 mov     r12, [rbp+var_50]
//   0xAFE75 mov     [rbp+var_50], 0
//   0xAFE7D movdqu  xmm1, [rbp+var_48]
//   0xAFE82 movups  [rbp+var_48], xmm0
//   0xAFE86 test    rdi, rdi
//   0xAFE89 jz      loc_B09D4
//   0xAFE8F movaps  [rbp+var_150], xmm1
//   0xAFE96 mov     qword ptr [rbp+var_D8], 0
//   0xAFEA1 call    _qfree
//   0xAFEA6 mov     rdi, [rbp+var_50]
//   0xAFEAA movdqa  xmm1, [rbp+var_150]
//   0xAFEB2 mov     [rbp+var_E0], r12
//   0xAFEB9 movups  [rbp+var_D8], xmm1
//   0xAFEC0 test    rdi, rdi
//   0xAFEC3 jz      short loc_AFED2
//   0xAFEC5 mov     qword ptr [rbp+var_48], 0
//   0xAFECD call    _qfree
//   0xAFED2 mov     rdi, [rbp+var_60]
//   0xAFED6 call    _qfree
//   0xAFEDB mov     r12, [r15+10h]
//   0xAFEDF test    r12, r12
//   0xAFEE2 jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFEE8 lea     rax, [rbp+var_90]
//   0xAFEEF mov     qword ptr [rbp+var_150], rax
//   0xAFEF6 nop     word ptr [rax+rax+00000000h]
//   0xAFF00 mov     eax, [r12]
//   0xAFF04 lea     edx, [rax-38h]
//   0xAFF07 cmp     edx, 1
//   0xAFF0A jbe     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFF10 cmp     eax, 3Bh ; ';'
//   0xAFF13 jnz     loc_B0063
//   0xAFF19 mov     eax, [r15+44h]
//   0xAFF1D cmp     [r12+24h], eax
//   0xAFF22 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFF28 mov     rsi, [r12+18h]
//   0xAFF2D mov     rdi, [rbx+40h]
//   0xAFF31 call    sub_1CC170
//   0xAFF36 mov     rsi, [r15+18h]
//   0xAFF3A mov     rdi, [rbx+40h]
//   0xAFF3E mov     [rbp+var_140], rax
//   0xAFF45 call    sub_1CC170
//   0xAFF4A mov     rcx, rax
//   0xAFF4D movsxd  rdx, dword ptr [r15+44h]
//   0xAFF51 mov     rax, [rbp+var_140]
//   0xAFF58 mov     [rbp+var_140], rcx
//   0xAFF5F sub     rax, rdx
//   0xAFF62 cmp     rax, rcx
//   0xAFF65 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xAFF6B mov     edx, [r13+54h]
//   0xAFF6F mov     esi, [r13+3Ch]
//   0xAFF73 mov     [rbp+var_90], 0
//   0xAFF7E mov     rdi, qword ptr [rbp+var_150]
//   0xAFF85 mov     [rbp+var_88], 0
//   0xAFF90 call    sub_60440
//   0xAFF95 mov     rax, [rbx+40h]
//   0xAFF99 pxor    xmm0, xmm0
//   0xAFF9D mov     [rbp+var_80], 0
//   0xAFFA5 movups  [rbp+var_78], xmm0
//   0xAFFA9 mov     rcx, [rbp+var_140]
//   0xAFFB0 movsxd  rdx, dword ptr [r13+50h]
//   0xAFFB4 add     rcx, [rax+5A0h]
//   0xAFFBB mov     rdi, qword ptr [rbp+var_150]
//   0xAFFC2 mov     rsi, rcx
//   0xAFFC5 call    sub_11F0E0
//   0xAFFCA mov     rdx, [r12+8]
//   0xAFFCF xor     r8d, r8d
//   0xAFFD2 mov     rcx, r15
//   0xAFFD5 mov     rdi, rbx
//   0xAFFD8 mov     rsi, qword ptr [rbp+var_150]
//   0xAFFDF call    sub_A6350
//   0xAFFE4 test    rax, rax
//   0xAFFE7 jnz     loc_B11D0
//   0xAFFED mov     ecx, 1
//   0xAFFF2 mov     rdx, r12
//   0xAFFF5 mov     rsi, rbx
//   0xAFFF8 mov     rdi, r14
//   0xAFFFB call    sub_120C40
//   0xB0000 mov     rdx, [r12+8]
//   0xB0005 mov     rcx, r15
//   0xB0008 mov     rsi, r14
//   0xB000B mov     rdi, rbx
//   0xB000E mov     r8d, 1
//   0xB0014 call    sub_A6060
//   0xB0019 test    rax, rax
//   0xB001C jz      loc_B112A
//   0xB0022 mov     rdi, [rbp+var_50]
//   0xB0026 test    rdi, rdi
//   0xB0029 jz      short loc_B0038
//   0xB002B mov     qword ptr [rbp+var_48], 0
//   0xB0033 call    _qfree
//   0xB0038 mov     rdi, [rbp+var_60]
//   0xB003C call    _qfree
//   0xB0041 mov     rdi, [rbp+var_80]
//   0xB0045 test    rdi, rdi
//   0xB0048 jz      short loc_B0057
//   0xB004A mov     qword ptr [rbp+var_78], 0
//   0xB0052 call    _qfree
//   0xB0057 mov     rdi, [rbp+var_90]
//   0xB005E call    _qfree
//   0xB0063 xor     ecx, ecx
//   0xB0065 mov     rdx, r12
//   0xB0068 mov     rsi, rbx
//   0xB006B mov     rdi, r14
//   0xB006E call    sub_123FE0
//   0xB0073 lea     rsi, [rbp+var_120]
//   0xB007A mov     rdi, r14
//   0xB007D call    sub_60D40
//   0xB0082 test    al, al
//   0xB0084 jz      loc_B0950
//   0xB008A mov     rdi, [rbp+var_50]
//   0xB008E test    rdi, rdi
//   0xB0091 jz      short loc_B00A0
//   0xB0093 mov     qword ptr [rbp+var_48], 0
//   0xB009B call    _qfree
//   0xB00A0 mov     rdi, [rbp+var_60]
//   0xB00A4 call    _qfree
//   0xB00A9 nop     dword ptr [rax+00000000h]
//   0xB00B0 mov     rsi, r15; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB00B3 mov     rdi, rbx
//   0xB00B6 call    sub_A87C0
//   0xB00BB test    al, al
//   0xB00BD jnz     loc_B0940
//   0xB00C3 mov     rsi, r15
//   0xB00C6 mov     rdi, rbx
//   0xB00C9 call    sub_186FF0
//   0xB00CE test    al, al
//   0xB00D0 jnz     loc_B09A0
//   0xB00D6 mov     rdi, [rbp+var_E0]
//   0xB00DD test    rdi, rdi
//   0xB00E0 jz      short loc_B00F2
//   0xB00E2 mov     qword ptr [rbp+var_D8], 0
//   0xB00ED call    _qfree
//   0xB00F2 mov     rdi, [rbp+var_F0]
//   0xB00F9 call    _qfree
//   0xB00FE mov     rdi, [rbp+var_110]
//   0xB0105 test    rdi, rdi
//   0xB0108 jz      short loc_B011A
//   0xB010A mov     qword ptr [rbp+var_108], 0
//   0xB0115 call    _qfree
//   0xB011A mov     rdi, [rbp+var_120]
//   0xB0121 call    _qfree
//   0xB0126 jmp     loc_AFCCB
//   0xB012B align 10h
//   0xB0130 cmp     eax, 0FFFFFFFFh
//   0xB0133 setnz   byte ptr [rbp+var_138]
//   0xB013A jmp     loc_AFCCB
//   0xB013F align 20h
//   0xB0140 mov     rsi, r15; jumptable 00000000000AFDAD cases 29,30,34,35,39,40,45,46,50,51
//   0xB0143 mov     rdi, rbx
//   0xB0146 call    sub_94840
//   0xB014B test    al, al
//   0xB014D jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0153 mov     r14d, 2Fh ; '/'
//   0xB0159 nop     dword ptr [rax+00000000h]
//   0xB0160 mov     rdi, r15
//   0xB0163 call    sub_1B2100
//   0xB0168 mov     rcx, rax
//   0xB016B mov     edx, r14d
//   0xB016E lea     rsi, aCmbDS; "cmb%d: %s"
//   0xB0175 mov     rdi, rbx
//   0xB0178 xor     eax, eax
//   0xB017A call    sub_9EAE0
//   0xB017F mov     byte ptr [rbp+var_138], 1
//   0xB0186 jmp     loc_B00D6
//   0xB018B align 10h
//   0xB0190 mov     rsi, r15; jumptable 00000000000AFDAD case 19
//   0xB0193 mov     rdi, rbx
//   0xB0196 call    sub_97AC0
//   0xB019B test    al, al
//   0xB019D jnz     loc_B09B6
//   0xB01A3 mov     rsi, r15
//   0xB01A6 mov     rdi, rbx
//   0xB01A9 call    sub_92EB0
//   0xB01AE test    al, al
//   0xB01B0 jnz     loc_B09E7
//   0xB01B6 mov     rsi, r15
//   0xB01B9 mov     rdi, rbx
//   0xB01BC call    sub_94B00
//   0xB01C1 test    al, al
//   0xB01C3 jnz     loc_B0E56
//   0xB01C9 mov     rsi, r15
//   0xB01CC mov     rdi, rbx
//   0xB01CF call    sub_93D30
//   0xB01D4 test    al, al
//   0xB01D6 jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB01DC mov     r14d, 39h ; '9'
//   0xB01E2 jmp     loc_B0160
//   0xB01E7 pxor    xmm0, xmm0; jumptable 00000000000AFDAD case 4
//   0xB01EB lea     rdx, [r15+40h]
//   0xB01EF mov     ecx, 1
//   0xB01F4 mov     rdi, rbx
//   0xB01F7 lea     r14, [rbp+var_C0]
//   0xB01FE movups  [rbp+var_78], xmm0
//   0xB0202 lea     r12, [rbp+var_90]
//   0xB0209 mov     rsi, r14
//   0xB020C mov     [rbp+var_C0], 0
//   0xB0217 mov     [rbp+var_B8], 0
//   0xB0222 mov     [rbp+var_B0], 0
//   0xB022D mov     [rbp+var_90], 0
//   0xB0238 mov     [rbp+var_88], 0
//   0xB0243 mov     [rbp+var_80], 0
//   0xB024B mov     [rbp+var_140], rdx
//   0xB0252 mov     qword ptr [rbp+var_150], r14
//   0xB0259 movups  [rbp+var_A8], xmm0
//   0xB0260 call    sub_1245A0
//   0xB0265 sub     rsp, 8
//   0xB0269 mov     rdx, [r15+10h]
//   0xB026D mov     r9d, 80h
//   0xB0273 xor     ecx, ecx
//   0xB0275 push    101h
//   0xB027A mov     r8, r12
//   0xB027D mov     rsi, r14
//   0xB0280 mov     rdi, rbx
//   0xB0283 call    sub_125710
//   0xB0288 mov     r11, rax
//   0xB028B pop     r14
//   0xB028D pop     rax
//   0xB028E test    r11, r11
//   0xB0291 jz      short loc_B02D5
//   0xB0293 movzx   eax, byte ptr [r15+40h]
//   0xB0298 cmp     [r11+40h], al
//   0xB029C jz      loc_B0E30
//   0xB02A2 cmp     dword ptr [r15+44h], 4
//   0xB02A7 jg      short loc_B02D5
//   0xB02A9 mov     eax, [r11]
//   0xB02AC sub     eax, 8
//   0xB02AF cmp     eax, 1
//   0xB02B2 jbe     loc_B100E
//   0xB02B8 mov     rcx, qword ptr [rbp+var_150]
//   0xB02BF mov     rdx, r15
//   0xB02C2 mov     rsi, r11
//   0xB02C5 mov     rdi, rbx
//   0xB02C8 call    sub_AAA10
//   0xB02CD test    al, al
//   0xB02CF jnz     loc_B11F5
//   0xB02D5 mov     rdi, [rbp+var_80]
//   0xB02D9 test    rdi, rdi
//   0xB02DC jz      short loc_B02EB
//   0xB02DE mov     qword ptr [rbp+var_78], 0
//   0xB02E6 call    _qfree
//   0xB02EB mov     rdi, [rbp+var_90]
//   0xB02F2 call    _qfree
//   0xB02F7 mov     rdi, [rbp+var_B0]
//   0xB02FE test    rdi, rdi
//   0xB0301 jz      short loc_B0313
//   0xB0303 mov     qword ptr [rbp+var_A8], 0
//   0xB030E call    _qfree
//   0xB0313 mov     rdi, [rbp+var_C0]
//   0xB031A call    _qfree
//   0xB031F mov     rsi, r15
//   0xB0322 mov     rdi, rbx
//   0xB0325 call    sub_183550
//   0xB032A test    al, al
//   0xB032C jnz     loc_B0423
//   0xB0332 cmp     dword ptr [r15+44h], 2; jumptable 00000000000AFDAD case 9
//   0xB0337 jg      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB033D lea     r14, [rbp+var_60]
//   0xB0341 lea     rdi, [r15+20h]
//   0xB0345 xor     edx, edx
//   0xB0347 mov     rsi, r14
//   0xB034A call    sub_11C340
//   0xB034F test    al, al
//   0xB0351 jz      short loc_B035E
//   0xB0353 cmp     [rbp+var_60], 0
//   0xB0358 jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB035E lea     rax, [r15+40h]
//   0xB0362 lea     r12, [rbp+var_90]
//   0xB0369 mov     rsi, rax
//   0xB036C mov     rdi, r12
//   0xB036F mov     qword ptr [rbp+var_150], rax
//   0xB0376 call    sub_120000
//   0xB037B sub     rsp, 8
//   0xB037F xor     r9d, r9d
//   0xB0382 mov     rcx, r12
//   0xB0385 mov     rdx, r15
//   0xB0388 push    0
//   0xB038A mov     eax, dword ptr [rbp+var_90+4]
//   0xB0390 mov     rsi, rbx
//   0xB0393 mov     rdi, r13
//   0xB0396 lea     r8d, [rax+rax]
//   0xB039A call    sub_12DCF0
//   0xB039F pop     rsi
//   0xB03A0 pop     rdi
//   0xB03A1 test    al, al
//   0xB03A3 jz      loc_B121F
//   0xB03A9 lea     rsi, [rbp+var_F0]
//   0xB03B0 mov     ecx, 1
//   0xB03B5 mov     rdx, r12
//   0xB03B8 mov     rdi, rbx
//   0xB03BB call    sub_1245A0
//   0xB03C0 sub     rsp, 8
//   0xB03C4 mov     rdx, [r15+10h]
//   0xB03C8 xor     r9d, r9d
//   0xB03CB xor     r8d, r8d
//   0xB03CE push    101h
//   0xB03D3 lea     rsi, [rbp+var_F0]
//   0xB03DA xor     ecx, ecx
//   0xB03DC mov     rdi, rbx
//   0xB03DF call    sub_125710
//   0xB03E4 mov     [rbp+var_140], rax
//   0xB03EB pop     rdx
//   0xB03EC pop     rcx
//   0xB03ED test    rax, rax
//   0xB03F0 jz      short loc_B03FB
//   0xB03F2 cmp     dword ptr [rax], 4
//   0xB03F5 jz      loc_B138B
//   0xB03FB mov     rdi, r12
//   0xB03FE call    sub_119360
//   0xB0403 jmp     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0408 align 10h
//   0xB0410 mov     rsi, r15; jumptable 00000000000AFDAD case 2
//   0xB0413 mov     rdi, rbx
//   0xB0416 call    sub_183550
//   0xB041B test    al, al
//   0xB041D jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0423 mov     r14d, 21h ; '!'
//   0xB0429 jmp     loc_B0160
//   0xB042E mov     rsi, r15; jumptable 00000000000AFDAD case 14
//   0xB0431 mov     rdi, rbx
//   0xB0434 call    sub_93A40
//   0xB0439 test    al, al
//   0xB043B jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0441 mov     r14d, 2Ah ; '*'
//   0xB0447 jmp     loc_B0160
//   0xB044C mov     rsi, r15; jumptable 00000000000AFDAD case 13
//   0xB044F mov     rdi, rbx
//   0xB0452 call    sub_98FA0
//   0xB0457 test    al, al
//   0xB0459 jnz     loc_B09AB
//   0xB045F mov     rsi, r15
//   0xB0462 mov     rdi, rbx
//   0xB0465 call    sub_96200
//   0xB046A test    al, al
//   0xB046C jnz     loc_B062E
//   0xB0472 mov     rsi, r15
//   0xB0475 mov     rdi, rbx
//   0xB0478 call    sub_9B330
//   0xB047D test    al, al
//   0xB047F jnz     loc_B1109
//   0xB0485 mov     rsi, r15
//   0xB0488 mov     rdi, rbx
//   0xB048B call    sub_93820
//   0xB0490 test    al, al
//   0xB0492 jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0498 mov     r14d, 38h ; '8'
//   0xB049E jmp     loc_B0160
//   0xB04A3 align 8
//   0xB04A8 cmp     byte ptr [r15+20h], 1; jumptable 00000000000AFDAD case 12
//   0xB04AD jz      loc_B0A96
//   0xB04B3 mov     rsi, r15
//   0xB04B6 mov     rdi, rbx
//   0xB04B9 call    sub_98FA0
//   0xB04BE test    al, al
//   0xB04C0 jnz     loc_B09AB
//   0xB04C6 mov     rsi, r15
//   0xB04C9 mov     rdi, rbx
//   0xB04CC call    sub_9A490
//   0xB04D1 test    al, al
//   0xB04D3 jnz     loc_B0E61
//   0xB04D9 mov     rsi, r15
//   0xB04DC mov     rdi, rbx
//   0xB04DF call    sub_959D0
//   0xB04E4 test    al, al
//   0xB04E6 jnz     loc_B10FE
//   0xB04EC mov     rsi, r15
//   0xB04EF mov     rdi, rbx
//   0xB04F2 call    sub_9B930
//   0xB04F7 test    al, al
//   0xB04F9 jnz     loc_B111F
//   0xB04FF mov     rsi, r15
//   0xB0502 mov     rdi, rbx
//   0xB0505 call    sub_990E0
//   0xB050A test    al, al
//   0xB050C jnz     loc_B1214
//   0xB0512 mov     rsi, r15
//   0xB0515 mov     rdi, rbx
//   0xB0518 call    sub_92740
//   0xB051D test    al, al
//   0xB051F jnz     loc_B1255
//   0xB0525 mov     rsi, r15
//   0xB0528 mov     rdi, rbx
//   0xB052B call    sub_92B10
//   0xB0530 test    al, al
//   0xB0532 jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0538 mov     r14d, 2Dh ; '-'
//   0xB053E jmp     loc_B0160
//   0xB0543 align 8
//   0xB0548 mov     rsi, r15; jumptable 00000000000AFDAD case 24
//   0xB054B mov     rdi, rbx
//   0xB054E call    sub_9AFC0
//   0xB0553 test    al, al
//   0xB0555 jnz     loc_B0A6A
//   0xB055B mov     rsi, r15
//   0xB055E mov     rdi, rbx
//   0xB0561 call    sub_94CA0
//   0xB0566 test    al, al
//   0xB0568 jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB056E mov     r14d, 34h ; '4'
//   0xB0574 jmp     loc_B0160
//   0xB0579 mov     rsi, r15; jumptable 00000000000AFDAD case 23
//   0xB057C mov     rdi, rbx
//   0xB057F call    sub_931C0
//   0xB0584 test    al, al
//   0xB0586 jz      loc_B0190; jumptable 00000000000AFDAD case 19
//   0xB058C mov     r14d, 29h ; ')'
//   0xB0592 jmp     loc_B0160
//   0xB0597 mov     rsi, r15; jumptable 00000000000AFDAD case 11
//   0xB059A mov     rdi, rbx
//   0xB059D call    sub_9C380
//   0xB05A2 test    al, al
//   0xB05A4 jnz     loc_B0A8B
//   0xB05AA mov     rsi, r15
//   0xB05AD mov     rdi, rbx
//   0xB05B0 call    sub_99570
//   0xB05B5 test    al, al
//   0xB05B7 jnz     loc_B0E77
//   0xB05BD mov     rsi, r15
//   0xB05C0 mov     rdi, rbx
//   0xB05C3 call    sub_97EC0
//   0xB05C8 test    al, al
//   0xB05CA jnz     loc_B10E8
//   0xB05D0 mov     rsi, r15
//   0xB05D3 mov     rdi, rbx
//   0xB05D6 call    sub_99890
//   0xB05DB test    al, al
//   0xB05DD jnz     loc_B1114
//   0xB05E3 mov     rsi, r15
//   0xB05E6 mov     rdi, rbx
//   0xB05E9 call    sub_9CBD0
//   0xB05EE test    al, al
//   0xB05F0 jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB05F6 mov     r14d, 36h ; '6'
//   0xB05FC jmp     loc_B0160
//   0xB0601 align 8
//   0xB0608 mov     rsi, r15; jumptable 00000000000AFDAD case 5
//   0xB060B mov     rdi, rbx
//   0xB060E call    sub_9B330
//   0xB0613 test    al, al
//   0xB0615 jnz     loc_B1109
//   0xB061B mov     rsi, r15
//   0xB061E mov     rdi, rbx
//   0xB0621 call    sub_96200
//   0xB0626 test    al, al
//   0xB0628 jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB062E mov     r14d, 12h
//   0xB0634 jmp     loc_B0160
//   0xB0639 cmp     byte ptr [r15+30h], 1; jumptable 00000000000AFDAD case 1
//   0xB063E jz      loc_B0C00
//   0xB0644 mov     rsi, r15
//   0xB0647 mov     rdi, rbx
//   0xB064A call    sub_970B0
//   0xB064F test    al, al
//   0xB0651 jnz     loc_B0A75
//   0xB0657 mov     rsi, r15
//   0xB065A mov     rdi, rbx
//   0xB065D call    sub_1872C0
//   0xB0662 test    al, al
//   0xB0664 jz      loc_B0410; jumptable 00000000000AFDAD case 2
//   0xB066A mov     r14d, 3Bh ; ';'
//   0xB0670 jmp     loc_B0160
//   0xB0675 mov     rsi, r15; jumptable 00000000000AFDAD case 10
//   0xB0678 mov     rdi, rbx
//   0xB067B call    sub_97720
//   0xB0680 test    al, al
//   0xB0682 jnz     loc_B0A80
//   0xB0688 mov     rsi, r15
//   0xB068B mov     rdi, rbx
//   0xB068E call    sub_9C870
//   0xB0693 test    al, al
//   0xB0695 jnz     loc_B0E6C
//   0xB069B mov     rsi, r15
//   0xB069E mov     rdi, rbx
//   0xB06A1 call    sub_97880
//   0xB06A6 test    al, al
//   0xB06A8 jnz     loc_B10F3
//   0xB06AE mov     rsi, r15
//   0xB06B1 mov     rdi, rbx
//   0xB06B4 call    sub_95000
//   0xB06B9 test    al, al
//   0xB06BB jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB06C1 mov     r14d, 37h ; '7'
//   0xB06C7 jmp     loc_B0160
//   0xB06CC align 10h
//   0xB06D0 cmp     byte ptr [r15+40h], 8; jumptable 00000000000AFDAD case 56
//   0xB06D5 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB06DB mov     rax, [r15+48h]
//   0xB06DF mov     eax, [rax+11Ch]
//   0xB06E5 cmp     eax, 5
//   0xB06E8 jz      loc_B09F2
//   0xB06EE cmp     eax, 22h ; '"'
//   0xB06F1 jz      loc_B09F2
//   0xB06F7 mov     edx, eax
//   0xB06F9 and     edx, 0FFFFFFDFh
//   0xB06FC cmp     edx, 2
//   0xB06FF jz      loc_B0A34
//   0xB0705 cmp     eax, 2
//   0xB0708 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB070E mov     rsi, r15
//   0xB0711 mov     rdi, rbx
//   0xB0714 call    sub_186880
//   0xB0719 test    al, al
//   0xB071B jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0721 mov     r14d, 1Ch
//   0xB0727 jmp     loc_B0160
//   0xB072C align 10h
//   0xB0730 cmp     byte ptr [r15+20h], 6; jumptable 00000000000AFDAD case 55
//   0xB0735 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB073B mov     rax, [rbx+40h]
//   0xB073F mov     rsi, [r15+28h]
//   0xB0743 cmp     [rax+28h], rsi
//   0xB0747 jz      short loc_B075A
//   0xB0749 lea     rdi, [rax+8]
//   0xB074D call    sub_32E510
//   0xB0752 test    al, al
//   0xB0754 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB075A mov     esi, [r13+3Ch]
//   0xB075E mov     r9d, 1
//   0xB0764 xor     r8d, r8d
//   0xB0767 xor     ecx, ecx
//   0xB0769 mov     rdx, r15
//   0xB076C mov     rdi, rbx
//   0xB076F call    sub_121120
//   0xB0774 mov     r12, rax
//   0xB0777 test    rax, rax
//   0xB077A jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0780 cmp     dword ptr [rax], 3Bh ; ';'
//   0xB0783 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0789 mov     eax, [r13+54h]
//   0xB078D cmp     [r12+24h], eax
//   0xB0792 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0798 mov     rsi, [r15+18h]
//   0xB079C mov     rdi, [rbx+40h]
//   0xB07A0 lea     r14, [r12+20h]
//   0xB07A5 call    sub_9EBA0
//   0xB07AA mov     rsi, rax
//   0xB07AD xor     edx, edx
//   0xB07AF mov     rdi, r14
//   0xB07B2 call    sub_9E910
//   0xB07B7 test    al, al
//   0xB07B9 jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB07BF mov     rdi, [r15+28h]
//   0xB07C3 call    _get_func
//   0xB07C8 test    rax, rax
//   0xB07CB jz      short loc_B0803
//   0xB07CD test    byte ptr [rax+10h], 2
//   0xB07D1 jz      short loc_B0803
//   0xB07D3 mov     esi, [r13+3Ch]
//   0xB07D7 mov     r9d, 1
//   0xB07DD xor     r8d, r8d
//   0xB07E0 xor     ecx, ecx
//   0xB07E2 mov     rdx, r12
//   0xB07E5 mov     rdi, rbx
//   0xB07E8 call    sub_121120
//   0xB07ED mov     rsi, rax
//   0xB07F0 mov     rdi, r13
//   0xB07F3 mov     r14, rax
//   0xB07F6 call    sub_9EBE0
//   0xB07FB test    al, al
//   0xB07FD jnz     loc_B15F4
//   0xB0803 mov     rdi, r12
//   0xB0806 call    sub_119B60
//   0xB080B mov     eax, [rbx+18h]
//   0xB080E mov     r14d, 4
//   0xB0814 and     ah, 0FDh
//   0xB0817 or      al, 80h
//   0xB0819 mov     [rbx+18h], eax
//   0xB081C mov     dword ptr [r15], 38h ; '8'
//   0xB0823 jmp     loc_B0160
//   0xB0828 align 10h
//   0xB0830 cmp     byte ptr [r15+20h], 1; jumptable 00000000000AFDAD case 59
//   0xB0835 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB083B mov     rdi, [r15+10h]
//   0xB083F call    sub_11EFF0
//   0xB0844 mov     r12, rax
//   0xB0847 test    rax, rax
//   0xB084A jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0850 cmp     dword ptr [rax], 4
//   0xB0853 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0859 movzx   eax, byte ptr [rax+20h]
//   0xB085D cmp     al, 2
//   0xB085F jz      short loc_B0878
//   0xB0861 sub     al, 1
//   0xB0863 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0869 mov     rax, [r15+18h]
//   0xB086D cmp     [r12+18h], rax
//   0xB0872 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0878 lea     r13, [r15+20h]
//   0xB087C lea     rdi, [r12+40h]
//   0xB0881 xor     edx, edx
//   0xB0883 mov     rsi, r13
//   0xB0886 call    sub_122120
//   0xB088B test    al, al
//   0xB088D jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0893 lea     rsi, [r12+20h]
//   0xB0898 mov     rdi, r13
//   0xB089B call    sub_121740
//   0xB08A0 mov     r14d, 9
//   0xB08A6 jmp     loc_B0160
//   0xB08AB align 10h
//   0xB08B0 mov     r12d, [r15+44h]; jumptable 00000000000AFDAD case 54
//   0xB08B4 mov     esi, [r13+3Ch]
//   0xB08B8 mov     r10, r15
//   0xB08BB xor     r14d, r14d
//   0xB08BE mov     r9d, 1
//   0xB08C4 xor     r8d, r8d
//   0xB08C7 xor     ecx, ecx
//   0xB08C9 mov     rdx, r10
//   0xB08CC mov     rdi, rbx
//   0xB08CF call    sub_121120
//   0xB08D4 mov     r10, rax
//   0xB08D7 test    rax, rax
//   0xB08DA jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB08E0 mov     eax, [rax]
//   0xB08E2 cmp     eax, 3Bh ; ';'
//   0xB08E5 jz      loc_B0E82
//   0xB08EB ja      loc_B0D10
//   0xB08F1 cmp     eax, 0Ch
//   0xB08F4 jz      loc_B0FC0
//   0xB08FA cmp     eax, 0Dh
//   0xB08FD jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0903 cmp     byte ptr [r10+20h], 1
//   0xB0908 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB090E mov     esi, [r13+3Ch]
//   0xB0912 cmp     esi, [r10+28h]
//   0xB0916 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB091C jmp     short loc_B08BE
//   0xB091E align 20h
//   0xB0920 mov     rsi, r15; jumptable 00000000000AFDAD case 42
//   0xB0923 mov     rdi, rbx
//   0xB0926 call    sub_AEE30
//   0xB092B test    al, al
//   0xB092D jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0933 mov     r14d, 23h ; '#'
//   0xB0939 jmp     loc_B0160
//   0xB093E align 20h
//   0xB0940 mov     r14d, 1Ah
//   0xB0946 jmp     loc_B0160
//   0xB094B align 10h
//   0xB0950 lea     rsi, [rbp+var_110]
//   0xB0957 lea     rdi, [rbp+var_50]
//   0xB095B call    sub_3142F0
//   0xB0960 mov     rdi, [rbp+var_50]
//   0xB0964 test    al, al
//   0xB0966 jnz     loc_B008E
//   0xB096C test    rdi, rdi
//   0xB096F jz      short loc_B097E
//   0xB0971 mov     qword ptr [rbp+var_48], 0
//   0xB0979 call    _qfree
//   0xB097E mov     rdi, [rbp+var_60]
//   0xB0982 call    _qfree
//   0xB0987 mov     r12, [r12+10h]
//   0xB098C test    r12, r12
//   0xB098F jnz     loc_AFF00
//   0xB0995 jmp     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB099A align 20h
//   0xB09A0 mov     r14d, 35h ; '5'
//   0xB09A6 jmp     loc_B0160
//   0xB09AB mov     r14d, 32h ; '2'
//   0xB09B1 jmp     loc_B0160
//   0xB09B6 mov     r14d, 15h
//   0xB09BC jmp     loc_B0160
//   0xB09C1 mov     [rbp+var_110], r12
//   0xB09C8 movups  [rbp+var_108], xmm1
//   0xB09CF jmp     loc_AFE3E
//   0xB09D4 mov     [rbp+var_E0], r12
//   0xB09DB movups  [rbp+var_D8], xmm1
//   0xB09E2 jmp     loc_AFED2
//   0xB09E7 mov     r14d, 27h ; '''
//   0xB09ED jmp     loc_B0160
//   0xB09F2 mov     rdi, [r15+8]
//   0xB09F6 call    sub_11EF60
//   0xB09FB test    rax, rax
//   0xB09FE jz      short loc_B0A16
//   0xB0A00 mov     rdx, rax
//   0xB0A03 mov     rsi, r15
//   0xB0A06 mov     rdi, rbx
//   0xB0A09 call    sub_185F40
//   0xB0A0E test    al, al
//   0xB0A10 jnz     loc_B1265
//   0xB0A16 cmp     byte ptr [r15+40h], 8
//   0xB0A1B jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0A21 mov     rax, [r15+48h]
//   0xB0A25 mov     eax, [rax+11Ch]
//   0xB0A2B cmp     eax, 5
//   0xB0A2E jnz     loc_B06F7
//   0xB0A34 mov     rsi, r15
//   0xB0A37 mov     rdi, rbx
//   0xB0A3A call    sub_183550
//   0xB0A3F test    al, al
//   0xB0A41 jnz     loc_B0423
//   0xB0A47 cmp     byte ptr [r15+40h], 8
//   0xB0A4C jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0A52 mov     rax, [r15+48h]
//   0xB0A56 mov     eax, [rax+11Ch]
//   0xB0A5C cmp     eax, 5
//   0xB0A5F jz      loc_B070E
//   0xB0A65 jmp     loc_B0705
//   0xB0A6A mov     r14d, 1Fh
//   0xB0A70 jmp     loc_B0160
//   0xB0A75 mov     r14d, 25h ; '%'
//   0xB0A7B jmp     loc_B0160
//   0xB0A80 mov     r14d, 14h
//   0xB0A86 jmp     loc_B0160
//   0xB0A8B mov     r14d, 13h
//   0xB0A91 jmp     loc_B0160
//   0xB0A96 mov     eax, [r15+28h]
//   0xB0A9A cmp     [r13+3Ch], eax
//   0xB0A9E jnz     loc_B04B3
//   0xB0AA4 lea     rax, [r15+40h]
//   0xB0AA8 lea     r14, [r15+20h]
//   0xB0AAC xor     edx, edx
//   0xB0AAE mov     rsi, rax
//   0xB0AB1 mov     rdi, r14
//   0xB0AB4 mov     qword ptr [rbp+var_150], rax
//   0xB0ABB call    sub_122120
//   0xB0AC0 test    al, al
//   0xB0AC2 jz      loc_B04B3
//   0xB0AC8 cmp     byte ptr [r15+30h], 2
//   0xB0ACD jnz     loc_B04B3
//   0xB0AD3 lea     rdx, [rbp+var_F0]
//   0xB0ADA xor     r8d, r8d
//   0xB0ADD mov     rcx, r15
//   0xB0AE0 mov     rdi, rbx
//   0xB0AE3 lea     rsi, [rbp+var_120]
//   0xB0AEA call    sub_126100
//   0xB0AEF mov     r12, rax
//   0xB0AF2 test    rax, rax
//   0xB0AF5 jz      loc_B04B3
//   0xB0AFB lea     rax, [r15+30h]
//   0xB0AFF movsxd  rsi, dword ptr [r12+44h]
//   0xB0B04 mov     edx, 1
//   0xB0B09 mov     rdi, rax
//   0xB0B0C mov     [rbp+var_140], rax
//   0xB0B13 call    sub_9E910
//   0xB0B18 test    al, al
//   0xB0B1A jz      loc_B04B3
//   0xB0B20 mov     eax, [r12]
//   0xB0B24 cmp     eax, 2
//   0xB0B27 jz      loc_B16AA
//   0xB0B2D cmp     eax, 4
//   0xB0B30 jnz     loc_B04B3
//   0xB0B36 cmp     byte ptr [r12+20h], 4
//   0xB0B3C jnz     loc_B04B3
//   0xB0B42 mov     rax, [r12+28h]
//   0xB0B47 cmp     dword ptr [rax], 2
//   0xB0B4A jnz     loc_B04B3
//   0xB0B50 cmp     byte ptr [rax+20h], 1
//   0xB0B54 jnz     loc_B04B3
//   0xB0B5A mov     ecx, [rax+28h]
//   0xB0B5D cmp     [r13+38h], ecx
//   0xB0B61 jnz     loc_B04B3
//   0xB0B67 cmp     byte ptr [rax+30h], 1
//   0xB0B6B jnz     loc_B04B3
//   0xB0B71 mov     eax, [rax+38h]
//   0xB0B74 cmp     [r13+3Ch], eax
//   0xB0B78 jnz     loc_B04B3
//   0xB0B7E lea     rdx, [rbp+var_F0]
//   0xB0B85 mov     r8, r15
//   0xB0B88 mov     rcx, r12
//   0xB0B8B mov     rdi, rbx
//   0xB0B8E lea     rsi, [rbp+var_120]
//   0xB0B95 call    sub_AC890
//   0xB0B9A test    al, al
//   0xB0B9C jz      loc_B04B3
//   0xB0BA2 mov     dword ptr [r15], 3Ch ; '<'
//   0xB0BA9 mov     rax, [r15+18h]
//   0xB0BAD lea     rsi, [r12+40h]
//   0xB0BB2 mov     rdx, [r12+18h]
//   0xB0BB7 mov     rdi, qword ptr [rbp+var_150]
//   0xB0BBE mov     [r15+18h], rdx
//   0xB0BC2 mov     [r12+18h], rax
//   0xB0BC7 call    sub_118FD0
//   0xB0BCC mov     rdi, r14
//   0xB0BCF call    sub_119360
//   0xB0BD4 mov     rdi, [rbp+var_140]
//   0xB0BDB call    sub_119360
//   0xB0BE0 mov     rdi, r12
//   0xB0BE3 call    sub_119B60
//   0xB0BE8 mov     eax, [rbx+18h]
//   0xB0BEB mov     r14d, 2
//   0xB0BF1 and     ah, 0FDh
//   0xB0BF4 or      al, 90h
//   0xB0BF6 mov     [rbx+18h], eax
//   0xB0BF9 jmp     loc_B0160
//   0xB0BFE align 20h
//   0xB0C00 mov     eax, [r15+38h]
//   0xB0C04 cmp     [r13+38h], eax
//   0xB0C08 jnz     loc_B0644
//   0xB0C0E cmp     byte ptr [r15+40h], 1
//   0xB0C13 jnz     loc_B0644
//   0xB0C19 mov     eax, [r15+48h]
//   0xB0C1D cmp     [r13+3Ch], eax
//   0xB0C21 jnz     loc_B0644
//   0xB0C27 lea     rdx, [rbp+var_F0]
//   0xB0C2E xor     r8d, r8d
//   0xB0C31 mov     rcx, r15
//   0xB0C34 mov     rdi, rbx
//   0xB0C37 lea     rsi, [rbp+var_120]
//   0xB0C3E call    sub_1258E0
//   0xB0C43 mov     r12, rax
//   0xB0C46 test    rax, rax
//   0xB0C49 jz      loc_B0644
//   0xB0C4F mov     rax, [r15+18h]
//   0xB0C53 cmp     [r12+18h], rax
//   0xB0C58 jnz     loc_B0644
//   0xB0C5E cmp     dword ptr [r12], 0Dh
//   0xB0C63 jnz     loc_B0644
//   0xB0C69 cmp     byte ptr [r12+20h], 1
//   0xB0C6F jnz     loc_B0644
//   0xB0C75 mov     eax, [r12+28h]
//   0xB0C7A cmp     [r13+3Ch], eax
//   0xB0C7E jnz     loc_B0644
//   0xB0C84 lea     rsi, [r12+40h]
//   0xB0C89 lea     rdi, [r12+20h]
//   0xB0C8E xor     edx, edx
//   0xB0C90 call    sub_122120
//   0xB0C95 test    al, al
//   0xB0C97 jz      loc_B0644
//   0xB0C9D movsxd  rsi, dword ptr [r15+24h]
//   0xB0CA1 lea     rdi, [r12+30h]
//   0xB0CA6 mov     edx, 1
//   0xB0CAB call    sub_9E910
//   0xB0CB0 test    al, al
//   0xB0CB2 jz      loc_B0644
//   0xB0CB8 lea     rdx, [rbp+var_F0]
//   0xB0CBF mov     r8, r15
//   0xB0CC2 mov     rcx, r12
//   0xB0CC5 mov     rdi, rbx
//   0xB0CC8 lea     rsi, [rbp+var_120]
//   0xB0CCF call    sub_AC890
//   0xB0CD4 test    al, al
//   0xB0CD6 jz      loc_B0644
//   0xB0CDC mov     rdi, r12
//   0xB0CDF call    sub_119B60
//   0xB0CE4 mov     dword ptr [r15], 3Bh ; ';'
//   0xB0CEB lea     rdi, [r15+30h]
//   0xB0CEF call    sub_119360
//   0xB0CF4 lea     rdi, [r15+40h]
//   0xB0CF8 call    sub_119360
//   0xB0CFD or      dword ptr [rbx+18h], 10h
//   0xB0D01 mov     r14d, 1
//   0xB0D07 jmp     loc_B0160
//   0xB0D0C align 10h
//   0xB0D10 cmp     eax, 3Ch ; '<'
//   0xB0D13 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0D19 cmp     byte ptr [r15+40h], 1
//   0xB0D1E jz      loc_B122C
//   0xB0D24 cmp     byte ptr [r15+30h], 1
//   0xB0D29 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0D2F cmp     byte ptr [r10+40h], 1
//   0xB0D34 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0D3A mov     eax, [r15+38h]
//   0xB0D3E cmp     [r10+48h], eax
//   0xB0D42 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0D48 cmp     r12d, [r10+44h]
//   0xB0D4C jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0D52 mov     esi, [r13+3Ch]
//   0xB0D56 mov     r9d, 1
//   0xB0D5C xor     r8d, r8d
//   0xB0D5F xor     ecx, ecx
//   0xB0D61 mov     rdx, r10
//   0xB0D64 mov     rdi, rbx
//   0xB0D67 mov     qword ptr [rbp+var_150], r10
//   0xB0D6E call    sub_121120
//   0xB0D73 mov     rdi, rax
//   0xB0D76 test    rax, rax
//   0xB0D79 jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0D7F cmp     byte ptr [r15+40h], 1
//   0xB0D84 mov     r10, qword ptr [rbp+var_150]
//   0xB0D8B jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0D91 cmp     byte ptr [rax+40h], 1
//   0xB0D95 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0D9B mov     eax, [rax+48h]
//   0xB0D9E cmp     [r15+48h], eax
//   0xB0DA2 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0DA8 cmp     r12d, [rdi+44h]
//   0xB0DAC jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0DB2 mov     [rbp+var_138], r10
//   0xB0DB9 call    sub_119B60
//   0xB0DBE mov     eax, [rbx+18h]
//   0xB0DC1 mov     r10, [rbp+var_138]
//   0xB0DC8 and     ah, 0FDh
//   0xB0DCB or      al, 80h
//   0xB0DCD mov     [rbx+18h], eax
//   0xB0DD0 mov     rdi, r10
//   0xB0DD3 call    sub_119B60
//   0xB0DD8 mov     eax, [rbx+18h]
//   0xB0DDB mov     rsi, r15
//   0xB0DDE mov     rdi, rbx
//   0xB0DE1 and     ah, 0FDh
//   0xB0DE4 or      al, 80h
//   0xB0DE6 mov     [rbx+18h], eax
//   0xB0DE9 call    sub_32C540
//   0xB0DEE test    r14, r14
//   0xB0DF1 jz      short loc_B0E06
//   0xB0DF3 mov     rdi, r14
//   0xB0DF6 call    sub_119B60
//   0xB0DFB mov     eax, [rbx+18h]
//   0xB0DFE and     ah, 0FDh
//   0xB0E01 or      al, 80h
//   0xB0E03 mov     [rbx+18h], eax
//   0xB0E06 mov     rdi, r15
//   0xB0E09 call    sub_1B2100
//   0xB0E0E mov     rcx, rax
//   0xB0E11 mov     edx, 5
//   0xB0E16 mov     rdi, rbx
//   0xB0E19 xor     eax, eax
//   0xB0E1B lea     rsi, aCmbDS; "cmb%d: %s"
//   0xB0E22 call    sub_9EAE0
//   0xB0E27 jmp     loc_B017F
//   0xB0E2C align 10h
//   0xB0E30 cmp     dword ptr [r11], 4
//   0xB0E34 jnz     loc_B02A2
//   0xB0E3A mov     eax, [r15+44h]
//   0xB0E3E cmp     [r11+44h], eax
//   0xB0E42 jg      loc_B1270
//   0xB0E48 cmp     eax, 4
//   0xB0E4B jle     loc_B02B8
//   0xB0E51 jmp     loc_B02D5
//   0xB0E56 mov     r14d, 31h ; '1'
//   0xB0E5C jmp     loc_B0160
//   0xB0E61 mov     r14d, 10h
//   0xB0E67 jmp     loc_B0160
//   0xB0E6C mov     r14d, 19h
//   0xB0E72 jmp     loc_B0160
//   0xB0E77 mov     r14d, 16h
//   0xB0E7D jmp     loc_B0160
//   0xB0E82 mov     eax, [r13+54h]
//   0xB0E86 cmp     [r10+24h], eax
//   0xB0E8A jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0E90 mov     rsi, [r15+18h]
//   0xB0E94 mov     rdi, [rbx+40h]
//   0xB0E98 mov     qword ptr [rbp+var_150], r10
//   0xB0E9F lea     r12, [r10+20h]
//   0xB0EA3 call    sub_9EBA0
//   0xB0EA8 mov     rsi, rax
//   0xB0EAB xor     edx, edx
//   0xB0EAD mov     rdi, r12
//   0xB0EB0 call    sub_9E910
//   0xB0EB5 test    al, al
//   0xB0EB7 mov     r10, qword ptr [rbp+var_150]
//   0xB0EBE jz      def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0EC4 mov     esi, [r13+3Ch]
//   0xB0EC8 mov     r9d, 1
//   0xB0ECE xor     r8d, r8d
//   0xB0ED1 xor     ecx, ecx
//   0xB0ED3 mov     rdx, r10
//   0xB0ED6 mov     rdi, rbx
//   0xB0ED9 mov     [rbp+var_138], r10
//   0xB0EE0 call    sub_121120
//   0xB0EE5 mov     rsi, rax
//   0xB0EE8 mov     rdi, r13
//   0xB0EEB mov     r14, rax
//   0xB0EEE call    sub_9EBE0
//   0xB0EF3 mov     r10, [rbp+var_138]
//   0xB0EFA test    al, al
//   0xB0EFC jz      short loc_B0F3F
//   0xB0EFE mov     rdi, r14
//   0xB0F01 call    sub_119B60
//   0xB0F06 mov     eax, [rbx+18h]
//   0xB0F09 mov     rdi, [rbx+40h]
//   0xB0F0D and     ah, 0FDh
//   0xB0F10 or      al, 80h
//   0xB0F12 mov     [rbx+18h], eax
//   0xB0F15 mov     rsi, [r14+18h]
//   0xB0F19 call    sub_1CC170
//   0xB0F1E mov     rsi, [r15+18h]
//   0xB0F22 mov     rdi, [rbx+40h]
//   0xB0F26 mov     r14, rax
//   0xB0F29 call    sub_1CC170
//   0xB0F2E cmp     r14, rax
//   0xB0F31 mov     r10, [rbp+var_138]
//   0xB0F38 jz      short loc_B0F3F
//   0xB0F3A or      dword ptr [r15+4], 20h
//   0xB0F3F mov     rdi, r10
//   0xB0F42 call    sub_119B60
//   0xB0F47 mov     eax, [rbx+18h]
//   0xB0F4A lea     r12, [r15+30h]
//   0xB0F4E lea     rdi, [r15+20h]
//   0xB0F52 mov     rsi, r12
//   0xB0F55 and     ah, 0FDh
//   0xB0F58 or      al, 80h
//   0xB0F5A mov     [rbx+18h], eax
//   0xB0F5D mov     dword ptr [r15], 39h ; '9'
//   0xB0F64 call    sub_121740
//   0xB0F69 lea     rax, [r15+40h]
//   0xB0F6D mov     rdi, r12
//   0xB0F70 mov     rsi, rax
//   0xB0F73 mov     r14, rax
//   0xB0F76 call    sub_121740
//   0xB0F7B mov     rdi, r14
//   0xB0F7E call    sub_119360
//   0xB0F83 mov     rdi, r15
//   0xB0F86 call    sub_1B2100
//   0xB0F8B mov     rcx, rax
//   0xB0F8E mov     edx, 6
//   0xB0F93 mov     rdi, rbx
//   0xB0F96 xor     eax, eax
//   0xB0F98 lea     rsi, aCmbDS; "cmb%d: %s"
//   0xB0F9F call    sub_9EAE0
//   0xB0FA4 mov     edx, 6
//   0xB0FA9 mov     rsi, r15
//   0xB0FAC mov     rdi, rbx
//   0xB0FAF call    sub_163DD0
//   0xB0FB4 jmp     loc_B017F
//   0xB0FB9 align 20h
//   0xB0FC0 cmp     byte ptr [r10+20h], 1
//   0xB0FC5 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0FCB mov     eax, [r10+28h]
//   0xB0FCF cmp     [r13+3Ch], eax
//   0xB0FD3 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB0FD9 lea     rsi, [r10+40h]
//   0xB0FDD lea     rdi, [r10+20h]
//   0xB0FE1 xor     edx, edx
//   0xB0FE3 mov     qword ptr [rbp+var_150], r10
//   0xB0FEA call    sub_122120
//   0xB0FEF test    al, al
//   0xB0FF1 mov     r10, qword ptr [rbp+var_150]
//   0xB0FF8 jz      short loc_B1005
//   0xB0FFA cmp     byte ptr [r10+30h], 2
//   0xB0FFF jz      loc_B14FE
//   0xB1005 mov     esi, [r13+3Ch]
//   0xB1009 jmp     loc_B08BE
//   0xB100E lea     rsi, [r15+20h]
//   0xB1012 lea     rdi, [r11+20h]
//   0xB1016 xor     edx, edx
//   0xB1018 mov     [rbp+var_158], r11
//   0xB101F call    sub_122120
//   0xB1024 test    al, al
//   0xB1026 mov     r11, [rbp+var_158]
//   0xB102D jz      loc_B02B8
//   0xB1033 cmp     byte ptr [r15+20h], 4
//   0xB1038 jz      loc_B14D5
//   0xB103E mov     rdi, [rbp+var_140]
//   0xB1045 lea     rdx, [r11+40h]
//   0xB1049 mov     rsi, r13
//   0xB104C mov     [rbp+var_158], r11
//   0xB1053 call    sub_1239E0
//   0xB1058 test    al, al
//   0xB105A mov     r11, [rbp+var_158]
//   0xB1061 jz      loc_B02B8
//   0xB1067 mov     eax, [r15+44h]
//   0xB106B cmp     [r11+44h], eax
//   0xB106F jl      loc_B02B8
//   0xB1075 lea     r14, [rbp+var_60]
//   0xB1079 mov     ecx, 1
//   0xB107E mov     rdx, r11
//   0xB1081 mov     rsi, rbx
//   0xB1084 mov     rdi, r14
//   0xB1087 mov     [rbp+var_140], r11
//   0xB108E call    sub_120C40
//   0xB1093 mov     r11, [rbp+var_140]
//   0xB109A mov     rsi, qword ptr [rbp+var_150]
//   0xB10A1 mov     rcx, r15
//   0xB10A4 mov     rdi, rbx
//   0xB10A7 mov     r8d, 1
//   0xB10AD mov     rdx, [r11+8]
//   0xB10B1 call    sub_A6060
//   0xB10B6 test    rax, rax
//   0xB10B9 mov     r11, [rbp+var_140]
//   0xB10C0 jz      loc_B159F
//   0xB10C6 mov     rdi, r14
//   0xB10C9 mov     [rbp+var_140], r11
//   0xB10D0 call    sub_90100
//   0xB10D5 mov     r11, [rbp+var_140]
//   0xB10DC jmp     loc_B02B8
//   0xB10E1 align 8
//   0xB10E8 mov     r14d, 20h ; ' '
//   0xB10EE jmp     loc_B0160
//   0xB10F3 mov     r14d, 2Bh ; '+'
//   0xB10F9 jmp     loc_B0160
//   0xB10FE mov     r14d, 28h ; '('
//   0xB1104 jmp     loc_B0160
//   0xB1109 mov     r14d, 18h
//   0xB110F jmp     loc_B0160
//   0xB1114 mov     r14d, 33h ; '3'
//   0xB111A jmp     loc_B0160
//   0xB111F mov     r14d, 11h
//   0xB1125 jmp     loc_B0160
//   0xB112A mov     dword ptr [r15], 4
//   0xB1131 lea     rsi, [r12+20h]
//   0xB1136 lea     rdi, [r15+20h]
//   0xB113A call    sub_121740
//   0xB113F cmp     byte ptr [r15+20h], 1
//   0xB1144 jz      loc_B136F
//   0xB114A mov     rdi, r12
//   0xB114D call    sub_119B60
//   0xB1152 mov     eax, [rbx+18h]
//   0xB1155 mov     rdi, r15
//   0xB1158 and     ah, 0FDh
//   0xB115B or      al, 80h
//   0xB115D mov     [rbx+18h], eax
//   0xB1160 call    sub_1B2100
//   0xB1165 mov     rcx, rax
//   0xB1168 mov     edx, 3
//   0xB116D mov     rdi, rbx
//   0xB1170 xor     eax, eax
//   0xB1172 lea     rsi, aCmbDS; "cmb%d: %s"
//   0xB1179 call    sub_9EAE0
//   0xB117E mov     edx, 6
//   0xB1183 mov     rsi, r15
//   0xB1186 mov     rdi, rbx
//   0xB1189 call    sub_163DD0
//   0xB118E mov     rdi, [rbp+var_50]
//   0xB1192 test    rdi, rdi
//   0xB1195 jz      short loc_B11A2
//   0xB1197 xor     eax, eax
//   0xB1199 mov     qword ptr [rbp+var_48], rax
//   0xB119D call    _qfree
//   0xB11A2 mov     rdi, [rbp+var_60]
//   0xB11A6 call    _qfree
//   0xB11AB mov     rdi, [rbp+var_80]
//   0xB11AF test    rdi, rdi
//   0xB11B2 jz      short loc_B11BF
//   0xB11B4 xor     eax, eax
//   0xB11B6 mov     qword ptr [rbp+var_78], rax
//   0xB11BA call    _qfree
//   0xB11BF mov     rdi, [rbp+var_90]
//   0xB11C6 call    _qfree
//   0xB11CB jmp     loc_B017F
//   0xB11D0 mov     rdi, [rbp+var_80]
//   0xB11D4 test    rdi, rdi
//   0xB11D7 jz      short loc_B11E4
//   0xB11D9 xor     eax, eax
//   0xB11DB mov     qword ptr [rbp+var_78], rax
//   0xB11DF call    _qfree
//   0xB11E4 mov     rdi, [rbp+var_90]
//   0xB11EB call    _qfree
//   0xB11F0 jmp     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB11F5 mov     r14d, 2Ch ; ','
//   0xB11FB mov     rdi, r12
//   0xB11FE call    sub_90100
//   0xB1203 mov     rdi, qword ptr [rbp+var_150]
//   0xB120A call    sub_90100
//   0xB120F jmp     loc_B0160
//   0xB1214 mov     r14d, 17h
//   0xB121A jmp     loc_B0160
//   0xB121F mov     rdi, r12
//   0xB1222 call    sub_119360
//   0xB1227 jmp     loc_B00D6
//   0xB122C cmp     byte ptr [r10+40h], 1
//   0xB1231 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB1237 mov     eax, [r10+48h]
//   0xB123B cmp     [r15+48h], eax
//   0xB123F jz      loc_B1440
//   0xB1245 cmp     byte ptr [r15+30h], 1
//   0xB124A jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB1250 jmp     loc_B0D3A
//   0xB1255 mov     r14d, 1Eh
//   0xB125B jmp     loc_B0160
//   0xB1260 call    ___stack_chk_fail
//   0xB1265 mov     r14d, 1Bh
//   0xB126B jmp     loc_B0160
//   0xB1270 mov     rsi, qword ptr [rbp+var_150]
//   0xB1277 mov     rdi, r12
//   0xB127A mov     [rbp+var_158], r11
//   0xB1281 call    sub_9E8D0
//   0xB1286 test    al, al
//   0xB1288 mov     r11, [rbp+var_158]
//   0xB128F jz      loc_B02A2
//   0xB1295 mov     rax, [rbx+1E0h]
//   0xB129C xor     edx, edx
//   0xB129E mov     rdi, r15
//   0xB12A1 mov     rsi, [rax+70h]
//   0xB12A5 call    sub_11CB60
//   0xB12AA test    al, al
//   0xB12AC mov     r11, [rbp+var_158]
//   0xB12B3 jnz     loc_B02A2
//   0xB12B9 mov     rdx, [r11+8]
//   0xB12BD mov     r8d, 1
//   0xB12C3 mov     rcx, r15
//   0xB12C6 mov     rdi, rbx
//   0xB12C9 mov     rsi, qword ptr [rbp+var_150]
//   0xB12D0 call    sub_A6060
//   0xB12D5 test    rax, rax
//   0xB12D8 mov     r11, [rbp+var_158]
//   0xB12DF jnz     loc_B02A2
//   0xB12E5 mov     rax, [rbx+1E0h]
//   0xB12EC mov     r9, r15
//   0xB12EF mov     rcx, r11
//   0xB12F2 mov     rdx, rbx
//   0xB12F5 lea     rsi, [rbp+var_128]
//   0xB12FC lea     r8, [r11+40h]
//   0xB1300 mov     rdi, [rax+70h]
//   0xB1304 push    r10
//   0xB1306 push    [rbp+var_140]
//   0xB130C call    sub_12C530
//   0xB1311 test    al, al
//   0xB1313 pop     r8
//   0xB1315 mov     r11, [rbp+var_158]
//   0xB131C pop     r9
//   0xB131E jz      loc_B02A2
//   0xB1324 lea     r14, [rbp+var_60]
//   0xB1328 lea     rsi, [r11+20h]
//   0xB132C mov     rdi, r14
//   0xB132F call    sub_120000
//   0xB1334 mov     rax, [rbp+var_128]
//   0xB133B mov     r11, [rbp+var_158]
//   0xB1342 test    rax, rax
//   0xB1345 js      short loc_B1354
//   0xB1347 movsxd  rdx, dword ptr [rbp+var_60+4]
//   0xB134B cmp     rax, rdx
//   0xB134E jl      loc_B1510
//   0xB1354 mov     rdi, r14
//   0xB1357 mov     [rbp+var_158], r11
//   0xB135E call    sub_119360
//   0xB1363 mov     r11, [rbp+var_158]
//   0xB136A jmp     loc_B02A2
//   0xB136F mov     eax, [r15+28h]
//   0xB1373 cmp     [r13+3Ch], eax
//   0xB1377 jnz     loc_B114A
//   0xB137D mov     rax, [r12+18h]
//   0xB1382 mov     [r15+18h], rax
//   0xB1386 jmp     loc_B114A
//   0xB138B lea     rdi, [rax+20h]
//   0xB138F xor     edx, edx
//   0xB1391 xor     esi, esi
//   0xB1393 call    sub_9E910
//   0xB1398 test    al, al
//   0xB139A jz      loc_B03FB
//   0xB13A0 mov     eax, [r15+4]
//   0xB13A4 mov     rcx, [rbp+var_140]
//   0xB13AB sar     eax, 8
//   0xB13AE mov     edx, [rcx+44h]
//   0xB13B1 and     eax, 7
//   0xB13B4 jz      short loc_B13C8
//   0xB13B6 lea     ecx, [rax-1]
//   0xB13B9 mov     eax, 1
//   0xB13BE shl     eax, cl
//   0xB13C0 cmp     eax, edx
//   0xB13C2 jl      loc_B03FB
//   0xB13C8 cmp     [r15+44h], edx
//   0xB13CC jge     loc_B03FB
//   0xB13D2 xor     eax, eax
//   0xB13D4 pxor    xmm0, xmm0
//   0xB13D8 xor     ecx, ecx
//   0xB13DA mov     rsi, r14
//   0xB13DD mov     [rbp+var_60], rax
//   0xB13E1 mov     rdi, rbx
//   0xB13E4 mov     [rbp+var_58], rax
//   0xB13E8 mov     [rbp+var_50], rax
//   0xB13EC mov     rax, [rbp+var_140]
//   0xB13F3 movups  [rbp+var_48], xmm0
//   0xB13F7 add     rax, 40h ; '@'
//   0xB13FB mov     rdx, rax
//   0xB13FE mov     [rbp+var_158], rax
//   0xB1405 call    sub_1245A0
//   0xB140A mov     rcx, [r15+8]
//   0xB140E mov     r8d, 1
//   0xB1414 mov     rsi, r14
//   0xB1417 mov     rdi, rbx
//   0xB141A mov     rax, [rbp+var_140]
//   0xB1421 mov     rdx, [rax+8]
//   0xB1425 call    sub_A6350
//   0xB142A test    rax, rax
//   0xB142D jz      loc_B1637
//   0xB1433 mov     rdi, r14
//   0xB1436 call    sub_90100
//   0xB143B jmp     loc_B03FB
//   0xB1440 cmp     r12d, [r10+44h]
//   0xB1444 jnz     loc_B1245
//   0xB144A mov     rsi, [r15+18h]
//   0xB144E mov     rdi, [rbx+40h]
//   0xB1452 lea     rax, [r15+30h]
//   0xB1456 mov     qword ptr [rbp+var_150], r10
//   0xB145D mov     [rbp+var_140], rax
//   0xB1464 call    sub_32CB20
//   0xB1469 mov     rdi, rax
//   0xB146C call    _getseg
//   0xB1471 mov     rsi, [rax+30h]
//   0xB1475 xor     edx, edx
//   0xB1477 lea     rdi, [r15+30h]
//   0xB147B call    sub_9E910
//   0xB1480 test    al, al
//   0xB1482 mov     r10, qword ptr [rbp+var_150]
//   0xB1489 jnz     short loc_B14A4
//   0xB148B cmp     byte ptr [r15+30h], 1
//   0xB1490 jnz     def_AFDAD; jumptable 00000000000AFDAD default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB1496 mov     eax, [r15+38h]
//   0xB149A cmp     [r13+40h], eax
//   0xB149E jnz     loc_B0D2F
//   0xB14A4 mov     rdx, [r15+10h]
//   0xB14A8 mov     esi, [r15+48h]
//   0xB14AC xor     r8d, r8d
//   0xB14AF xor     ecx, ecx
//   0xB14B1 mov     rdi, rbx
//   0xB14B4 mov     qword ptr [rbp+var_150], r10
//   0xB14BB call    sub_1255D0
//   0xB14C0 mov     r10, qword ptr [rbp+var_150]
//   0xB14C7 cmp     r10, rax
//   0xB14CA jnz     loc_B0D24
//   0xB14D0 jmp     loc_B0DD0
//   0xB14D5 mov     rdi, [r15+28h]
//   0xB14D9 xor     edx, edx
//   0xB14DB mov     rsi, r13
//   0xB14DE mov     [rbp+var_158], r11
//   0xB14E5 call    sub_11CB60
//   0xB14EA test    al, al
//   0xB14EC mov     r11, [rbp+var_158]
//   0xB14F3 jnz     loc_B02B8
//   0xB14F9 jmp     loc_B103E
//   0xB14FE cmp     [r10+24h], r12d
//   0xB1502 jnz     loc_B1005
//   0xB1508 mov     r14, r10
//   0xB150B jmp     loc_B1005
//   0xB1510 mov     rdx, [rbx+1E0h]
//   0xB1517 mov     rdi, r14
//   0xB151A mov     [rbp+var_158], r11
//   0xB1521 mov     rsi, [rdx+70h]
//   0xB1525 mov     edx, eax
//   0xB1527 call    sub_1234D0
//   0xB152C test    al, al
//   0xB152E mov     r11, [rbp+var_158]
//   0xB1535 jz      loc_B1354
//   0xB153B lea     rsi, [r15+20h]
//   0xB153F xor     edx, edx
//   0xB1541 mov     rdi, r14
//   0xB1544 call    sub_122120
//   0xB1549 test    al, al
//   0xB154B mov     r11, [rbp+var_158]
//   0xB1552 jz      loc_B1354
//   0xB1558 mov     rdx, [r11+8]
//   0xB155C mov     rcx, r15
//   0xB155F mov     rsi, r14
//   0xB1562 mov     rdi, rbx
//   0xB1565 call    sub_A6270
//   0xB156A test    al, al
//   0xB156C mov     r11, [rbp+var_158]
//   0xB1573 jnz     loc_B1354
//   0xB1579 mov     rdi, r15
//   0xB157C call    sub_119B60
//   0xB1581 mov     eax, [rbx+18h]
//   0xB1584 mov     rdi, r14
//   0xB1587 mov     r14d, 6
//   0xB158D and     ah, 0FDh
//   0xB1590 or      al, 80h
//   0xB1592 mov     [rbx+18h], eax
//   0xB1595 call    sub_119360
//   0xB159A jmp     loc_B11FB
//   0xB159F mov     rdx, [r11+8]
//   0xB15A3 mov     r8d, 1
//   0xB15A9 mov     rcx, r15
//   0xB15AC mov     rsi, r14
//   0xB15AF mov     rdi, rbx
//   0xB15B2 mov     [rbp+var_140], r11
//   0xB15B9 call    sub_A6060
//   0xB15BE test    rax, rax
//   0xB15C1 mov     r11, [rbp+var_140]
//   0xB15C8 jnz     loc_B10C6
//   0xB15CE mov     rdi, r15
//   0xB15D1 call    sub_119B60
//   0xB15D6 mov     eax, [rbx+18h]
//   0xB15D9 mov     rdi, r14
//   0xB15DC mov     r14d, 8
//   0xB15E2 and     ah, 0FDh
//   0xB15E5 or      al, 80h
//   0xB15E7 mov     [rbx+18h], eax
//   0xB15EA call    sub_90100
//   0xB15EF jmp     loc_B11FB
//   0xB15F4 mov     rdi, r14
//   0xB15F7 call    sub_119B60
//   0xB15FC mov     eax, [rbx+18h]
//   0xB15FF mov     rdi, [rbx+40h]
//   0xB1603 and     ah, 0FDh
//   0xB1606 or      al, 80h
//   0xB1608 mov     [rbx+18h], eax
//   0xB160B mov     rsi, [r14+18h]
//   0xB160F call    sub_1CC170
//   0xB1614 mov     rsi, [r15+18h]
//   0xB1618 mov     rdi, [rbx+40h]
//   0xB161C mov     r14, rax
//   0xB161F call    sub_1CC170
//   0xB1624 cmp     r14, rax
//   0xB1627 jz      loc_B0803
//   0xB162D or      dword ptr [r15+4], 20h
//   0xB1632 jmp     loc_B0803
//   0xB1637 mov     rdx, [rbp+var_158]
//   0xB163E mov     rdi, qword ptr [rbp+var_150]
//   0xB1645 mov     rsi, r13
//   0xB1648 call    sub_1239E0
//   0xB164D test    al, al
//   0xB164F jz      loc_B1433
//   0xB1655 mov     rsi, [rbp+var_158]
//   0xB165C mov     rdi, qword ptr [rbp+var_150]
//   0xB1663 call    sub_121740
//   0xB1668 mov     rax, [rbp+var_140]
//   0xB166F mov     dword ptr [r15], 9
//   0xB1676 test    byte ptr [rax+4], 80h
//   0xB167A jnz     short loc_B168F
//   0xB167C mov     rdi, rax
//   0xB167F call    sub_119B60
//   0xB1684 mov     eax, [rbx+18h]
//   0xB1687 and     ah, 0FDh
//   0xB168A or      al, 80h
//   0xB168C mov     [rbx+18h], eax
//   0xB168F mov     rdi, r14
//   0xB1692 mov     r14d, 7
//   0xB1698 call    sub_90100
//   0xB169D mov     rdi, r12
//   0xB16A0 call    sub_119360
//   0xB16A5 jmp     loc_B0160
//   0xB16AA cmp     byte ptr [r12+20h], 1
//   0xB16B0 jnz     loc_B04B3
//   0xB16B6 mov     eax, [r12+28h]
//   0xB16BB cmp     [r13+38h], eax
//   0xB16BF jnz     loc_B04B3
//   0xB16C5 cmp     byte ptr [r12+30h], 1
//   0xB16CB jnz     loc_B04B3
//   0xB16D1 mov     eax, [r12+38h]
//   0xB16D6 cmp     [r13+3Ch], eax
//   0xB16DA jnz     loc_B04B3
//   0xB16E0 jmp     loc_B0B7E
//   0xB16E5 mov     rbx, rax
//   0xB16E8 jmp     loc_304DA
//   0xB16ED mov     rbx, rax
//   0xB16F0 jmp     loc_30511
//   0xB16F5 mov     rbx, rax
//   0xB16F8 jmp     loc_30520
//   0xB16FD mov     rbx, rax
//   0xB1700 jmp     loc_3052A
//   0xB1705 mov     rbx, rax
//   0xB1708 jmp     loc_30538
//   0xB170D mov     rbx, rax
//   0xB1710 jmp     loc_3054A
//   0xB1715 mov     rbx, rax
//   0xB1718 jmp     loc_30573
//   0xB171D mov     rbx, rax
//   0xB1720 jmp     loc_30552
//   0xB1725 mov     rbx, rax
//   0xB1728 jmp     loc_30584
//   0xB172D mov     rbx, rax
//   0xB1730 jmp     loc_30540
//   0xB1735 mov     rbx, rax
//   0xB1738 jmp     loc_3056B
//   0xB173D mov     rbx, rax
//   0xB1740 jmp     loc_304E2
// ============================================================

void sub_AFC90(/* signature unknown */)
{
    // see disassembly above
}

