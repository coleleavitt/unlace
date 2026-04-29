// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xB7AE0
// Name:           sub_B7AE0
// Function size:  489 bytes (130 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xB7AE0 push    r15
//   0xB7AE2 pxor    xmm0, xmm0
//   0xB7AE6 push    r14
//   0xB7AE8 push    r13
//   0xB7AEA mov     r13d, ecx
//   0xB7AED xor     ecx, ecx
//   0xB7AEF push    r12
//   0xB7AF1 mov     r12, rdx
//   0xB7AF4 mov     rdx, rsi
//   0xB7AF7 mov     rsi, rdi
//   0xB7AFA push    rbp
//   0xB7AFB push    rbx
//   0xB7AFC sub     rsp, 38h
//   0xB7B00 mov     [rsp+68h+var_60], r8
//   0xB7B05 mov     r8d, 3
//   0xB7B0B mov     rax, fs:28h
//   0xB7B14 mov     [rsp+68h+var_40], rax
//   0xB7B19 xor     eax, eax
//   0xB7B1B lea     rax, [rsp+68h+var_58]
//   0xB7B20 movups  [rsp+68h+var_50], xmm0
//   0xB7B25 mov     [rsp+68h+var_58], 0
//   0xB7B2E mov     rdi, rax
//   0xB7B31 call    sub_334B10
//   0xB7B36 xor     ebx, ebx
//   0xB7B38 xor     ecx, ecx
//   0xB7B3A cmp     qword ptr [rsp+68h+var_50], 0
//   0xB7B40 movsxd  r14, r13d
//   0xB7B43 jnz     short loc_B7B61
//   0xB7B45 jmp     loc_B7C7E
//   0xB7B4A align 10h
//   0xB7B50 add     ebx, 1
//   0xB7B53 movsxd  rcx, ebx
//   0xB7B56 cmp     rcx, qword ptr [rsp+68h+var_50]
//   0xB7B5B jnb     loc_B7BE8
//   0xB7B61 shl     rcx, 6
//   0xB7B65 add     rcx, [rsp+68h+var_58]
//   0xB7B6A mov     rbp, [rcx]
//   0xB7B6D mov     r15, rcx
//   0xB7B70 test    rbp, rbp
//   0xB7B73 jnz     loc_B7C8D
//   0xB7B79 mov     rdi, [rcx+38h]
//   0xB7B7D mov     esi, 2
//   0xB7B82 call    _get_tinfo_property
//   0xB7B87 and     eax, 0Fh
//   0xB7B8A cmp     al, 0Bh
//   0xB7B8C jz      short loc_B7B50
//   0xB7B8E test    r12, r12
//   0xB7B91 jz      short loc_B7BA9
//   0xB7B93 mov     rsi, [r12]
//   0xB7B97 mov     rdi, [r15+38h]
//   0xB7B9B mov     edx, 2
//   0xB7BA0 call    _compare_tinfo
//   0xB7BA5 test    al, al
//   0xB7BA7 jnz     short loc_B7BC0
//   0xB7BA9 test    r13d, r13d
//   0xB7BAC jz      short loc_B7B50
//   0xB7BAE mov     rsi, [r15+38h]
//   0xB7BB2 xor     edx, edx
//   0xB7BB4 xor     edi, edi
//   0xB7BB6 call    _get_tinfo_size
//   0xB7BBB cmp     r14, rax
//   0xB7BBE jnz     short loc_B7B50
//   0xB7BC0 cmp     [rsp+68h+var_60], 0
//   0xB7BC6 jz      short loc_B7BDB
//   0xB7BC8 mov     rsi, [rsp+68h+var_60]
//   0xB7BCD mov     rdx, [r15+38h]
//   0xB7BD1 mov     rax, [rsi]
//   0xB7BD4 mov     [rsi], rdx
//   0xB7BD7 mov     [r15+38h], rax
//   0xB7BDB mov     r13d, 1
//   0xB7BE1 jmp     short loc_B7BEB
//   0xB7BE3 align 8
//   0xB7BE8 xor     r13d, r13d
//   0xB7BEB mov     rdi, [rsp+68h+var_58]
//   0xB7BF0 test    rdi, rdi
//   0xB7BF3 jz      short loc_B7C5C
//   0xB7BF5 mov     r12, qword ptr [rsp+68h+var_50]
//   0xB7BFA test    r12, r12
//   0xB7BFD jz      short loc_B7C4E
//   0xB7BFF nop
//   0xB7C00 mov     rax, rbp
//   0xB7C03 shl     rax, 6
//   0xB7C07 lea     rbx, [rdi+rax]
//   0xB7C0B lea     rdi, [rbx+38h]
//   0xB7C0F call    _clear_tinfo_t
//   0xB7C14 mov     rdi, [rbx+20h]
//   0xB7C18 test    rdi, rdi
//   0xB7C1B jz      short loc_B7C2A
//   0xB7C1D mov     qword ptr [rbx+28h], 0
//   0xB7C25 call    _qfree
//   0xB7C2A mov     rdi, [rbx+8]
//   0xB7C2E test    rdi, rdi
//   0xB7C31 jz      short loc_B7C40
//   0xB7C33 mov     qword ptr [rbx+10h], 0
//   0xB7C3B call    _qfree
//   0xB7C40 add     rbp, 1
//   0xB7C44 mov     rdi, [rsp+68h+var_58]
//   0xB7C49 cmp     r12, rbp
//   0xB7C4C jnz     short loc_B7C00
//   0xB7C4E mov     qword ptr [rsp+68h+var_50], 0
//   0xB7C57 call    _qfree
//   0xB7C5C mov     rax, [rsp+68h+var_40]
//   0xB7C61 sub     rax, fs:28h
//   0xB7C6A jnz     short loc_B7CB7
//   0xB7C6C add     rsp, 38h
//   0xB7C70 mov     eax, r13d
//   0xB7C73 pop     rbx
//   0xB7C74 pop     rbp
//   0xB7C75 pop     r12
//   0xB7C77 pop     r13
//   0xB7C79 pop     r14
//   0xB7C7B pop     r15
//   0xB7C7D retn
//   0xB7C7E mov     rdi, [rsp+68h+var_58]
//   0xB7C83 xor     r13d, r13d
//   0xB7C86 test    rdi, rdi
//   0xB7C89 jnz     short loc_B7C4E
//   0xB7C8B jmp     short loc_B7C5C
//   0xB7C8D mov     rax, cs:under_debugger_ptr
//   0xB7C94 cmp     byte ptr [rax], 0
//   0xB7C97 jnz     loc_3389C
//   0xB7C9D mov     rax, [rsp+68h+var_40]
//   0xB7CA2 sub     rax, fs:28h
//   0xB7CAB jnz     short loc_B7CBC
//   0xB7CAD mov     edi, 0C70Ch
//   0xB7CB2 call    sub_3835A0
//   0xB7CB7 call    ___stack_chk_fail
//   0xB7CBC call    ___stack_chk_fail
//   0xB7CC1 mov     r12, rax
//   0xB7CC4 jmp     loc_3389E
// ============================================================

void sub_B7AE0(/* signature unknown */)
{
    // see disassembly above
}

