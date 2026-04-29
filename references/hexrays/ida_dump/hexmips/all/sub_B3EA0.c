// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xB3EA0
// Name:           sub_B3EA0
// Function size:  489 bytes (130 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xB3EA0 push    r15
//   0xB3EA2 pxor    xmm0, xmm0
//   0xB3EA6 push    r14
//   0xB3EA8 push    r13
//   0xB3EAA mov     r13d, ecx
//   0xB3EAD xor     ecx, ecx
//   0xB3EAF push    r12
//   0xB3EB1 mov     r12, rdx
//   0xB3EB4 mov     rdx, rsi
//   0xB3EB7 mov     rsi, rdi
//   0xB3EBA push    rbp
//   0xB3EBB push    rbx
//   0xB3EBC sub     rsp, 38h
//   0xB3EC0 mov     [rsp+68h+var_60], r8
//   0xB3EC5 mov     r8d, 3
//   0xB3ECB mov     rax, fs:28h
//   0xB3ED4 mov     [rsp+68h+var_40], rax
//   0xB3ED9 xor     eax, eax
//   0xB3EDB lea     rax, [rsp+68h+var_58]
//   0xB3EE0 movups  [rsp+68h+var_50], xmm0
//   0xB3EE5 mov     [rsp+68h+var_58], 0
//   0xB3EEE mov     rdi, rax
//   0xB3EF1 call    sub_32F790
//   0xB3EF6 xor     ebx, ebx
//   0xB3EF8 xor     ecx, ecx
//   0xB3EFA cmp     qword ptr [rsp+68h+var_50], 0
//   0xB3F00 movsxd  r14, r13d
//   0xB3F03 jnz     short loc_B3F21
//   0xB3F05 jmp     loc_B403E
//   0xB3F0A align 10h
//   0xB3F10 add     ebx, 1
//   0xB3F13 movsxd  rcx, ebx
//   0xB3F16 cmp     rcx, qword ptr [rsp+68h+var_50]
//   0xB3F1B jnb     loc_B3FA8
//   0xB3F21 shl     rcx, 6
//   0xB3F25 add     rcx, [rsp+68h+var_58]
//   0xB3F2A mov     rbp, [rcx]
//   0xB3F2D mov     r15, rcx
//   0xB3F30 test    rbp, rbp
//   0xB3F33 jnz     loc_B404D
//   0xB3F39 mov     rdi, [rcx+38h]
//   0xB3F3D mov     esi, 2
//   0xB3F42 call    _get_tinfo_property
//   0xB3F47 and     eax, 0Fh
//   0xB3F4A cmp     al, 0Bh
//   0xB3F4C jz      short loc_B3F10
//   0xB3F4E test    r12, r12
//   0xB3F51 jz      short loc_B3F69
//   0xB3F53 mov     rsi, [r12]
//   0xB3F57 mov     rdi, [r15+38h]
//   0xB3F5B mov     edx, 2
//   0xB3F60 call    _compare_tinfo
//   0xB3F65 test    al, al
//   0xB3F67 jnz     short loc_B3F80
//   0xB3F69 test    r13d, r13d
//   0xB3F6C jz      short loc_B3F10
//   0xB3F6E mov     rsi, [r15+38h]
//   0xB3F72 xor     edx, edx
//   0xB3F74 xor     edi, edi
//   0xB3F76 call    _get_tinfo_size
//   0xB3F7B cmp     r14, rax
//   0xB3F7E jnz     short loc_B3F10
//   0xB3F80 cmp     [rsp+68h+var_60], 0
//   0xB3F86 jz      short loc_B3F9B
//   0xB3F88 mov     rsi, [rsp+68h+var_60]
//   0xB3F8D mov     rdx, [r15+38h]
//   0xB3F91 mov     rax, [rsi]
//   0xB3F94 mov     [rsi], rdx
//   0xB3F97 mov     [r15+38h], rax
//   0xB3F9B mov     r13d, 1
//   0xB3FA1 jmp     short loc_B3FAB
//   0xB3FA3 align 8
//   0xB3FA8 xor     r13d, r13d
//   0xB3FAB mov     rdi, [rsp+68h+var_58]
//   0xB3FB0 test    rdi, rdi
//   0xB3FB3 jz      short loc_B401C
//   0xB3FB5 mov     r12, qword ptr [rsp+68h+var_50]
//   0xB3FBA test    r12, r12
//   0xB3FBD jz      short loc_B400E
//   0xB3FBF nop
//   0xB3FC0 mov     rax, rbp
//   0xB3FC3 shl     rax, 6
//   0xB3FC7 lea     rbx, [rdi+rax]
//   0xB3FCB lea     rdi, [rbx+38h]
//   0xB3FCF call    _clear_tinfo_t
//   0xB3FD4 mov     rdi, [rbx+20h]
//   0xB3FD8 test    rdi, rdi
//   0xB3FDB jz      short loc_B3FEA
//   0xB3FDD mov     qword ptr [rbx+28h], 0
//   0xB3FE5 call    _qfree
//   0xB3FEA mov     rdi, [rbx+8]
//   0xB3FEE test    rdi, rdi
//   0xB3FF1 jz      short loc_B4000
//   0xB3FF3 mov     qword ptr [rbx+10h], 0
//   0xB3FFB call    _qfree
//   0xB4000 add     rbp, 1
//   0xB4004 mov     rdi, [rsp+68h+var_58]
//   0xB4009 cmp     r12, rbp
//   0xB400C jnz     short loc_B3FC0
//   0xB400E mov     qword ptr [rsp+68h+var_50], 0
//   0xB4017 call    _qfree
//   0xB401C mov     rax, [rsp+68h+var_40]
//   0xB4021 sub     rax, fs:28h
//   0xB402A jnz     short loc_B4077
//   0xB402C add     rsp, 38h
//   0xB4030 mov     eax, r13d
//   0xB4033 pop     rbx
//   0xB4034 pop     rbp
//   0xB4035 pop     r12
//   0xB4037 pop     r13
//   0xB4039 pop     r14
//   0xB403B pop     r15
//   0xB403D retn
//   0xB403E mov     rdi, [rsp+68h+var_58]
//   0xB4043 xor     r13d, r13d
//   0xB4046 test    rdi, rdi
//   0xB4049 jnz     short loc_B400E
//   0xB404B jmp     short loc_B401C
//   0xB404D mov     rax, cs:under_debugger_ptr
//   0xB4054 cmp     byte ptr [rax], 0
//   0xB4057 jnz     loc_3085C
//   0xB405D mov     rax, [rsp+68h+var_40]
//   0xB4062 sub     rax, fs:28h
//   0xB406B jnz     short loc_B407C
//   0xB406D mov     edi, 0C70Ch
//   0xB4072 call    sub_37E160
//   0xB4077 call    ___stack_chk_fail
//   0xB407C call    ___stack_chk_fail
//   0xB4081 mov     r12, rax
//   0xB4084 jmp     loc_3085E
// ============================================================

void sub_B3EA0(/* signature unknown */)
{
    // see disassembly above
}

