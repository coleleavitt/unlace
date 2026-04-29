// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xB19E0
// Name:           sub_B19E0
// Function size:  489 bytes (130 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xB19E0 push    r15
//   0xB19E2 pxor    xmm0, xmm0
//   0xB19E6 push    r14
//   0xB19E8 push    r13
//   0xB19EA mov     r13d, ecx
//   0xB19ED xor     ecx, ecx
//   0xB19EF push    r12
//   0xB19F1 mov     r12, rdx
//   0xB19F4 mov     rdx, rsi
//   0xB19F7 mov     rsi, rdi
//   0xB19FA push    rbp
//   0xB19FB push    rbx
//   0xB19FC sub     rsp, 38h
//   0xB1A00 mov     [rsp+68h+var_60], r8
//   0xB1A05 mov     r8d, 3
//   0xB1A0B mov     rax, fs:28h
//   0xB1A14 mov     [rsp+68h+var_40], rax
//   0xB1A19 xor     eax, eax
//   0xB1A1B lea     rax, [rsp+68h+var_58]
//   0xB1A20 movups  [rsp+68h+var_50], xmm0
//   0xB1A25 mov     [rsp+68h+var_58], 0
//   0xB1A2E mov     rdi, rax
//   0xB1A31 call    sub_32D190
//   0xB1A36 xor     ebx, ebx
//   0xB1A38 xor     ecx, ecx
//   0xB1A3A cmp     qword ptr [rsp+68h+var_50], 0
//   0xB1A40 movsxd  r14, r13d
//   0xB1A43 jnz     short loc_B1A61
//   0xB1A45 jmp     loc_B1B7E
//   0xB1A4A align 10h
//   0xB1A50 add     ebx, 1
//   0xB1A53 movsxd  rcx, ebx
//   0xB1A56 cmp     rcx, qword ptr [rsp+68h+var_50]
//   0xB1A5B jnb     loc_B1AE8
//   0xB1A61 shl     rcx, 6
//   0xB1A65 add     rcx, [rsp+68h+var_58]
//   0xB1A6A mov     rbp, [rcx]
//   0xB1A6D mov     r15, rcx
//   0xB1A70 test    rbp, rbp
//   0xB1A73 jnz     loc_B1B8D
//   0xB1A79 mov     rdi, [rcx+38h]
//   0xB1A7D mov     esi, 2
//   0xB1A82 call    _get_tinfo_property
//   0xB1A87 and     eax, 0Fh
//   0xB1A8A cmp     al, 0Bh
//   0xB1A8C jz      short loc_B1A50
//   0xB1A8E test    r12, r12
//   0xB1A91 jz      short loc_B1AA9
//   0xB1A93 mov     rsi, [r12]
//   0xB1A97 mov     rdi, [r15+38h]
//   0xB1A9B mov     edx, 2
//   0xB1AA0 call    _compare_tinfo
//   0xB1AA5 test    al, al
//   0xB1AA7 jnz     short loc_B1AC0
//   0xB1AA9 test    r13d, r13d
//   0xB1AAC jz      short loc_B1A50
//   0xB1AAE mov     rsi, [r15+38h]
//   0xB1AB2 xor     edx, edx
//   0xB1AB4 xor     edi, edi
//   0xB1AB6 call    _get_tinfo_size
//   0xB1ABB cmp     r14, rax
//   0xB1ABE jnz     short loc_B1A50
//   0xB1AC0 cmp     [rsp+68h+var_60], 0
//   0xB1AC6 jz      short loc_B1ADB
//   0xB1AC8 mov     rsi, [rsp+68h+var_60]
//   0xB1ACD mov     rdx, [r15+38h]
//   0xB1AD1 mov     rax, [rsi]
//   0xB1AD4 mov     [rsi], rdx
//   0xB1AD7 mov     [r15+38h], rax
//   0xB1ADB mov     r13d, 1
//   0xB1AE1 jmp     short loc_B1AEB
//   0xB1AE3 align 8
//   0xB1AE8 xor     r13d, r13d
//   0xB1AEB mov     rdi, [rsp+68h+var_58]
//   0xB1AF0 test    rdi, rdi
//   0xB1AF3 jz      short loc_B1B5C
//   0xB1AF5 mov     r12, qword ptr [rsp+68h+var_50]
//   0xB1AFA test    r12, r12
//   0xB1AFD jz      short loc_B1B4E
//   0xB1AFF nop
//   0xB1B00 mov     rax, rbp
//   0xB1B03 shl     rax, 6
//   0xB1B07 lea     rbx, [rdi+rax]
//   0xB1B0B lea     rdi, [rbx+38h]
//   0xB1B0F call    _clear_tinfo_t
//   0xB1B14 mov     rdi, [rbx+20h]
//   0xB1B18 test    rdi, rdi
//   0xB1B1B jz      short loc_B1B2A
//   0xB1B1D mov     qword ptr [rbx+28h], 0
//   0xB1B25 call    _qfree
//   0xB1B2A mov     rdi, [rbx+8]
//   0xB1B2E test    rdi, rdi
//   0xB1B31 jz      short loc_B1B40
//   0xB1B33 mov     qword ptr [rbx+10h], 0
//   0xB1B3B call    _qfree
//   0xB1B40 add     rbp, 1
//   0xB1B44 mov     rdi, [rsp+68h+var_58]
//   0xB1B49 cmp     r12, rbp
//   0xB1B4C jnz     short loc_B1B00
//   0xB1B4E mov     qword ptr [rsp+68h+var_50], 0
//   0xB1B57 call    _qfree
//   0xB1B5C mov     rax, [rsp+68h+var_40]
//   0xB1B61 sub     rax, fs:28h
//   0xB1B6A jnz     short loc_B1BB7
//   0xB1B6C add     rsp, 38h
//   0xB1B70 mov     eax, r13d
//   0xB1B73 pop     rbx
//   0xB1B74 pop     rbp
//   0xB1B75 pop     r12
//   0xB1B77 pop     r13
//   0xB1B79 pop     r14
//   0xB1B7B pop     r15
//   0xB1B7D retn
//   0xB1B7E mov     rdi, [rsp+68h+var_58]
//   0xB1B83 xor     r13d, r13d
//   0xB1B86 test    rdi, rdi
//   0xB1B89 jnz     short loc_B1B4E
//   0xB1B8B jmp     short loc_B1B5C
//   0xB1B8D mov     rax, cs:under_debugger_ptr
//   0xB1B94 cmp     byte ptr [rax], 0
//   0xB1B97 jnz     loc_2F85C
//   0xB1B9D mov     rax, [rsp+68h+var_40]
//   0xB1BA2 sub     rax, fs:28h
//   0xB1BAB jnz     short loc_B1BBC
//   0xB1BAD mov     edi, 0C70Ch
//   0xB1BB2 call    sub_37B760
//   0xB1BB7 call    ___stack_chk_fail
//   0xB1BBC call    ___stack_chk_fail
//   0xB1BC1 mov     r12, rax
//   0xB1BC4 jmp     loc_2F85E
// ============================================================

void sub_B19E0(/* signature unknown */)
{
    // see disassembly above
}

