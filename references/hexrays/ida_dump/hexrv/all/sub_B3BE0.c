// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xB3BE0
// Name:           sub_B3BE0
// Function size:  489 bytes (130 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xB3BE0 push    r15
//   0xB3BE2 pxor    xmm0, xmm0
//   0xB3BE6 push    r14
//   0xB3BE8 push    r13
//   0xB3BEA mov     r13d, ecx
//   0xB3BED xor     ecx, ecx
//   0xB3BEF push    r12
//   0xB3BF1 mov     r12, rdx
//   0xB3BF4 mov     rdx, rsi
//   0xB3BF7 mov     rsi, rdi
//   0xB3BFA push    rbp
//   0xB3BFB push    rbx
//   0xB3BFC sub     rsp, 38h
//   0xB3C00 mov     [rsp+68h+var_60], r8
//   0xB3C05 mov     r8d, 3
//   0xB3C0B mov     rax, fs:28h
//   0xB3C14 mov     [rsp+68h+var_40], rax
//   0xB3C19 xor     eax, eax
//   0xB3C1B lea     rax, [rsp+68h+var_58]
//   0xB3C20 movups  [rsp+68h+var_50], xmm0
//   0xB3C25 mov     [rsp+68h+var_58], 0
//   0xB3C2E mov     rdi, rax
//   0xB3C31 call    sub_32F410
//   0xB3C36 xor     ebx, ebx
//   0xB3C38 xor     ecx, ecx
//   0xB3C3A cmp     qword ptr [rsp+68h+var_50], 0
//   0xB3C40 movsxd  r14, r13d
//   0xB3C43 jnz     short loc_B3C61
//   0xB3C45 jmp     loc_B3D7E
//   0xB3C4A align 10h
//   0xB3C50 add     ebx, 1
//   0xB3C53 movsxd  rcx, ebx
//   0xB3C56 cmp     rcx, qword ptr [rsp+68h+var_50]
//   0xB3C5B jnb     loc_B3CE8
//   0xB3C61 shl     rcx, 6
//   0xB3C65 add     rcx, [rsp+68h+var_58]
//   0xB3C6A mov     rbp, [rcx]
//   0xB3C6D mov     r15, rcx
//   0xB3C70 test    rbp, rbp
//   0xB3C73 jnz     loc_B3D8D
//   0xB3C79 mov     rdi, [rcx+38h]
//   0xB3C7D mov     esi, 2
//   0xB3C82 call    _get_tinfo_property
//   0xB3C87 and     eax, 0Fh
//   0xB3C8A cmp     al, 0Bh
//   0xB3C8C jz      short loc_B3C50
//   0xB3C8E test    r12, r12
//   0xB3C91 jz      short loc_B3CA9
//   0xB3C93 mov     rsi, [r12]
//   0xB3C97 mov     rdi, [r15+38h]
//   0xB3C9B mov     edx, 2
//   0xB3CA0 call    _compare_tinfo
//   0xB3CA5 test    al, al
//   0xB3CA7 jnz     short loc_B3CC0
//   0xB3CA9 test    r13d, r13d
//   0xB3CAC jz      short loc_B3C50
//   0xB3CAE mov     rsi, [r15+38h]
//   0xB3CB2 xor     edx, edx
//   0xB3CB4 xor     edi, edi
//   0xB3CB6 call    _get_tinfo_size
//   0xB3CBB cmp     r14, rax
//   0xB3CBE jnz     short loc_B3C50
//   0xB3CC0 cmp     [rsp+68h+var_60], 0
//   0xB3CC6 jz      short loc_B3CDB
//   0xB3CC8 mov     rsi, [rsp+68h+var_60]
//   0xB3CCD mov     rdx, [r15+38h]
//   0xB3CD1 mov     rax, [rsi]
//   0xB3CD4 mov     [rsi], rdx
//   0xB3CD7 mov     [r15+38h], rax
//   0xB3CDB mov     r13d, 1
//   0xB3CE1 jmp     short loc_B3CEB
//   0xB3CE3 align 8
//   0xB3CE8 xor     r13d, r13d
//   0xB3CEB mov     rdi, [rsp+68h+var_58]
//   0xB3CF0 test    rdi, rdi
//   0xB3CF3 jz      short loc_B3D5C
//   0xB3CF5 mov     r12, qword ptr [rsp+68h+var_50]
//   0xB3CFA test    r12, r12
//   0xB3CFD jz      short loc_B3D4E
//   0xB3CFF nop
//   0xB3D00 mov     rax, rbp
//   0xB3D03 shl     rax, 6
//   0xB3D07 lea     rbx, [rdi+rax]
//   0xB3D0B lea     rdi, [rbx+38h]
//   0xB3D0F call    _clear_tinfo_t
//   0xB3D14 mov     rdi, [rbx+20h]
//   0xB3D18 test    rdi, rdi
//   0xB3D1B jz      short loc_B3D2A
//   0xB3D1D mov     qword ptr [rbx+28h], 0
//   0xB3D25 call    _qfree
//   0xB3D2A mov     rdi, [rbx+8]
//   0xB3D2E test    rdi, rdi
//   0xB3D31 jz      short loc_B3D40
//   0xB3D33 mov     qword ptr [rbx+10h], 0
//   0xB3D3B call    _qfree
//   0xB3D40 add     rbp, 1
//   0xB3D44 mov     rdi, [rsp+68h+var_58]
//   0xB3D49 cmp     r12, rbp
//   0xB3D4C jnz     short loc_B3D00
//   0xB3D4E mov     qword ptr [rsp+68h+var_50], 0
//   0xB3D57 call    _qfree
//   0xB3D5C mov     rax, [rsp+68h+var_40]
//   0xB3D61 sub     rax, fs:28h
//   0xB3D6A jnz     short loc_B3DB7
//   0xB3D6C add     rsp, 38h
//   0xB3D70 mov     eax, r13d
//   0xB3D73 pop     rbx
//   0xB3D74 pop     rbp
//   0xB3D75 pop     r12
//   0xB3D77 pop     r13
//   0xB3D79 pop     r14
//   0xB3D7B pop     r15
//   0xB3D7D retn
//   0xB3D7E mov     rdi, [rsp+68h+var_58]
//   0xB3D83 xor     r13d, r13d
//   0xB3D86 test    rdi, rdi
//   0xB3D89 jnz     short loc_B3D4E
//   0xB3D8B jmp     short loc_B3D5C
//   0xB3D8D mov     rax, cs:under_debugger_ptr
//   0xB3D94 cmp     byte ptr [rax], 0
//   0xB3D97 jnz     loc_3085C
//   0xB3D9D mov     rax, [rsp+68h+var_40]
//   0xB3DA2 sub     rax, fs:28h
//   0xB3DAB jnz     short loc_B3DBC
//   0xB3DAD mov     edi, 0C70Ch
//   0xB3DB2 call    sub_37DDE0
//   0xB3DB7 call    ___stack_chk_fail
//   0xB3DBC call    ___stack_chk_fail
//   0xB3DC1 mov     r12, rax
//   0xB3DC4 jmp     loc_3085E
// ============================================================

void sub_B3BE0(/* signature unknown */)
{
    // see disassembly above
}

