// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xFA4C0
// Name:           sub_FA4C0
// Function size:  1352 bytes (314 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xFA4C0 push    r15
//   0xFA4C2 push    r14
//   0xFA4C4 push    r13
//   0xFA4C6 push    r12
//   0xFA4C8 mov     r12, rdi
//   0xFA4CB push    rbp
//   0xFA4CC push    rbx
//   0xFA4CD sub     rsp, 88h
//   0xFA4D4 mov     rbp, fs:28h
//   0xFA4DD mov     [rsp+0B8h+var_40], rbp
//   0xFA4E2 mov     ebp, esi
//   0xFA4E4 and     esi, 7
//   0xFA4E7 jnz     loc_FA7D0
//   0xFA4ED mov     rdi, r12
//   0xFA4F0 mov     ebx, ebp
//   0xFA4F2 call    sub_1EBDA0
//   0xFA4F7 mov     rdi, r12
//   0xFA4FA and     ebx, 1
//   0xFA4FD call    sub_190300
//   0xFA502 mov     eax, ebp
//   0xFA504 mov     r8d, [r12+40h]
//   0xFA509 and     eax, 8
//   0xFA50C mov     [rsp+0B8h+var_AC], eax
//   0xFA510 test    r8d, r8d
//   0xFA513 jle     loc_FA940
//   0xFA519 mov     [rsp+0B8h+var_B0], 0
//   0xFA521 xor     r14d, r14d
//   0xFA524 xor     r13d, r13d
//   0xFA527 jmp     short loc_FA553
//   0xFA529 align 20h
//   0xFA540 or      dword ptr [r15+18h], 800h
//   0xFA548 add     r14, 1
//   0xFA54C cmp     [r12+40h], r14d
//   0xFA551 jle     short loc_FA5B0
//   0xFA553 mov     rax, [r12+210h]
//   0xFA55B mov     r15, [rax+r14*8]
//   0xFA55F mov     rax, [r15+38h]
//   0xFA563 test    rax, rax
//   0xFA566 jz      short loc_FA540
//   0xFA568 mov     eax, [rax]
//   0xFA56A sub     eax, 38h ; '8'
//   0xFA56D cmp     eax, 1
//   0xFA570 ja      short loc_FA540
//   0xFA572 mov     rdi, r15
//   0xFA575 call    sub_F7B20
//   0xFA57A test    al, al
//   0xFA57C jnz     short loc_FA540
//   0xFA57E mov     rax, [r15+38h]
//   0xFA582 add     [rsp+0B8h+var_B0], 1
//   0xFA587 cmp     byte ptr [rax+40h], 8
//   0xFA58B jz      short loc_FA540
//   0xFA58D mov     esi, ebx
//   0xFA58F mov     rdi, r15
//   0xFA592 or      esi, 4
//   0xFA595 call    sub_F4760
//   0xFA59A cmp     eax, 1
//   0xFA59D jz      short loc_FA540
//   0xFA59F add     r13d, 1
//   0xFA5A3 add     r14, 1
//   0xFA5A7 cmp     [r12+40h], r14d
//   0xFA5AC jg      short loc_FA553
//   0xFA5AE xchg    ax, ax
//   0xFA5B0 mov     esi, [rsp+0B8h+var_AC]
//   0xFA5B4 test    esi, esi
//   0xFA5B6 jnz     loc_FA810
//   0xFA5BC mov     rdi, r12
//   0xFA5BF or      ebx, 6
//   0xFA5C2 call    sub_190300
//   0xFA5C7 test    r13d, r13d
//   0xFA5CA jle     loc_FA736
//   0xFA5D0 and     ebp, 10h
//   0xFA5D3 jz      loc_FA8ED
//   0xFA5D9 lea     rbp, [rsp+0B8h+var_A0]
//   0xFA5DE pxor    xmm0, xmm0
//   0xFA5E2 mov     rdi, [r12+310h]
//   0xFA5EA lea     rsi, [rsp+0B8h+var_78]
//   0xFA5EF mov     [rsp+0B8h+var_A0], 0
//   0xFA5F7 mov     [rsp+0B8h+var_98], 0
//   0xFA600 mov     [rsp+0B8h+var_90], rbp
//   0xFA605 mov     [rsp+0B8h+var_88], rbp
//   0xFA60A mov     [rsp+0B8h+var_80], 0
//   0xFA613 mov     [rsp+0B8h+var_78], 0
//   0xFA61C mov     [rsp+0B8h+var_60], 0
//   0xFA625 movups  [rsp+0B8h+var_70], xmm0
//   0xFA62A movaps  [rsp+0B8h+var_58], xmm0
//   0xFA62F call    sub_6DDE0
//   0xFA634 mov     eax, [r12+40h]
//   0xFA639 lea     r13, [rsp+0B8h+var_A8]
//   0xFA63E sub     eax, 1
//   0xFA641 movsxd  r14, eax
//   0xFA644 jns     short loc_FA665
//   0xFA646 jmp     loc_FA6F0
//   0xFA64B align 10h
//   0xFA650 or      dword ptr [r15+18h], 800h
//   0xFA658 sub     r14, 1
//   0xFA65C test    r14d, r14d
//   0xFA65F js      loc_FA6F0
//   0xFA665 cmp     r14, qword ptr [rsp+0B8h+var_70]
//   0xFA66A jnb     loc_FA7E0
//   0xFA670 mov     rax, [rsp+0B8h+var_78]
//   0xFA675 movsxd  rax, dword ptr [rax+r14*4]
//   0xFA679 test    eax, eax
//   0xFA67B js      loc_FA7E0
//   0xFA681 cmp     [r12+40h], eax
//   0xFA686 jle     loc_FA7E0
//   0xFA68C mov     rdx, [r12+210h]
//   0xFA694 mov     r15, [rdx+rax*8]
//   0xFA698 mov     rdi, [r15+38h]
//   0xFA69C test    rdi, rdi
//   0xFA69F jz      short loc_FA650
//   0xFA6A1 mov     eax, [rdi]
//   0xFA6A3 sub     eax, 38h ; '8'
//   0xFA6A6 cmp     eax, 1
//   0xFA6A9 ja      short loc_FA650
//   0xFA6AB xor     esi, esi
//   0xFA6AD call    sub_120560
//   0xFA6B2 test    al, al
//   0xFA6B4 jnz     short loc_FA650
//   0xFA6B6 mov     rax, [r15+38h]
//   0xFA6BA cmp     byte ptr [rax+40h], 8
//   0xFA6BE jz      short loc_FA658
//   0xFA6C0 mov     esi, ebx
//   0xFA6C2 mov     rdi, r15
//   0xFA6C5 call    sub_F4760
//   0xFA6CA test    eax, eax
//   0xFA6CC jz      loc_FA970
//   0xFA6D2 cmp     eax, 1
//   0xFA6D5 jz      short loc_FA658
//   0xFA6D7 lea     rsi, [r15+48h]
//   0xFA6DB mov     rdi, r13
//   0xFA6DE call    sub_C3BC0
//   0xFA6E3 sub     r14, 1
//   0xFA6E7 test    r14d, r14d
//   0xFA6EA jns     loc_FA665
//   0xFA6F0 cmp     [rsp+0B8h+var_80], 0
//   0xFA6F6 jnz     loc_FA822
//   0xFA6FC mov     rdi, [rsp+0B8h+var_60]
//   0xFA701 test    rdi, rdi
//   0xFA704 jz      short loc_FA714
//   0xFA706 mov     qword ptr [rsp+0B8h+var_58], 0
//   0xFA70F call    _qfree
//   0xFA714 mov     rdi, [rsp+0B8h+var_78]
//   0xFA719 test    rdi, rdi
//   0xFA71C jz      short loc_FA72C
//   0xFA71E mov     qword ptr [rsp+0B8h+var_70], 0
//   0xFA727 call    _qfree
//   0xFA72C mov     rdi, [rsp+0B8h+var_98]
//   0xFA731 call    sub_F5F90
//   0xFA736 xor     eax, eax
//   0xFA738 lea     rdx, aAnalyzeCalls; "analyze_calls"
//   0xFA73F mov     esi, 1
//   0xFA744 mov     rdi, r12
//   0xFA747 call    sub_66FA0
//   0xFA74C mov     ecx, [r12+40h]
//   0xFA751 xor     eax, eax
//   0xFA753 test    ecx, ecx
//   0xFA755 jg      short loc_FA775
//   0xFA757 jmp     loc_FA91F
//   0xFA75C align 20h
//   0xFA760 or      dh, 8
//   0xFA763 mov     [rsi+18h], edx
//   0xFA766 add     rax, 1
//   0xFA76A cmp     [r12+40h], eax
//   0xFA76F jle     loc_FA91F
//   0xFA775 mov     rdx, [r12+210h]
//   0xFA77D mov     rsi, [rdx+rax*8]
//   0xFA781 mov     edx, [rsi+18h]
//   0xFA784 test    dh, 8
//   0xFA787 jnz     short loc_FA766
//   0xFA789 test    dl, 2
//   0xFA78C jz      short loc_FA7A1
//   0xFA78E mov     rdi, [rsi+38h]
//   0xFA792 test    rdi, rdi
//   0xFA795 jz      short loc_FA760
//   0xFA797 mov     edi, [rdi]
//   0xFA799 sub     edi, 38h ; '8'
//   0xFA79C cmp     edi, 1
//   0xFA79F ja      short loc_FA760
//   0xFA7A1 mov     rax, cs:under_debugger_ptr
//   0xFA7A8 cmp     byte ptr [rax], 0
//   0xFA7AB jnz     loc_356D8
//   0xFA7B1 mov     rax, [rsp+0B8h+var_40]
//   0xFA7B6 sub     rax, fs:28h
//   0xFA7BF jnz     loc_FA9F1
//   0xFA7C5 mov     edi, 0C3C2h
//   0xFA7CA call    sub_383060
//   0xFA7CF align 10h
//   0xFA7D0 call    sub_14A660
//   0xFA7D5 jmp     loc_FA4ED
//   0xFA7DA align 20h
//   0xFA7E0 mov     rax, cs:under_debugger_ptr
//   0xFA7E7 cmp     byte ptr [rax], 0
//   0xFA7EA jnz     loc_356D8
//   0xFA7F0 mov     rax, [rsp+0B8h+var_40]
//   0xFA7F5 sub     rax, fs:28h
//   0xFA7FE jnz     loc_FA9F6
//   0xFA804 mov     edi, 0C3C0h
//   0xFA809 call    sub_383060
//   0xFA80E align 10h
//   0xFA810 mov     rdi, [r12+310h]
//   0xFA818 call    sub_149220
//   0xFA81D jmp     loc_FA5BC
//   0xFA822 mov     r13, [rsp+0B8h+var_90]
//   0xFA827 cmp     r13, rbp
//   0xFA82A jz      loc_FA99F
//   0xFA830 mov     byte ptr [rsp+0B8h+var_AC], 0
//   0xFA835 jmp     short loc_FA84C
//   0xFA837 align 20h
//   0xFA840 cmp     r14, rbp
//   0xFA843 jz      loc_FA95D
//   0xFA849 mov     r13, r14
//   0xFA84C movsxd  rdx, dword ptr [r13+20h]
//   0xFA850 mov     rax, [r12+210h]
//   0xFA858 mov     esi, ebx
//   0xFA85A mov     r14, [rax+rdx*8]
//   0xFA85E mov     rdi, r14
//   0xFA861 call    sub_F4760
//   0xFA866 mov     r15d, eax
//   0xFA869 test    eax, eax
//   0xFA86B jz      short loc_FA8A3
//   0xFA86D mov     rdi, r13
//   0xFA870 call    __ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
//   0xFA875 mov     r14, rax
//   0xFA878 cmp     r15d, 1
//   0xFA87C jnz     short loc_FA840
//   0xFA87E mov     rsi, rbp
//   0xFA881 mov     rdi, r13
//   0xFA884 call    __ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base *,std::_Rb_tree_node_base&)
//   0xFA889 mov     esi, 28h ; '('; unsigned __int64
//   0xFA88E mov     rdi, rax; void *
//   0xFA891 call    __ZdlPvm; operator delete(void *,ulong)
//   0xFA896 sub     [rsp+0B8h+var_80], 1
//   0xFA89C mov     byte ptr [rsp+0B8h+var_AC], 1
//   0xFA8A1 jmp     short loc_FA840
//   0xFA8A3 mov     rax, [r14+38h]
//   0xFA8A7 mov     rax, [rax+18h]
//   0xFA8AB mov     rdi, [rsp+0B8h+var_60]
//   0xFA8B0 mov     [r12+1E8h], rax
//   0xFA8B8 test    rdi, rdi
//   0xFA8BB jz      short loc_FA8CB
//   0xFA8BD mov     qword ptr [rsp+0B8h+var_58], 0
//   0xFA8C6 call    _qfree
//   0xFA8CB mov     rdi, [rsp+0B8h+var_78]
//   0xFA8D0 test    rdi, rdi
//   0xFA8D3 jz      short loc_FA8E3
//   0xFA8D5 mov     qword ptr [rsp+0B8h+var_70], 0
//   0xFA8DE call    _qfree
//   0xFA8E3 mov     rdi, [rsp+0B8h+var_98]
//   0xFA8E8 call    sub_F5F90
//   0xFA8ED mov     [rsp+0B8h+var_B0], 0FFFFFFFFh
//   0xFA8F5 mov     rax, [rsp+0B8h+var_40]
//   0xFA8FA sub     rax, fs:28h
//   0xFA903 jnz     loc_FA9C2
//   0xFA909 mov     eax, [rsp+0B8h+var_B0]
//   0xFA90D add     rsp, 88h
//   0xFA914 pop     rbx
//   0xFA915 pop     rbp
//   0xFA916 pop     r12
//   0xFA918 pop     r13
//   0xFA91A pop     r14
//   0xFA91C pop     r15
//   0xFA91E retn
//   0xFA91F or      dword ptr [r12], 1000h
//   0xFA927 mov     rdx, r12
//   0xFA92A mov     esi, 12h
//   0xFA92F xor     eax, eax
//   0xFA931 mov     rdi, [r12+5D8h]
//   0xFA939 call    sub_33E140
//   0xFA93E jmp     short loc_FA8F5
//   0xFA940 mov     edi, [rsp+0B8h+var_AC]
//   0xFA944 test    edi, edi
//   0xFA946 jnz     short loc_FA97D
//   0xFA948 mov     rdi, r12
//   0xFA94B call    sub_190300
//   0xFA950 mov     [rsp+0B8h+var_B0], 0
//   0xFA958 jmp     loc_FA736
//   0xFA95D cmp     byte ptr [rsp+0B8h+var_AC], 0
//   0xFA962 jnz     loc_FA6F0
//   0xFA968 mov     rax, [rsp+0B8h+var_90]
//   0xFA96D jmp     short loc_FA9A2
//   0xFA96F align 10h
//   0xFA970 mov     rax, [r15+38h]
//   0xFA974 mov     rax, [rax+18h]
//   0xFA978 jmp     loc_FA8AB
//   0xFA97D mov     rdi, [r12+310h]
//   0xFA985 call    sub_149220
//   0xFA98A mov     rdi, r12
//   0xFA98D call    sub_190300
//   0xFA992 mov     [rsp+0B8h+var_B0], 0
//   0xFA99A jmp     loc_FA736
//   0xFA99F mov     rax, rbp
//   0xFA9A2 movsxd  rsi, dword ptr [rax+20h]
//   0xFA9A6 mov     edx, 7
//   0xFA9AB mov     rdi, r12
//   0xFA9AE xor     eax, eax
//   0xFA9B0 call    sub_3311F0
//   0xFA9B5 test    bl, 4
//   0xFA9B8 jz      short loc_FA9C7
//   0xFA9BA and     ebx, 0FFFFFFFBh
//   0xFA9BD jmp     loc_FA6F0
//   0xFA9C2 call    ___stack_chk_fail
//   0xFA9C7 mov     rax, cs:under_debugger_ptr
//   0xFA9CE cmp     byte ptr [rax], 0
//   0xFA9D1 jnz     loc_356D8
//   0xFA9D7 mov     rax, [rsp+0B8h+var_40]
//   0xFA9DC sub     rax, fs:28h
//   0xFA9E5 jnz     short loc_FA9FB
//   0xFA9E7 mov     edi, 0C3C1h
//   0xFA9EC call    sub_383060
//   0xFA9F1 call    ___stack_chk_fail
//   0xFA9F6 call    ___stack_chk_fail
//   0xFA9FB call    ___stack_chk_fail
//   0xFAA00 mov     rbx, rax
//   0xFAA03 jmp     loc_356DA
// ============================================================

void sub_FA4C0(/* signature unknown */)
{
    // see disassembly above
}

