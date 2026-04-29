// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x246C30
// Name:           sub_246C30
// Function size:  451 bytes (114 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x246C30 push    rbp
//   0x246C31 mov     rbp, rsp
//   0x246C34 push    r15
//   0x246C36 push    r14
//   0x246C38 push    r13
//   0x246C3A mov     r13d, edx
//   0x246C3D push    r12
//   0x246C3F mov     r12, rdi
//   0x246C42 push    rbx
//   0x246C43 mov     rbx, rcx
//   0x246C46 sub     rsp, 28h
//   0x246C4A mov     [rbp+var_48], rsi
//   0x246C4E cmp     byte ptr [rsi+30h], 0
//   0x246C52 mov     r14, fs:28h
//   0x246C5B mov     [rbp+var_38], r14
//   0x246C5F mov     r14d, r8d
//   0x246C62 jz      short loc_246CD0
//   0x246C64 lea     r15, [rbp+var_40]
//   0x246C68 xor     r9d, r9d
//   0x246C6B xor     edx, edx
//   0x246C6D mov     [rbp+var_40], 0
//   0x246C75 mov     r8, r15
//   0x246C78 call    sub_245FE0
//   0x246C7D mov     rdi, r15
//   0x246C80 mov     rbx, rax
//   0x246C83 call    _clear_tinfo_t
//   0x246C88 mov     rsi, [r12+148h]
//   0x246C90 mov     edx, r13d
//   0x246C93 mov     rdi, rbx
//   0x246C96 call    sub_2441E0
//   0x246C9B test    r14b, r14b
//   0x246C9E jnz     loc_246D90
//   0x246CA4 mov     rax, [rbp+var_38]
//   0x246CA8 sub     rax, fs:28h
//   0x246CB1 jnz     loc_246DD6
//   0x246CB7 lea     rsp, [rbp-28h]
//   0x246CBB mov     rax, rbx
//   0x246CBE pop     rbx
//   0x246CBF pop     r12
//   0x246CC1 pop     r13
//   0x246CC3 pop     r14
//   0x246CC5 pop     r15
//   0x246CC7 pop     rbp
//   0x246CC8 retn
//   0x246CC9 align 10h
//   0x246CD0 mov     rax, [rbp+var_48]
//   0x246CD4 xor     r9d, r9d
//   0x246CD7 mov     r8, rcx
//   0x246CDA mov     rsi, [rax+18h]
//   0x246CDE lea     rdx, [rax+20h]
//   0x246CE2 call    sub_244730
//   0x246CE7 mov     esi, 3
//   0x246CEC mov     rdi, [rax+30h]
//   0x246CF0 mov     r15, rax
//   0x246CF3 call    _get_tinfo_property
//   0x246CF8 cmp     eax, 1
//   0x246CFB jnz     short loc_246D78
//   0x246CFD mov     edi, 40h ; '@'
//   0x246D02 call    j__qalloc_or_throw
//   0x246D07 sub     rsp, 8
//   0x246D0B xor     r8d, r8d
//   0x246D0E xor     edx, edx
//   0x246D10 mov     rdi, [r12+148h]
//   0x246D18 push    0
//   0x246D1A mov     r9d, 1
//   0x246D20 xor     esi, esi
//   0x246D22 mov     rcx, 0FFFFFFFFFFFFFFFFh
//   0x246D29 mov     rbx, rax
//   0x246D2C call    sub_23BB90
//   0x246D31 pop     rdx
//   0x246D32 pop     rcx
//   0x246D33 mov     [rbx+20h], rax
//   0x246D37 mov     rax, [rbp+var_48]
//   0x246D3B mov     qword ptr [rbx], 0FFFFFFFFFFFFFFFFh
//   0x246D42 mov     [rbx+8], r13d
//   0x246D46 mov     qword ptr [rbx+0Ch], 0FFFFFFFFFFFFFFFFh
//   0x246D4E mov     [rbx+18h], r15
//   0x246D52 mov     qword ptr [rbx+28h], 0
//   0x246D5A mov     qword ptr [rbx+30h], 0
//   0x246D62 mov     dword ptr [rbx+38h], 0
//   0x246D69 mov     rax, [rax+18h]
//   0x246D6D mov     [rbx], rax
//   0x246D70 jmp     loc_246C88
//   0x246D75 align 8
//   0x246D78 mov     rdi, r15
//   0x246D7B mov     rsi, rbx
//   0x246D7E call    sub_23FAB0
//   0x246D83 mov     r15, rax
//   0x246D86 jmp     loc_246CFD
//   0x246D8B align 10h
//   0x246D90 mov     r14, [rbp+var_48]
//   0x246D94 mov     rax, [r12+148h]
//   0x246D9C lea     r15, [rbp+var_40]
//   0x246DA0 mov     rdi, r15
//   0x246DA3 mov     edx, [r14+44h]
//   0x246DA7 mov     rsi, [rax+70h]
//   0x246DAB call    sub_326800
//   0x246DB0 mov     rsi, [r14+18h]
//   0x246DB4 lea     rdx, [r14+40h]
//   0x246DB8 mov     r8, rbx
//   0x246DBB mov     rcx, r15
//   0x246DBE mov     rdi, r12
//   0x246DC1 call    sub_245690
//   0x246DC6 mov     rdi, r15
//   0x246DC9 mov     rbx, rax
//   0x246DCC call    _clear_tinfo_t
//   0x246DD1 jmp     loc_246CA4
//   0x246DD6 call    ___stack_chk_fail
//   0x246DDB mov     rbx, rax
//   0x246DDE jmp     loc_46C64
//   0x246DE3 mov     r15, rax
//   0x246DE6 jmp     loc_46C83
//   0x246DEB mov     rbx, rax
//   0x246DEE jmp     loc_46CA2
// ============================================================

void sub_246C30(/* signature unknown */)
{
    // see disassembly above
}

