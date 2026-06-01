// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x6406C0
// Name:           sub_6406C0
// Function size:  474 bytes (116 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x6406C0 push    r15; int
//   0x6406C2 push    r14; __int64
//   0x6406C4 push    r13; __int64
//   0x6406C6 mov     r13, rdi
//   0x6406C9 mov     edi, 15h
//   0x6406CE push    r12; int
//   0x6406D0 mov     r12, rdx
//   0x6406D3 push    rbp; int
//   0x6406D4 mov     rbp, rsi
//   0x6406D7 push    rbx; int
//   0x6406D8 mov     rbx, rcx
//   0x6406DB sub     rsp, 48h
//   0x6406DF mov     r14, fs:28h
//   0x6406E8 mov     qword ptr [rsp+78h+var_40], r14; int
//   0x6406ED mov     r14, r8
//   0x6406F0 call    _getinf
//   0x6406F5 cmp     rbp, rax
//   0x6406F8 jb      loc_640818
//   0x6406FE mov     edi, 16h
//   0x640703 call    _getinf
//   0x640708 cmp     rax, r12
//   0x64070B jb      loc_640800
//   0x640711 mov     rax, r12
//   0x640714 lea     rsi, [rsp+78h+var_68]; int
//   0x640719 mov     [rsp+78h+var_68], rbp; __int64
//   0x64071E sub     rax, rbp
//   0x640721 cmp     rbx, rax
//   0x640724 cmova   rbx, rax
//   0x640728 xor     eax, eax
//   0x64072A test    rbx, rbx
//   0x64072D cmovs   rbx, rax
//   0x640731 mov     rax, [r13+0]
//   0x640735 xor     ecx, ecx; int
//   0x640737 xor     edx, edx; int
//   0x640739 mov     r13, [rax+688h]
//   0x640740 add     rbx, rbp
//   0x640743 mov     qword ptr [rsp+78h+var_60], rbx; int
//   0x640748 mov     rdi, r13; int
//   0x64074B call    sub_3C0380
//   0x640750 test    eax, eax
//   0x640752 jnz     loc_640856
//   0x640758 mov     edx, 4
//   0x64075D mov     rsi, rbp
//   0x640760 mov     rdi, r13
//   0x640763 call    sub_3BE900
//   0x640768 mov     [rsp+78h+var_70], rbp; void *
//   0x64076D and     eax, 600h
//   0x640772 cmp     rax, 200h
//   0x640778 jz      loc_640880
//   0x64077E mov     rsi, rbx
//   0x640781 mov     rdi, r13
//   0x640784 call    sub_3C1F00
//   0x640789 mov     rsi, [rsp+78h+var_70]
//   0x64078E xor     ecx, ecx
//   0x640790 mov     rdi, r13; int
//   0x640793 mov     r15, rax
//   0x640796 mov     rdx, rax
//   0x640799 call    sub_3D2F00
//   0x64079E cmp     r15, r12
//   0x6407A1 jb      loc_640830
//   0x6407A7 cmp     r14, 0FFFFFFFFFFFFFFFFh
//   0x6407AB jz      short loc_6407D8
//   0x6407AD add     r13, 0B38h
//   0x6407B4 lea     rsi, [rsp+78h+var_58]
//   0x6407B9 mov     qword ptr [rsp+78h+var_58], rbp
//   0x6407BE mov     rdi, r13
//   0x6407C1 mov     qword ptr [rsp+78h+var_50], rbx
//   0x6407C6 mov     [rsp+78h+var_48], r14
//   0x6407CB call    sub_505940
//   0x6407D0 mov     rdi, r13
//   0x6407D3 call    sub_504B40
//   0x6407D8 mov     rax, qword ptr [rsp+78h+var_40]
//   0x6407DD sub     rax, fs:28h
//   0x6407E6 jnz     loc_640895
//   0x6407EC add     rsp, 48h
//   0x6407F0 pop     rbx
//   0x6407F1 pop     rbp
//   0x6407F2 pop     r12
//   0x6407F4 pop     r13
//   0x6407F6 pop     r14
//   0x6407F8 pop     r15
//   0x6407FA retn
//   0x6407FB align 20h
//   0x640800 mov     rsi, r12
//   0x640803 mov     edi, 16h
//   0x640808 call    _setinf
//   0x64080D jmp     loc_640711
//   0x640812 align 8
//   0x640818 mov     rsi, rbp
//   0x64081B mov     edi, 15h
//   0x640820 call    _setinf
//   0x640825 jmp     loc_6406FE
//   0x64082A align 10h
//   0x640830 xor     ecx, ecx; int
//   0x640832 lea     rsi, [rsp+78h+var_58]; int
//   0x640837 mov     edx, 1; int
//   0x64083C mov     rdi, r13; int
//   0x64083F mov     qword ptr [rsp+78h+var_58], r15; int
//   0x640844 mov     qword ptr [rsp+78h+var_50], r12; int
//   0x640849 call    sub_3C0380
//   0x64084E test    eax, eax
//   0x640850 jz      loc_6407A7
//   0x640856 mov     rdx, qword ptr [rsp+78h+var_40]
//   0x64085B sub     rdx, fs:28h
//   0x640864 jnz     short loc_640895
//   0x640866 mov     edi, eax
//   0x640868 lea     rsi, byte_22F0C30
//   0x64086F xor     eax, eax
//   0x640871 call    sub_387C60
//   0x640876 align 20h
//   0x640880 mov     rsi, rbp
//   0x640883 mov     rdi, r13
//   0x640886 call    sub_3C2650
//   0x64088B mov     [rsp+78h+var_70], rax
//   0x640890 jmp     loc_64077E
//   0x640895 call    ___stack_chk_fail
// ============================================================

void sub_6406C0(/* signature unknown */)
{
    // see disassembly above
}

