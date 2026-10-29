// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3D6B90
// Name:           sub_3D6B90
// Function size:  429 bytes (102 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3D6B90 push    r14; int
//   0x3D6B92 push    r13; int
//   0x3D6B94 push    r12; int
//   0x3D6B96 mov     r12, rsi
//   0x3D6B99 push    rbp; int
//   0x3D6B9A push    rbx; int
//   0x3D6B9B mov     rbx, rdi
//   0x3D6B9E sub     rsp, 30h
//   0x3D6BA2 movdqa  xmm0, cs:xmmword_23A7890
//   0x3D6BAA mov     rbp, fs:28h
//   0x3D6BB3 mov     qword ptr [rsp+58h+var_30], rbp; int
//   0x3D6BB8 mov     rbp, rdx
//   0x3D6BBB mov     qword ptr [rdi+400h], 0FFFFFFFFFFFFFFFFh
//   0x3D6BC6 movups  xmmword ptr [rdi+4C8h], xmm0
//   0x3D6BCD movdqa  xmm0, cs:xmmword_23A76C0
//   0x3D6BD5 movups  xmmword ptr [rdi+630h], xmm0
//   0x3D6BDC pcmpeqd xmm0, xmm0
//   0x3D6BE0 movups  xmmword ptr [rdi+640h], xmm0
//   0x3D6BE7 mov     rdi, [rdi]
//   0x3D6BEA call    sub_359AE0
//   0x3D6BEF mov     rcx, rbp
//   0x3D6BF2 mov     rdx, r12
//   0x3D6BF5 mov     rdi, rbx
//   0x3D6BF8 lea     rsi, [rbx+388h]
//   0x3D6BFF mov     r8d, 0A2h
//   0x3D6C05 call    sub_3D2D40
//   0x3D6C0A mov     rdx, rbp
//   0x3D6C0D mov     rsi, r12
//   0x3D6C10 mov     rdi, rbx
//   0x3D6C13 call    sub_3D2E40
//   0x3D6C18 mov     r14, [rbx+3F8h]
//   0x3D6C1F call    _must_journal
//   0x3D6C24 test    al, al
//   0x3D6C26 jz      short loc_3D6C2F
//   0x3D6C28 cmp     dword ptr [r14+60h], 0FFFFFFFFh
//   0x3D6C2D jnz     short loc_3D6C70
//   0x3D6C2F xor     ecx, ecx
//   0x3D6C31 mov     rdx, rbp
//   0x3D6C34 mov     rsi, r12
//   0x3D6C37 mov     rdi, r14
//   0x3D6C3A call    sub_8BBFF0
//   0x3D6C3F lea     r13, [rsp+58h+ptr]
//   0x3D6C44 test    eax, eax
//   0x3D6C46 jz      short loc_3D6CC0
//   0x3D6C48 mov     rdx, qword ptr [rsp+58h+var_30]
//   0x3D6C4D sub     rdx, fs:28h
//   0x3D6C56 jnz     loc_3D6D30
//   0x3D6C5C add     rsp, 30h
//   0x3D6C60 pop     rbx
//   0x3D6C61 pop     rbp
//   0x3D6C62 pop     r12
//   0x3D6C64 pop     r13
//   0x3D6C66 pop     r14
//   0x3D6C68 retn
//   0x3D6C69 align 10h
//   0x3D6C70 lea     r13, [rsp+58h+ptr]
//   0x3D6C75 pxor    xmm0, xmm0
//   0x3D6C79 mov     rdx, rbp
//   0x3D6C7C mov     rsi, r12
//   0x3D6C7F mov     rcx, r13
//   0x3D6C82 mov     rdi, r14
//   0x3D6C85 movups  xmmword ptr [rsp+58h+var_40], xmm0
//   0x3D6C8A mov     [rsp+58h+ptr], 0
//   0x3D6C93 call    sub_8BBFF0
//   0x3D6C98 mov     rdi, [rsp+58h+ptr]; ptr
//   0x3D6C9D test    eax, eax
//   0x3D6C9F jnz     short loc_3D6CE0
//   0x3D6CA1 mov     rdx, qword ptr [rsp+58h+var_40]
//   0x3D6CA6 test    rdx, rdx
//   0x3D6CA9 jnz     short loc_3D6D08
//   0x3D6CAB test    rdi, rdi
//   0x3D6CAE jz      short loc_3D6CC0
//   0x3D6CB0 call    _qfree
//   0x3D6CB5 nop     word ptr [rax+rax+00000000h]
//   0x3D6CC0 lea     rdi, [rbx+410h]; int
//   0x3D6CC7 mov     rsi, r13; int
//   0x3D6CCA mov     [rsp+58h+ptr], r12; int
//   0x3D6CCF mov     qword ptr [rsp+58h+var_40], rbp; int
//   0x3D6CD4 call    _rangeset_t_sub
//   0x3D6CD9 xor     eax, eax
//   0x3D6CDB jmp     loc_3D6C48
//   0x3D6CE0 test    rdi, rdi
//   0x3D6CE3 jz      loc_3D6C48
//   0x3D6CE9 mov     [rsp+58h+var_4C], eax
//   0x3D6CED mov     qword ptr [rsp+58h+var_40], 0
//   0x3D6CF6 call    _qfree
//   0x3D6CFB mov     eax, [rsp+58h+var_4C]
//   0x3D6CFF jmp     loc_3D6C48
//   0x3D6D04 align 8
//   0x3D6D08 mov     eax, [r14+60h]
//   0x3D6D0C mov     rsi, rdi
//   0x3D6D0F mov     edi, eax
//   0x3D6D11 call    _add_undo_record
//   0x3D6D16 mov     rdi, [rsp+58h+ptr]; ptr
//   0x3D6D1B test    rdi, rdi
//   0x3D6D1E jz      short loc_3D6CC0
//   0x3D6D20 mov     qword ptr [rsp+58h+var_40], 0
//   0x3D6D29 call    _qfree
//   0x3D6D2E jmp     short loc_3D6CC0
//   0x3D6D30 call    ___stack_chk_fail
//   0x3D6D35 mov     rbx, rax
//   0x3D6D38 jmp     loc_2B4994
// ============================================================

void sub_3D6B90(/* signature unknown */)
{
    // see disassembly above
}

