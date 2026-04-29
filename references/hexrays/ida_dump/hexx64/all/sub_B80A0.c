// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xB80A0
// Name:           sub_B80A0
// Function size:  489 bytes (130 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xB80A0 push    r15
//   0xB80A2 pxor    xmm0, xmm0
//   0xB80A6 push    r14
//   0xB80A8 push    r13
//   0xB80AA mov     r13d, ecx
//   0xB80AD xor     ecx, ecx
//   0xB80AF push    r12
//   0xB80B1 mov     r12, rdx
//   0xB80B4 mov     rdx, rsi
//   0xB80B7 mov     rsi, rdi
//   0xB80BA push    rbp
//   0xB80BB push    rbx
//   0xB80BC sub     rsp, 38h
//   0xB80C0 mov     [rsp+68h+var_60], r8
//   0xB80C5 mov     r8d, 3
//   0xB80CB mov     rax, fs:28h
//   0xB80D4 mov     [rsp+68h+var_40], rax
//   0xB80D9 xor     eax, eax
//   0xB80DB lea     rax, [rsp+68h+var_58]
//   0xB80E0 movups  [rsp+68h+var_50], xmm0
//   0xB80E5 mov     [rsp+68h+var_58], 0
//   0xB80EE mov     rdi, rax
//   0xB80F1 call    sub_3349B0
//   0xB80F6 xor     ebx, ebx
//   0xB80F8 xor     ecx, ecx
//   0xB80FA cmp     qword ptr [rsp+68h+var_50], 0
//   0xB8100 movsxd  r14, r13d
//   0xB8103 jnz     short loc_B8121
//   0xB8105 jmp     loc_B823E
//   0xB810A align 10h
//   0xB8110 add     ebx, 1
//   0xB8113 movsxd  rcx, ebx
//   0xB8116 cmp     rcx, qword ptr [rsp+68h+var_50]
//   0xB811B jnb     loc_B81A8
//   0xB8121 shl     rcx, 6
//   0xB8125 add     rcx, [rsp+68h+var_58]
//   0xB812A mov     rbp, [rcx]
//   0xB812D mov     r15, rcx
//   0xB8130 test    rbp, rbp
//   0xB8133 jnz     loc_B824D
//   0xB8139 mov     rdi, [rcx+38h]
//   0xB813D mov     esi, 2
//   0xB8142 call    _get_tinfo_property
//   0xB8147 and     eax, 0Fh
//   0xB814A cmp     al, 0Bh
//   0xB814C jz      short loc_B8110
//   0xB814E test    r12, r12
//   0xB8151 jz      short loc_B8169
//   0xB8153 mov     rsi, [r12]
//   0xB8157 mov     rdi, [r15+38h]
//   0xB815B mov     edx, 2
//   0xB8160 call    _compare_tinfo
//   0xB8165 test    al, al
//   0xB8167 jnz     short loc_B8180
//   0xB8169 test    r13d, r13d
//   0xB816C jz      short loc_B8110
//   0xB816E mov     rsi, [r15+38h]
//   0xB8172 xor     edx, edx
//   0xB8174 xor     edi, edi
//   0xB8176 call    _get_tinfo_size
//   0xB817B cmp     r14, rax
//   0xB817E jnz     short loc_B8110
//   0xB8180 cmp     [rsp+68h+var_60], 0
//   0xB8186 jz      short loc_B819B
//   0xB8188 mov     rsi, [rsp+68h+var_60]
//   0xB818D mov     rdx, [r15+38h]
//   0xB8191 mov     rax, [rsi]
//   0xB8194 mov     [rsi], rdx
//   0xB8197 mov     [r15+38h], rax
//   0xB819B mov     r13d, 1
//   0xB81A1 jmp     short loc_B81AB
//   0xB81A3 align 8
//   0xB81A8 xor     r13d, r13d
//   0xB81AB mov     rdi, [rsp+68h+var_58]
//   0xB81B0 test    rdi, rdi
//   0xB81B3 jz      short loc_B821C
//   0xB81B5 mov     r12, qword ptr [rsp+68h+var_50]
//   0xB81BA test    r12, r12
//   0xB81BD jz      short loc_B820E
//   0xB81BF nop
//   0xB81C0 mov     rax, rbp
//   0xB81C3 shl     rax, 6
//   0xB81C7 lea     rbx, [rdi+rax]
//   0xB81CB lea     rdi, [rbx+38h]
//   0xB81CF call    _clear_tinfo_t
//   0xB81D4 mov     rdi, [rbx+20h]
//   0xB81D8 test    rdi, rdi
//   0xB81DB jz      short loc_B81EA
//   0xB81DD mov     qword ptr [rbx+28h], 0
//   0xB81E5 call    _qfree
//   0xB81EA mov     rdi, [rbx+8]
//   0xB81EE test    rdi, rdi
//   0xB81F1 jz      short loc_B8200
//   0xB81F3 mov     qword ptr [rbx+10h], 0
//   0xB81FB call    _qfree
//   0xB8200 add     rbp, 1
//   0xB8204 mov     rdi, [rsp+68h+var_58]
//   0xB8209 cmp     r12, rbp
//   0xB820C jnz     short loc_B81C0
//   0xB820E mov     qword ptr [rsp+68h+var_50], 0
//   0xB8217 call    _qfree
//   0xB821C mov     rax, [rsp+68h+var_40]
//   0xB8221 sub     rax, fs:28h
//   0xB822A jnz     short loc_B8277
//   0xB822C add     rsp, 38h
//   0xB8230 mov     eax, r13d
//   0xB8233 pop     rbx
//   0xB8234 pop     rbp
//   0xB8235 pop     r12
//   0xB8237 pop     r13
//   0xB8239 pop     r14
//   0xB823B pop     r15
//   0xB823D retn
//   0xB823E mov     rdi, [rsp+68h+var_58]
//   0xB8243 xor     r13d, r13d
//   0xB8246 test    rdi, rdi
//   0xB8249 jnz     short loc_B820E
//   0xB824B jmp     short loc_B821C
//   0xB824D mov     rax, cs:under_debugger_ptr
//   0xB8254 cmp     byte ptr [rax], 0
//   0xB8257 jnz     loc_319DC
//   0xB825D mov     rax, [rsp+68h+var_40]
//   0xB8262 sub     rax, fs:28h
//   0xB826B jnz     short loc_B827C
//   0xB826D mov     edi, 0C70Ch
//   0xB8272 call    sub_383060
//   0xB8277 call    ___stack_chk_fail
//   0xB827C call    ___stack_chk_fail
//   0xB8281 mov     r12, rax
//   0xB8284 jmp     loc_319DE
// ============================================================

void sub_B80A0(/* signature unknown */)
{
    // see disassembly above
}

