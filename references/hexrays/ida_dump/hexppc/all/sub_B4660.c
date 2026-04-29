// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xB4660
// Name:           sub_B4660
// Function size:  489 bytes (130 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xB4660 push    r15
//   0xB4662 pxor    xmm0, xmm0
//   0xB4666 push    r14
//   0xB4668 push    r13
//   0xB466A mov     r13d, ecx
//   0xB466D xor     ecx, ecx
//   0xB466F push    r12
//   0xB4671 mov     r12, rdx
//   0xB4674 mov     rdx, rsi
//   0xB4677 mov     rsi, rdi
//   0xB467A push    rbp
//   0xB467B push    rbx
//   0xB467C sub     rsp, 38h
//   0xB4680 mov     [rsp+68h+var_60], r8
//   0xB4685 mov     r8d, 3
//   0xB468B mov     rax, fs:28h
//   0xB4694 mov     [rsp+68h+var_40], rax
//   0xB4699 xor     eax, eax
//   0xB469B lea     rax, [rsp+68h+var_58]
//   0xB46A0 movups  [rsp+68h+var_50], xmm0
//   0xB46A5 mov     [rsp+68h+var_58], 0
//   0xB46AE mov     rdi, rax
//   0xB46B1 call    sub_3303D0
//   0xB46B6 xor     ebx, ebx
//   0xB46B8 xor     ecx, ecx
//   0xB46BA cmp     qword ptr [rsp+68h+var_50], 0
//   0xB46C0 movsxd  r14, r13d
//   0xB46C3 jnz     short loc_B46E1
//   0xB46C5 jmp     loc_B47FE
//   0xB46CA align 10h
//   0xB46D0 add     ebx, 1
//   0xB46D3 movsxd  rcx, ebx
//   0xB46D6 cmp     rcx, qword ptr [rsp+68h+var_50]
//   0xB46DB jnb     loc_B4768
//   0xB46E1 shl     rcx, 6
//   0xB46E5 add     rcx, [rsp+68h+var_58]
//   0xB46EA mov     rbp, [rcx]
//   0xB46ED mov     r15, rcx
//   0xB46F0 test    rbp, rbp
//   0xB46F3 jnz     loc_B480D
//   0xB46F9 mov     rdi, [rcx+38h]
//   0xB46FD mov     esi, 2
//   0xB4702 call    _get_tinfo_property
//   0xB4707 and     eax, 0Fh
//   0xB470A cmp     al, 0Bh
//   0xB470C jz      short loc_B46D0
//   0xB470E test    r12, r12
//   0xB4711 jz      short loc_B4729
//   0xB4713 mov     rsi, [r12]
//   0xB4717 mov     rdi, [r15+38h]
//   0xB471B mov     edx, 2
//   0xB4720 call    _compare_tinfo
//   0xB4725 test    al, al
//   0xB4727 jnz     short loc_B4740
//   0xB4729 test    r13d, r13d
//   0xB472C jz      short loc_B46D0
//   0xB472E mov     rsi, [r15+38h]
//   0xB4732 xor     edx, edx
//   0xB4734 xor     edi, edi
//   0xB4736 call    _get_tinfo_size
//   0xB473B cmp     r14, rax
//   0xB473E jnz     short loc_B46D0
//   0xB4740 cmp     [rsp+68h+var_60], 0
//   0xB4746 jz      short loc_B475B
//   0xB4748 mov     rsi, [rsp+68h+var_60]
//   0xB474D mov     rdx, [r15+38h]
//   0xB4751 mov     rax, [rsi]
//   0xB4754 mov     [rsi], rdx
//   0xB4757 mov     [r15+38h], rax
//   0xB475B mov     r13d, 1
//   0xB4761 jmp     short loc_B476B
//   0xB4763 align 8
//   0xB4768 xor     r13d, r13d
//   0xB476B mov     rdi, [rsp+68h+var_58]
//   0xB4770 test    rdi, rdi
//   0xB4773 jz      short loc_B47DC
//   0xB4775 mov     r12, qword ptr [rsp+68h+var_50]
//   0xB477A test    r12, r12
//   0xB477D jz      short loc_B47CE
//   0xB477F nop
//   0xB4780 mov     rax, rbp
//   0xB4783 shl     rax, 6
//   0xB4787 lea     rbx, [rdi+rax]
//   0xB478B lea     rdi, [rbx+38h]
//   0xB478F call    _clear_tinfo_t
//   0xB4794 mov     rdi, [rbx+20h]
//   0xB4798 test    rdi, rdi
//   0xB479B jz      short loc_B47AA
//   0xB479D mov     qword ptr [rbx+28h], 0
//   0xB47A5 call    _qfree
//   0xB47AA mov     rdi, [rbx+8]
//   0xB47AE test    rdi, rdi
//   0xB47B1 jz      short loc_B47C0
//   0xB47B3 mov     qword ptr [rbx+10h], 0
//   0xB47BB call    _qfree
//   0xB47C0 add     rbp, 1
//   0xB47C4 mov     rdi, [rsp+68h+var_58]
//   0xB47C9 cmp     r12, rbp
//   0xB47CC jnz     short loc_B4780
//   0xB47CE mov     qword ptr [rsp+68h+var_50], 0
//   0xB47D7 call    _qfree
//   0xB47DC mov     rax, [rsp+68h+var_40]
//   0xB47E1 sub     rax, fs:28h
//   0xB47EA jnz     short loc_B4837
//   0xB47EC add     rsp, 38h
//   0xB47F0 mov     eax, r13d
//   0xB47F3 pop     rbx
//   0xB47F4 pop     rbp
//   0xB47F5 pop     r12
//   0xB47F7 pop     r13
//   0xB47F9 pop     r14
//   0xB47FB pop     r15
//   0xB47FD retn
//   0xB47FE mov     rdi, [rsp+68h+var_58]
//   0xB4803 xor     r13d, r13d
//   0xB4806 test    rdi, rdi
//   0xB4809 jnz     short loc_B47CE
//   0xB480B jmp     short loc_B47DC
//   0xB480D mov     rax, cs:under_debugger_ptr
//   0xB4814 cmp     byte ptr [rax], 0
//   0xB4817 jnz     loc_3085C
//   0xB481D mov     rax, [rsp+68h+var_40]
//   0xB4822 sub     rax, fs:28h
//   0xB482B jnz     short loc_B483C
//   0xB482D mov     edi, 0C70Ch
//   0xB4832 call    sub_37EEE0
//   0xB4837 call    ___stack_chk_fail
//   0xB483C call    ___stack_chk_fail
//   0xB4841 mov     r12, rax
//   0xB4844 jmp     loc_3085E
// ============================================================

void sub_B4660(/* signature unknown */)
{
    // see disassembly above
}

