// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x69310
// Name:           sub_69310
// Function size:  1553 bytes (342 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x69310 push    r15
//   0x69312 push    r14
//   0x69314 push    r13
//   0x69316 push    r12
//   0x69318 push    rbp
//   0x69319 push    rbx
//   0x6931A mov     rbx, rsi
//   0x6931D sub     rsp, 28h
//   0x69321 mov     [rsp+58h+var_4C], edx
//   0x69325 mov     [rsp+58h+var_50], ecx
//   0x69329 test    rsi, rsi
//   0x6932C jz      loc_69730
//   0x69332 cmp     dword ptr [rsi+4Ch], 1
//   0x69336 jz      loc_69730
//   0x6933C mov     esi, edx
//   0x6933E xor     edx, edx
//   0x69340 mov     r15, rdi
//   0x69343 call    sub_68AC0
//   0x69348 mov     rbp, rax
//   0x6934B mov     eax, [rbx+18h]
//   0x6934E and     eax, 0FFFF7FFBh
//   0x69353 or      ah, 80h
//   0x69356 mov     [rbp+18h], eax
//   0x69359 mov     rax, [rbx+20h]
//   0x6935D mov     [rbp+20h], rax
//   0x69361 mov     rax, [rbx+28h]
//   0x69365 mov     [rbp+28h], rax
//   0x69369 mov     eax, [rbx+4Ch]
//   0x6936C mov     [rbp+4Ch], eax
//   0x6936F cmp     rbx, rbp
//   0x69372 jz      short loc_69398
//   0x69374 mov     r12, [rbx+190h]
//   0x6937B test    r12, r12
//   0x6937E jz      short loc_6938D
//   0x69380 mov     r13, r12
//   0x69383 sub     r13, 1
//   0x69387 jnz     loc_698B8
//   0x6938D mov     qword ptr [rbp+190h], 0
//   0x69398 lea     rsi, [rbx+50h]
//   0x6939C lea     rdi, [rbp+50h]
//   0x693A0 xor     r13d, r13d
//   0x693A3 call    sub_648D0
//   0x693A8 mov     rdx, [rbx+68h]
//   0x693AC movq    xmm0, rdx
//   0x693B1 punpcklqdq xmm0, xmm0
//   0x693B5 test    rdx, rdx
//   0x693B8 jnz     loc_69780
//   0x693BE mov     rdi, [rbp+60h]
//   0x693C2 test    rdi, rdi
//   0x693C5 jz      short loc_693DF
//   0x693C7 mov     qword ptr [rbp+68h], 0
//   0x693CF movaps  [rsp+58h+var_48], xmm0
//   0x693D4 call    _qfree
//   0x693D9 movdqa  xmm0, [rsp+58h+var_48]
//   0x693DF mov     [rbp+60h], r13
//   0x693E3 lea     rsi, [rbx+78h]
//   0x693E7 lea     rdi, [rbp+78h]
//   0x693EB xor     r13d, r13d
//   0x693EE movups  xmmword ptr [rbp+68h], xmm0
//   0x693F2 call    sub_648D0
//   0x693F7 mov     rdx, [rbx+90h]
//   0x693FE movq    xmm0, rdx
//   0x69403 punpcklqdq xmm0, xmm0
//   0x69407 test    rdx, rdx
//   0x6940A jnz     loc_69748
//   0x69410 mov     rdi, [rbp+88h]
//   0x69417 test    rdi, rdi
//   0x6941A jz      short loc_69437
//   0x6941C mov     qword ptr [rbp+90h], 0
//   0x69427 movaps  [rsp+58h+var_48], xmm0
//   0x6942C call    _qfree
//   0x69431 movdqa  xmm0, [rsp+58h+var_48]
//   0x69437 mov     [rbp+88h], r13
//   0x6943E lea     rsi, [rbx+0A0h]
//   0x69445 xor     r13d, r13d
//   0x69448 lea     rdi, [rbp+0A0h]
//   0x6944F movups  xmmword ptr [rbp+90h], xmm0
//   0x69456 call    sub_648D0
//   0x6945B mov     rdx, [rbx+0B8h]
//   0x69462 movq    xmm0, rdx
//   0x69467 punpcklqdq xmm0, xmm0
//   0x6946B test    rdx, rdx
//   0x6946E jnz     loc_69860
//   0x69474 mov     rdi, [rbp+0B0h]
//   0x6947B test    rdi, rdi
//   0x6947E jz      short loc_6949B
//   0x69480 mov     qword ptr [rbp+0B8h], 0
//   0x6948B movaps  [rsp+58h+var_48], xmm0
//   0x69490 call    _qfree
//   0x69495 movdqa  xmm0, [rsp+58h+var_48]
//   0x6949B mov     [rbp+0B0h], r13
//   0x694A2 lea     rsi, [rbx+0C8h]
//   0x694A9 xor     r13d, r13d
//   0x694AC lea     rdi, [rbp+0C8h]
//   0x694B3 movups  xmmword ptr [rbp+0B8h], xmm0
//   0x694BA call    sub_648D0
//   0x694BF mov     rdx, [rbx+0E0h]
//   0x694C6 movq    xmm0, rdx
//   0x694CB punpcklqdq xmm0, xmm0
//   0x694CF test    rdx, rdx
//   0x694D2 jnz     loc_69828
//   0x694D8 mov     rdi, [rbp+0D8h]
//   0x694DF test    rdi, rdi
//   0x694E2 jz      short loc_694FF
//   0x694E4 mov     qword ptr [rbp+0E0h], 0
//   0x694EF movaps  [rsp+58h+var_48], xmm0
//   0x694F4 call    _qfree
//   0x694F9 movdqa  xmm0, [rsp+58h+var_48]
//   0x694FF mov     [rbp+0D8h], r13
//   0x69506 lea     rsi, [rbx+0F0h]
//   0x6950D xor     r13d, r13d
//   0x69510 lea     rdi, [rbp+0F0h]
//   0x69517 movups  xmmword ptr [rbp+0E0h], xmm0
//   0x6951E call    sub_648D0
//   0x69523 mov     rdx, [rbx+108h]
//   0x6952A movq    xmm0, rdx
//   0x6952F punpcklqdq xmm0, xmm0
//   0x69533 test    rdx, rdx
//   0x69536 jnz     loc_697F0
//   0x6953C mov     rdi, [rbp+100h]
//   0x69543 test    rdi, rdi
//   0x69546 jz      short loc_69563
//   0x69548 mov     qword ptr [rbp+108h], 0
//   0x69553 movaps  [rsp+58h+var_48], xmm0
//   0x69558 call    _qfree
//   0x6955D movdqa  xmm0, [rsp+58h+var_48]
//   0x69563 mov     [rbp+100h], r13
//   0x6956A lea     rsi, [rbx+118h]
//   0x69571 xor     r13d, r13d
//   0x69574 lea     rdi, [rbp+118h]
//   0x6957B movups  xmmword ptr [rbp+108h], xmm0
//   0x69582 call    sub_648D0
//   0x69587 mov     rdx, [rbx+130h]
//   0x6958E movq    xmm0, rdx
//   0x69593 punpcklqdq xmm0, xmm0
//   0x69597 test    rdx, rdx
//   0x6959A jnz     loc_697B8
//   0x695A0 mov     rdi, [rbp+128h]
//   0x695A7 test    rdi, rdi
//   0x695AA jz      short loc_695C7
//   0x695AC mov     qword ptr [rbp+130h], 0
//   0x695B7 movaps  [rsp+58h+var_48], xmm0
//   0x695BC call    _qfree
//   0x695C1 movdqa  xmm0, [rsp+58h+var_48]
//   0x695C7 mov     [rbp+128h], r13
//   0x695CE xor     r13d, r13d
//   0x695D1 mov     r14, 0FFFFFFFF00000000h
//   0x695DB movups  xmmword ptr [rbp+130h], xmm0
//   0x695E2 mov     rax, [rbx+140h]
//   0x695E9 mov     [rbp+140h], rax
//   0x695F0 mov     rax, [rbx+148h]
//   0x695F7 mov     [rbp+148h], rax
//   0x695FE mov     rax, [rbx+150h]
//   0x69605 mov     [rbp+150h], rax
//   0x6960C mov     rax, [rbx+200h]
//   0x69613 mov     [rbp+200h], rax
//   0x6961A mov     rax, [rbx+208h]
//   0x69621 mov     [rbp+208h], rax
//   0x69628 mov     rax, [rbx+40h]
//   0x6962C mov     [rbp+1A0h], rax
//   0x69633 mov     [rbp+1C0h], rax
//   0x6963A and     dword ptr [r15+4], 0FFFFFE77h
//   0x69642 mov     r12, [rbx+30h]
//   0x69646 test    r12, r12
//   0x69649 jz      short loc_696AF
//   0x6964B nop     dword ptr [rax+rax+00h]
//   0x69650 mov     edi, 50h ; 'P'
//   0x69655 call    j__qalloc_or_throw
//   0x6965A pxor    xmm0, xmm0
//   0x6965E mov     rsi, r12
//   0x69661 mov     [rax+20h], r14
//   0x69665 mov     rdi, rax
//   0x69668 mov     rbx, rax
//   0x6966B mov     qword ptr [rax+28h], 0
//   0x69673 mov     [rax+30h], r14
//   0x69677 mov     qword ptr [rax+38h], 0
//   0x6967F mov     [rax+40h], r14
//   0x69683 mov     qword ptr [rax+48h], 0
//   0x6968B movups  xmmword ptr [rax+8], xmm0
//   0x6968F call    sub_1253A0
//   0x69694 mov     rdx, r13
//   0x69697 mov     rsi, rbx
//   0x6969A mov     rdi, rbp
//   0x6969D call    sub_A3160
//   0x696A2 mov     r12, [r12+8]
//   0x696A7 mov     r13, rax
//   0x696AA test    r12, r12
//   0x696AD jnz     short loc_69650
//   0x696AF mov     eax, [rbp+4Ch]
//   0x696B2 test    eax, eax
//   0x696B4 jz      short loc_69716
//   0x696B6 mov     rdi, [rbp+10h]
//   0x696BA mov     edx, [rsp+58h+var_4C]
//   0x696BE mov     rax, [rdi+170h]
//   0x696C5 mov     rcx, [rdi+178h]
//   0x696CC add     edx, 1
//   0x696CF lea     rcx, [rax+rcx*4]
//   0x696D3 cmp     rax, rcx
//   0x696D6 jnz     short loc_696E9
//   0x696D8 jmp     short loc_696F9
//   0x696DA align 20h
//   0x696E0 add     rax, 4
//   0x696E4 cmp     rcx, rax
//   0x696E7 jz      short loc_696F9
//   0x696E9 cmp     edx, [rax]
//   0x696EB jnz     short loc_696E0
//   0x696ED cmp     rcx, rax
//   0x696F0 jz      short loc_696F9
//   0x696F2 xor     esi, esi
//   0x696F4 call    sub_1D51C0
//   0x696F9 xor     esi, esi
//   0x696FB mov     rdi, rbp
//   0x696FE call    sub_1D51C0
//   0x69703 mov     rdi, r15
//   0x69706 call    sub_1D4FD0
//   0x6970B test    byte ptr [rsp+58h+var_50], 2
//   0x69710 jnz     loc_69898
//   0x69716 test    byte ptr [rsp+58h+var_50], 1
//   0x6971B jnz     short loc_69738
//   0x6971D add     rsp, 28h
//   0x69721 mov     rax, rbp
//   0x69724 pop     rbx
//   0x69725 pop     rbp
//   0x69726 pop     r12
//   0x69728 pop     r13
//   0x6972A pop     r14
//   0x6972C pop     r15
//   0x6972E retn
//   0x6972F align 10h
//   0x69730 xor     ebp, ebp
//   0x69732 jmp     short loc_6971D
//   0x69734 align 8
//   0x69738 mov     rdi, r15
//   0x6973B call    sub_190300
//   0x69740 jmp     short loc_6971D
//   0x69742 align 8
//   0x69748 shl     rdx, 4
//   0x6974C movaps  [rsp+58h+var_48], xmm0
//   0x69751 mov     rdi, rdx
//   0x69754 mov     r12, rdx
//   0x69757 call    _qalloc_or_throw
//   0x6975C mov     rsi, [rbx+88h]; src
//   0x69763 mov     rdx, r12; n
//   0x69766 mov     rdi, rax; dest
//   0x69769 mov     r13, rax
//   0x6976C call    _memcpy
//   0x69771 movdqa  xmm0, [rsp+58h+var_48]
//   0x69777 jmp     loc_69410
//   0x6977C align 20h
//   0x69780 shl     rdx, 4
//   0x69784 movaps  [rsp+58h+var_48], xmm0
//   0x69789 mov     rdi, rdx
//   0x6978C mov     r12, rdx
//   0x6978F call    _qalloc_or_throw
//   0x69794 mov     rsi, [rbx+60h]; src
//   0x69798 mov     rdx, r12; n
//   0x6979B mov     rdi, rax; dest
//   0x6979E mov     r13, rax
//   0x697A1 call    _memcpy
//   0x697A6 movdqa  xmm0, [rsp+58h+var_48]
//   0x697AC jmp     loc_693BE
//   0x697B1 align 8
//   0x697B8 shl     rdx, 4
//   0x697BC movaps  [rsp+58h+var_48], xmm0
//   0x697C1 mov     rdi, rdx
//   0x697C4 mov     r12, rdx
//   0x697C7 call    _qalloc_or_throw
//   0x697CC mov     rsi, [rbx+128h]; src
//   0x697D3 mov     rdx, r12; n
//   0x697D6 mov     rdi, rax; dest
//   0x697D9 mov     r13, rax
//   0x697DC call    _memcpy
//   0x697E1 movdqa  xmm0, [rsp+58h+var_48]
//   0x697E7 jmp     loc_695A0
//   0x697EC align 10h
//   0x697F0 shl     rdx, 4
//   0x697F4 movaps  [rsp+58h+var_48], xmm0
//   0x697F9 mov     rdi, rdx
//   0x697FC mov     r12, rdx
//   0x697FF call    _qalloc_or_throw
//   0x69804 mov     rsi, [rbx+100h]; src
//   0x6980B mov     rdx, r12; n
//   0x6980E mov     rdi, rax; dest
//   0x69811 mov     r13, rax
//   0x69814 call    _memcpy
//   0x69819 movdqa  xmm0, [rsp+58h+var_48]
//   0x6981F jmp     loc_6953C
//   0x69824 align 8
//   0x69828 shl     rdx, 4
//   0x6982C movaps  [rsp+58h+var_48], xmm0
//   0x69831 mov     rdi, rdx
//   0x69834 mov     r12, rdx
//   0x69837 call    _qalloc_or_throw
//   0x6983C mov     rsi, [rbx+0D8h]; src
//   0x69843 mov     rdx, r12; n
//   0x69846 mov     rdi, rax; dest
//   0x69849 mov     r13, rax
//   0x6984C call    _memcpy
//   0x69851 movdqa  xmm0, [rsp+58h+var_48]
//   0x69857 jmp     loc_694D8
//   0x6985C align 20h
//   0x69860 shl     rdx, 4
//   0x69864 movaps  [rsp+58h+var_48], xmm0
//   0x69869 mov     rdi, rdx
//   0x6986C mov     r12, rdx
//   0x6986F call    _qalloc_or_throw
//   0x69874 mov     rsi, [rbx+0B0h]; src
//   0x6987B mov     rdx, r12; n
//   0x6987E mov     rdi, rax; dest
//   0x69881 mov     r13, rax
//   0x69884 call    _memcpy
//   0x69889 movdqa  xmm0, [rsp+58h+var_48]
//   0x6988F jmp     loc_69474
//   0x69894 align 8
//   0x69898 cmp     qword ptr [rbp+178h], 1
//   0x698A0 jnz     loc_69716
//   0x698A6 mov     rdi, rbp
//   0x698A9 call    sub_A8320
//   0x698AE jmp     loc_69716
//   0x698B3 align 8
//   0x698B8 mov     r14, [rbx+188h]
//   0x698BF mov     rdi, [rbp+188h]; dest
//   0x698C6 cmp     [rbp+198h], r12
//   0x698CD jb      short loc_698F3
//   0x698CF mov     [rbp+190h], r12
//   0x698D6 mov     rdx, r13; n
//   0x698D9 mov     rsi, r14; src
//   0x698DC call    _memmove
//   0x698E1 mov     rax, [rbp+188h]
//   0x698E8 mov     byte ptr [rax+r12-1], 0
//   0x698EE jmp     loc_69398
//   0x698F3 lea     rax, [rbp+188h]
//   0x698FA mov     rsi, rdi
//   0x698FD mov     ecx, 1
//   0x69902 mov     rdx, r12
//   0x69905 mov     rdi, rax
//   0x69908 call    _qvector_reserve
//   0x6990D mov     [rbp+188h], rax
//   0x69914 mov     rdi, rax
//   0x69917 jmp     short loc_698CF
//   0x69919 mov     rbp, rax
//   0x6991C jmp     loc_2D62C
// ============================================================

void sub_69310(/* signature unknown */)
{
    // see disassembly above
}

