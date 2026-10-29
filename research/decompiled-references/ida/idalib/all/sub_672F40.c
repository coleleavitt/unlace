// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x672F40
// Name:           sub_672F40
// Function size:  1858 bytes (418 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x672F40 push    r15
//   0x672F42 push    r14
//   0x672F44 push    r13
//   0x672F46 push    r12
//   0x672F48 mov     r12, rsi
//   0x672F4B push    rbp
//   0x672F4C push    rbx
//   0x672F4D mov     rbx, rdi
//   0x672F50 sub     rsp, 0B8h
//   0x672F57 mov     [rsp+0E8h+var_DC], edx
//   0x672F5B mov     [rsp+0E8h+var_B8], rcx
//   0x672F60 mov     qword ptr [rsp+0E8h+var_B0], r8
//   0x672F65 mov     [rsp+0E8h+var_C0], r9d
//   0x672F6A mov     [rsp+0E8h+var_B9], r9b
//   0x672F6F mov     rbp, fs:28h
//   0x672F78 mov     [rsp+0E8h+var_40], rbp
//   0x672F80 lea     rbp, [rdi+658h]
//   0x672F87 mov     rdi, rbp
//   0x672F8A call    sub_506150
//   0x672F8F mov     rsi, 0FFFFFFFFFFFFFFFFh
//   0x672F96 mov     rdi, rbp
//   0x672F99 mov     r13, rax
//   0x672F9C call    sub_5060F0
//   0x672FA1 mov     rdx, [rbx+18h]
//   0x672FA5 mov     r13, [r13+0]
//   0x672FA9 mov     rax, [rax+8]
//   0x672FAD mov     rdx, [rdx+10h]
//   0x672FB1 add     r12, r13
//   0x672FB4 mov     [rsp+0E8h+var_D8], rax
//   0x672FB9 and     r12, rdx
//   0x672FBC mov     r14, r12
//   0x672FBF mov     [rsp+0E8h+var_D0], r12
//   0x672FC4 sub     r14, r13
//   0x672FC7 cmp     r12, r13
//   0x672FCA jb      short loc_672FE0
//   0x672FCC lea     rcx, [rax-1]
//   0x672FD0 lea     rax, [r14+rcx]
//   0x672FD4 and     rax, rdx
//   0x672FD7 cmp     rax, rcx
//   0x672FDA jb      loc_673639
//   0x672FE0 lea     rax, [rsp+0E8h+var_68]
//   0x672FE8 mov     rdi, [rbx]
//   0x672FEB pxor    xmm0, xmm0
//   0x672FEF mov     ecx, 10h
//   0x672FF4 mov     rdx, rax
//   0x672FF7 mov     esi, 1Ah
//   0x672FFC mov     qword ptr [rsp+0E8h+var_C8], rax
//   0x673001 movaps  xmmword ptr [rsp+0E8h+var_68], xmm0
//   0x673009 call    sub_630CA0
//   0x67300E mov     rax, [rsp+0E8h+var_D8]
//   0x673013 pxor    xmm0, xmm0
//   0x673017 movdqa  xmm1, xmmword ptr [rsp+0E8h+var_68]
//   0x673020 mov     [rsp+0E8h+var_50], 0
//   0x67302C mov     [rsp+0E8h+var_68], 0
//   0x673038 mov     [rsp+0E8h+var_48], 0FFFFFFFFh
//   0x673043 movaps  xmmword ptr [rsp+0E8h+var_A8], xmm1
//   0x673048 movups  xmmword ptr [rsp+0E8h+var_68+8], xmm0
//   0x673050 cmp     r13, rax
//   0x673053 jb      loc_6733C0
//   0x673059 test    byte ptr [rsp+0E8h+var_DC], 80h
//   0x67305E jz      loc_673130
//   0x673064 mov     [rsp+0E8h+var_BA], 0
//   0x673069 mov     rdi, [rbx]
//   0x67306C mov     esi, 5Dh ; ']'
//   0x673071 call    sub_631AD0
//   0x673076 mov     rdx, [rbx+18h]
//   0x67307A add     rax, r14
//   0x67307D mov     r12d, 1
//   0x673083 and     rax, [rdx+10h]
//   0x673087 cmp     rax, qword ptr [rsp+0E8h+var_A8]
//   0x67308C jb      short loc_673097
//   0x67308E cmp     rax, qword ptr [rsp+0E8h+var_A8+8]
//   0x673093 setnb   r12b
//   0x673097 mov     [rsp+0E8h+ptr], 0
//   0x6730A0 pxor    xmm0, xmm0
//   0x6730A4 mov     rdi, rbp
//   0x6730A7 movups  [rsp+0E8h+var_80], xmm0
//   0x6730AC call    sub_506150
//   0x6730B1 mov     r15, rax
//   0x6730B4 lea     rax, [rsp+0E8h+ptr]
//   0x6730B9 mov     [rsp+0E8h+var_E8], rax
//   0x6730BD jmp     short loc_6730D8
//   0x6730BF align 20h
//   0x6730C0 mov     [rsi+rax*8], r15
//   0x6730C4 mov     rdi, rbp
//   0x6730C7 add     qword ptr [rsp+0E8h+var_80], 1
//   0x6730CD mov     rsi, [r15]
//   0x6730D0 call    sub_505EB0
//   0x6730D5 mov     r15, rax
//   0x6730D8 test    r15, r15
//   0x6730DB jz      loc_6731B0
//   0x6730E1 mov     rax, [r15+8]
//   0x6730E5 cmp     qword ptr [rsp+0E8h+var_A8], rax
//   0x6730EA jnb     short loc_6730FA
//   0x6730EC mov     rax, qword ptr [rsp+0E8h+var_A8+8]
//   0x6730F1 cmp     [r15], rax
//   0x6730F4 setnb   al
//   0x6730F7 and     r12d, eax
//   0x6730FA mov     rax, qword ptr [rsp+0E8h+var_80]
//   0x6730FF mov     rsi, [rsp+0E8h+ptr]
//   0x673104 lea     rdx, [rax+1]
//   0x673108 cmp     qword ptr [rsp+0E8h+var_80+8], rdx
//   0x67310D jnb     short loc_6730C0
//   0x67310F mov     rdi, [rsp+0E8h+var_E8]
//   0x673113 mov     ecx, 8
//   0x673118 call    _qvector_reserve
//   0x67311D mov     [rsp+0E8h+ptr], rax
//   0x673122 mov     rsi, rax
//   0x673125 mov     rax, qword ptr [rsp+0E8h+var_80]
//   0x67312A jmp     short loc_6730C0
//   0x67312C align 10h
//   0x673130 mov     rsi, r14
//   0x673133 mov     rdi, rbx
//   0x673136 neg     rsi
//   0x673139 call    sub_66F990
//   0x67313E mov     [rsp+0E8h+var_BA], al
//   0x673142 test    al, al
//   0x673144 jnz     loc_673069
//   0x67314A mov     r12d, [rsp+0E8h+var_C0]
//   0x67314F mov     r15d, 0FFFFFFF5h
//   0x673155 test    r12b, r12b
//   0x673158 jz      loc_6733A0
//   0x67315E xchg    ax, ax
//   0x673160 mov     rdi, [rsp+0E8h+var_68]; ptr
//   0x673168 test    rdi, rdi
//   0x67316B jz      short loc_67317E
//   0x67316D mov     [rsp+0E8h+var_68+8], 0
//   0x673179 call    _qfree
//   0x67317E mov     rax, [rsp+0E8h+var_40]
//   0x673186 sub     rax, fs:28h
//   0x67318F jnz     loc_673665
//   0x673195 add     rsp, 0B8h
//   0x67319C mov     eax, r15d
//   0x67319F pop     rbx
//   0x6731A0 pop     rbp
//   0x6731A1 pop     r12
//   0x6731A3 pop     r13
//   0x6731A5 pop     r14
//   0x6731A7 pop     r15
//   0x6731A9 retn
//   0x6731AA align 10h
//   0x6731B0 cmp     [rsp+0E8h+var_BA], 0
//   0x6731B5 jnz     short loc_6731CF
//   0x6731B7 test    r12b, r12b
//   0x6731BA jz      loc_673338
//   0x6731C0 mov     rdi, qword ptr [rsp+0E8h+var_C8]; int
//   0x6731C5 lea     rsi, [rsp+0E8h+var_A8]; int
//   0x6731CA call    _rangeset_t_sub
//   0x6731CF mov     rax, [rsp+0E8h+var_D0]
//   0x6731D4 cmp     r13, rax
//   0x6731D7 jb      loc_673340
//   0x6731DD lea     rax, [rsp+0E8h+ptr]
//   0x6731E2 mov     ecx, [rsp+0E8h+var_DC]
//   0x6731E6 mov     rdx, r14
//   0x6731E9 mov     rdi, rbx
//   0x6731EC mov     rsi, rax
//   0x6731EF mov     qword ptr [rsp+0E8h+var_C8], rax
//   0x6731F4 call    sub_66FAA0
//   0x6731F9 mov     r15d, eax
//   0x6731FC test    eax, eax
//   0x6731FE jnz     loc_673310
//   0x673204 mov     rbp, [rsp+0E8h+var_D8]
//   0x673209 mov     rdx, [rsp+0E8h+var_D0]
//   0x67320E lea     rdi, [rbx+528h]
//   0x673215 mov     rsi, r13
//   0x673218 sub     rbp, r13
//   0x67321B mov     rcx, rbp
//   0x67321E call    sub_507C10
//   0x673223 test    al, al
//   0x673225 jz      loc_673644
//   0x67322B mov     rdx, [rsp+0E8h+var_D0]
//   0x673230 lea     rdi, [rbx+9D8h]
//   0x673237 mov     rcx, rbp
//   0x67323A mov     rsi, r13
//   0x67323D call    sub_507C10
//   0x673242 mov     ebp, eax
//   0x673244 test    al, al
//   0x673246 jz      loc_67365A
//   0x67324C pxor    xmm0, xmm0
//   0x673250 cmp     [rsp+0E8h+var_BA], 0
//   0x673255 movaps  [rsp+0E8h+var_98], xmm0
//   0x67325A jnz     loc_673410
//   0x673260 cmp     byte ptr [rsp+0E8h+var_C0], 0
//   0x673265 jnz     loc_673310
//   0x67326B xor     r13d, r13d
//   0x67326E test    byte ptr [rsp+0E8h+var_DC], 1
//   0x673273 jz      loc_6735EA
//   0x673279 mov     eax, [rsp+0E8h+var_DC]
//   0x67327D test    al, 8
//   0x67327F jnz     loc_6734DD
//   0x673285 mov     rbp, [rsp+0E8h+var_68+8]
//   0x67328D mov     r9, [rsp+0E8h+var_68]
//   0x673295 mov     dword ptr [rsp+0E8h+var_D8], eax
//   0x673299 shl     rbp, 4
//   0x67329D add     rbp, r9
//   0x6732A0 cmp     r9, rbp
//   0x6732A3 jz      loc_673514
//   0x6732A9 mov     eax, dword ptr [rsp+0E8h+var_D8]
//   0x6732AD mov     r12, r9
//   0x6732B0 xor     r13d, r13d
//   0x6732B3 or      eax, 40h
//   0x6732B6 mov     dword ptr [rsp+0E8h+var_E8], eax
//   0x6732B9 nop     dword ptr [rax+00000000h]
//   0x6732C0 mov     rsi, [r12]
//   0x6732C4 mov     rcx, [r12+8]
//   0x6732C9 mov     rdi, rbx; int
//   0x6732CC mov     r8d, dword ptr [rsp+0E8h+var_E8]
//   0x6732D0 sub     rcx, rsi
//   0x6732D3 lea     rdx, [r14+rsi]
//   0x6732D7 call    sub_6717E0
//   0x6732DC test    eax, eax
//   0x6732DE mov     eax, 0FFFFFFFBh
//   0x6732E3 cmovnz  r13d, eax
//   0x6732E7 add     r12, 10h
//   0x6732EB cmp     rbp, r12
//   0x6732EE jnz     short loc_6732C0
//   0x6732F0 test    r13d, r13d
//   0x6732F3 jz      loc_673508
//   0x6732F9 test    byte ptr [rsp+0E8h+var_D8], 80h
//   0x6732FE jz      loc_673553
//   0x673304 nop     word ptr [rax+rax+00000000h]
//   0x67330F nop
//   0x673310 mov     rdi, [rsp+0E8h+ptr]; ptr
//   0x673315 test    rdi, rdi
//   0x673318 jz      loc_673160
//   0x67331E mov     qword ptr [rsp+0E8h+var_80], 0
//   0x673327 call    _qfree
//   0x67332C jmp     loc_673160
//   0x673331 align 8
//   0x673338 mov     r15d, 0FFFFFFF5h
//   0x67333E jmp     short loc_673310
//   0x673340 mov     rdx, [rsp+0E8h+ptr]
//   0x673345 mov     rax, qword ptr [rsp+0E8h+var_80]
//   0x67334A lea     rax, [rdx+rax*8]
//   0x67334E cmp     rdx, rax
//   0x673351 jz      loc_6731DD
//   0x673357 sub     rax, 8
//   0x67335B cmp     rdx, rax
//   0x67335E jnb     loc_6731DD
//   0x673364 nop     word ptr [rax+rax+00000000h]
//   0x67336F nop     word ptr [rax+rax+00000000h]
//   0x67337A nop     word ptr [rax+rax+00h]
//   0x673380 mov     rcx, [rdx]
//   0x673383 mov     rsi, [rax]
//   0x673386 add     rdx, 8
//   0x67338A sub     rax, 8
//   0x67338E mov     [rdx-8], rsi
//   0x673392 mov     [rax+8], rcx
//   0x673396 cmp     rdx, rax
//   0x673399 jb      short loc_673380
//   0x67339B jmp     loc_6731DD
//   0x6733A0 lea     rdi, aDisablingFastR; "Disabling fast rebasing to avoid fragme"...
//   0x6733A7 call    sub_368890
//   0x6733AC or      [rsp+0E8h+var_DC], 80h
//   0x6733B4 mov     [rsp+0E8h+var_BA], r12b
//   0x6733B9 jmp     loc_673069
//   0x6733BE align 20h
//   0x6733C0 mov     rdi, qword ptr [rsp+0E8h+var_C8]
//   0x6733C5 mov     ecx, 10h
//   0x6733CA mov     edx, 1
//   0x6733CF xor     esi, esi
//   0x6733D1 call    _qvector_reserve
//   0x6733D6 mov     rdx, [rsp+0E8h+var_68+8]
//   0x6733DE movq    xmm0, r13
//   0x6733E3 mov     [rsp+0E8h+var_68], rax
//   0x6733EB movhps  xmm0, [rsp+0E8h+var_D8]
//   0x6733F0 shl     rdx, 4
//   0x6733F4 movups  xmmword ptr [rax+rdx], xmm0
//   0x6733F8 add     [rsp+0E8h+var_68+8], 1
//   0x673401 jmp     loc_673059
//   0x673406 align 10h
//   0x673410 mov     rdi, [rbx]
//   0x673413 mov     esi, 1Dh
//   0x673418 call    sub_631AD0
//   0x67341D mov     rsi, r13
//   0x673420 mov     rdi, rbx
//   0x673423 mov     [rsp+0E8h+var_E8], rax
//   0x673427 call    sub_3BDD60
//   0x67342C mov     rcx, [rsp+0E8h+var_D0]
//   0x673431 mov     r13, rax
//   0x673434 mov     rax, rcx
//   0x673437 sub     rax, r13
//   0x67343A sub     r13, rcx
//   0x67343D mov     rcx, [rsp+0E8h+var_E8]
//   0x673441 add     rax, rcx
//   0x673444 cmp     r14, rax
//   0x673447 jz      short loc_673482
//   0x673449 mov     rdx, [rbx+18h]
//   0x67344D mov     rcx, r14
//   0x673450 xor     rcx, rax
//   0x673453 mov     rdx, [rdx+10h]
//   0x673457 test    rcx, rdx
//   0x67345A jnz     loc_6735B3
//   0x673460 mov     rcx, qword ptr [rsp+0E8h+var_A8]
//   0x673465 add     rcx, rax
//   0x673468 cmp     rdx, rcx
//   0x67346B jnb     loc_6735B3
//   0x673471 mov     rcx, qword ptr [rsp+0E8h+var_A8+8]
//   0x673476 add     rcx, rax
//   0x673479 cmp     rdx, rcx
//   0x67347C jnb     loc_6735B3
//   0x673482 movq    xmm0, rax
//   0x673487 cmp     byte ptr [rsp+0E8h+var_C0], 0
//   0x67348C punpcklqdq xmm0, xmm0
//   0x673490 paddq   xmm0, xmmword ptr [rsp+0E8h+var_A8]
//   0x673496 movaps  [rsp+0E8h+var_98], xmm0
//   0x67349B jnz     loc_673310
//   0x6734A1 test    byte ptr [rsp+0E8h+var_DC], 1
//   0x6734A6 jz      loc_67364F
//   0x6734AC mov     rdi, [rbx]
//   0x6734AF mov     rdx, r13
//   0x6734B2 mov     esi, 1Dh
//   0x6734B7 call    sub_632610
//   0x6734BC mov     rdi, [rbx]
//   0x6734BF lea     rdx, [rsp+0E8h+var_98]
//   0x6734C4 mov     ecx, 10h
//   0x6734C9 mov     esi, 1Ah
//   0x6734CE call    sub_632C30
//   0x6734D3 mov     [rsp+0E8h+var_B9], bpl
//   0x6734D8 jmp     loc_673279
//   0x6734DD mov     rbp, [rsp+0E8h+var_68+8]
//   0x6734E5 mov     eax, [rsp+0E8h+var_DC]
//   0x6734E9 mov     r9, [rsp+0E8h+var_68]
//   0x6734F1 shl     rbp, 4
//   0x6734F5 or      eax, 2
//   0x6734F8 add     rbp, r9
//   0x6734FB mov     dword ptr [rsp+0E8h+var_D8], eax
//   0x6734FF cmp     rbp, r9
//   0x673502 jnz     loc_6732A9
//   0x673508 mov     eax, [rsp+0E8h+var_DC]
//   0x67350C and     eax, 0Ah
//   0x67350F cmp     eax, 8
//   0x673512 jz      short loc_673585
//   0x673514 mov     rbp, [rbx]
//   0x673517 mov     esi, 5Dh ; ']'
//   0x67351C mov     rdi, rbp
//   0x67351F call    sub_631AD0
//   0x673524 cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x673528 jnz     short loc_673563
//   0x67352A mov     rax, [rsp+0E8h+var_B8]
//   0x67352F mov     rdi, [rbx]; int
//   0x673532 mov     rcx, r14
//   0x673535 movzx   r9d, [rsp+0E8h+var_B9]
//   0x67353B mov     rdx, qword ptr [rsp+0E8h+var_C8]
//   0x673540 movzx   r8d, byte ptr [rax]
//   0x673544 mov     rsi, qword ptr [rsp+0E8h+var_B0]; int
//   0x673549 call    sub_66EFC0
//   0x67354E jmp     loc_6732F9
//   0x673553 mov     rdi, [rbx]
//   0x673556 mov     rsi, r14
//   0x673559 call    sub_52CEC0
//   0x67355E jmp     loc_673310
//   0x673563 mov     rdx, [rbp+688h]
//   0x67356A mov     esi, 5Dh ; ']'
//   0x67356F mov     rdi, rbp
//   0x673572 mov     rcx, [rdx+18h]
//   0x673576 lea     rdx, [r14+rax]
//   0x67357A and     rdx, [rcx+10h]
//   0x67357E call    sub_632610
//   0x673583 jmp     short loc_67352A
//   0x673585 mov     ecx, [rsp+0E8h+var_DC]
//   0x673589 xor     edx, edx
//   0x67358B mov     rsi, r14
//   0x67358E mov     rdi, 0FFFFFFFFFFFFFFFFh
//   0x673595 shr     ecx, 2
//   0x673598 and     ecx, 1
//   0x67359B call    sub_6422B0
//   0x6735A0 test    al, al
//   0x6735A2 jnz     loc_673514
//   0x6735A8 mov     r15d, 0FFFFFFFBh
//   0x6735AE jmp     loc_673310
//   0x6735B3 xor     r12d, 1
//   0x6735B7 or      r12b, byte ptr [rsp+0E8h+var_C0]
//   0x6735BC mov     [rsp+0E8h+var_B9], r12b
//   0x6735C1 jnz     loc_673338
//   0x6735C7 lea     rdi, aDisablingFastR_0; "Disabling fast rebasing to avoid an inv"...
//   0x6735CE xor     eax, eax
//   0x6735D0 call    sub_368890
//   0x6735D5 mov     ecx, [rsp+0E8h+var_DC]
//   0x6735D9 mov     eax, ecx
//   0x6735DB or      al, 80h
//   0x6735DD and     ecx, 1
//   0x6735E0 mov     [rsp+0E8h+var_DC], eax
//   0x6735E4 jnz     loc_673279
//   0x6735EA mov     rax, [rbx+18h]
//   0x6735EE mov     rdx, [rsp+0E8h+var_D0]
//   0x6735F3 lea     rdi, aRebasingProgra; "Rebasing program to 0x%0*a...\n"
//   0x6735FA mov     eax, [rax+18h]
//   0x6735FD lea     r12d, [rax+rax]
//   0x673601 xor     eax, eax
//   0x673603 mov     esi, r12d
//   0x673606 call    sub_368890
//   0x67360B mov     rdx, [rsp+0E8h+var_D0]
//   0x673610 mov     esi, r12d
//   0x673613 lea     rdi, aHidecancelReba; "HIDECANCEL\nRebasing program to 0x%0*a"
//   0x67361A xor     eax, eax
//   0x67361C call    sub_387AC0
//   0x673621 mov     rax, [rsp+0E8h+var_B8]
//   0x673626 cmp     [rsp+0E8h+var_B9], 0
//   0x67362B mov     byte ptr [rax], 1
//   0x67362E jnz     loc_6734AC
//   0x673634 jmp     loc_673279
//   0x673639 mov     r15d, 0FFFFFFFEh
//   0x67363F jmp     loc_67317E
//   0x673644 mov     r15d, 0FFFFFFF7h
//   0x67364A jmp     loc_673310
//   0x67364F movzx   eax, [rsp+0E8h+var_BA]
//   0x673654 mov     [rsp+0E8h+var_B9], al
//   0x673658 jmp     short loc_6735EA
//   0x67365A mov     r15d, 0FFFFFFF6h
//   0x673660 jmp     loc_673310
//   0x673665 call    ___stack_chk_fail
//   0x67366A mov     rbx, rax
//   0x67366D jmp     loc_2D2438
//   0x673672 mov     rbx, rax
//   0x673675 jmp     loc_2D2485
//   0x67367A mov     rbx, rax
//   0x67367D jmp     loc_2D244E
// ============================================================

void sub_672F40(/* signature unknown */)
{
    // see disassembly above
}

