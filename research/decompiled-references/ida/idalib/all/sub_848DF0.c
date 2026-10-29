// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x848DF0
// Name:           sub_848DF0
// Function size:  205 bytes (56 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x848DF0 push    r14; int
//   0x848DF2 push    r13; int
//   0x848DF4 push    r12; int
//   0x848DF6 mov     r12, rdi
//   0x848DF9 push    rbp; int
//   0x848DFA mov     rbp, rsi
//   0x848DFD push    rbx; __int64
//   0x848DFE mov     rbx, rdx
//   0x848E01 sub     rsp, 30h
//   0x848E05 mov     r14, fs:28h
//   0x848E0E mov     qword ptr [rsp+58h+var_30], r14; int
//   0x848E13 mov     r14, rcx
//   0x848E16 call    sub_848CE0
//   0x848E1B mov     r13d, eax
//   0x848E1E test    eax, eax
//   0x848E20 jnz     short loc_848E69
//   0x848E22 cmp     rbp, rbx
//   0x848E25 jz      short loc_848E69
//   0x848E27 lea     rdx, [rbp+r14+0]
//   0x848E2C mov     rsi, rbp
//   0x848E2F mov     rdi, r12
//   0x848E32 mov     qword ptr [rsp+58h+var_58], rbp; int
//   0x848E36 mov     [rsp+58h+var_50], rdx; void *
//   0x848E3B call    sub_844C20
//   0x848E40 test    al, al
//   0x848E42 jz      short loc_848E89
//   0x848E44 mov     rsi, rsp; int
//   0x848E47 mov     rdi, r12; int
//   0x848E4A call    _rangeset_t_sub
//   0x848E4F mov     [rsp+58h+var_48], rbx; __int64
//   0x848E54 lea     rsi, [rsp+58h+var_48]; int
//   0x848E59 add     rbx, r14
//   0x848E5C mov     rdi, r12; int
//   0x848E5F mov     qword ptr [rsp+58h+var_40], rbx; int
//   0x848E64 call    _rangeset_t_add
//   0x848E69 mov     rax, qword ptr [rsp+58h+var_30]
//   0x848E6E sub     rax, fs:28h
//   0x848E77 jnz     short loc_848EB3
//   0x848E79 add     rsp, 30h
//   0x848E7D mov     eax, r13d
//   0x848E80 pop     rbx
//   0x848E81 pop     rbp
//   0x848E82 pop     r12
//   0x848E84 pop     r13
//   0x848E86 pop     r14
//   0x848E88 retn
//   0x848E89 mov     rax, cs:under_debugger_ptr
//   0x848E90 cmp     byte ptr [rax], 0
//   0x848E93 jnz     loc_2E1644
//   0x848E99 mov     rax, qword ptr [rsp+58h+var_30]
//   0x848E9E sub     rax, fs:28h
//   0x848EA7 jnz     short loc_848EB8
//   0x848EA9 mov     edi, 2Ah ; '*'
//   0x848EAE call    _interr
//   0x848EB3 call    ___stack_chk_fail
//   0x848EB8 call    ___stack_chk_fail
// ============================================================

void sub_848DF0(/* signature unknown */)
{
    // see disassembly above
}

