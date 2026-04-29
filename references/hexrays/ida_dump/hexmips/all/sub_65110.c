// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x65110
// Name:           sub_65110
// Function size:  1553 bytes (342 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x65110 push    r15
//   0x65112 push    r14
//   0x65114 push    r13
//   0x65116 push    r12
//   0x65118 push    rbp
//   0x65119 push    rbx
//   0x6511A mov     rbx, rsi
//   0x6511D sub     rsp, 28h
//   0x65121 mov     [rsp+58h+var_4C], edx
//   0x65125 mov     [rsp+58h+var_50], ecx
//   0x65129 test    rsi, rsi
//   0x6512C jz      loc_65530
//   0x65132 cmp     dword ptr [rsi+4Ch], 1
//   0x65136 jz      loc_65530
//   0x6513C mov     esi, edx
//   0x6513E xor     edx, edx
//   0x65140 mov     r15, rdi
//   0x65143 call    sub_648C0
//   0x65148 mov     rbp, rax
//   0x6514B mov     eax, [rbx+18h]
//   0x6514E and     eax, 0FFFF7FFBh
//   0x65153 or      ah, 80h
//   0x65156 mov     [rbp+18h], eax
//   0x65159 mov     rax, [rbx+20h]
//   0x6515D mov     [rbp+20h], rax
//   0x65161 mov     rax, [rbx+28h]
//   0x65165 mov     [rbp+28h], rax
//   0x65169 mov     eax, [rbx+4Ch]
//   0x6516C mov     [rbp+4Ch], eax
//   0x6516F cmp     rbx, rbp
//   0x65172 jz      short loc_65198
//   0x65174 mov     r12, [rbx+190h]
//   0x6517B test    r12, r12
//   0x6517E jz      short loc_6518D
//   0x65180 mov     r13, r12
//   0x65183 sub     r13, 1
//   0x65187 jnz     loc_656B8
//   0x6518D mov     qword ptr [rbp+190h], 0
//   0x65198 lea     rsi, [rbx+50h]
//   0x6519C lea     rdi, [rbp+50h]
//   0x651A0 xor     r13d, r13d
//   0x651A3 call    sub_606D0
//   0x651A8 mov     rdx, [rbx+68h]
//   0x651AC movq    xmm0, rdx
//   0x651B1 punpcklqdq xmm0, xmm0
//   0x651B5 test    rdx, rdx
//   0x651B8 jnz     loc_65580
//   0x651BE mov     rdi, [rbp+60h]
//   0x651C2 test    rdi, rdi
//   0x651C5 jz      short loc_651DF
//   0x651C7 mov     qword ptr [rbp+68h], 0
//   0x651CF movaps  [rsp+58h+var_48], xmm0
//   0x651D4 call    _qfree
//   0x651D9 movdqa  xmm0, [rsp+58h+var_48]
//   0x651DF mov     [rbp+60h], r13
//   0x651E3 lea     rsi, [rbx+78h]
//   0x651E7 lea     rdi, [rbp+78h]
//   0x651EB xor     r13d, r13d
//   0x651EE movups  xmmword ptr [rbp+68h], xmm0
//   0x651F2 call    sub_606D0
//   0x651F7 mov     rdx, [rbx+90h]
//   0x651FE movq    xmm0, rdx
//   0x65203 punpcklqdq xmm0, xmm0
//   0x65207 test    rdx, rdx
//   0x6520A jnz     loc_65548
//   0x65210 mov     rdi, [rbp+88h]
//   0x65217 test    rdi, rdi
//   0x6521A jz      short loc_65237
//   0x6521C mov     qword ptr [rbp+90h], 0
//   0x65227 movaps  [rsp+58h+var_48], xmm0
//   0x6522C call    _qfree
//   0x65231 movdqa  xmm0, [rsp+58h+var_48]
//   0x65237 mov     [rbp+88h], r13
//   0x6523E lea     rsi, [rbx+0A0h]
//   0x65245 xor     r13d, r13d
//   0x65248 lea     rdi, [rbp+0A0h]
//   0x6524F movups  xmmword ptr [rbp+90h], xmm0
//   0x65256 call    sub_606D0
//   0x6525B mov     rdx, [rbx+0B8h]
//   0x65262 movq    xmm0, rdx
//   0x65267 punpcklqdq xmm0, xmm0
//   0x6526B test    rdx, rdx
//   0x6526E jnz     loc_65660
//   0x65274 mov     rdi, [rbp+0B0h]
//   0x6527B test    rdi, rdi
//   0x6527E jz      short loc_6529B
//   0x65280 mov     qword ptr [rbp+0B8h], 0
//   0x6528B movaps  [rsp+58h+var_48], xmm0
//   0x65290 call    _qfree
//   0x65295 movdqa  xmm0, [rsp+58h+var_48]
//   0x6529B mov     [rbp+0B0h], r13
//   0x652A2 lea     rsi, [rbx+0C8h]
//   0x652A9 xor     r13d, r13d
//   0x652AC lea     rdi, [rbp+0C8h]
//   0x652B3 movups  xmmword ptr [rbp+0B8h], xmm0
//   0x652BA call    sub_606D0
//   0x652BF mov     rdx, [rbx+0E0h]
//   0x652C6 movq    xmm0, rdx
//   0x652CB punpcklqdq xmm0, xmm0
//   0x652CF test    rdx, rdx
//   0x652D2 jnz     loc_65628
//   0x652D8 mov     rdi, [rbp+0D8h]
//   0x652DF test    rdi, rdi
//   0x652E2 jz      short loc_652FF
//   0x652E4 mov     qword ptr [rbp+0E0h], 0
//   0x652EF movaps  [rsp+58h+var_48], xmm0
//   0x652F4 call    _qfree
//   0x652F9 movdqa  xmm0, [rsp+58h+var_48]
//   0x652FF mov     [rbp+0D8h], r13
//   0x65306 lea     rsi, [rbx+0F0h]
//   0x6530D xor     r13d, r13d
//   0x65310 lea     rdi, [rbp+0F0h]
//   0x65317 movups  xmmword ptr [rbp+0E0h], xmm0
//   0x6531E call    sub_606D0
//   0x65323 mov     rdx, [rbx+108h]
//   0x6532A movq    xmm0, rdx
//   0x6532F punpcklqdq xmm0, xmm0
//   0x65333 test    rdx, rdx
//   0x65336 jnz     loc_655F0
//   0x6533C mov     rdi, [rbp+100h]
//   0x65343 test    rdi, rdi
//   0x65346 jz      short loc_65363
//   0x65348 mov     qword ptr [rbp+108h], 0
//   0x65353 movaps  [rsp+58h+var_48], xmm0
//   0x65358 call    _qfree
//   0x6535D movdqa  xmm0, [rsp+58h+var_48]
//   0x65363 mov     [rbp+100h], r13
//   0x6536A lea     rsi, [rbx+118h]
//   0x65371 xor     r13d, r13d
//   0x65374 lea     rdi, [rbp+118h]
//   0x6537B movups  xmmword ptr [rbp+108h], xmm0
//   0x65382 call    sub_606D0
//   0x65387 mov     rdx, [rbx+130h]
//   0x6538E movq    xmm0, rdx
//   0x65393 punpcklqdq xmm0, xmm0
//   0x65397 test    rdx, rdx
//   0x6539A jnz     loc_655B8
//   0x653A0 mov     rdi, [rbp+128h]
//   0x653A7 test    rdi, rdi
//   0x653AA jz      short loc_653C7
//   0x653AC mov     qword ptr [rbp+130h], 0
//   0x653B7 movaps  [rsp+58h+var_48], xmm0
//   0x653BC call    _qfree
//   0x653C1 movdqa  xmm0, [rsp+58h+var_48]
//   0x653C7 mov     [rbp+128h], r13
//   0x653CE xor     r13d, r13d
//   0x653D1 mov     r14, 0FFFFFFFF00000000h
//   0x653DB movups  xmmword ptr [rbp+130h], xmm0
//   0x653E2 mov     rax, [rbx+140h]
//   0x653E9 mov     [rbp+140h], rax
//   0x653F0 mov     rax, [rbx+148h]
//   0x653F7 mov     [rbp+148h], rax
//   0x653FE mov     rax, [rbx+150h]
//   0x65405 mov     [rbp+150h], rax
//   0x6540C mov     rax, [rbx+200h]
//   0x65413 mov     [rbp+200h], rax
//   0x6541A mov     rax, [rbx+208h]
//   0x65421 mov     [rbp+208h], rax
//   0x65428 mov     rax, [rbx+40h]
//   0x6542C mov     [rbp+1A0h], rax
//   0x65433 mov     [rbp+1C0h], rax
//   0x6543A and     dword ptr [r15+4], 0FFFFFE77h
//   0x65442 mov     r12, [rbx+30h]
//   0x65446 test    r12, r12
//   0x65449 jz      short loc_654AF
//   0x6544B nop     dword ptr [rax+rax+00h]
//   0x65450 mov     edi, 50h ; 'P'
//   0x65455 call    j__qalloc_or_throw
//   0x6545A pxor    xmm0, xmm0
//   0x6545E mov     rsi, r12
//   0x65461 mov     [rax+20h], r14
//   0x65465 mov     rdi, rax
//   0x65468 mov     rbx, rax
//   0x6546B mov     qword ptr [rax+28h], 0
//   0x65473 mov     [rax+30h], r14
//   0x65477 mov     qword ptr [rax+38h], 0
//   0x6547F mov     [rax+40h], r14
//   0x65483 mov     qword ptr [rax+48h], 0
//   0x6548B movups  xmmword ptr [rax+8], xmm0
//   0x6548F call    sub_1211A0
//   0x65494 mov     rdx, r13
//   0x65497 mov     rsi, rbx
//   0x6549A mov     rdi, rbp
//   0x6549D call    sub_9EF60
//   0x654A2 mov     r12, [r12+8]
//   0x654A7 mov     r13, rax
//   0x654AA test    r12, r12
//   0x654AD jnz     short loc_65450
//   0x654AF mov     eax, [rbp+4Ch]
//   0x654B2 test    eax, eax
//   0x654B4 jz      short loc_65516
//   0x654B6 mov     rdi, [rbp+10h]
//   0x654BA mov     edx, [rsp+58h+var_4C]
//   0x654BE mov     rax, [rdi+170h]
//   0x654C5 mov     rcx, [rdi+178h]
//   0x654CC add     edx, 1
//   0x654CF lea     rcx, [rax+rcx*4]
//   0x654D3 cmp     rax, rcx
//   0x654D6 jnz     short loc_654E9
//   0x654D8 jmp     short loc_654F9
//   0x654DA align 20h
//   0x654E0 add     rax, 4
//   0x654E4 cmp     rcx, rax
//   0x654E7 jz      short loc_654F9
//   0x654E9 cmp     edx, [rax]
//   0x654EB jnz     short loc_654E0
//   0x654ED cmp     rcx, rax
//   0x654F0 jz      short loc_654F9
//   0x654F2 xor     esi, esi
//   0x654F4 call    sub_1D0E40
//   0x654F9 xor     esi, esi
//   0x654FB mov     rdi, rbp
//   0x654FE call    sub_1D0E40
//   0x65503 mov     rdi, r15
//   0x65506 call    sub_1D0C50
//   0x6550B test    byte ptr [rsp+58h+var_50], 2
//   0x65510 jnz     loc_65698
//   0x65516 test    byte ptr [rsp+58h+var_50], 1
//   0x6551B jnz     short loc_65538
//   0x6551D add     rsp, 28h
//   0x65521 mov     rax, rbp
//   0x65524 pop     rbx
//   0x65525 pop     rbp
//   0x65526 pop     r12
//   0x65528 pop     r13
//   0x6552A pop     r14
//   0x6552C pop     r15
//   0x6552E retn
//   0x6552F align 10h
//   0x65530 xor     ebp, ebp
//   0x65532 jmp     short loc_6551D
//   0x65534 align 8
//   0x65538 mov     rdi, r15
//   0x6553B call    sub_18C100
//   0x65540 jmp     short loc_6551D
//   0x65542 align 8
//   0x65548 shl     rdx, 4
//   0x6554C movaps  [rsp+58h+var_48], xmm0
//   0x65551 mov     rdi, rdx
//   0x65554 mov     r12, rdx
//   0x65557 call    _qalloc_or_throw
//   0x6555C mov     rsi, [rbx+88h]; src
//   0x65563 mov     rdx, r12; n
//   0x65566 mov     rdi, rax; dest
//   0x65569 mov     r13, rax
//   0x6556C call    _memcpy
//   0x65571 movdqa  xmm0, [rsp+58h+var_48]
//   0x65577 jmp     loc_65210
//   0x6557C align 20h
//   0x65580 shl     rdx, 4
//   0x65584 movaps  [rsp+58h+var_48], xmm0
//   0x65589 mov     rdi, rdx
//   0x6558C mov     r12, rdx
//   0x6558F call    _qalloc_or_throw
//   0x65594 mov     rsi, [rbx+60h]; src
//   0x65598 mov     rdx, r12; n
//   0x6559B mov     rdi, rax; dest
//   0x6559E mov     r13, rax
//   0x655A1 call    _memcpy
//   0x655A6 movdqa  xmm0, [rsp+58h+var_48]
//   0x655AC jmp     loc_651BE
//   0x655B1 align 8
//   0x655B8 shl     rdx, 4
//   0x655BC movaps  [rsp+58h+var_48], xmm0
//   0x655C1 mov     rdi, rdx
//   0x655C4 mov     r12, rdx
//   0x655C7 call    _qalloc_or_throw
//   0x655CC mov     rsi, [rbx+128h]; src
//   0x655D3 mov     rdx, r12; n
//   0x655D6 mov     rdi, rax; dest
//   0x655D9 mov     r13, rax
//   0x655DC call    _memcpy
//   0x655E1 movdqa  xmm0, [rsp+58h+var_48]
//   0x655E7 jmp     loc_653A0
//   0x655EC align 10h
//   0x655F0 shl     rdx, 4
//   0x655F4 movaps  [rsp+58h+var_48], xmm0
//   0x655F9 mov     rdi, rdx
//   0x655FC mov     r12, rdx
//   0x655FF call    _qalloc_or_throw
//   0x65604 mov     rsi, [rbx+100h]; src
//   0x6560B mov     rdx, r12; n
//   0x6560E mov     rdi, rax; dest
//   0x65611 mov     r13, rax
//   0x65614 call    _memcpy
//   0x65619 movdqa  xmm0, [rsp+58h+var_48]
//   0x6561F jmp     loc_6533C
//   0x65624 align 8
//   0x65628 shl     rdx, 4
//   0x6562C movaps  [rsp+58h+var_48], xmm0
//   0x65631 mov     rdi, rdx
//   0x65634 mov     r12, rdx
//   0x65637 call    _qalloc_or_throw
//   0x6563C mov     rsi, [rbx+0D8h]; src
//   0x65643 mov     rdx, r12; n
//   0x65646 mov     rdi, rax; dest
//   0x65649 mov     r13, rax
//   0x6564C call    _memcpy
//   0x65651 movdqa  xmm0, [rsp+58h+var_48]
//   0x65657 jmp     loc_652D8
//   0x6565C align 20h
//   0x65660 shl     rdx, 4
//   0x65664 movaps  [rsp+58h+var_48], xmm0
//   0x65669 mov     rdi, rdx
//   0x6566C mov     r12, rdx
//   0x6566F call    _qalloc_or_throw
//   0x65674 mov     rsi, [rbx+0B0h]; src
//   0x6567B mov     rdx, r12; n
//   0x6567E mov     rdi, rax; dest
//   0x65681 mov     r13, rax
//   0x65684 call    _memcpy
//   0x65689 movdqa  xmm0, [rsp+58h+var_48]
//   0x6568F jmp     loc_65274
//   0x65694 align 8
//   0x65698 cmp     qword ptr [rbp+178h], 1
//   0x656A0 jnz     loc_65516
//   0x656A6 mov     rdi, rbp
//   0x656A9 call    sub_A4120
//   0x656AE jmp     loc_65516
//   0x656B3 align 8
//   0x656B8 mov     r14, [rbx+188h]
//   0x656BF mov     rdi, [rbp+188h]; dest
//   0x656C6 cmp     [rbp+198h], r12
//   0x656CD jb      short loc_656F3
//   0x656CF mov     [rbp+190h], r12
//   0x656D6 mov     rdx, r13; n
//   0x656D9 mov     rsi, r14; src
//   0x656DC call    _memmove
//   0x656E1 mov     rax, [rbp+188h]
//   0x656E8 mov     byte ptr [rax+r12-1], 0
//   0x656EE jmp     loc_65198
//   0x656F3 lea     rax, [rbp+188h]
//   0x656FA mov     rsi, rdi
//   0x656FD mov     ecx, 1
//   0x65702 mov     rdx, r12
//   0x65705 mov     rdi, rax
//   0x65708 call    _qvector_reserve
//   0x6570D mov     [rbp+188h], rax
//   0x65714 mov     rdi, rax
//   0x65717 jmp     short loc_656CF
//   0x65719 mov     rbp, rax
//   0x6571C jmp     loc_2C4AC
// ============================================================

void sub_65110(/* signature unknown */)
{
    // see disassembly above
}

