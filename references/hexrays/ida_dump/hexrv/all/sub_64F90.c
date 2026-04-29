// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x64F90
// Name:           sub_64F90
// Function size:  1553 bytes (342 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x64F90 push    r15
//   0x64F92 push    r14
//   0x64F94 push    r13
//   0x64F96 push    r12
//   0x64F98 push    rbp
//   0x64F99 push    rbx
//   0x64F9A mov     rbx, rsi
//   0x64F9D sub     rsp, 28h
//   0x64FA1 mov     [rsp+58h+var_4C], edx
//   0x64FA5 mov     [rsp+58h+var_50], ecx
//   0x64FA9 test    rsi, rsi
//   0x64FAC jz      loc_653B0
//   0x64FB2 cmp     dword ptr [rsi+4Ch], 1
//   0x64FB6 jz      loc_653B0
//   0x64FBC mov     esi, edx
//   0x64FBE xor     edx, edx
//   0x64FC0 mov     r15, rdi
//   0x64FC3 call    sub_64740
//   0x64FC8 mov     rbp, rax
//   0x64FCB mov     eax, [rbx+18h]
//   0x64FCE and     eax, 0FFFF7FFBh
//   0x64FD3 or      ah, 80h
//   0x64FD6 mov     [rbp+18h], eax
//   0x64FD9 mov     rax, [rbx+20h]
//   0x64FDD mov     [rbp+20h], rax
//   0x64FE1 mov     rax, [rbx+28h]
//   0x64FE5 mov     [rbp+28h], rax
//   0x64FE9 mov     eax, [rbx+4Ch]
//   0x64FEC mov     [rbp+4Ch], eax
//   0x64FEF cmp     rbx, rbp
//   0x64FF2 jz      short loc_65018
//   0x64FF4 mov     r12, [rbx+190h]
//   0x64FFB test    r12, r12
//   0x64FFE jz      short loc_6500D
//   0x65000 mov     r13, r12
//   0x65003 sub     r13, 1
//   0x65007 jnz     loc_65538
//   0x6500D mov     qword ptr [rbp+190h], 0
//   0x65018 lea     rsi, [rbx+50h]
//   0x6501C lea     rdi, [rbp+50h]
//   0x65020 xor     r13d, r13d
//   0x65023 call    sub_60550
//   0x65028 mov     rdx, [rbx+68h]
//   0x6502C movq    xmm0, rdx
//   0x65031 punpcklqdq xmm0, xmm0
//   0x65035 test    rdx, rdx
//   0x65038 jnz     loc_65400
//   0x6503E mov     rdi, [rbp+60h]
//   0x65042 test    rdi, rdi
//   0x65045 jz      short loc_6505F
//   0x65047 mov     qword ptr [rbp+68h], 0
//   0x6504F movaps  [rsp+58h+var_48], xmm0
//   0x65054 call    _qfree
//   0x65059 movdqa  xmm0, [rsp+58h+var_48]
//   0x6505F mov     [rbp+60h], r13
//   0x65063 lea     rsi, [rbx+78h]
//   0x65067 lea     rdi, [rbp+78h]
//   0x6506B xor     r13d, r13d
//   0x6506E movups  xmmword ptr [rbp+68h], xmm0
//   0x65072 call    sub_60550
//   0x65077 mov     rdx, [rbx+90h]
//   0x6507E movq    xmm0, rdx
//   0x65083 punpcklqdq xmm0, xmm0
//   0x65087 test    rdx, rdx
//   0x6508A jnz     loc_653C8
//   0x65090 mov     rdi, [rbp+88h]
//   0x65097 test    rdi, rdi
//   0x6509A jz      short loc_650B7
//   0x6509C mov     qword ptr [rbp+90h], 0
//   0x650A7 movaps  [rsp+58h+var_48], xmm0
//   0x650AC call    _qfree
//   0x650B1 movdqa  xmm0, [rsp+58h+var_48]
//   0x650B7 mov     [rbp+88h], r13
//   0x650BE lea     rsi, [rbx+0A0h]
//   0x650C5 xor     r13d, r13d
//   0x650C8 lea     rdi, [rbp+0A0h]
//   0x650CF movups  xmmword ptr [rbp+90h], xmm0
//   0x650D6 call    sub_60550
//   0x650DB mov     rdx, [rbx+0B8h]
//   0x650E2 movq    xmm0, rdx
//   0x650E7 punpcklqdq xmm0, xmm0
//   0x650EB test    rdx, rdx
//   0x650EE jnz     loc_654E0
//   0x650F4 mov     rdi, [rbp+0B0h]
//   0x650FB test    rdi, rdi
//   0x650FE jz      short loc_6511B
//   0x65100 mov     qword ptr [rbp+0B8h], 0
//   0x6510B movaps  [rsp+58h+var_48], xmm0
//   0x65110 call    _qfree
//   0x65115 movdqa  xmm0, [rsp+58h+var_48]
//   0x6511B mov     [rbp+0B0h], r13
//   0x65122 lea     rsi, [rbx+0C8h]
//   0x65129 xor     r13d, r13d
//   0x6512C lea     rdi, [rbp+0C8h]
//   0x65133 movups  xmmword ptr [rbp+0B8h], xmm0
//   0x6513A call    sub_60550
//   0x6513F mov     rdx, [rbx+0E0h]
//   0x65146 movq    xmm0, rdx
//   0x6514B punpcklqdq xmm0, xmm0
//   0x6514F test    rdx, rdx
//   0x65152 jnz     loc_654A8
//   0x65158 mov     rdi, [rbp+0D8h]
//   0x6515F test    rdi, rdi
//   0x65162 jz      short loc_6517F
//   0x65164 mov     qword ptr [rbp+0E0h], 0
//   0x6516F movaps  [rsp+58h+var_48], xmm0
//   0x65174 call    _qfree
//   0x65179 movdqa  xmm0, [rsp+58h+var_48]
//   0x6517F mov     [rbp+0D8h], r13
//   0x65186 lea     rsi, [rbx+0F0h]
//   0x6518D xor     r13d, r13d
//   0x65190 lea     rdi, [rbp+0F0h]
//   0x65197 movups  xmmword ptr [rbp+0E0h], xmm0
//   0x6519E call    sub_60550
//   0x651A3 mov     rdx, [rbx+108h]
//   0x651AA movq    xmm0, rdx
//   0x651AF punpcklqdq xmm0, xmm0
//   0x651B3 test    rdx, rdx
//   0x651B6 jnz     loc_65470
//   0x651BC mov     rdi, [rbp+100h]
//   0x651C3 test    rdi, rdi
//   0x651C6 jz      short loc_651E3
//   0x651C8 mov     qword ptr [rbp+108h], 0
//   0x651D3 movaps  [rsp+58h+var_48], xmm0
//   0x651D8 call    _qfree
//   0x651DD movdqa  xmm0, [rsp+58h+var_48]
//   0x651E3 mov     [rbp+100h], r13
//   0x651EA lea     rsi, [rbx+118h]
//   0x651F1 xor     r13d, r13d
//   0x651F4 lea     rdi, [rbp+118h]
//   0x651FB movups  xmmword ptr [rbp+108h], xmm0
//   0x65202 call    sub_60550
//   0x65207 mov     rdx, [rbx+130h]
//   0x6520E movq    xmm0, rdx
//   0x65213 punpcklqdq xmm0, xmm0
//   0x65217 test    rdx, rdx
//   0x6521A jnz     loc_65438
//   0x65220 mov     rdi, [rbp+128h]
//   0x65227 test    rdi, rdi
//   0x6522A jz      short loc_65247
//   0x6522C mov     qword ptr [rbp+130h], 0
//   0x65237 movaps  [rsp+58h+var_48], xmm0
//   0x6523C call    _qfree
//   0x65241 movdqa  xmm0, [rsp+58h+var_48]
//   0x65247 mov     [rbp+128h], r13
//   0x6524E xor     r13d, r13d
//   0x65251 mov     r14, 0FFFFFFFF00000000h
//   0x6525B movups  xmmword ptr [rbp+130h], xmm0
//   0x65262 mov     rax, [rbx+140h]
//   0x65269 mov     [rbp+140h], rax
//   0x65270 mov     rax, [rbx+148h]
//   0x65277 mov     [rbp+148h], rax
//   0x6527E mov     rax, [rbx+150h]
//   0x65285 mov     [rbp+150h], rax
//   0x6528C mov     rax, [rbx+200h]
//   0x65293 mov     [rbp+200h], rax
//   0x6529A mov     rax, [rbx+208h]
//   0x652A1 mov     [rbp+208h], rax
//   0x652A8 mov     rax, [rbx+40h]
//   0x652AC mov     [rbp+1A0h], rax
//   0x652B3 mov     [rbp+1C0h], rax
//   0x652BA and     dword ptr [r15+4], 0FFFFFE77h
//   0x652C2 mov     r12, [rbx+30h]
//   0x652C6 test    r12, r12
//   0x652C9 jz      short loc_6532F
//   0x652CB nop     dword ptr [rax+rax+00h]
//   0x652D0 mov     edi, 50h ; 'P'
//   0x652D5 call    j__qalloc_or_throw
//   0x652DA pxor    xmm0, xmm0
//   0x652DE mov     rsi, r12
//   0x652E1 mov     [rax+20h], r14
//   0x652E5 mov     rdi, rax
//   0x652E8 mov     rbx, rax
//   0x652EB mov     qword ptr [rax+28h], 0
//   0x652F3 mov     [rax+30h], r14
//   0x652F7 mov     qword ptr [rax+38h], 0
//   0x652FF mov     [rax+40h], r14
//   0x65303 mov     qword ptr [rax+48h], 0
//   0x6530B movups  xmmword ptr [rax+8], xmm0
//   0x6530F call    sub_120EE0
//   0x65314 mov     rdx, r13
//   0x65317 mov     rsi, rbx
//   0x6531A mov     rdi, rbp
//   0x6531D call    sub_9ECA0
//   0x65322 mov     r12, [r12+8]
//   0x65327 mov     r13, rax
//   0x6532A test    r12, r12
//   0x6532D jnz     short loc_652D0
//   0x6532F mov     eax, [rbp+4Ch]
//   0x65332 test    eax, eax
//   0x65334 jz      short loc_65396
//   0x65336 mov     rdi, [rbp+10h]
//   0x6533A mov     edx, [rsp+58h+var_4C]
//   0x6533E mov     rax, [rdi+170h]
//   0x65345 mov     rcx, [rdi+178h]
//   0x6534C add     edx, 1
//   0x6534F lea     rcx, [rax+rcx*4]
//   0x65353 cmp     rax, rcx
//   0x65356 jnz     short loc_65369
//   0x65358 jmp     short loc_65379
//   0x6535A align 20h
//   0x65360 add     rax, 4
//   0x65364 cmp     rcx, rax
//   0x65367 jz      short loc_65379
//   0x65369 cmp     edx, [rax]
//   0x6536B jnz     short loc_65360
//   0x6536D cmp     rcx, rax
//   0x65370 jz      short loc_65379
//   0x65372 xor     esi, esi
//   0x65374 call    sub_1D0B80
//   0x65379 xor     esi, esi
//   0x6537B mov     rdi, rbp
//   0x6537E call    sub_1D0B80
//   0x65383 mov     rdi, r15
//   0x65386 call    sub_1D0990
//   0x6538B test    byte ptr [rsp+58h+var_50], 2
//   0x65390 jnz     loc_65518
//   0x65396 test    byte ptr [rsp+58h+var_50], 1
//   0x6539B jnz     short loc_653B8
//   0x6539D add     rsp, 28h
//   0x653A1 mov     rax, rbp
//   0x653A4 pop     rbx
//   0x653A5 pop     rbp
//   0x653A6 pop     r12
//   0x653A8 pop     r13
//   0x653AA pop     r14
//   0x653AC pop     r15
//   0x653AE retn
//   0x653AF align 10h
//   0x653B0 xor     ebp, ebp
//   0x653B2 jmp     short loc_6539D
//   0x653B4 align 8
//   0x653B8 mov     rdi, r15
//   0x653BB call    sub_18BE40
//   0x653C0 jmp     short loc_6539D
//   0x653C2 align 8
//   0x653C8 shl     rdx, 4
//   0x653CC movaps  [rsp+58h+var_48], xmm0
//   0x653D1 mov     rdi, rdx
//   0x653D4 mov     r12, rdx
//   0x653D7 call    _qalloc_or_throw
//   0x653DC mov     rsi, [rbx+88h]; src
//   0x653E3 mov     rdx, r12; n
//   0x653E6 mov     rdi, rax; dest
//   0x653E9 mov     r13, rax
//   0x653EC call    _memcpy
//   0x653F1 movdqa  xmm0, [rsp+58h+var_48]
//   0x653F7 jmp     loc_65090
//   0x653FC align 20h
//   0x65400 shl     rdx, 4
//   0x65404 movaps  [rsp+58h+var_48], xmm0
//   0x65409 mov     rdi, rdx
//   0x6540C mov     r12, rdx
//   0x6540F call    _qalloc_or_throw
//   0x65414 mov     rsi, [rbx+60h]; src
//   0x65418 mov     rdx, r12; n
//   0x6541B mov     rdi, rax; dest
//   0x6541E mov     r13, rax
//   0x65421 call    _memcpy
//   0x65426 movdqa  xmm0, [rsp+58h+var_48]
//   0x6542C jmp     loc_6503E
//   0x65431 align 8
//   0x65438 shl     rdx, 4
//   0x6543C movaps  [rsp+58h+var_48], xmm0
//   0x65441 mov     rdi, rdx
//   0x65444 mov     r12, rdx
//   0x65447 call    _qalloc_or_throw
//   0x6544C mov     rsi, [rbx+128h]; src
//   0x65453 mov     rdx, r12; n
//   0x65456 mov     rdi, rax; dest
//   0x65459 mov     r13, rax
//   0x6545C call    _memcpy
//   0x65461 movdqa  xmm0, [rsp+58h+var_48]
//   0x65467 jmp     loc_65220
//   0x6546C align 10h
//   0x65470 shl     rdx, 4
//   0x65474 movaps  [rsp+58h+var_48], xmm0
//   0x65479 mov     rdi, rdx
//   0x6547C mov     r12, rdx
//   0x6547F call    _qalloc_or_throw
//   0x65484 mov     rsi, [rbx+100h]; src
//   0x6548B mov     rdx, r12; n
//   0x6548E mov     rdi, rax; dest
//   0x65491 mov     r13, rax
//   0x65494 call    _memcpy
//   0x65499 movdqa  xmm0, [rsp+58h+var_48]
//   0x6549F jmp     loc_651BC
//   0x654A4 align 8
//   0x654A8 shl     rdx, 4
//   0x654AC movaps  [rsp+58h+var_48], xmm0
//   0x654B1 mov     rdi, rdx
//   0x654B4 mov     r12, rdx
//   0x654B7 call    _qalloc_or_throw
//   0x654BC mov     rsi, [rbx+0D8h]; src
//   0x654C3 mov     rdx, r12; n
//   0x654C6 mov     rdi, rax; dest
//   0x654C9 mov     r13, rax
//   0x654CC call    _memcpy
//   0x654D1 movdqa  xmm0, [rsp+58h+var_48]
//   0x654D7 jmp     loc_65158
//   0x654DC align 20h
//   0x654E0 shl     rdx, 4
//   0x654E4 movaps  [rsp+58h+var_48], xmm0
//   0x654E9 mov     rdi, rdx
//   0x654EC mov     r12, rdx
//   0x654EF call    _qalloc_or_throw
//   0x654F4 mov     rsi, [rbx+0B0h]; src
//   0x654FB mov     rdx, r12; n
//   0x654FE mov     rdi, rax; dest
//   0x65501 mov     r13, rax
//   0x65504 call    _memcpy
//   0x65509 movdqa  xmm0, [rsp+58h+var_48]
//   0x6550F jmp     loc_650F4
//   0x65514 align 8
//   0x65518 cmp     qword ptr [rbp+178h], 1
//   0x65520 jnz     loc_65396
//   0x65526 mov     rdi, rbp
//   0x65529 call    sub_A3E60
//   0x6552E jmp     loc_65396
//   0x65533 align 8
//   0x65538 mov     r14, [rbx+188h]
//   0x6553F mov     rdi, [rbp+188h]; dest
//   0x65546 cmp     [rbp+198h], r12
//   0x6554D jb      short loc_65573
//   0x6554F mov     [rbp+190h], r12
//   0x65556 mov     rdx, r13; n
//   0x65559 mov     rsi, r14; src
//   0x6555C call    _memmove
//   0x65561 mov     rax, [rbp+188h]
//   0x65568 mov     byte ptr [rax+r12-1], 0
//   0x6556E jmp     loc_65018
//   0x65573 lea     rax, [rbp+188h]
//   0x6557A mov     rsi, rdi
//   0x6557D mov     ecx, 1
//   0x65582 mov     rdx, r12
//   0x65585 mov     rdi, rax
//   0x65588 call    _qvector_reserve
//   0x6558D mov     [rbp+188h], rax
//   0x65594 mov     rdi, rax
//   0x65597 jmp     short loc_6554F
//   0x65599 mov     rbp, rax
//   0x6559C jmp     loc_2C4AC
// ============================================================

void sub_64F90(/* signature unknown */)
{
    // see disassembly above
}

