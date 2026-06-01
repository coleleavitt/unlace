// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x4A06B0
// Name:           sub_4A06B0
// Function size:  658 bytes (148 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x4A06B0 push    r14; int
//   0x4A06B2 push    r13; int
//   0x4A06B4 mov     r13, rsi
//   0x4A06B7 push    r12; int
//   0x4A06B9 mov     r12, rdx
//   0x4A06BC lea     rdx, nullsub_263
//   0x4A06C3 push    rbp; int
//   0x4A06C4 push    rbx; int
//   0x4A06C5 mov     rbx, rdi
//   0x4A06C8 sub     rsp, 40h
//   0x4A06CC mov     rax, [rdi]
//   0x4A06CF mov     r14, fs:28h
//   0x4A06D8 mov     qword ptr [rsp+68h+var_30], r14; int
//   0x4A06DD mov     r14d, ecx
//   0x4A06E0 mov     rax, [rax+2A0h]
//   0x4A06E7 cmp     rax, rdx
//   0x4A06EA jnz     loc_4A08C0
//   0x4A06F0 mov     rbp, [r12+8]
//   0x4A06F5 pxor    xmm0, xmm0
//   0x4A06F9 mov     [rsp+68h+src], 0; __int64
//   0x4A0701 movups  xmmword ptr [rsp+68h+n], xmm0; int
//   0x4A0706 test    rbp, rbp
//   0x4A0709 jnz     loc_4A07A8
//   0x4A070F mov     edi, r14d
//   0x4A0712 call    sub_51F060
//   0x4A0717 cmp     dword ptr [rbx+948h], 2
//   0x4A071E mov     ebp, eax
//   0x4A0720 jz      loc_4A07F8
//   0x4A0726 mov     rdi, [rbx+9A8h]; this
//   0x4A072D call    __ZNK2QT10QTableView16horizontalHeaderEv; QT::QTableView::horizontalHeader(void)
//   0x4A0732 mov     rsi, rax
//   0x4A0735 mov     rdx, rsp
//   0x4A0738 mov     ecx, ebp
//   0x4A073A mov     rdi, r13; this
//   0x4A073D call    sub_4E71E0
//   0x4A0742 mov     r12, [rsp+68h+n]
//   0x4A0747 mov     ebp, eax
//   0x4A0749 test    al, al
//   0x4A074B jz      loc_4A0810
//   0x4A0751 mov     rax, [rbx+68h]
//   0x4A0755 lea     rdi, [rbx+68h]
//   0x4A0759 lea     rsi, s1
//   0x4A0760 mov     rax, [rax+28h]
//   0x4A0764 test    r12, r12
//   0x4A0767 jnz     short loc_4A07E8
//   0x4A0769 call    rax
//   0x4A076B mov     rdi, [rsp+68h+src]
//   0x4A076F test    rdi, rdi
//   0x4A0772 jz      short loc_4A0782
//   0x4A0774 mov     [rsp+68h+n], 0
//   0x4A077D call    _qfree
//   0x4A0782 mov     rax, qword ptr [rsp+68h+var_30]
//   0x4A0787 sub     rax, fs:28h
//   0x4A0790 jnz     loc_4A092D
//   0x4A0796 add     rsp, 40h
//   0x4A079A mov     eax, ebp
//   0x4A079C pop     rbx
//   0x4A079D pop     rbp
//   0x4A079E pop     r12
//   0x4A07A0 pop     r13
//   0x4A07A2 pop     r14
//   0x4A07A4 retn
//   0x4A07A5 align 8
//   0x4A07A8 mov     rdi, rbp
//   0x4A07AB call    _qalloc_or_throw
//   0x4A07B0 mov     rsi, [r12]; src
//   0x4A07B4 mov     rdx, rbp; n
//   0x4A07B7 mov     [rsp+68h+n+8], rbp
//   0x4A07BC mov     rdi, rax; dest
//   0x4A07BF mov     [rsp+68h+src], rax
//   0x4A07C3 call    _memcpy
//   0x4A07C8 mov     [rsp+68h+n], rbp
//   0x4A07CD cmp     rbp, 1
//   0x4A07D1 jz      loc_4A070F
//   0x4A07D7 mov     rdi, [rsp+68h+src]
//   0x4A07DB call    _qstrlwr
//   0x4A07E0 jmp     loc_4A070F
//   0x4A07E5 align 8
//   0x4A07E8 mov     rsi, [rsp+68h+src]
//   0x4A07EC jmp     loc_4A0769
//   0x4A07F1 align 8
//   0x4A07F8 mov     rdi, [rbx+950h]; this
//   0x4A07FF call    __ZNK2QT9QTreeView6headerEv; QT::QTreeView::header(void)
//   0x4A0804 jmp     loc_4A0732
//   0x4A0809 align 10h
//   0x4A0810 mov     [rsp+68h+var_48], 0
//   0x4A0819 pxor    xmm0, xmm0
//   0x4A081D movups  [rsp+68h+var_40], xmm0
//   0x4A0822 test    r12, r12
//   0x4A0825 jnz     loc_4A08E0
//   0x4A082B mov     r14d, 0Bh
//   0x4A0831 xor     esi, esi
//   0x4A0833 mov     r13d, 0Ch
//   0x4A0839 lea     rdi, [rsp+68h+var_48]
//   0x4A083E mov     ecx, 1
//   0x4A0843 mov     rdx, r13
//   0x4A0846 call    _qvector_reserve
//   0x4A084B mov     [rsp+68h+var_48], rax
//   0x4A0850 mov     rsi, rax
//   0x4A0853 mov     rax, r12
//   0x4A0856 mov     qword ptr [rsp+68h+var_40], r13
//   0x4A085B lea     rdi, [rbx+68h]
//   0x4A085F mov     rcx, 6F6620746F6E203Ah
//   0x4A0869 mov     byte ptr [rsi+r14], 0
//   0x4A086E add     rax, [rsp+68h+var_48]
//   0x4A0873 lea     rsi, s1
//   0x4A087A mov     [rax], rcx
//   0x4A087D mov     dword ptr [rax+7], 646E756Fh
//   0x4A0884 mov     rax, [rbx+68h]
//   0x4A0888 cmp     qword ptr [rsp+68h+var_40], 0
//   0x4A088E mov     rax, [rax+28h]
//   0x4A0892 jnz     short loc_4A08D0
//   0x4A0894 call    rax
//   0x4A0896 mov     rdi, [rsp+68h+var_48]
//   0x4A089B test    rdi, rdi
//   0x4A089E jz      loc_4A076B
//   0x4A08A4 mov     qword ptr [rsp+68h+var_40], 0
//   0x4A08AD call    _qfree
//   0x4A08B2 jmp     loc_4A076B
//   0x4A08B7 align 20h
//   0x4A08C0 call    rax
//   0x4A08C2 jmp     loc_4A06F0
//   0x4A08C7 align 10h
//   0x4A08D0 mov     rsi, [rsp+68h+var_48]
//   0x4A08D5 jmp     short loc_4A0894
//   0x4A08D7 align 20h
//   0x4A08E0 mov     rdi, r12
//   0x4A08E3 call    _qalloc_or_throw
//   0x4A08E8 mov     rsi, [rsp+68h+src]; src
//   0x4A08EC mov     rdx, r12; n
//   0x4A08EF mov     rdi, rax; dest
//   0x4A08F2 mov     qword ptr [rsp+68h+var_40+8], r12
//   0x4A08F7 mov     [rsp+68h+var_48], rax
//   0x4A08FC lea     r14, [r12+0Ah]
//   0x4A0901 lea     r13, [r12+0Bh]
//   0x4A0906 call    _memcpy
//   0x4A090B lea     rax, [r12-1]
//   0x4A0910 mov     qword ptr [rsp+68h+var_40], r12
//   0x4A0915 mov     rsi, [rsp+68h+var_48]
//   0x4A091A mov     r12, rax
//   0x4A091D cmp     qword ptr [rsp+68h+var_40+8], r13
//   0x4A0922 jnb     loc_4A0856
//   0x4A0928 jmp     loc_4A0839
//   0x4A092D call    ___stack_chk_fail
//   0x4A0932 mov     rbx, rax
//   0x4A0935 jmp     loc_15394A
//   0x4A093A mov     rbx, rax
//   0x4A093D jmp     loc_153934
// ============================================================

void sub_4A06B0(/* signature unknown */)
{
    // see disassembly above
}

