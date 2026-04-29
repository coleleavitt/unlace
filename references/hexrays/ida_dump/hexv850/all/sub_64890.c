// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x64890
// Name:           sub_64890
// Function size:  1553 bytes (342 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x64890 push    r15
//   0x64892 push    r14
//   0x64894 push    r13
//   0x64896 push    r12
//   0x64898 push    rbp
//   0x64899 push    rbx
//   0x6489A mov     rbx, rsi
//   0x6489D sub     rsp, 28h
//   0x648A1 mov     [rsp+58h+var_4C], edx
//   0x648A5 mov     [rsp+58h+var_50], ecx
//   0x648A9 test    rsi, rsi
//   0x648AC jz      loc_64CB0
//   0x648B2 cmp     dword ptr [rsi+4Ch], 1
//   0x648B6 jz      loc_64CB0
//   0x648BC mov     esi, edx
//   0x648BE xor     edx, edx
//   0x648C0 mov     r15, rdi
//   0x648C3 call    sub_64040
//   0x648C8 mov     rbp, rax
//   0x648CB mov     eax, [rbx+18h]
//   0x648CE and     eax, 0FFFF7FFBh
//   0x648D3 or      ah, 80h
//   0x648D6 mov     [rbp+18h], eax
//   0x648D9 mov     rax, [rbx+20h]
//   0x648DD mov     [rbp+20h], rax
//   0x648E1 mov     rax, [rbx+28h]
//   0x648E5 mov     [rbp+28h], rax
//   0x648E9 mov     eax, [rbx+4Ch]
//   0x648EC mov     [rbp+4Ch], eax
//   0x648EF cmp     rbx, rbp
//   0x648F2 jz      short loc_64918
//   0x648F4 mov     r12, [rbx+190h]
//   0x648FB test    r12, r12
//   0x648FE jz      short loc_6490D
//   0x64900 mov     r13, r12
//   0x64903 sub     r13, 1
//   0x64907 jnz     loc_64E38
//   0x6490D mov     qword ptr [rbp+190h], 0
//   0x64918 lea     rsi, [rbx+50h]
//   0x6491C lea     rdi, [rbp+50h]
//   0x64920 xor     r13d, r13d
//   0x64923 call    sub_5FE50
//   0x64928 mov     rdx, [rbx+68h]
//   0x6492C movq    xmm0, rdx
//   0x64931 punpcklqdq xmm0, xmm0
//   0x64935 test    rdx, rdx
//   0x64938 jnz     loc_64D00
//   0x6493E mov     rdi, [rbp+60h]
//   0x64942 test    rdi, rdi
//   0x64945 jz      short loc_6495F
//   0x64947 mov     qword ptr [rbp+68h], 0
//   0x6494F movaps  [rsp+58h+var_48], xmm0
//   0x64954 call    _qfree
//   0x64959 movdqa  xmm0, [rsp+58h+var_48]
//   0x6495F mov     [rbp+60h], r13
//   0x64963 lea     rsi, [rbx+78h]
//   0x64967 lea     rdi, [rbp+78h]
//   0x6496B xor     r13d, r13d
//   0x6496E movups  xmmword ptr [rbp+68h], xmm0
//   0x64972 call    sub_5FE50
//   0x64977 mov     rdx, [rbx+90h]
//   0x6497E movq    xmm0, rdx
//   0x64983 punpcklqdq xmm0, xmm0
//   0x64987 test    rdx, rdx
//   0x6498A jnz     loc_64CC8
//   0x64990 mov     rdi, [rbp+88h]
//   0x64997 test    rdi, rdi
//   0x6499A jz      short loc_649B7
//   0x6499C mov     qword ptr [rbp+90h], 0
//   0x649A7 movaps  [rsp+58h+var_48], xmm0
//   0x649AC call    _qfree
//   0x649B1 movdqa  xmm0, [rsp+58h+var_48]
//   0x649B7 mov     [rbp+88h], r13
//   0x649BE lea     rsi, [rbx+0A0h]
//   0x649C5 xor     r13d, r13d
//   0x649C8 lea     rdi, [rbp+0A0h]
//   0x649CF movups  xmmword ptr [rbp+90h], xmm0
//   0x649D6 call    sub_5FE50
//   0x649DB mov     rdx, [rbx+0B8h]
//   0x649E2 movq    xmm0, rdx
//   0x649E7 punpcklqdq xmm0, xmm0
//   0x649EB test    rdx, rdx
//   0x649EE jnz     loc_64DE0
//   0x649F4 mov     rdi, [rbp+0B0h]
//   0x649FB test    rdi, rdi
//   0x649FE jz      short loc_64A1B
//   0x64A00 mov     qword ptr [rbp+0B8h], 0
//   0x64A0B movaps  [rsp+58h+var_48], xmm0
//   0x64A10 call    _qfree
//   0x64A15 movdqa  xmm0, [rsp+58h+var_48]
//   0x64A1B mov     [rbp+0B0h], r13
//   0x64A22 lea     rsi, [rbx+0C8h]
//   0x64A29 xor     r13d, r13d
//   0x64A2C lea     rdi, [rbp+0C8h]
//   0x64A33 movups  xmmword ptr [rbp+0B8h], xmm0
//   0x64A3A call    sub_5FE50
//   0x64A3F mov     rdx, [rbx+0E0h]
//   0x64A46 movq    xmm0, rdx
//   0x64A4B punpcklqdq xmm0, xmm0
//   0x64A4F test    rdx, rdx
//   0x64A52 jnz     loc_64DA8
//   0x64A58 mov     rdi, [rbp+0D8h]
//   0x64A5F test    rdi, rdi
//   0x64A62 jz      short loc_64A7F
//   0x64A64 mov     qword ptr [rbp+0E0h], 0
//   0x64A6F movaps  [rsp+58h+var_48], xmm0
//   0x64A74 call    _qfree
//   0x64A79 movdqa  xmm0, [rsp+58h+var_48]
//   0x64A7F mov     [rbp+0D8h], r13
//   0x64A86 lea     rsi, [rbx+0F0h]
//   0x64A8D xor     r13d, r13d
//   0x64A90 lea     rdi, [rbp+0F0h]
//   0x64A97 movups  xmmword ptr [rbp+0E0h], xmm0
//   0x64A9E call    sub_5FE50
//   0x64AA3 mov     rdx, [rbx+108h]
//   0x64AAA movq    xmm0, rdx
//   0x64AAF punpcklqdq xmm0, xmm0
//   0x64AB3 test    rdx, rdx
//   0x64AB6 jnz     loc_64D70
//   0x64ABC mov     rdi, [rbp+100h]
//   0x64AC3 test    rdi, rdi
//   0x64AC6 jz      short loc_64AE3
//   0x64AC8 mov     qword ptr [rbp+108h], 0
//   0x64AD3 movaps  [rsp+58h+var_48], xmm0
//   0x64AD8 call    _qfree
//   0x64ADD movdqa  xmm0, [rsp+58h+var_48]
//   0x64AE3 mov     [rbp+100h], r13
//   0x64AEA lea     rsi, [rbx+118h]
//   0x64AF1 xor     r13d, r13d
//   0x64AF4 lea     rdi, [rbp+118h]
//   0x64AFB movups  xmmword ptr [rbp+108h], xmm0
//   0x64B02 call    sub_5FE50
//   0x64B07 mov     rdx, [rbx+130h]
//   0x64B0E movq    xmm0, rdx
//   0x64B13 punpcklqdq xmm0, xmm0
//   0x64B17 test    rdx, rdx
//   0x64B1A jnz     loc_64D38
//   0x64B20 mov     rdi, [rbp+128h]
//   0x64B27 test    rdi, rdi
//   0x64B2A jz      short loc_64B47
//   0x64B2C mov     qword ptr [rbp+130h], 0
//   0x64B37 movaps  [rsp+58h+var_48], xmm0
//   0x64B3C call    _qfree
//   0x64B41 movdqa  xmm0, [rsp+58h+var_48]
//   0x64B47 mov     [rbp+128h], r13
//   0x64B4E xor     r13d, r13d
//   0x64B51 mov     r14, 0FFFFFFFF00000000h
//   0x64B5B movups  xmmword ptr [rbp+130h], xmm0
//   0x64B62 mov     rax, [rbx+140h]
//   0x64B69 mov     [rbp+140h], rax
//   0x64B70 mov     rax, [rbx+148h]
//   0x64B77 mov     [rbp+148h], rax
//   0x64B7E mov     rax, [rbx+150h]
//   0x64B85 mov     [rbp+150h], rax
//   0x64B8C mov     rax, [rbx+200h]
//   0x64B93 mov     [rbp+200h], rax
//   0x64B9A mov     rax, [rbx+208h]
//   0x64BA1 mov     [rbp+208h], rax
//   0x64BA8 mov     rax, [rbx+40h]
//   0x64BAC mov     [rbp+1A0h], rax
//   0x64BB3 mov     [rbp+1C0h], rax
//   0x64BBA and     dword ptr [r15+4], 0FFFFFE77h
//   0x64BC2 mov     r12, [rbx+30h]
//   0x64BC6 test    r12, r12
//   0x64BC9 jz      short loc_64C2F
//   0x64BCB nop     dword ptr [rax+rax+00h]
//   0x64BD0 mov     edi, 50h ; 'P'
//   0x64BD5 call    j__qalloc_or_throw
//   0x64BDA pxor    xmm0, xmm0
//   0x64BDE mov     rsi, r12
//   0x64BE1 mov     [rax+20h], r14
//   0x64BE5 mov     rdi, rax
//   0x64BE8 mov     rbx, rax
//   0x64BEB mov     qword ptr [rax+28h], 0
//   0x64BF3 mov     [rax+30h], r14
//   0x64BF7 mov     qword ptr [rax+38h], 0
//   0x64BFF mov     [rax+40h], r14
//   0x64C03 mov     qword ptr [rax+48h], 0
//   0x64C0B movups  xmmword ptr [rax+8], xmm0
//   0x64C0F call    sub_1207E0
//   0x64C14 mov     rdx, r13
//   0x64C17 mov     rsi, rbx
//   0x64C1A mov     rdi, rbp
//   0x64C1D call    sub_9E5A0
//   0x64C22 mov     r12, [r12+8]
//   0x64C27 mov     r13, rax
//   0x64C2A test    r12, r12
//   0x64C2D jnz     short loc_64BD0
//   0x64C2F mov     eax, [rbp+4Ch]
//   0x64C32 test    eax, eax
//   0x64C34 jz      short loc_64C96
//   0x64C36 mov     rdi, [rbp+10h]
//   0x64C3A mov     edx, [rsp+58h+var_4C]
//   0x64C3E mov     rax, [rdi+170h]
//   0x64C45 mov     rcx, [rdi+178h]
//   0x64C4C add     edx, 1
//   0x64C4F lea     rcx, [rax+rcx*4]
//   0x64C53 cmp     rax, rcx
//   0x64C56 jnz     short loc_64C69
//   0x64C58 jmp     short loc_64C79
//   0x64C5A align 20h
//   0x64C60 add     rax, 4
//   0x64C64 cmp     rcx, rax
//   0x64C67 jz      short loc_64C79
//   0x64C69 cmp     edx, [rax]
//   0x64C6B jnz     short loc_64C60
//   0x64C6D cmp     rcx, rax
//   0x64C70 jz      short loc_64C79
//   0x64C72 xor     esi, esi
//   0x64C74 call    sub_1D0380
//   0x64C79 xor     esi, esi
//   0x64C7B mov     rdi, rbp
//   0x64C7E call    sub_1D0380
//   0x64C83 mov     rdi, r15
//   0x64C86 call    sub_1D0190
//   0x64C8B test    byte ptr [rsp+58h+var_50], 2
//   0x64C90 jnz     loc_64E18
//   0x64C96 test    byte ptr [rsp+58h+var_50], 1
//   0x64C9B jnz     short loc_64CB8
//   0x64C9D add     rsp, 28h
//   0x64CA1 mov     rax, rbp
//   0x64CA4 pop     rbx
//   0x64CA5 pop     rbp
//   0x64CA6 pop     r12
//   0x64CA8 pop     r13
//   0x64CAA pop     r14
//   0x64CAC pop     r15
//   0x64CAE retn
//   0x64CAF align 10h
//   0x64CB0 xor     ebp, ebp
//   0x64CB2 jmp     short loc_64C9D
//   0x64CB4 align 8
//   0x64CB8 mov     rdi, r15
//   0x64CBB call    sub_18B740
//   0x64CC0 jmp     short loc_64C9D
//   0x64CC2 align 8
//   0x64CC8 shl     rdx, 4
//   0x64CCC movaps  [rsp+58h+var_48], xmm0
//   0x64CD1 mov     rdi, rdx
//   0x64CD4 mov     r12, rdx
//   0x64CD7 call    _qalloc_or_throw
//   0x64CDC mov     rsi, [rbx+88h]; src
//   0x64CE3 mov     rdx, r12; n
//   0x64CE6 mov     rdi, rax; dest
//   0x64CE9 mov     r13, rax
//   0x64CEC call    _memcpy
//   0x64CF1 movdqa  xmm0, [rsp+58h+var_48]
//   0x64CF7 jmp     loc_64990
//   0x64CFC align 20h
//   0x64D00 shl     rdx, 4
//   0x64D04 movaps  [rsp+58h+var_48], xmm0
//   0x64D09 mov     rdi, rdx
//   0x64D0C mov     r12, rdx
//   0x64D0F call    _qalloc_or_throw
//   0x64D14 mov     rsi, [rbx+60h]; src
//   0x64D18 mov     rdx, r12; n
//   0x64D1B mov     rdi, rax; dest
//   0x64D1E mov     r13, rax
//   0x64D21 call    _memcpy
//   0x64D26 movdqa  xmm0, [rsp+58h+var_48]
//   0x64D2C jmp     loc_6493E
//   0x64D31 align 8
//   0x64D38 shl     rdx, 4
//   0x64D3C movaps  [rsp+58h+var_48], xmm0
//   0x64D41 mov     rdi, rdx
//   0x64D44 mov     r12, rdx
//   0x64D47 call    _qalloc_or_throw
//   0x64D4C mov     rsi, [rbx+128h]; src
//   0x64D53 mov     rdx, r12; n
//   0x64D56 mov     rdi, rax; dest
//   0x64D59 mov     r13, rax
//   0x64D5C call    _memcpy
//   0x64D61 movdqa  xmm0, [rsp+58h+var_48]
//   0x64D67 jmp     loc_64B20
//   0x64D6C align 10h
//   0x64D70 shl     rdx, 4
//   0x64D74 movaps  [rsp+58h+var_48], xmm0
//   0x64D79 mov     rdi, rdx
//   0x64D7C mov     r12, rdx
//   0x64D7F call    _qalloc_or_throw
//   0x64D84 mov     rsi, [rbx+100h]; src
//   0x64D8B mov     rdx, r12; n
//   0x64D8E mov     rdi, rax; dest
//   0x64D91 mov     r13, rax
//   0x64D94 call    _memcpy
//   0x64D99 movdqa  xmm0, [rsp+58h+var_48]
//   0x64D9F jmp     loc_64ABC
//   0x64DA4 align 8
//   0x64DA8 shl     rdx, 4
//   0x64DAC movaps  [rsp+58h+var_48], xmm0
//   0x64DB1 mov     rdi, rdx
//   0x64DB4 mov     r12, rdx
//   0x64DB7 call    _qalloc_or_throw
//   0x64DBC mov     rsi, [rbx+0D8h]; src
//   0x64DC3 mov     rdx, r12; n
//   0x64DC6 mov     rdi, rax; dest
//   0x64DC9 mov     r13, rax
//   0x64DCC call    _memcpy
//   0x64DD1 movdqa  xmm0, [rsp+58h+var_48]
//   0x64DD7 jmp     loc_64A58
//   0x64DDC align 20h
//   0x64DE0 shl     rdx, 4
//   0x64DE4 movaps  [rsp+58h+var_48], xmm0
//   0x64DE9 mov     rdi, rdx
//   0x64DEC mov     r12, rdx
//   0x64DEF call    _qalloc_or_throw
//   0x64DF4 mov     rsi, [rbx+0B0h]; src
//   0x64DFB mov     rdx, r12; n
//   0x64DFE mov     rdi, rax; dest
//   0x64E01 mov     r13, rax
//   0x64E04 call    _memcpy
//   0x64E09 movdqa  xmm0, [rsp+58h+var_48]
//   0x64E0F jmp     loc_649F4
//   0x64E14 align 8
//   0x64E18 cmp     qword ptr [rbp+178h], 1
//   0x64E20 jnz     loc_64C96
//   0x64E26 mov     rdi, rbp
//   0x64E29 call    sub_A3760
//   0x64E2E jmp     loc_64C96
//   0x64E33 align 8
//   0x64E38 mov     r14, [rbx+188h]
//   0x64E3F mov     rdi, [rbp+188h]; dest
//   0x64E46 cmp     [rbp+198h], r12
//   0x64E4D jb      short loc_64E73
//   0x64E4F mov     [rbp+190h], r12
//   0x64E56 mov     rdx, r13; n
//   0x64E59 mov     rsi, r14; src
//   0x64E5C call    _memmove
//   0x64E61 mov     rax, [rbp+188h]
//   0x64E68 mov     byte ptr [rax+r12-1], 0
//   0x64E6E jmp     loc_64918
//   0x64E73 lea     rax, [rbp+188h]
//   0x64E7A mov     rsi, rdi
//   0x64E7D mov     ecx, 1
//   0x64E82 mov     rdx, r12
//   0x64E85 mov     rdi, rax
//   0x64E88 call    _qvector_reserve
//   0x64E8D mov     [rbp+188h], rax
//   0x64E94 mov     rdi, rax
//   0x64E97 jmp     short loc_64E4F
//   0x64E99 mov     rbp, rax
//   0x64E9C jmp     loc_2C4AC
// ============================================================

void sub_64890(/* signature unknown */)
{
    // see disassembly above
}

