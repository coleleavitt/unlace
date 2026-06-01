// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x4852C0
// Name:           sub_4852C0
// Function size:  1195 bytes (254 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x4852C0 push    r15; int
//   0x4852C2 push    r14; int
//   0x4852C4 mov     r14, rdi
//   0x4852C7 push    r13; int
//   0x4852C9 push    r12; int
//   0x4852CB push    rbp; int
//   0x4852CC push    rbx; int
//   0x4852CD sub     rsp, 0A8h
//   0x4852D4 mov     rax, [rdi+8]
//   0x4852D8 mov     qword ptr [rsp+0D8h+var_C0], rsi; int
//   0x4852DD mov     rbx, fs:28h
//   0x4852E6 mov     qword ptr [rsp+0D8h+var_40], rbx; int
//   0x4852EE mov     ebx, edx
//   0x4852F0 mov     rdx, [rdi+0B0h]
//   0x4852F7 mov     qword ptr [rsp+0D8h+var_B0], rax; int
//   0x4852FC test    rdx, rdx
//   0x4852FF jz      short loc_485367
//   0x485301 mov     r12, [rdi+0B8h]
//   0x485308 test    r12, r12
//   0x48530B jz      short loc_48533E
//   0x48530D xor     ebp, ebp
//   0x48530F nop
//   0x485310 lea     rax, [rbp+rbp*4+0]
//   0x485315 lea     rax, [rdx+rax*8]
//   0x485319 mov     rdi, [rax]; ptr
//   0x48531C test    rdi, rdi
//   0x48531F jz      short loc_485335
//   0x485321 mov     qword ptr [rax+8], 0
//   0x485329 call    _qfree
//   0x48532E mov     rdx, [r14+0B0h]
//   0x485335 add     rbp, 1
//   0x485339 cmp     rbp, r12
//   0x48533C jnz     short loc_485310
//   0x48533E mov     qword ptr [r14+0B8h], 0
//   0x485349 mov     rdi, rdx; ptr
//   0x48534C call    _qfree
//   0x485351 mov     qword ptr [r14+0B0h], 0
//   0x48535C mov     qword ptr [r14+0C0h], 0
//   0x485367 mov     rbp, [r14+0B8h]
//   0x48536E movsxd  rax, ebx
//   0x485371 mov     qword ptr [rsp+0D8h+var_C8], rax; int
//   0x485376 cmp     rax, rbp
//   0x485379 jz      loc_48543F
//   0x48537F pxor    xmm0, xmm0
//   0x485383 mov     [rsp+0D8h+var_78], 0FFFFFFFFh; int
//   0x48538B mov     qword ptr [rsp+0D8h+var_98], 0; int
//   0x485394 mov     qword ptr [rsp+0D8h+var_80], 0; int
//   0x48539D movups  xmmword ptr [rsp+0D8h+var_90], xmm0; int
//   0x4853A2 jb      loc_485628
//   0x4853A8 mov     rsi, [r14+0B0h]
//   0x4853AF lea     rdx, [rsp+0D8h+var_98]
//   0x4853B4 mov     rax, [r14+0C0h]
//   0x4853BB lea     rdi, [r14+0B0h]
//   0x4853C2 cmp     rdx, rsi
//   0x4853C5 jnb     loc_48566E
//   0x4853CB mov     rcx, qword ptr [rsp+0D8h+var_C8]
//   0x4853D0 cmp     rax, rcx
//   0x4853D3 jb      loc_4856F8
//   0x4853D9 mov     rax, qword ptr [rsp+0D8h+var_C8]
//   0x4853DE cmp     rbp, rax
//   0x4853E1 jnb     short loc_485433
//   0x4853E3 lea     rdx, [rbp+rbp*4+0]
//   0x4853E8 pxor    xmm0, xmm0
//   0x4853EC shl     rdx, 3
//   0x4853F0 nop     word ptr [rax+rax+00000000h]
//   0x4853FB nop     dword ptr [rax+rax+00h]
//   0x485400 mov     rax, [r14+0B0h]
//   0x485407 add     rbp, 1
//   0x48540B add     rax, rdx
//   0x48540E add     rdx, 28h ; '('
//   0x485412 mov     qword ptr [rax], 0
//   0x485419 mov     qword ptr [rax+18h], 0
//   0x485421 mov     dword ptr [rax+20h], 0FFFFFFFFh
//   0x485428 movups  xmmword ptr [rax+8], xmm0
//   0x48542C cmp     qword ptr [rsp+0D8h+var_C8], rbp
//   0x485431 jnz     short loc_485400
//   0x485433 mov     rax, qword ptr [rsp+0D8h+var_C8]
//   0x485438 mov     [r14+0B8h], rax
//   0x48543F lea     rax, sub_47FAB0
//   0x485446 xor     r13d, r13d
//   0x485449 movq    xmm2, cs:off_2B2C3E0
//   0x485451 movq    xmm3, rax
//   0x485456 lea     rax, [rsp+0D8h+var_68]
//   0x48545B punpcklqdq xmm2, xmm3
//   0x48545F mov     qword ptr [rsp+0D8h+var_B8], rax; int
//   0x485464 movaps  xmmword ptr [rsp+0D8h+var_A8], xmm2; int
//   0x485469 test    ebx, ebx
//   0x48546B jle     loc_48553B
//   0x485471 mov     rax, qword ptr [rsp+0D8h+var_B0]
//   0x485476 movsxd  rdi, dword ptr [rax+r13*4+10h]
//   0x48547B call    _switch_dbctx
//   0x485480 mov     r15, qword ptr [rsp+0D8h+var_B8]
//   0x485485 mov     rdx, [r14+0B0h]
//   0x48548C mov     qword ptr [rsp+0D8h+var_60], 0; int
//   0x485495 mov     rbp, [rax+688h]
//   0x48549C movdqa  xmm1, xmmword ptr [rsp+0D8h+var_A8]
//   0x4854A2 lea     rax, [r13+r13*4+0]
//   0x4854A7 lea     rbx, [rdx+rax*8]
//   0x4854AB mov     rsi, r15
//   0x4854AE mov     rdi, rbp
//   0x4854B1 mov     qword ptr [rsp+0D8h+var_68], rbx; int
//   0x4854B6 movaps  xmmword ptr [rsp+0D8h+var_58], xmm1; int
//   0x4854BE call    sub_47FAE0
//   0x4854C3 mov     rax, qword ptr [rsp+0D8h+var_58]
//   0x4854CB test    rax, rax
//   0x4854CE jz      short loc_4854DD
//   0x4854D0 mov     edx, 3
//   0x4854D5 mov     rsi, r15
//   0x4854D8 mov     rdi, r15
//   0x4854DB call    rax
//   0x4854DD add     rbp, 658h
//   0x4854E4 xor     r15d, r15d
//   0x4854E7 mov     rdi, rbp
//   0x4854EA call    sub_503DD0
//   0x4854EF mov     r12d, eax
//   0x4854F2 test    eax, eax
//   0x4854F4 jle     short loc_485524
//   0x4854F6 nop     word ptr [rax+rax+00000000h]
//   0x485500 mov     esi, r15d
//   0x485503 mov     rdi, rbp
//   0x485506 call    sub_505DE0
//   0x48550B test    rax, rax
//   0x48550E jz      short loc_48551B
//   0x485510 mov     rsi, rax; int
//   0x485513 mov     rdi, rbx; int
//   0x485516 call    _rangeset_t_sub
//   0x48551B add     r15d, 1
//   0x48551F cmp     r15d, r12d
//   0x485522 jnz     short loc_485500
//   0x485524 cmp     qword ptr [rsp+0D8h+var_C0], 0
//   0x48552A jnz     short loc_485568
//   0x48552C add     r13, 1
//   0x485530 cmp     qword ptr [rsp+0D8h+var_C8], r13
//   0x485535 jnz     loc_485471
//   0x48553B mov     rax, qword ptr [rsp+0D8h+var_40]
//   0x485543 sub     rax, fs:28h
//   0x48554C jnz     loc_485759
//   0x485552 add     rsp, 0A8h
//   0x485559 pop     rbx
//   0x48555A pop     rbp
//   0x48555B pop     r12
//   0x48555D pop     r13
//   0x48555F pop     r14
//   0x485561 pop     r15
//   0x485563 retn
//   0x485564 align 8
//   0x485568 mov     rax, qword ptr [rsp+0D8h+var_C0]
//   0x48556D mov     rcx, qword ptr [rsp+0D8h+var_C8]
//   0x485572 cmp     rcx, [rax+8]
//   0x485576 jz      short loc_485583
//   0x485578 mov     rsi, rcx
//   0x48557B mov     rdi, rax
//   0x48557E call    sub_481440
//   0x485583 mov     rcx, qword ptr [rsp+0D8h+var_C0]
//   0x485588 lea     rax, [r13+r13*2+0]
//   0x48558D cmp     qword ptr [rbx+8], 0
//   0x485592 mov     rdx, [rcx]
//   0x485595 lea     r12, [rdx+rax*8]
//   0x485599 jz      short loc_48552C
//   0x48559B mov     rdx, [r12+8]
//   0x4855A0 xor     ebp, ebp
//   0x4855A2 jmp     short loc_4855E4
//   0x4855A4 align 20h
//   0x4855C0 shl     rdx, 4
//   0x4855C4 add     rbp, 1
//   0x4855C8 movups  xmmword ptr [rsi+rdx], xmm0
//   0x4855CC mov     rax, [r12+8]
//   0x4855D1 lea     rdx, [rax+1]
//   0x4855D5 mov     [r12+8], rdx
//   0x4855DA cmp     rbp, [rbx+8]
//   0x4855DE jnb     loc_48552C
//   0x4855E4 movsxd  rax, ebp
//   0x4855E7 mov     rsi, [r12]
//   0x4855EB shl     rax, 4
//   0x4855EF add     rax, [rbx]
//   0x4855F2 movdqu  xmm0, xmmword ptr [rax]
//   0x4855F6 lea     rax, [rdx+1]
//   0x4855FA cmp     [r12+10h], rax
//   0x4855FF jnb     short loc_4855C0
//   0x485601 mov     rdx, rax
//   0x485604 mov     ecx, 10h
//   0x485609 mov     rdi, r12
//   0x48560C movaps  [rsp+0D8h+var_D8], xmm0
//   0x485610 call    _qvector_reserve
//   0x485615 mov     rdx, [r12+8]
//   0x48561A movdqa  xmm0, [rsp+0D8h+var_D8]
//   0x48561F mov     [r12], rax
//   0x485623 mov     rsi, rax
//   0x485626 jmp     short loc_4855C0
//   0x485628 mov     r12, rax
//   0x48562B nop     dword ptr [rax+rax+00h]
//   0x485630 mov     rdx, [r14+0B0h]
//   0x485637 lea     rax, [r12+r12*4]
//   0x48563B lea     rax, [rdx+rax*8]
//   0x48563F mov     rdi, [rax]; ptr
//   0x485642 test    rdi, rdi
//   0x485645 jz      short loc_485654
//   0x485647 mov     qword ptr [rax+8], 0
//   0x48564F call    _qfree
//   0x485654 add     r12, 1
//   0x485658 cmp     r12, rbp
//   0x48565B jb      short loc_485630
//   0x48565D mov     rax, qword ptr [rsp+0D8h+var_C8]
//   0x485662 mov     [r14+0B8h], rax
//   0x485669 jmp     loc_48543F
//   0x48566E lea     rcx, [rax+rax*4]
//   0x485672 lea     rcx, [rsi+rcx*8]
//   0x485676 cmp     rdx, rcx
//   0x485679 jnb     loc_4853CB
//   0x48567F mov     rcx, qword ptr [rsp+0D8h+var_C8]
//   0x485684 cmp     rax, rcx
//   0x485687 jb      loc_48571A
//   0x48568D mov     rax, qword ptr [rsp+0D8h+var_C8]
//   0x485692 cmp     rbp, rax
//   0x485695 jnb     loc_485433
//   0x48569B lea     rdx, [rbp+rbp*4+0]
//   0x4856A0 pxor    xmm0, xmm0
//   0x4856A4 shl     rdx, 3
//   0x4856A8 nop     word ptr [rax+rax+00000000h]
//   0x4856B3 nop     word ptr [rax+rax+00000000h]
//   0x4856BE xchg    ax, ax
//   0x4856C0 mov     rax, [r14+0B0h]
//   0x4856C7 add     rbp, 1
//   0x4856CB add     rax, rdx
//   0x4856CE add     rdx, 28h ; '('
//   0x4856D2 mov     qword ptr [rax], 0
//   0x4856D9 mov     qword ptr [rax+18h], 0
//   0x4856E1 mov     dword ptr [rax+20h], 0FFFFFFFFh
//   0x4856E8 movups  xmmword ptr [rax+8], xmm0
//   0x4856EC cmp     qword ptr [rsp+0D8h+var_C8], rbp
//   0x4856F1 jnz     short loc_4856C0
//   0x4856F3 jmp     loc_485433
//   0x4856F8 mov     rdx, qword ptr [rsp+0D8h+var_C8]
//   0x4856FD mov     ecx, 28h ; '('
//   0x485702 call    _qvector_reserve
//   0x485707 mov     rbp, [r14+0B8h]
//   0x48570E mov     [r14+0B0h], rax
//   0x485715 jmp     loc_4853D9
//   0x48571A mov     rdx, qword ptr [rsp+0D8h+var_C8]
//   0x48571F mov     ecx, 28h ; '('
//   0x485724 call    _qvector_reserve
//   0x485729 mov     rbp, [r14+0B8h]
//   0x485730 mov     [r14+0B0h], rax
//   0x485737 jmp     loc_48568D
//   0x48573C mov     rdi, qword ptr [rsp+0D8h+var_B8]
//   0x485741 call    sub_377BA0
//   0x485746 mov     rax, qword ptr [rsp+0D8h+var_40]
//   0x48574E sub     rax, fs:28h
//   0x485757 jz      short loc_485763
//   0x485759 call    ___stack_chk_fail
//   0x48575E mov     rbx, rax
//   0x485761 jmp     short loc_48573C
//   0x485763 mov     rdi, rbx; struct _Unwind_Exception *
//   0x485766 call    __Unwind_Resume
// ============================================================

void sub_4852C0(/* signature unknown */)
{
    // see disassembly above
}

