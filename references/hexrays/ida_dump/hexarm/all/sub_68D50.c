// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x68D50
// Name:           sub_68D50
// Function size:  1553 bytes (342 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x68D50 push    r15
//   0x68D52 push    r14
//   0x68D54 push    r13
//   0x68D56 push    r12
//   0x68D58 push    rbp
//   0x68D59 push    rbx
//   0x68D5A mov     rbx, rsi
//   0x68D5D sub     rsp, 28h
//   0x68D61 mov     [rsp+58h+var_4C], edx
//   0x68D65 mov     [rsp+58h+var_50], ecx
//   0x68D69 test    rsi, rsi
//   0x68D6C jz      loc_69170
//   0x68D72 cmp     dword ptr [rsi+4Ch], 1
//   0x68D76 jz      loc_69170
//   0x68D7C mov     esi, edx
//   0x68D7E xor     edx, edx
//   0x68D80 mov     r15, rdi
//   0x68D83 call    sub_68500
//   0x68D88 mov     rbp, rax
//   0x68D8B mov     eax, [rbx+18h]
//   0x68D8E and     eax, 0FFFF7FFBh
//   0x68D93 or      ah, 80h
//   0x68D96 mov     [rbp+18h], eax
//   0x68D99 mov     rax, [rbx+20h]
//   0x68D9D mov     [rbp+20h], rax
//   0x68DA1 mov     rax, [rbx+28h]
//   0x68DA5 mov     [rbp+28h], rax
//   0x68DA9 mov     eax, [rbx+4Ch]
//   0x68DAC mov     [rbp+4Ch], eax
//   0x68DAF cmp     rbx, rbp
//   0x68DB2 jz      short loc_68DD8
//   0x68DB4 mov     r12, [rbx+190h]
//   0x68DBB test    r12, r12
//   0x68DBE jz      short loc_68DCD
//   0x68DC0 mov     r13, r12
//   0x68DC3 sub     r13, 1
//   0x68DC7 jnz     loc_692F8
//   0x68DCD mov     qword ptr [rbp+190h], 0
//   0x68DD8 lea     rsi, [rbx+50h]
//   0x68DDC lea     rdi, [rbp+50h]
//   0x68DE0 xor     r13d, r13d
//   0x68DE3 call    sub_642D0
//   0x68DE8 mov     rdx, [rbx+68h]
//   0x68DEC movq    xmm0, rdx
//   0x68DF1 punpcklqdq xmm0, xmm0
//   0x68DF5 test    rdx, rdx
//   0x68DF8 jnz     loc_691C0
//   0x68DFE mov     rdi, [rbp+60h]
//   0x68E02 test    rdi, rdi
//   0x68E05 jz      short loc_68E1F
//   0x68E07 mov     qword ptr [rbp+68h], 0
//   0x68E0F movaps  [rsp+58h+var_48], xmm0
//   0x68E14 call    _qfree
//   0x68E19 movdqa  xmm0, [rsp+58h+var_48]
//   0x68E1F mov     [rbp+60h], r13
//   0x68E23 lea     rsi, [rbx+78h]
//   0x68E27 lea     rdi, [rbp+78h]
//   0x68E2B xor     r13d, r13d
//   0x68E2E movups  xmmword ptr [rbp+68h], xmm0
//   0x68E32 call    sub_642D0
//   0x68E37 mov     rdx, [rbx+90h]
//   0x68E3E movq    xmm0, rdx
//   0x68E43 punpcklqdq xmm0, xmm0
//   0x68E47 test    rdx, rdx
//   0x68E4A jnz     loc_69188
//   0x68E50 mov     rdi, [rbp+88h]
//   0x68E57 test    rdi, rdi
//   0x68E5A jz      short loc_68E77
//   0x68E5C mov     qword ptr [rbp+90h], 0
//   0x68E67 movaps  [rsp+58h+var_48], xmm0
//   0x68E6C call    _qfree
//   0x68E71 movdqa  xmm0, [rsp+58h+var_48]
//   0x68E77 mov     [rbp+88h], r13
//   0x68E7E lea     rsi, [rbx+0A0h]
//   0x68E85 xor     r13d, r13d
//   0x68E88 lea     rdi, [rbp+0A0h]
//   0x68E8F movups  xmmword ptr [rbp+90h], xmm0
//   0x68E96 call    sub_642D0
//   0x68E9B mov     rdx, [rbx+0B8h]
//   0x68EA2 movq    xmm0, rdx
//   0x68EA7 punpcklqdq xmm0, xmm0
//   0x68EAB test    rdx, rdx
//   0x68EAE jnz     loc_692A0
//   0x68EB4 mov     rdi, [rbp+0B0h]
//   0x68EBB test    rdi, rdi
//   0x68EBE jz      short loc_68EDB
//   0x68EC0 mov     qword ptr [rbp+0B8h], 0
//   0x68ECB movaps  [rsp+58h+var_48], xmm0
//   0x68ED0 call    _qfree
//   0x68ED5 movdqa  xmm0, [rsp+58h+var_48]
//   0x68EDB mov     [rbp+0B0h], r13
//   0x68EE2 lea     rsi, [rbx+0C8h]
//   0x68EE9 xor     r13d, r13d
//   0x68EEC lea     rdi, [rbp+0C8h]
//   0x68EF3 movups  xmmword ptr [rbp+0B8h], xmm0
//   0x68EFA call    sub_642D0
//   0x68EFF mov     rdx, [rbx+0E0h]
//   0x68F06 movq    xmm0, rdx
//   0x68F0B punpcklqdq xmm0, xmm0
//   0x68F0F test    rdx, rdx
//   0x68F12 jnz     loc_69268
//   0x68F18 mov     rdi, [rbp+0D8h]
//   0x68F1F test    rdi, rdi
//   0x68F22 jz      short loc_68F3F
//   0x68F24 mov     qword ptr [rbp+0E0h], 0
//   0x68F2F movaps  [rsp+58h+var_48], xmm0
//   0x68F34 call    _qfree
//   0x68F39 movdqa  xmm0, [rsp+58h+var_48]
//   0x68F3F mov     [rbp+0D8h], r13
//   0x68F46 lea     rsi, [rbx+0F0h]
//   0x68F4D xor     r13d, r13d
//   0x68F50 lea     rdi, [rbp+0F0h]
//   0x68F57 movups  xmmword ptr [rbp+0E0h], xmm0
//   0x68F5E call    sub_642D0
//   0x68F63 mov     rdx, [rbx+108h]
//   0x68F6A movq    xmm0, rdx
//   0x68F6F punpcklqdq xmm0, xmm0
//   0x68F73 test    rdx, rdx
//   0x68F76 jnz     loc_69230
//   0x68F7C mov     rdi, [rbp+100h]
//   0x68F83 test    rdi, rdi
//   0x68F86 jz      short loc_68FA3
//   0x68F88 mov     qword ptr [rbp+108h], 0
//   0x68F93 movaps  [rsp+58h+var_48], xmm0
//   0x68F98 call    _qfree
//   0x68F9D movdqa  xmm0, [rsp+58h+var_48]
//   0x68FA3 mov     [rbp+100h], r13
//   0x68FAA lea     rsi, [rbx+118h]
//   0x68FB1 xor     r13d, r13d
//   0x68FB4 lea     rdi, [rbp+118h]
//   0x68FBB movups  xmmword ptr [rbp+108h], xmm0
//   0x68FC2 call    sub_642D0
//   0x68FC7 mov     rdx, [rbx+130h]
//   0x68FCE movq    xmm0, rdx
//   0x68FD3 punpcklqdq xmm0, xmm0
//   0x68FD7 test    rdx, rdx
//   0x68FDA jnz     loc_691F8
//   0x68FE0 mov     rdi, [rbp+128h]
//   0x68FE7 test    rdi, rdi
//   0x68FEA jz      short loc_69007
//   0x68FEC mov     qword ptr [rbp+130h], 0
//   0x68FF7 movaps  [rsp+58h+var_48], xmm0
//   0x68FFC call    _qfree
//   0x69001 movdqa  xmm0, [rsp+58h+var_48]
//   0x69007 mov     [rbp+128h], r13
//   0x6900E xor     r13d, r13d
//   0x69011 mov     r14, 0FFFFFFFF00000000h
//   0x6901B movups  xmmword ptr [rbp+130h], xmm0
//   0x69022 mov     rax, [rbx+140h]
//   0x69029 mov     [rbp+140h], rax
//   0x69030 mov     rax, [rbx+148h]
//   0x69037 mov     [rbp+148h], rax
//   0x6903E mov     rax, [rbx+150h]
//   0x69045 mov     [rbp+150h], rax
//   0x6904C mov     rax, [rbx+200h]
//   0x69053 mov     [rbp+200h], rax
//   0x6905A mov     rax, [rbx+208h]
//   0x69061 mov     [rbp+208h], rax
//   0x69068 mov     rax, [rbx+40h]
//   0x6906C mov     [rbp+1A0h], rax
//   0x69073 mov     [rbp+1C0h], rax
//   0x6907A and     dword ptr [r15+4], 0FFFFFE77h
//   0x69082 mov     r12, [rbx+30h]
//   0x69086 test    r12, r12
//   0x69089 jz      short loc_690EF
//   0x6908B nop     dword ptr [rax+rax+00h]
//   0x69090 mov     edi, 50h ; 'P'
//   0x69095 call    j__qalloc_or_throw
//   0x6909A pxor    xmm0, xmm0
//   0x6909E mov     rsi, r12
//   0x690A1 mov     [rax+20h], r14
//   0x690A5 mov     rdi, rax
//   0x690A8 mov     rbx, rax
//   0x690AB mov     qword ptr [rax+28h], 0
//   0x690B3 mov     [rax+30h], r14
//   0x690B7 mov     qword ptr [rax+38h], 0
//   0x690BF mov     [rax+40h], r14
//   0x690C3 mov     qword ptr [rax+48h], 0
//   0x690CB movups  xmmword ptr [rax+8], xmm0
//   0x690CF call    sub_124DE0
//   0x690D4 mov     rdx, r13
//   0x690D7 mov     rsi, rbx
//   0x690DA mov     rdi, rbp
//   0x690DD call    sub_A2BA0
//   0x690E2 mov     r12, [r12+8]
//   0x690E7 mov     r13, rax
//   0x690EA test    r12, r12
//   0x690ED jnz     short loc_69090
//   0x690EF mov     eax, [rbp+4Ch]
//   0x690F2 test    eax, eax
//   0x690F4 jz      short loc_69156
//   0x690F6 mov     rdi, [rbp+10h]
//   0x690FA mov     edx, [rsp+58h+var_4C]
//   0x690FE mov     rax, [rdi+170h]
//   0x69105 mov     rcx, [rdi+178h]
//   0x6910C add     edx, 1
//   0x6910F lea     rcx, [rax+rcx*4]
//   0x69113 cmp     rax, rcx
//   0x69116 jnz     short loc_69129
//   0x69118 jmp     short loc_69139
//   0x6911A align 20h
//   0x69120 add     rax, 4
//   0x69124 cmp     rcx, rax
//   0x69127 jz      short loc_69139
//   0x69129 cmp     edx, [rax]
//   0x6912B jnz     short loc_69120
//   0x6912D cmp     rcx, rax
//   0x69130 jz      short loc_69139
//   0x69132 xor     esi, esi
//   0x69134 call    sub_1D4C00
//   0x69139 xor     esi, esi
//   0x6913B mov     rdi, rbp
//   0x6913E call    sub_1D4C00
//   0x69143 mov     rdi, r15
//   0x69146 call    sub_1D4A10
//   0x6914B test    byte ptr [rsp+58h+var_50], 2
//   0x69150 jnz     loc_692D8
//   0x69156 test    byte ptr [rsp+58h+var_50], 1
//   0x6915B jnz     short loc_69178
//   0x6915D add     rsp, 28h
//   0x69161 mov     rax, rbp
//   0x69164 pop     rbx
//   0x69165 pop     rbp
//   0x69166 pop     r12
//   0x69168 pop     r13
//   0x6916A pop     r14
//   0x6916C pop     r15
//   0x6916E retn
//   0x6916F align 10h
//   0x69170 xor     ebp, ebp
//   0x69172 jmp     short loc_6915D
//   0x69174 align 8
//   0x69178 mov     rdi, r15
//   0x6917B call    sub_18FD40
//   0x69180 jmp     short loc_6915D
//   0x69182 align 8
//   0x69188 shl     rdx, 4
//   0x6918C movaps  [rsp+58h+var_48], xmm0
//   0x69191 mov     rdi, rdx
//   0x69194 mov     r12, rdx
//   0x69197 call    _qalloc_or_throw
//   0x6919C mov     rsi, [rbx+88h]; src
//   0x691A3 mov     rdx, r12; n
//   0x691A6 mov     rdi, rax; dest
//   0x691A9 mov     r13, rax
//   0x691AC call    _memcpy
//   0x691B1 movdqa  xmm0, [rsp+58h+var_48]
//   0x691B7 jmp     loc_68E50
//   0x691BC align 20h
//   0x691C0 shl     rdx, 4
//   0x691C4 movaps  [rsp+58h+var_48], xmm0
//   0x691C9 mov     rdi, rdx
//   0x691CC mov     r12, rdx
//   0x691CF call    _qalloc_or_throw
//   0x691D4 mov     rsi, [rbx+60h]; src
//   0x691D8 mov     rdx, r12; n
//   0x691DB mov     rdi, rax; dest
//   0x691DE mov     r13, rax
//   0x691E1 call    _memcpy
//   0x691E6 movdqa  xmm0, [rsp+58h+var_48]
//   0x691EC jmp     loc_68DFE
//   0x691F1 align 8
//   0x691F8 shl     rdx, 4
//   0x691FC movaps  [rsp+58h+var_48], xmm0
//   0x69201 mov     rdi, rdx
//   0x69204 mov     r12, rdx
//   0x69207 call    _qalloc_or_throw
//   0x6920C mov     rsi, [rbx+128h]; src
//   0x69213 mov     rdx, r12; n
//   0x69216 mov     rdi, rax; dest
//   0x69219 mov     r13, rax
//   0x6921C call    _memcpy
//   0x69221 movdqa  xmm0, [rsp+58h+var_48]
//   0x69227 jmp     loc_68FE0
//   0x6922C align 10h
//   0x69230 shl     rdx, 4
//   0x69234 movaps  [rsp+58h+var_48], xmm0
//   0x69239 mov     rdi, rdx
//   0x6923C mov     r12, rdx
//   0x6923F call    _qalloc_or_throw
//   0x69244 mov     rsi, [rbx+100h]; src
//   0x6924B mov     rdx, r12; n
//   0x6924E mov     rdi, rax; dest
//   0x69251 mov     r13, rax
//   0x69254 call    _memcpy
//   0x69259 movdqa  xmm0, [rsp+58h+var_48]
//   0x6925F jmp     loc_68F7C
//   0x69264 align 8
//   0x69268 shl     rdx, 4
//   0x6926C movaps  [rsp+58h+var_48], xmm0
//   0x69271 mov     rdi, rdx
//   0x69274 mov     r12, rdx
//   0x69277 call    _qalloc_or_throw
//   0x6927C mov     rsi, [rbx+0D8h]; src
//   0x69283 mov     rdx, r12; n
//   0x69286 mov     rdi, rax; dest
//   0x69289 mov     r13, rax
//   0x6928C call    _memcpy
//   0x69291 movdqa  xmm0, [rsp+58h+var_48]
//   0x69297 jmp     loc_68F18
//   0x6929C align 20h
//   0x692A0 shl     rdx, 4
//   0x692A4 movaps  [rsp+58h+var_48], xmm0
//   0x692A9 mov     rdi, rdx
//   0x692AC mov     r12, rdx
//   0x692AF call    _qalloc_or_throw
//   0x692B4 mov     rsi, [rbx+0B0h]; src
//   0x692BB mov     rdx, r12; n
//   0x692BE mov     rdi, rax; dest
//   0x692C1 mov     r13, rax
//   0x692C4 call    _memcpy
//   0x692C9 movdqa  xmm0, [rsp+58h+var_48]
//   0x692CF jmp     loc_68EB4
//   0x692D4 align 8
//   0x692D8 cmp     qword ptr [rbp+178h], 1
//   0x692E0 jnz     loc_69156
//   0x692E6 mov     rdi, rbp
//   0x692E9 call    sub_A7D60
//   0x692EE jmp     loc_69156
//   0x692F3 align 8
//   0x692F8 mov     r14, [rbx+188h]
//   0x692FF mov     rdi, [rbp+188h]; dest
//   0x69306 cmp     [rbp+198h], r12
//   0x6930D jb      short loc_69333
//   0x6930F mov     [rbp+190h], r12
//   0x69316 mov     rdx, r13; n
//   0x69319 mov     rsi, r14; src
//   0x6931C call    _memmove
//   0x69321 mov     rax, [rbp+188h]
//   0x69328 mov     byte ptr [rax+r12-1], 0
//   0x6932E jmp     loc_68DD8
//   0x69333 lea     rax, [rbp+188h]
//   0x6933A mov     rsi, rdi
//   0x6933D mov     ecx, 1
//   0x69342 mov     rdx, r12
//   0x69345 mov     rdi, rax
//   0x69348 call    _qvector_reserve
//   0x6934D mov     [rbp+188h], rax
//   0x69354 mov     rdi, rax
//   0x69357 jmp     short loc_6930F
//   0x69359 mov     rbp, rax
//   0x6935C jmp     loc_2F4EC
// ============================================================

void sub_68D50(/* signature unknown */)
{
    // see disassembly above
}

