// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x244C70
// Name:           sub_244C70
// Function size:  451 bytes (114 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x244C70 push    rbp
//   0x244C71 mov     rbp, rsp
//   0x244C74 push    r15
//   0x244C76 push    r14
//   0x244C78 push    r13
//   0x244C7A mov     r13d, edx
//   0x244C7D push    r12
//   0x244C7F mov     r12, rdi
//   0x244C82 push    rbx
//   0x244C83 mov     rbx, rcx
//   0x244C86 sub     rsp, 28h
//   0x244C8A mov     [rbp+var_48], rsi
//   0x244C8E cmp     byte ptr [rsi+30h], 0
//   0x244C92 mov     r14, fs:28h
//   0x244C9B mov     [rbp+var_38], r14
//   0x244C9F mov     r14d, r8d
//   0x244CA2 jz      short loc_244D10
//   0x244CA4 lea     r15, [rbp+var_40]
//   0x244CA8 xor     r9d, r9d
//   0x244CAB xor     edx, edx
//   0x244CAD mov     [rbp+var_40], 0
//   0x244CB5 mov     r8, r15
//   0x244CB8 call    sub_244020
//   0x244CBD mov     rdi, r15
//   0x244CC0 mov     rbx, rax
//   0x244CC3 call    _clear_tinfo_t
//   0x244CC8 mov     rsi, [r12+148h]
//   0x244CD0 mov     edx, r13d
//   0x244CD3 mov     rdi, rbx
//   0x244CD6 call    sub_242220
//   0x244CDB test    r14b, r14b
//   0x244CDE jnz     loc_244DD0
//   0x244CE4 mov     rax, [rbp+var_38]
//   0x244CE8 sub     rax, fs:28h
//   0x244CF1 jnz     loc_244E16
//   0x244CF7 lea     rsp, [rbp-28h]
//   0x244CFB mov     rax, rbx
//   0x244CFE pop     rbx
//   0x244CFF pop     r12
//   0x244D01 pop     r13
//   0x244D03 pop     r14
//   0x244D05 pop     r15
//   0x244D07 pop     rbp
//   0x244D08 retn
//   0x244D09 align 10h
//   0x244D10 mov     rax, [rbp+var_48]
//   0x244D14 xor     r9d, r9d
//   0x244D17 mov     r8, rcx
//   0x244D1A mov     rsi, [rax+18h]
//   0x244D1E lea     rdx, [rax+20h]
//   0x244D22 call    sub_242770
//   0x244D27 mov     esi, 3
//   0x244D2C mov     rdi, [rax+30h]
//   0x244D30 mov     r15, rax
//   0x244D33 call    _get_tinfo_property
//   0x244D38 cmp     eax, 1
//   0x244D3B jnz     short loc_244DB8
//   0x244D3D mov     edi, 40h ; '@'
//   0x244D42 call    j__qalloc_or_throw
//   0x244D47 sub     rsp, 8
//   0x244D4B xor     r8d, r8d
//   0x244D4E xor     edx, edx
//   0x244D50 mov     rdi, [r12+148h]
//   0x244D58 push    0
//   0x244D5A mov     r9d, 1
//   0x244D60 xor     esi, esi
//   0x244D62 mov     rcx, 0FFFFFFFFFFFFFFFFh
//   0x244D69 mov     rbx, rax
//   0x244D6C call    sub_239BD0
//   0x244D71 pop     rdx
//   0x244D72 pop     rcx
//   0x244D73 mov     [rbx+20h], rax
//   0x244D77 mov     rax, [rbp+var_48]
//   0x244D7B mov     qword ptr [rbx], 0FFFFFFFFFFFFFFFFh
//   0x244D82 mov     [rbx+8], r13d
//   0x244D86 mov     qword ptr [rbx+0Ch], 0FFFFFFFFFFFFFFFFh
//   0x244D8E mov     [rbx+18h], r15
//   0x244D92 mov     qword ptr [rbx+28h], 0
//   0x244D9A mov     qword ptr [rbx+30h], 0
//   0x244DA2 mov     dword ptr [rbx+38h], 0
//   0x244DA9 mov     rax, [rax+18h]
//   0x244DAD mov     [rbx], rax
//   0x244DB0 jmp     loc_244CC8
//   0x244DB5 align 8
//   0x244DB8 mov     rdi, r15
//   0x244DBB mov     rsi, rbx
//   0x244DBE call    sub_23DAF0
//   0x244DC3 mov     r15, rax
//   0x244DC6 jmp     loc_244D3D
//   0x244DCB align 10h
//   0x244DD0 mov     r14, [rbp+var_48]
//   0x244DD4 mov     rax, [r12+148h]
//   0x244DDC lea     r15, [rbp+var_40]
//   0x244DE0 mov     rdi, r15
//   0x244DE3 mov     edx, [r14+44h]
//   0x244DE7 mov     rsi, [rax+70h]
//   0x244DEB call    sub_324D40
//   0x244DF0 mov     rsi, [r14+18h]
//   0x244DF4 lea     rdx, [r14+40h]
//   0x244DF8 mov     r8, rbx
//   0x244DFB mov     rcx, r15
//   0x244DFE mov     rdi, r12
//   0x244E01 call    sub_2436D0
//   0x244E06 mov     rdi, r15
//   0x244E09 mov     rbx, rax
//   0x244E0C call    _clear_tinfo_t
//   0x244E11 jmp     loc_244CE4
//   0x244E16 call    ___stack_chk_fail
//   0x244E1B mov     rbx, rax
//   0x244E1E jmp     loc_45BEA
//   0x244E23 mov     r15, rax
//   0x244E26 jmp     loc_45C09
//   0x244E2B mov     rbx, rax
//   0x244E2E jmp     loc_45C28
// ============================================================

void sub_244C70(/* signature unknown */)
{
    // see disassembly above
}

