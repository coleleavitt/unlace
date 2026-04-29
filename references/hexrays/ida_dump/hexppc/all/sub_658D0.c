// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x658D0
// Name:           sub_658D0
// Function size:  1553 bytes (342 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x658D0 push    r15
//   0x658D2 push    r14
//   0x658D4 push    r13
//   0x658D6 push    r12
//   0x658D8 push    rbp
//   0x658D9 push    rbx
//   0x658DA mov     rbx, rsi
//   0x658DD sub     rsp, 28h
//   0x658E1 mov     [rsp+58h+var_4C], edx
//   0x658E5 mov     [rsp+58h+var_50], ecx
//   0x658E9 test    rsi, rsi
//   0x658EC jz      loc_65CF0
//   0x658F2 cmp     dword ptr [rsi+4Ch], 1
//   0x658F6 jz      loc_65CF0
//   0x658FC mov     esi, edx
//   0x658FE xor     edx, edx
//   0x65900 mov     r15, rdi
//   0x65903 call    sub_65080
//   0x65908 mov     rbp, rax
//   0x6590B mov     eax, [rbx+18h]
//   0x6590E and     eax, 0FFFF7FFBh
//   0x65913 or      ah, 80h
//   0x65916 mov     [rbp+18h], eax
//   0x65919 mov     rax, [rbx+20h]
//   0x6591D mov     [rbp+20h], rax
//   0x65921 mov     rax, [rbx+28h]
//   0x65925 mov     [rbp+28h], rax
//   0x65929 mov     eax, [rbx+4Ch]
//   0x6592C mov     [rbp+4Ch], eax
//   0x6592F cmp     rbx, rbp
//   0x65932 jz      short loc_65958
//   0x65934 mov     r12, [rbx+190h]
//   0x6593B test    r12, r12
//   0x6593E jz      short loc_6594D
//   0x65940 mov     r13, r12
//   0x65943 sub     r13, 1
//   0x65947 jnz     loc_65E78
//   0x6594D mov     qword ptr [rbp+190h], 0
//   0x65958 lea     rsi, [rbx+50h]
//   0x6595C lea     rdi, [rbp+50h]
//   0x65960 xor     r13d, r13d
//   0x65963 call    sub_60E90
//   0x65968 mov     rdx, [rbx+68h]
//   0x6596C movq    xmm0, rdx
//   0x65971 punpcklqdq xmm0, xmm0
//   0x65975 test    rdx, rdx
//   0x65978 jnz     loc_65D40
//   0x6597E mov     rdi, [rbp+60h]
//   0x65982 test    rdi, rdi
//   0x65985 jz      short loc_6599F
//   0x65987 mov     qword ptr [rbp+68h], 0
//   0x6598F movaps  [rsp+58h+var_48], xmm0
//   0x65994 call    _qfree
//   0x65999 movdqa  xmm0, [rsp+58h+var_48]
//   0x6599F mov     [rbp+60h], r13
//   0x659A3 lea     rsi, [rbx+78h]
//   0x659A7 lea     rdi, [rbp+78h]
//   0x659AB xor     r13d, r13d
//   0x659AE movups  xmmword ptr [rbp+68h], xmm0
//   0x659B2 call    sub_60E90
//   0x659B7 mov     rdx, [rbx+90h]
//   0x659BE movq    xmm0, rdx
//   0x659C3 punpcklqdq xmm0, xmm0
//   0x659C7 test    rdx, rdx
//   0x659CA jnz     loc_65D08
//   0x659D0 mov     rdi, [rbp+88h]
//   0x659D7 test    rdi, rdi
//   0x659DA jz      short loc_659F7
//   0x659DC mov     qword ptr [rbp+90h], 0
//   0x659E7 movaps  [rsp+58h+var_48], xmm0
//   0x659EC call    _qfree
//   0x659F1 movdqa  xmm0, [rsp+58h+var_48]
//   0x659F7 mov     [rbp+88h], r13
//   0x659FE lea     rsi, [rbx+0A0h]
//   0x65A05 xor     r13d, r13d
//   0x65A08 lea     rdi, [rbp+0A0h]
//   0x65A0F movups  xmmword ptr [rbp+90h], xmm0
//   0x65A16 call    sub_60E90
//   0x65A1B mov     rdx, [rbx+0B8h]
//   0x65A22 movq    xmm0, rdx
//   0x65A27 punpcklqdq xmm0, xmm0
//   0x65A2B test    rdx, rdx
//   0x65A2E jnz     loc_65E20
//   0x65A34 mov     rdi, [rbp+0B0h]
//   0x65A3B test    rdi, rdi
//   0x65A3E jz      short loc_65A5B
//   0x65A40 mov     qword ptr [rbp+0B8h], 0
//   0x65A4B movaps  [rsp+58h+var_48], xmm0
//   0x65A50 call    _qfree
//   0x65A55 movdqa  xmm0, [rsp+58h+var_48]
//   0x65A5B mov     [rbp+0B0h], r13
//   0x65A62 lea     rsi, [rbx+0C8h]
//   0x65A69 xor     r13d, r13d
//   0x65A6C lea     rdi, [rbp+0C8h]
//   0x65A73 movups  xmmword ptr [rbp+0B8h], xmm0
//   0x65A7A call    sub_60E90
//   0x65A7F mov     rdx, [rbx+0E0h]
//   0x65A86 movq    xmm0, rdx
//   0x65A8B punpcklqdq xmm0, xmm0
//   0x65A8F test    rdx, rdx
//   0x65A92 jnz     loc_65DE8
//   0x65A98 mov     rdi, [rbp+0D8h]
//   0x65A9F test    rdi, rdi
//   0x65AA2 jz      short loc_65ABF
//   0x65AA4 mov     qword ptr [rbp+0E0h], 0
//   0x65AAF movaps  [rsp+58h+var_48], xmm0
//   0x65AB4 call    _qfree
//   0x65AB9 movdqa  xmm0, [rsp+58h+var_48]
//   0x65ABF mov     [rbp+0D8h], r13
//   0x65AC6 lea     rsi, [rbx+0F0h]
//   0x65ACD xor     r13d, r13d
//   0x65AD0 lea     rdi, [rbp+0F0h]
//   0x65AD7 movups  xmmword ptr [rbp+0E0h], xmm0
//   0x65ADE call    sub_60E90
//   0x65AE3 mov     rdx, [rbx+108h]
//   0x65AEA movq    xmm0, rdx
//   0x65AEF punpcklqdq xmm0, xmm0
//   0x65AF3 test    rdx, rdx
//   0x65AF6 jnz     loc_65DB0
//   0x65AFC mov     rdi, [rbp+100h]
//   0x65B03 test    rdi, rdi
//   0x65B06 jz      short loc_65B23
//   0x65B08 mov     qword ptr [rbp+108h], 0
//   0x65B13 movaps  [rsp+58h+var_48], xmm0
//   0x65B18 call    _qfree
//   0x65B1D movdqa  xmm0, [rsp+58h+var_48]
//   0x65B23 mov     [rbp+100h], r13
//   0x65B2A lea     rsi, [rbx+118h]
//   0x65B31 xor     r13d, r13d
//   0x65B34 lea     rdi, [rbp+118h]
//   0x65B3B movups  xmmword ptr [rbp+108h], xmm0
//   0x65B42 call    sub_60E90
//   0x65B47 mov     rdx, [rbx+130h]
//   0x65B4E movq    xmm0, rdx
//   0x65B53 punpcklqdq xmm0, xmm0
//   0x65B57 test    rdx, rdx
//   0x65B5A jnz     loc_65D78
//   0x65B60 mov     rdi, [rbp+128h]
//   0x65B67 test    rdi, rdi
//   0x65B6A jz      short loc_65B87
//   0x65B6C mov     qword ptr [rbp+130h], 0
//   0x65B77 movaps  [rsp+58h+var_48], xmm0
//   0x65B7C call    _qfree
//   0x65B81 movdqa  xmm0, [rsp+58h+var_48]
//   0x65B87 mov     [rbp+128h], r13
//   0x65B8E xor     r13d, r13d
//   0x65B91 mov     r14, 0FFFFFFFF00000000h
//   0x65B9B movups  xmmword ptr [rbp+130h], xmm0
//   0x65BA2 mov     rax, [rbx+140h]
//   0x65BA9 mov     [rbp+140h], rax
//   0x65BB0 mov     rax, [rbx+148h]
//   0x65BB7 mov     [rbp+148h], rax
//   0x65BBE mov     rax, [rbx+150h]
//   0x65BC5 mov     [rbp+150h], rax
//   0x65BCC mov     rax, [rbx+200h]
//   0x65BD3 mov     [rbp+200h], rax
//   0x65BDA mov     rax, [rbx+208h]
//   0x65BE1 mov     [rbp+208h], rax
//   0x65BE8 mov     rax, [rbx+40h]
//   0x65BEC mov     [rbp+1A0h], rax
//   0x65BF3 mov     [rbp+1C0h], rax
//   0x65BFA and     dword ptr [r15+4], 0FFFFFE77h
//   0x65C02 mov     r12, [rbx+30h]
//   0x65C06 test    r12, r12
//   0x65C09 jz      short loc_65C6F
//   0x65C0B nop     dword ptr [rax+rax+00h]
//   0x65C10 mov     edi, 50h ; 'P'
//   0x65C15 call    j__qalloc_or_throw
//   0x65C1A pxor    xmm0, xmm0
//   0x65C1E mov     rsi, r12
//   0x65C21 mov     [rax+20h], r14
//   0x65C25 mov     rdi, rax
//   0x65C28 mov     rbx, rax
//   0x65C2B mov     qword ptr [rax+28h], 0
//   0x65C33 mov     [rax+30h], r14
//   0x65C37 mov     qword ptr [rax+38h], 0
//   0x65C3F mov     [rax+40h], r14
//   0x65C43 mov     qword ptr [rax+48h], 0
//   0x65C4B movups  xmmword ptr [rax+8], xmm0
//   0x65C4F call    sub_121960
//   0x65C54 mov     rdx, r13
//   0x65C57 mov     rsi, rbx
//   0x65C5A mov     rdi, rbp
//   0x65C5D call    sub_9F720
//   0x65C62 mov     r12, [r12+8]
//   0x65C67 mov     r13, rax
//   0x65C6A test    r12, r12
//   0x65C6D jnz     short loc_65C10
//   0x65C6F mov     eax, [rbp+4Ch]
//   0x65C72 test    eax, eax
//   0x65C74 jz      short loc_65CD6
//   0x65C76 mov     rdi, [rbp+10h]
//   0x65C7A mov     edx, [rsp+58h+var_4C]
//   0x65C7E mov     rax, [rdi+170h]
//   0x65C85 mov     rcx, [rdi+178h]
//   0x65C8C add     edx, 1
//   0x65C8F lea     rcx, [rax+rcx*4]
//   0x65C93 cmp     rax, rcx
//   0x65C96 jnz     short loc_65CA9
//   0x65C98 jmp     short loc_65CB9
//   0x65C9A align 20h
//   0x65CA0 add     rax, 4
//   0x65CA4 cmp     rcx, rax
//   0x65CA7 jz      short loc_65CB9
//   0x65CA9 cmp     edx, [rax]
//   0x65CAB jnz     short loc_65CA0
//   0x65CAD cmp     rcx, rax
//   0x65CB0 jz      short loc_65CB9
//   0x65CB2 xor     esi, esi
//   0x65CB4 call    sub_1D1600
//   0x65CB9 xor     esi, esi
//   0x65CBB mov     rdi, rbp
//   0x65CBE call    sub_1D1600
//   0x65CC3 mov     rdi, r15
//   0x65CC6 call    sub_1D1410
//   0x65CCB test    byte ptr [rsp+58h+var_50], 2
//   0x65CD0 jnz     loc_65E58
//   0x65CD6 test    byte ptr [rsp+58h+var_50], 1
//   0x65CDB jnz     short loc_65CF8
//   0x65CDD add     rsp, 28h
//   0x65CE1 mov     rax, rbp
//   0x65CE4 pop     rbx
//   0x65CE5 pop     rbp
//   0x65CE6 pop     r12
//   0x65CE8 pop     r13
//   0x65CEA pop     r14
//   0x65CEC pop     r15
//   0x65CEE retn
//   0x65CEF align 10h
//   0x65CF0 xor     ebp, ebp
//   0x65CF2 jmp     short loc_65CDD
//   0x65CF4 align 8
//   0x65CF8 mov     rdi, r15
//   0x65CFB call    sub_18C8C0
//   0x65D00 jmp     short loc_65CDD
//   0x65D02 align 8
//   0x65D08 shl     rdx, 4
//   0x65D0C movaps  [rsp+58h+var_48], xmm0
//   0x65D11 mov     rdi, rdx
//   0x65D14 mov     r12, rdx
//   0x65D17 call    _qalloc_or_throw
//   0x65D1C mov     rsi, [rbx+88h]; src
//   0x65D23 mov     rdx, r12; n
//   0x65D26 mov     rdi, rax; dest
//   0x65D29 mov     r13, rax
//   0x65D2C call    _memcpy
//   0x65D31 movdqa  xmm0, [rsp+58h+var_48]
//   0x65D37 jmp     loc_659D0
//   0x65D3C align 20h
//   0x65D40 shl     rdx, 4
//   0x65D44 movaps  [rsp+58h+var_48], xmm0
//   0x65D49 mov     rdi, rdx
//   0x65D4C mov     r12, rdx
//   0x65D4F call    _qalloc_or_throw
//   0x65D54 mov     rsi, [rbx+60h]; src
//   0x65D58 mov     rdx, r12; n
//   0x65D5B mov     rdi, rax; dest
//   0x65D5E mov     r13, rax
//   0x65D61 call    _memcpy
//   0x65D66 movdqa  xmm0, [rsp+58h+var_48]
//   0x65D6C jmp     loc_6597E
//   0x65D71 align 8
//   0x65D78 shl     rdx, 4
//   0x65D7C movaps  [rsp+58h+var_48], xmm0
//   0x65D81 mov     rdi, rdx
//   0x65D84 mov     r12, rdx
//   0x65D87 call    _qalloc_or_throw
//   0x65D8C mov     rsi, [rbx+128h]; src
//   0x65D93 mov     rdx, r12; n
//   0x65D96 mov     rdi, rax; dest
//   0x65D99 mov     r13, rax
//   0x65D9C call    _memcpy
//   0x65DA1 movdqa  xmm0, [rsp+58h+var_48]
//   0x65DA7 jmp     loc_65B60
//   0x65DAC align 10h
//   0x65DB0 shl     rdx, 4
//   0x65DB4 movaps  [rsp+58h+var_48], xmm0
//   0x65DB9 mov     rdi, rdx
//   0x65DBC mov     r12, rdx
//   0x65DBF call    _qalloc_or_throw
//   0x65DC4 mov     rsi, [rbx+100h]; src
//   0x65DCB mov     rdx, r12; n
//   0x65DCE mov     rdi, rax; dest
//   0x65DD1 mov     r13, rax
//   0x65DD4 call    _memcpy
//   0x65DD9 movdqa  xmm0, [rsp+58h+var_48]
//   0x65DDF jmp     loc_65AFC
//   0x65DE4 align 8
//   0x65DE8 shl     rdx, 4
//   0x65DEC movaps  [rsp+58h+var_48], xmm0
//   0x65DF1 mov     rdi, rdx
//   0x65DF4 mov     r12, rdx
//   0x65DF7 call    _qalloc_or_throw
//   0x65DFC mov     rsi, [rbx+0D8h]; src
//   0x65E03 mov     rdx, r12; n
//   0x65E06 mov     rdi, rax; dest
//   0x65E09 mov     r13, rax
//   0x65E0C call    _memcpy
//   0x65E11 movdqa  xmm0, [rsp+58h+var_48]
//   0x65E17 jmp     loc_65A98
//   0x65E1C align 20h
//   0x65E20 shl     rdx, 4
//   0x65E24 movaps  [rsp+58h+var_48], xmm0
//   0x65E29 mov     rdi, rdx
//   0x65E2C mov     r12, rdx
//   0x65E2F call    _qalloc_or_throw
//   0x65E34 mov     rsi, [rbx+0B0h]; src
//   0x65E3B mov     rdx, r12; n
//   0x65E3E mov     rdi, rax; dest
//   0x65E41 mov     r13, rax
//   0x65E44 call    _memcpy
//   0x65E49 movdqa  xmm0, [rsp+58h+var_48]
//   0x65E4F jmp     loc_65A34
//   0x65E54 align 8
//   0x65E58 cmp     qword ptr [rbp+178h], 1
//   0x65E60 jnz     loc_65CD6
//   0x65E66 mov     rdi, rbp
//   0x65E69 call    sub_A48E0
//   0x65E6E jmp     loc_65CD6
//   0x65E73 align 8
//   0x65E78 mov     r14, [rbx+188h]
//   0x65E7F mov     rdi, [rbp+188h]; dest
//   0x65E86 cmp     [rbp+198h], r12
//   0x65E8D jb      short loc_65EB3
//   0x65E8F mov     [rbp+190h], r12
//   0x65E96 mov     rdx, r13; n
//   0x65E99 mov     rsi, r14; src
//   0x65E9C call    _memmove
//   0x65EA1 mov     rax, [rbp+188h]
//   0x65EA8 mov     byte ptr [rax+r12-1], 0
//   0x65EAE jmp     loc_65958
//   0x65EB3 lea     rax, [rbp+188h]
//   0x65EBA mov     rsi, rdi
//   0x65EBD mov     ecx, 1
//   0x65EC2 mov     rdx, r12
//   0x65EC5 mov     rdi, rax
//   0x65EC8 call    _qvector_reserve
//   0x65ECD mov     [rbp+188h], rax
//   0x65ED4 mov     rdi, rax
//   0x65ED7 jmp     short loc_65E8F
//   0x65ED9 mov     rbp, rax
//   0x65EDC jmp     loc_2C4AC
// ============================================================

void sub_658D0(/* signature unknown */)
{
    // see disassembly above
}

