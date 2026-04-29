// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF62C0
// Name:           sub_F62C0
// Function size:  1352 bytes (314 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF62C0 push    r15
//   0xF62C2 push    r14
//   0xF62C4 push    r13
//   0xF62C6 push    r12
//   0xF62C8 mov     r12, rdi
//   0xF62CB push    rbp
//   0xF62CC push    rbx
//   0xF62CD sub     rsp, 88h
//   0xF62D4 mov     rbp, fs:28h
//   0xF62DD mov     [rsp+0B8h+var_40], rbp
//   0xF62E2 mov     ebp, esi
//   0xF62E4 and     esi, 7
//   0xF62E7 jnz     loc_F65D0
//   0xF62ED mov     rdi, r12
//   0xF62F0 mov     ebx, ebp
//   0xF62F2 call    sub_1E7520
//   0xF62F7 mov     rdi, r12
//   0xF62FA and     ebx, 1
//   0xF62FD call    sub_18C100
//   0xF6302 mov     eax, ebp
//   0xF6304 mov     r8d, [r12+40h]
//   0xF6309 and     eax, 8
//   0xF630C mov     [rsp+0B8h+var_AC], eax
//   0xF6310 test    r8d, r8d
//   0xF6313 jle     loc_F6740
//   0xF6319 mov     [rsp+0B8h+var_B0], 0
//   0xF6321 xor     r14d, r14d
//   0xF6324 xor     r13d, r13d
//   0xF6327 jmp     short loc_F6353
//   0xF6329 align 20h
//   0xF6340 or      dword ptr [r15+18h], 800h
//   0xF6348 add     r14, 1
//   0xF634C cmp     [r12+40h], r14d
//   0xF6351 jle     short loc_F63B0
//   0xF6353 mov     rax, [r12+210h]
//   0xF635B mov     r15, [rax+r14*8]
//   0xF635F mov     rax, [r15+38h]
//   0xF6363 test    rax, rax
//   0xF6366 jz      short loc_F6340
//   0xF6368 mov     eax, [rax]
//   0xF636A sub     eax, 38h ; '8'
//   0xF636D cmp     eax, 1
//   0xF6370 ja      short loc_F6340
//   0xF6372 mov     rdi, r15
//   0xF6375 call    sub_F3920
//   0xF637A test    al, al
//   0xF637C jnz     short loc_F6340
//   0xF637E mov     rax, [r15+38h]
//   0xF6382 add     [rsp+0B8h+var_B0], 1
//   0xF6387 cmp     byte ptr [rax+40h], 8
//   0xF638B jz      short loc_F6340
//   0xF638D mov     esi, ebx
//   0xF638F mov     rdi, r15
//   0xF6392 or      esi, 4
//   0xF6395 call    sub_F0560
//   0xF639A cmp     eax, 1
//   0xF639D jz      short loc_F6340
//   0xF639F add     r13d, 1
//   0xF63A3 add     r14, 1
//   0xF63A7 cmp     [r12+40h], r14d
//   0xF63AC jg      short loc_F6353
//   0xF63AE xchg    ax, ax
//   0xF63B0 mov     esi, [rsp+0B8h+var_AC]
//   0xF63B4 test    esi, esi
//   0xF63B6 jnz     loc_F6610
//   0xF63BC mov     rdi, r12
//   0xF63BF or      ebx, 6
//   0xF63C2 call    sub_18C100
//   0xF63C7 test    r13d, r13d
//   0xF63CA jle     loc_F6536
//   0xF63D0 and     ebp, 10h
//   0xF63D3 jz      loc_F66ED
//   0xF63D9 lea     rbp, [rsp+0B8h+var_A0]
//   0xF63DE pxor    xmm0, xmm0
//   0xF63E2 mov     rdi, [r12+310h]
//   0xF63EA lea     rsi, [rsp+0B8h+var_78]
//   0xF63EF mov     [rsp+0B8h+var_A0], 0
//   0xF63F7 mov     [rsp+0B8h+var_98], 0
//   0xF6400 mov     [rsp+0B8h+var_90], rbp
//   0xF6405 mov     [rsp+0B8h+var_88], rbp
//   0xF640A mov     [rsp+0B8h+var_80], 0
//   0xF6413 mov     [rsp+0B8h+var_78], 0
//   0xF641C mov     [rsp+0B8h+var_60], 0
//   0xF6425 movups  [rsp+0B8h+var_70], xmm0
//   0xF642A movaps  [rsp+0B8h+var_58], xmm0
//   0xF642F call    sub_69BE0
//   0xF6434 mov     eax, [r12+40h]
//   0xF6439 lea     r13, [rsp+0B8h+var_A8]
//   0xF643E sub     eax, 1
//   0xF6441 movsxd  r14, eax
//   0xF6444 jns     short loc_F6465
//   0xF6446 jmp     loc_F64F0
//   0xF644B align 10h
//   0xF6450 or      dword ptr [r15+18h], 800h
//   0xF6458 sub     r14, 1
//   0xF645C test    r14d, r14d
//   0xF645F js      loc_F64F0
//   0xF6465 cmp     r14, qword ptr [rsp+0B8h+var_70]
//   0xF646A jnb     loc_F65E0
//   0xF6470 mov     rax, [rsp+0B8h+var_78]
//   0xF6475 movsxd  rax, dword ptr [rax+r14*4]
//   0xF6479 test    eax, eax
//   0xF647B js      loc_F65E0
//   0xF6481 cmp     [r12+40h], eax
//   0xF6486 jle     loc_F65E0
//   0xF648C mov     rdx, [r12+210h]
//   0xF6494 mov     r15, [rdx+rax*8]
//   0xF6498 mov     rdi, [r15+38h]
//   0xF649C test    rdi, rdi
//   0xF649F jz      short loc_F6450
//   0xF64A1 mov     eax, [rdi]
//   0xF64A3 sub     eax, 38h ; '8'
//   0xF64A6 cmp     eax, 1
//   0xF64A9 ja      short loc_F6450
//   0xF64AB xor     esi, esi
//   0xF64AD call    sub_11C360
//   0xF64B2 test    al, al
//   0xF64B4 jnz     short loc_F6450
//   0xF64B6 mov     rax, [r15+38h]
//   0xF64BA cmp     byte ptr [rax+40h], 8
//   0xF64BE jz      short loc_F6458
//   0xF64C0 mov     esi, ebx
//   0xF64C2 mov     rdi, r15
//   0xF64C5 call    sub_F0560
//   0xF64CA test    eax, eax
//   0xF64CC jz      loc_F6770
//   0xF64D2 cmp     eax, 1
//   0xF64D5 jz      short loc_F6458
//   0xF64D7 lea     rsi, [r15+48h]
//   0xF64DB mov     rdi, r13
//   0xF64DE call    sub_BF9C0
//   0xF64E3 sub     r14, 1
//   0xF64E7 test    r14d, r14d
//   0xF64EA jns     loc_F6465
//   0xF64F0 cmp     [rsp+0B8h+var_80], 0
//   0xF64F6 jnz     loc_F6622
//   0xF64FC mov     rdi, [rsp+0B8h+var_60]
//   0xF6501 test    rdi, rdi
//   0xF6504 jz      short loc_F6514
//   0xF6506 mov     qword ptr [rsp+0B8h+var_58], 0
//   0xF650F call    _qfree
//   0xF6514 mov     rdi, [rsp+0B8h+var_78]
//   0xF6519 test    rdi, rdi
//   0xF651C jz      short loc_F652C
//   0xF651E mov     qword ptr [rsp+0B8h+var_70], 0
//   0xF6527 call    _qfree
//   0xF652C mov     rdi, [rsp+0B8h+var_98]
//   0xF6531 call    sub_F1D90
//   0xF6536 xor     eax, eax
//   0xF6538 lea     rdx, aAnalyzeCalls; "analyze_calls"
//   0xF653F mov     esi, 1
//   0xF6544 mov     rdi, r12
//   0xF6547 call    sub_62DA0
//   0xF654C mov     ecx, [r12+40h]
//   0xF6551 xor     eax, eax
//   0xF6553 test    ecx, ecx
//   0xF6555 jg      short loc_F6575
//   0xF6557 jmp     loc_F671F
//   0xF655C align 20h
//   0xF6560 or      dh, 8
//   0xF6563 mov     [rsi+18h], edx
//   0xF6566 add     rax, 1
//   0xF656A cmp     [r12+40h], eax
//   0xF656F jle     loc_F671F
//   0xF6575 mov     rdx, [r12+210h]
//   0xF657D mov     rsi, [rdx+rax*8]
//   0xF6581 mov     edx, [rsi+18h]
//   0xF6584 test    dh, 8
//   0xF6587 jnz     short loc_F6566
//   0xF6589 test    dl, 2
//   0xF658C jz      short loc_F65A1
//   0xF658E mov     rdi, [rsi+38h]
//   0xF6592 test    rdi, rdi
//   0xF6595 jz      short loc_F6560
//   0xF6597 mov     edi, [rdi]
//   0xF6599 sub     edi, 38h ; '8'
//   0xF659C cmp     edi, 1
//   0xF659F ja      short loc_F6560
//   0xF65A1 mov     rax, cs:under_debugger_ptr
//   0xF65A8 cmp     byte ptr [rax], 0
//   0xF65AB jnz     loc_34558
//   0xF65B1 mov     rax, [rsp+0B8h+var_40]
//   0xF65B6 sub     rax, fs:28h
//   0xF65BF jnz     loc_F67F1
//   0xF65C5 mov     edi, 0C3C2h
//   0xF65CA call    sub_37E160
//   0xF65CF align 10h
//   0xF65D0 call    sub_146460
//   0xF65D5 jmp     loc_F62ED
//   0xF65DA align 20h
//   0xF65E0 mov     rax, cs:under_debugger_ptr
//   0xF65E7 cmp     byte ptr [rax], 0
//   0xF65EA jnz     loc_34558
//   0xF65F0 mov     rax, [rsp+0B8h+var_40]
//   0xF65F5 sub     rax, fs:28h
//   0xF65FE jnz     loc_F67F6
//   0xF6604 mov     edi, 0C3C0h
//   0xF6609 call    sub_37E160
//   0xF660E align 10h
//   0xF6610 mov     rdi, [r12+310h]
//   0xF6618 call    sub_145020
//   0xF661D jmp     loc_F63BC
//   0xF6622 mov     r13, [rsp+0B8h+var_90]
//   0xF6627 cmp     r13, rbp
//   0xF662A jz      loc_F679F
//   0xF6630 mov     byte ptr [rsp+0B8h+var_AC], 0
//   0xF6635 jmp     short loc_F664C
//   0xF6637 align 20h
//   0xF6640 cmp     r14, rbp
//   0xF6643 jz      loc_F675D
//   0xF6649 mov     r13, r14
//   0xF664C movsxd  rdx, dword ptr [r13+20h]
//   0xF6650 mov     rax, [r12+210h]
//   0xF6658 mov     esi, ebx
//   0xF665A mov     r14, [rax+rdx*8]
//   0xF665E mov     rdi, r14
//   0xF6661 call    sub_F0560
//   0xF6666 mov     r15d, eax
//   0xF6669 test    eax, eax
//   0xF666B jz      short loc_F66A3
//   0xF666D mov     rdi, r13
//   0xF6670 call    __ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
//   0xF6675 mov     r14, rax
//   0xF6678 cmp     r15d, 1
//   0xF667C jnz     short loc_F6640
//   0xF667E mov     rsi, rbp
//   0xF6681 mov     rdi, r13
//   0xF6684 call    __ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base *,std::_Rb_tree_node_base&)
//   0xF6689 mov     esi, 28h ; '('; unsigned __int64
//   0xF668E mov     rdi, rax; void *
//   0xF6691 call    __ZdlPvm; operator delete(void *,ulong)
//   0xF6696 sub     [rsp+0B8h+var_80], 1
//   0xF669C mov     byte ptr [rsp+0B8h+var_AC], 1
//   0xF66A1 jmp     short loc_F6640
//   0xF66A3 mov     rax, [r14+38h]
//   0xF66A7 mov     rax, [rax+18h]
//   0xF66AB mov     rdi, [rsp+0B8h+var_60]
//   0xF66B0 mov     [r12+1E8h], rax
//   0xF66B8 test    rdi, rdi
//   0xF66BB jz      short loc_F66CB
//   0xF66BD mov     qword ptr [rsp+0B8h+var_58], 0
//   0xF66C6 call    _qfree
//   0xF66CB mov     rdi, [rsp+0B8h+var_78]
//   0xF66D0 test    rdi, rdi
//   0xF66D3 jz      short loc_F66E3
//   0xF66D5 mov     qword ptr [rsp+0B8h+var_70], 0
//   0xF66DE call    _qfree
//   0xF66E3 mov     rdi, [rsp+0B8h+var_98]
//   0xF66E8 call    sub_F1D90
//   0xF66ED mov     [rsp+0B8h+var_B0], 0FFFFFFFFh
//   0xF66F5 mov     rax, [rsp+0B8h+var_40]
//   0xF66FA sub     rax, fs:28h
//   0xF6703 jnz     loc_F67C2
//   0xF6709 mov     eax, [rsp+0B8h+var_B0]
//   0xF670D add     rsp, 88h
//   0xF6714 pop     rbx
//   0xF6715 pop     rbp
//   0xF6716 pop     r12
//   0xF6718 pop     r13
//   0xF671A pop     r14
//   0xF671C pop     r15
//   0xF671E retn
//   0xF671F or      dword ptr [r12], 1000h
//   0xF6727 mov     rdx, r12
//   0xF672A mov     esi, 12h
//   0xF672F xor     eax, eax
//   0xF6731 mov     rdi, [r12+5D8h]
//   0xF6739 call    sub_339220
//   0xF673E jmp     short loc_F66F5
//   0xF6740 mov     edi, [rsp+0B8h+var_AC]
//   0xF6744 test    edi, edi
//   0xF6746 jnz     short loc_F677D
//   0xF6748 mov     rdi, r12
//   0xF674B call    sub_18C100
//   0xF6750 mov     [rsp+0B8h+var_B0], 0
//   0xF6758 jmp     loc_F6536
//   0xF675D cmp     byte ptr [rsp+0B8h+var_AC], 0
//   0xF6762 jnz     loc_F64F0
//   0xF6768 mov     rax, [rsp+0B8h+var_90]
//   0xF676D jmp     short loc_F67A2
//   0xF676F align 10h
//   0xF6770 mov     rax, [r15+38h]
//   0xF6774 mov     rax, [rax+18h]
//   0xF6778 jmp     loc_F66AB
//   0xF677D mov     rdi, [r12+310h]
//   0xF6785 call    sub_145020
//   0xF678A mov     rdi, r12
//   0xF678D call    sub_18C100
//   0xF6792 mov     [rsp+0B8h+var_B0], 0
//   0xF679A jmp     loc_F6536
//   0xF679F mov     rax, rbp
//   0xF67A2 movsxd  rsi, dword ptr [rax+20h]
//   0xF67A6 mov     edx, 7
//   0xF67AB mov     rdi, r12
//   0xF67AE xor     eax, eax
//   0xF67B0 call    sub_32C190
//   0xF67B5 test    bl, 4
//   0xF67B8 jz      short loc_F67C7
//   0xF67BA and     ebx, 0FFFFFFFBh
//   0xF67BD jmp     loc_F64F0
//   0xF67C2 call    ___stack_chk_fail
//   0xF67C7 mov     rax, cs:under_debugger_ptr
//   0xF67CE cmp     byte ptr [rax], 0
//   0xF67D1 jnz     loc_34558
//   0xF67D7 mov     rax, [rsp+0B8h+var_40]
//   0xF67DC sub     rax, fs:28h
//   0xF67E5 jnz     short loc_F67FB
//   0xF67E7 mov     edi, 0C3C1h
//   0xF67EC call    sub_37E160
//   0xF67F1 call    ___stack_chk_fail
//   0xF67F6 call    ___stack_chk_fail
//   0xF67FB call    ___stack_chk_fail
//   0xF6800 mov     rbx, rax
//   0xF6803 jmp     loc_3455A
// ============================================================

void sub_F62C0(/* signature unknown */)
{
    // see disassembly above
}

