// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3A4790
// Name:           sub_3A4790
// Function size:  859 bytes (201 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3A4790 push    r15; int
//   0x3A4792 mov     r15, rdx
//   0x3A4795 push    r14; int
//   0x3A4797 mov     r14, rdi
//   0x3A479A push    r13; int
//   0x3A479C push    r12; int
//   0x3A479E push    rbp; int
//   0x3A479F mov     rbp, rcx
//   0x3A47A2 push    rbx; int
//   0x3A47A3 mov     rbx, rsi
//   0x3A47A6 sub     rsp, 98h
//   0x3A47AD mov     qword ptr [rsp+0C8h+var_A0], rdi; int
//   0x3A47B2 mov     [rsp+0C8h+var_C0], rsi; int
//   0x3A47B7 mov     qword ptr [rsp+0C8h+var_B0], rdx; int
//   0x3A47BC mov     qword ptr [rsp+0C8h+var_A8], rcx; int
//   0x3A47C1 mov     rax, fs:28h
//   0x3A47CA mov     qword ptr [rsp+0C8h+var_40], rax; int
//   0x3A47D2 xor     eax, eax
//   0x3A47D4 call    _get_merge_state
//   0x3A47D9 test    al, 2
//   0x3A47DB jnz     loc_3A4AA9
//   0x3A47E1 mov     rax, [r14]
//   0x3A47E4 mov     rsi, [rax+600h]
//   0x3A47EB mov     rax, rbx
//   0x3A47EE lea     rbx, [rbx+rbp]
//   0x3A47F2 xor     ebp, ebp
//   0x3A47F4 mov     [rsp+0C8h+var_B8], rbx; int
//   0x3A47F9 mov     rbx, r15
//   0x3A47FC mov     qword ptr [rsp+0C8h+var_C8], rsi; int
//   0x3A4800 sub     rbx, rax
//   0x3A4803 lea     r12, [rsi+0B8h]
//   0x3A480A nop     word ptr [rax+rax+00h]
//   0x3A4810 cmp     ebp, 6
//   0x3A4813 jz      loc_3A4A20
//   0x3A4819 pxor    xmm1, xmm1
//   0x3A481D mov     [rsp+0C8h+var_78], 0FFFFFFFFh; int
//   0x3A4825 lea     r13, [rsp+0C8h+ptr]
//   0x3A482A lea     r14, [rsp+0C8h+var_98]
//   0x3A482F mov     [rsp+0C8h+var_98], 0; int
//   0x3A4838 mov     qword ptr [rsp+0C8h+var_80], 0; int
//   0x3A4841 movups  xmmword ptr [rsp+0C8h+var_90], xmm1; int
//   0x3A4846 mov     r15, [r12+10h]
//   0x3A484B cmp     r15, r12
//   0x3A484E jz      short loc_3A4882
//   0x3A4850 mov     rax, [r15+28h]
//   0x3A4854 mov     rsi, r13; int
//   0x3A4857 mov     rdi, r14; int
//   0x3A485A sub     rax, 1
//   0x3A485E movq    xmm0, rax
//   0x3A4863 movhps  xmm0, qword ptr [r15+20h]
//   0x3A4868 movaps  xmmword ptr [rsp+0C8h+ptr], xmm0
//   0x3A486D call    _rangeset_t_add
//   0x3A4872 mov     rdi, r15
//   0x3A4875 call    __ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base; std::_Rb_tree_increment(std::_Rb_tree_node_base *)
//   0x3A487A mov     r15, rax
//   0x3A487D cmp     rax, r12
//   0x3A4880 jnz     short loc_3A4850
//   0x3A4882 mov     rcx, [rsp+0C8h+var_B8]
//   0x3A4887 mov     rdx, [rsp+0C8h+var_C0]
//   0x3A488C mov     esi, ebp
//   0x3A488E mov     rdi, qword ptr [rsp+0C8h+var_C8]
//   0x3A4892 call    sub_3A3E40
//   0x3A4897 pxor    xmm2, xmm2
//   0x3A489B mov     rsi, [rsp+0C8h+var_B8]
//   0x3A48A0 mov     [rsp+0C8h+ptr], 0; int
//   0x3A48A9 lea     r13, [rsp+0C8h+ptr]
//   0x3A48AE mov     qword ptr [rsp+0C8h+var_50], 0; int
//   0x3A48B7 mov     [rsp+0C8h+var_48], 0FFFFFFFFh; int
//   0x3A48C2 movups  xmmword ptr [rsp+0C8h+ptr+8], xmm2; int
//   0x3A48C7 cmp     [rsp+0C8h+var_C0], rsi
//   0x3A48CC jb      loc_3A4A68
//   0x3A48D2 lea     r14, [rsp+0C8h+var_98]
//   0x3A48D7 mov     rsi, r13; int
//   0x3A48DA mov     rdi, r14; int
//   0x3A48DD call    _rangeset_t_intersect
//   0x3A48E2 mov     rdi, [rsp+0C8h+ptr]; ptr
//   0x3A48E7 test    rdi, rdi
//   0x3A48EA jz      short loc_3A48FA
//   0x3A48EC mov     [rsp+0C8h+ptr+8], 0
//   0x3A48F5 call    _qfree
//   0x3A48FA mov     r13, qword ptr [rsp+0C8h+var_90]
//   0x3A48FF mov     r14, [rsp+0C8h+var_98]
//   0x3A4904 shl     r13, 4
//   0x3A4908 add     r13, r14
//   0x3A490B cmp     r13, r14
//   0x3A490E jz      short loc_3A4936
//   0x3A4910 mov     rcx, [r14+8]
//   0x3A4914 mov     rdx, [r14]
//   0x3A4917 mov     esi, ebp
//   0x3A4919 mov     rdi, qword ptr [rsp+0C8h+var_C8]
//   0x3A491D add     rcx, rbx
//   0x3A4920 add     rdx, rbx
//   0x3A4923 call    sub_3A44A0
//   0x3A4928 add     r14, 10h
//   0x3A492C cmp     r13, r14
//   0x3A492F jnz     short loc_3A4910
//   0x3A4931 mov     r14, [rsp+0C8h+var_98]
//   0x3A4936 test    r14, r14
//   0x3A4939 jz      short loc_3A494C
//   0x3A493B mov     qword ptr [rsp+0C8h+var_90], 0
//   0x3A4944 mov     rdi, r14; ptr
//   0x3A4947 call    _qfree
//   0x3A494C add     ebp, 1
//   0x3A494F add     r12, 68h ; 'h'
//   0x3A4953 cmp     ebp, 0Eh
//   0x3A4956 jnz     loc_3A4810
//   0x3A495C mov     r15, qword ptr [rsp+0C8h+var_A0]
//   0x3A4961 mov     rsi, [rsp+0C8h+var_C0]
//   0x3A4966 mov     rdi, r15
//   0x3A4969 call    sub_3BDD60
//   0x3A496E mov     rsi, [rsp+0C8h+var_B8]
//   0x3A4973 mov     rdi, r15
//   0x3A4976 mov     rbx, rax
//   0x3A4979 call    sub_3BDD60
//   0x3A497E mov     r15, qword ptr [rsp+0C8h+var_C8]
//   0x3A4982 mov     ecx, 41h ; 'A'
//   0x3A4987 mov     rsi, rbx
//   0x3A498A mov     r8d, 41h ; 'A'
//   0x3A4990 mov     rdx, rax
//   0x3A4993 mov     rbp, rax
//   0x3A4996 mov     rdi, [r15+58h]
//   0x3A499A call    _netnode_altshift
//   0x3A499F mov     rdi, [r15+70h]
//   0x3A49A3 mov     rdx, rbp
//   0x3A49A6 mov     rsi, rbx
//   0x3A49A9 mov     r8d, 41h ; 'A'
//   0x3A49AF mov     ecx, 41h ; 'A'
//   0x3A49B4 call    _netnode_altshift
//   0x3A49B9 mov     rdi, [r15+60h]
//   0x3A49BD mov     rdx, rbp
//   0x3A49C0 mov     rsi, rbx
//   0x3A49C3 mov     r8d, 41h ; 'A'
//   0x3A49C9 mov     ecx, 41h ; 'A'
//   0x3A49CE call    _netnode_altshift
//   0x3A49D3 mov     rax, qword ptr [rsp+0C8h+var_40]
//   0x3A49DB sub     rax, fs:28h
//   0x3A49E4 jnz     loc_3A4ACE
//   0x3A49EA mov     rax, qword ptr [rsp+0C8h+var_C8]
//   0x3A49EE mov     rdx, rbp
//   0x3A49F1 mov     rsi, rbx
//   0x3A49F4 mov     r8d, 41h ; 'A'
//   0x3A49FA mov     ecx, 41h ; 'A'
//   0x3A49FF mov     rdi, [rax+68h]
//   0x3A4A03 add     rsp, 98h
//   0x3A4A0A pop     rbx
//   0x3A4A0B pop     rbp
//   0x3A4A0C pop     r12
//   0x3A4A0E pop     r13
//   0x3A4A10 pop     r14
//   0x3A4A12 pop     r15
//   0x3A4A14 jmp     _netnode_altshift
//   0x3A4A19 align 20h
//   0x3A4A20 mov     r15, qword ptr [rsp+0C8h+var_C8]
//   0x3A4A24 mov     rcx, [rsp+0C8h+var_B8]
//   0x3A4A29 mov     esi, 6
//   0x3A4A2E add     r12, 68h ; 'h'
//   0x3A4A32 mov     rdx, [rsp+0C8h+var_C0]
//   0x3A4A37 mov     ebp, 7
//   0x3A4A3C mov     rdi, r15
//   0x3A4A3F call    sub_3A3E40
//   0x3A4A44 mov     rax, qword ptr [rsp+0C8h+var_A8]
//   0x3A4A49 mov     rdx, qword ptr [rsp+0C8h+var_B0]
//   0x3A4A4E mov     rdi, r15
//   0x3A4A51 mov     esi, 6
//   0x3A4A56 lea     rcx, [rax+rdx]
//   0x3A4A5A call    sub_3A44A0
//   0x3A4A5F jmp     loc_3A4819
//   0x3A4A64 align 8
//   0x3A4A68 mov     ecx, 10h
//   0x3A4A6D mov     edx, 1
//   0x3A4A72 xor     esi, esi
//   0x3A4A74 mov     rdi, r13
//   0x3A4A77 call    _qvector_reserve
//   0x3A4A7C mov     rdx, [rsp+0C8h+ptr+8]
//   0x3A4A81 mov     rsi, [rsp+0C8h+var_C0]
//   0x3A4A86 mov     [rsp+0C8h+ptr], rax
//   0x3A4A8B shl     rdx, 4
//   0x3A4A8F add     rax, rdx
//   0x3A4A92 mov     [rax], rsi
//   0x3A4A95 mov     rsi, [rsp+0C8h+var_B8]
//   0x3A4A9A mov     [rax+8], rsi
//   0x3A4A9E add     [rsp+0C8h+ptr+8], 1
//   0x3A4AA4 jmp     loc_3A48D2
//   0x3A4AA9 mov     rax, qword ptr [rsp+0C8h+var_40]
//   0x3A4AB1 sub     rax, fs:28h
//   0x3A4ABA jnz     short loc_3A4ACE
//   0x3A4ABC add     rsp, 98h
//   0x3A4AC3 pop     rbx
//   0x3A4AC4 pop     rbp
//   0x3A4AC5 pop     r12
//   0x3A4AC7 pop     r13
//   0x3A4AC9 pop     r14
//   0x3A4ACB pop     r15
//   0x3A4ACD retn
//   0x3A4ACE call    ___stack_chk_fail
//   0x3A4AD3 mov     rbx, rax
//   0x3A4AD6 jmp     loc_2B2BF6
//   0x3A4ADB mov     rbx, rax
//   0x3A4ADE jmp     loc_2B2C3D
//   0x3A4AE3 mov     rbx, rax
//   0x3A4AE6 jmp     loc_2B2C0C
// ============================================================

void sub_3A4790(/* signature unknown */)
{
    // see disassembly above
}

