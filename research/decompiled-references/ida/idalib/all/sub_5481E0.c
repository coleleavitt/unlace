// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x5481E0
// Name:           sub_5481E0
// Function size:  1474 bytes (353 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x5481E0 push    r14
//   0x5481E2 push    r13
//   0x5481E4 push    r12
//   0x5481E6 push    rbp
//   0x5481E7 push    rbx
//   0x5481E8 sub     rsp, 20h
//   0x5481EC mov     rbx, fs:28h
//   0x5481F5 mov     [rsp+48h+var_30], rbx
//   0x5481FA mov     rbx, rdi
//   0x5481FD movzx   edi, byte ptr [rdi+46h]
//   0x548201 mov     eax, edi
//   0x548203 and     eax, 0Fh
//   0x548206 cmp     al, 9
//   0x548208 jbe     short loc_548230
//   0x54820A sub     eax, 0Ah; switch 5 cases
//   0x54820D cmp     al, 4
//   0x54820F ja      short def_548225; jumptable 0000000000548225 default case
//   0x548211 lea     rdx, jpt_548225
//   0x548218 movzx   eax, al
//   0x54821B mov     rbp, rsi
//   0x54821E movsxd  rax, ds:(jpt_548225 - 23AEDD0h)[rdx+rax*4]
//   0x548222 add     rax, rdx
//   0x548225 jmp     rax; switch jump
//   0x548227 align 10h
//   0x548230 call    sub_565B80
//   0x548235 mov     [rbx+30h], rax
//   0x548239 test    eax, eax
//   0x54823B jg      short loc_548270
//   0x54823D mov     qword ptr [rbx+30h], 0FFFFFFFFFFFFFFFFh; jumptable 0000000000548225 default case
//   0x548245 mov     dword ptr [rbx+38h], 0
//   0x54824C mov     rax, [rsp+48h+var_30]
//   0x548251 sub     rax, fs:28h
//   0x54825A jnz     loc_5486EE
//   0x548260 add     rsp, 20h
//   0x548264 pop     rbx
//   0x548265 pop     rbp
//   0x548266 pop     r12
//   0x548268 pop     r13
//   0x54826A pop     r14
//   0x54826C retn
//   0x54826D align 10h
//   0x548270 movzx   edi, byte ptr [rbx+46h]
//   0x548274 xor     edx, edx
//   0x548276 mov     rsi, rax
//   0x548279 call    sub_531740
//   0x54827E mov     [rbx+38h], eax
//   0x548281 mov     rax, [rbx+30h]
//   0x548285 lea     rdx, [rax-1]
//   0x548289 cmp     rdx, 0FFFFFFFFFFFFFFFDh
//   0x54828D ja      short loc_54824C
//   0x54828F cmp     byte ptr [rbx+47h], 0
//   0x548293 jnz     loc_548448
//   0x548299 mov     ecx, [rbx+38h]
//   0x54829C test    ecx, ecx
//   0x54829E jz      loc_5486F3
//   0x5482A4 mov     rax, [rbx+30h]
//   0x5482A8 mov     esi, ecx
//   0x5482AA xor     edx, edx
//   0x5482AC div     rsi
//   0x5482AF test    rdx, rdx
//   0x5482B2 jnz     loc_548488
//   0x5482B8 lea     eax, [rcx-1]
//   0x5482BB test    eax, ecx
//   0x5482BD jz      short loc_54824C
//   0x5482BF mov     rax, cs:under_debugger_ptr
//   0x5482C6 cmp     byte ptr [rax], 0
//   0x5482C9 jnz     loc_2C3628
//   0x5482CF mov     rax, [rsp+48h+var_30]
//   0x5482D4 sub     rax, fs:28h
//   0x5482DD jnz     loc_548747
//   0x5482E3 mov     edi, 33Bh
//   0x5482E8 call    _interr
//   0x5482ED align 10h
//   0x5482F0 movzx   eax, byte ptr [rbx]; jumptable 0000000000548225 case 14
//   0x5482F3 mov     dword ptr [rbx+38h], 0
//   0x5482FA mov     [rbx+30h], rax
//   0x5482FE jmp     loc_54824C
//   0x548303 align 8
//   0x548308 movzx   r12d, byte ptr [rbx+1Ch]; jumptable 0000000000548225 case 10
//   0x54830D test    r12b, r12b
//   0x548310 jnz     loc_548640
//   0x548316 test    byte ptr [rbx+1Dh], 60h
//   0x54831A jz      loc_548500
//   0x548320 xor     ebp, ebp
//   0x548322 mov     edi, 3Ah ; ':'
//   0x548327 call    _getinf
//   0x54832C movzx   esi, byte ptr [rbx+1Dh]
//   0x548330 movzx   edi, byte ptr [rbx+46h]
//   0x548334 mov     ecx, ebp
//   0x548336 movzx   edx, al
//   0x548339 call    sub_565A40
//   0x54833E cdqe
//   0x548340 mov     [rbx+30h], rax
//   0x548344 cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x548348 jz      def_548225; jumptable 0000000000548225 default case
//   0x54834E mov     dword ptr [rbx+38h], 1
//   0x548355 cmp     rax, 1
//   0x548359 jbe     loc_54853C
//   0x54835F mov     edx, 1
//   0x548364 nop     word ptr [rax+rax+00000000h]
//   0x54836F nop
//   0x548370 lea     ecx, [rdx+rdx]
//   0x548373 mov     rdx, rcx
//   0x548376 cmp     rcx, rax
//   0x548379 jb      short loc_548370
//   0x54837B mov     [rbx+38h], ecx
//   0x54837E cmp     ecx, 8
//   0x548381 jnz     loc_54828F
//   0x548387 cmp     rax, 6
//   0x54838B jnz     loc_54828F
//   0x548391 mov     dword ptr [rbx+38h], 2
//   0x548398 cmp     byte ptr [rbx+47h], 0
//   0x54839C jnz     loc_548448
//   0x5483A2 mov     ecx, [rbx+38h]
//   0x5483A5 jmp     loc_5482A4
//   0x5483AA align 10h
//   0x5483B0 mov     rsi, [rbx]; jumptable 0000000000548225 case 11
//   0x5483B3 xor     edx, edx
//   0x5483B5 lea     rdi, [rbx+38h]
//   0x5483B9 call    _get_tinfo_size
//   0x5483BE cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x5483C2 jz      loc_5485E8
//   0x5483C8 mov     edx, [rbx+0Ch]
//   0x5483CB imul    rax, rdx
//   0x5483CF mov     [rbx+30h], rax
//   0x5483D3 lea     rdx, [rax-1]
//   0x5483D7 jmp     loc_548289
//   0x5483DC align 20h
//   0x5483E0 mov     rsi, [rbx]; jumptable 0000000000548225 case 12
//   0x5483E3 mov     rdi, rbp
//   0x5483E6 call    sub_6A95B0
//   0x5483EB jmp     def_548225; jumptable 0000000000548225 default case
//   0x5483F0 mov     eax, edi; jumptable 0000000000548225 case 13
//   0x5483F2 and     eax, 30h
//   0x5483F5 cmp     al, 20h ; ' '
//   0x5483F7 jz      loc_548600
//   0x5483FD ja      loc_548530
//   0x548403 mov     rdi, [rbx]
//   0x548406 call    sub_569960
//   0x54840B test    al, al
//   0x54840D jz      def_548225; jumptable 0000000000548225 default case
//   0x548413 mov     rbp, [rbx]
//   0x548416 mov     rdi, rbx
//   0x548419 mov     esi, [rbp+18h]
//   0x54841C call    sub_541EB0
//   0x548421 mov     edx, eax
//   0x548423 mov     rax, [rbp+18h]
//   0x548427 test    dl, dl
//   0x548429 jz      short loc_54842E
//   0x54842B mov     [rbp+28h], eax
//   0x54842E mov     [rbx+30h], rax
//   0x548432 mov     edx, [rbp+28h]
//   0x548435 mov     [rbx+38h], edx
//   0x548438 lea     rdx, [rax-1]
//   0x54843C jmp     loc_548289
//   0x548441 align 8
//   0x548448 mov     edi, 39h ; '9'
//   0x54844D call    _getinf
//   0x548452 and     eax, 0Fh
//   0x548455 cmp     al, 6
//   0x548457 jz      loc_548299
//   0x54845D mov     edi, 43h ; 'C'
//   0x548462 call    _getinf
//   0x548467 test    al, 80h
//   0x548469 jnz     loc_548299
//   0x54846F movzx   ecx, byte ptr [rbx+47h]
//   0x548473 mov     eax, 1
//   0x548478 sub     ecx, 1
//   0x54847B shl     eax, cl
//   0x54847D mov     [rbx+38h], eax
//   0x548480 jmp     loc_54824C
//   0x548485 align 8
//   0x548488 mov     edi, 39h ; '9'
//   0x54848D movzx   ebp, byte ptr [rbx+46h]
//   0x548491 call    _getinf
//   0x548496 and     eax, 0Fh
//   0x548499 cmp     al, 2
//   0x54849B jz      loc_548548
//   0x5484A1 movzx   eax, byte ptr [rbx+46h]
//   0x5484A5 and     eax, 2Fh
//   0x5484A8 cmp     al, 0Dh
//   0x5484AA jnz     short loc_5484C8
//   0x5484AC mov     rax, [rbx]
//   0x5484AF test    rax, rax
//   0x5484B2 jz      short loc_5484C8
//   0x5484B4 cmp     qword ptr [rax+20h], 0
//   0x5484B9 jnz     short loc_5484C8
//   0x5484BB mov     ecx, [rbx+38h]
//   0x5484BE jmp     loc_5482B8
//   0x5484C3 align 8
//   0x5484C8 mov     rax, cs:under_debugger_ptr
//   0x5484CF cmp     byte ptr [rax], 0
//   0x5484D2 jnz     loc_2C3628
//   0x5484D8 mov     rax, [rsp+48h+var_30]
//   0x5484DD sub     rax, fs:28h
//   0x5484E6 jnz     loc_54874C
//   0x5484EC mov     edi, 33Ah
//   0x5484F1 call    _interr
//   0x5484F6 align 20h
//   0x548500 mov     edi, 3Ah ; ':'
//   0x548505 call    _getinf
//   0x54850A test    al, 8
//   0x54850C jz      loc_548320
//   0x548512 mov     rdi, [rbx]
//   0x548515 mov     esi, 2
//   0x54851A xor     ebp, ebp
//   0x54851C call    _get_tinfo_property
//   0x548521 and     eax, 0Fh
//   0x548524 cmp     al, 0Ch
//   0x548526 setz    bpl
//   0x54852A jmp     loc_548322
//   0x54852F align 10h
//   0x548530 cmp     al, 30h ; '0'
//   0x548532 jz      loc_54871D
//   0x548538 mov     rax, [rbx+30h]
//   0x54853C lea     rdx, [rax-1]
//   0x548540 jmp     loc_548289
//   0x548545 align 8
//   0x548548 mov     eax, ebp
//   0x54854A and     eax, 3Fh
//   0x54854D cmp     al, 29h ; ')'
//   0x54854F jz      loc_5484BB
//   0x548555 and     ebp, 0Fh
//   0x548558 cmp     bpl, 0Bh
//   0x54855C jnz     loc_5484A1
//   0x548562 lea     r12, [rsp+48h+var_40]
//   0x548567 mov     rsi, rbx
//   0x54856A mov     [rsp+48h+var_40], 0
//   0x548573 mov     rdi, r12
//   0x548576 call    _copy_tinfo_t
//   0x54857B mov     rdi, [rsp+48h+var_40]
//   0x548580 mov     esi, 12h
//   0x548585 mov     [rsp+48h+var_38], 0
//   0x54858E call    _get_tinfo_property
//   0x548593 mov     rdi, rax
//   0x548596 mov     esi, 2
//   0x54859B mov     [rsp+48h+var_38], rax
//   0x5485A0 call    _get_tinfo_property
//   0x5485A5 mov     rbp, rax
//   0x5485A8 lea     rdi, [rsp+48h+var_38]
//   0x5485AD call    _clear_tinfo_t
//   0x5485B2 and     ebp, 3Fh
//   0x5485B5 cmp     bpl, 29h ; ')'
//   0x5485B9 jnz     loc_5486E1
//   0x5485BF mov     rsi, [rsp+48h+var_40]
//   0x5485C4 xor     edx, edx
//   0x5485C6 xor     edi, edi
//   0x5485C8 call    _get_tinfo_size
//   0x5485CD cmp     rax, 0Ah
//   0x5485D1 jnz     loc_548756
//   0x5485D7 mov     rdi, r12
//   0x5485DA call    _clear_tinfo_t
//   0x5485DF jmp     loc_5484BB
//   0x5485E4 align 8
//   0x5485E8 mov     dword ptr [rbx+38h], 0
//   0x5485EF mov     qword ptr [rbx+30h], 0FFFFFFFFFFFFFFFFh
//   0x5485F7 jmp     loc_54824C
//   0x5485FC align 20h
//   0x548600 mov     rax, [rbx]
//   0x548603 movzx   eax, byte ptr [rax+34h]
//   0x548607 and     eax, 7
//   0x54860A jz      short loc_548678
//   0x54860C movzx   eax, al
//   0x54860F mov     esi, 1
//   0x548614 lea     ecx, [rax-1]
//   0x548617 shl     esi, cl
//   0x548619 movsxd  rsi, esi
//   0x54861C xor     edx, edx
//   0x54861E mov     [rbx+30h], rsi
//   0x548622 call    sub_531740
//   0x548627 mov     [rbx+38h], eax
//   0x54862A mov     rax, [rbx+30h]
//   0x54862E lea     rdx, [rax-1]
//   0x548632 jmp     loc_548289
//   0x548637 align 20h
//   0x548640 movzx   r13d, r12b
//   0x548644 mov     edi, 7D2h
//   0x548649 xor     eax, eax
//   0x54864B mov     [rbx+30h], r13
//   0x54864F call    sub_3792E0
//   0x548654 mov     r14, rax
//   0x548657 test    rax, rax
//   0x54865A jnz     short loc_548667
//   0x54865C mov     r14d, 4
//   0x548662 mov     eax, 4
//   0x548667 cmp     r14, r13
//   0x54866A jb      short loc_548690
//   0x54866C mov     rax, [rbx+30h]
//   0x548670 jmp     loc_54834E
//   0x548675 align 8
//   0x548678 mov     edi, 3Dh ; '='
//   0x54867D call    _getinf
//   0x548682 movzx   edi, byte ptr [rbx+46h]
//   0x548686 movzx   esi, al
//   0x548689 jmp     short loc_548619
//   0x54868B align 10h
//   0x548690 movzx   esi, r12b
//   0x548694 mov     rdi, [rbp+10h]
//   0x548698 lea     rdx, [rsp+48h+var_38]
//   0x54869D mov     [rsp+48h+var_38], 0
//   0x5486A6 sub     esi, 1
//   0x5486A9 sub     esi, eax
//   0x5486AB call    sub_5E6630
//   0x5486B0 test    rax, rax
//   0x5486B3 jz      short loc_54866C
//   0x5486B5 mov     rax, [rsp+48h+var_38]
//   0x5486BA lea     rdx, [rax-1]
//   0x5486BE cmp     rdx, r14
//   0x5486C1 jnb     def_548225; jumptable 0000000000548225 default case
//   0x5486C7 mov     [rbx+30h], rax
//   0x5486CB mov     dword ptr [rbx+38h], 1
//   0x5486D2 cmp     rax, 1
//   0x5486D6 jnz     loc_54835F
//   0x5486DC jmp     loc_548398
//   0x5486E1 mov     rdi, r12
//   0x5486E4 call    _clear_tinfo_t
//   0x5486E9 jmp     loc_5484A1
//   0x5486EE call    ___stack_chk_fail
//   0x5486F3 mov     rax, cs:under_debugger_ptr
//   0x5486FA cmp     byte ptr [rax], 0
//   0x5486FD jnz     loc_2C3628
//   0x548703 mov     rax, [rsp+48h+var_30]
//   0x548708 sub     rax, fs:28h
//   0x548711 jnz     short loc_548751
//   0x548713 mov     edi, 37Ch
//   0x548718 call    _interr
//   0x54871D mov     rax, cs:under_debugger_ptr
//   0x548724 cmp     byte ptr [rax], 0
//   0x548727 jnz     loc_2C3628
//   0x54872D mov     rax, [rsp+48h+var_30]
//   0x548732 sub     rax, fs:28h
//   0x54873B jnz     short loc_548780
//   0x54873D mov     edi, 37Bh
//   0x548742 call    _interr
//   0x548747 call    ___stack_chk_fail
//   0x54874C call    ___stack_chk_fail
//   0x548751 call    ___stack_chk_fail
//   0x548756 mov     rax, cs:under_debugger_ptr
//   0x54875D cmp     byte ptr [rax], 0
//   0x548760 jnz     loc_2C3628
//   0x548766 mov     rax, [rsp+48h+var_30]
//   0x54876B sub     rax, fs:28h
//   0x548774 jnz     short loc_548785
//   0x548776 mov     edi, 45Bh
//   0x54877B call    _interr
//   0x548780 call    ___stack_chk_fail
//   0x548785 call    ___stack_chk_fail
//   0x54878A mov     rbx, rax
//   0x54878D jmp     loc_2C3634
//   0x548792 mov     rbx, rax
//   0x548795 jmp     loc_2C3654
//   0x54879A mov     rbx, rax
//   0x54879D jmp     loc_2C362A
// ============================================================

void sub_5481E0(/* signature unknown */)
{
    // see disassembly above
}

