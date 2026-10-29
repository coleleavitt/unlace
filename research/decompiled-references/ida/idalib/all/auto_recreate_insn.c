// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3A6D00
// Name:           auto_recreate_insn
// Function size:  381 bytes (90 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3A6D00 push    r12; int
//   0x3A6D02 mov     edx, 76h ; 'v'
//   0x3A6D07 push    rbp; int
//   0x3A6D08 push    rbx; int
//   0x3A6D09 sub     rsp, 10h
//   0x3A6D0D lea     rax, qword_2CCB598
//   0x3A6D14 mov     rbx, fs:28h
//   0x3A6D1D mov     qword ptr [rsp+28h+var_20], rbx; int
//   0x3A6D22 mov     rbx, rdi
//   0x3A6D25 lea     r12, [rsp+28h+var_24]
//   0x3A6D2A mov     [rsp+28h+var_24], 14h
//   0x3A6D32 mov     rax, [rax]
//   0x3A6D35 mov     rsi, r12
//   0x3A6D38 mov     rbp, [rax+688h]
//   0x3A6D3F mov     rax, [rbp+0]
//   0x3A6D43 mov     rdi, [rax+600h]
//   0x3A6D4A add     rdi, 90h
//   0x3A6D51 call    sub_3A2DF0
//   0x3A6D56 mov     edx, 4
//   0x3A6D5B mov     rsi, rbx
//   0x3A6D5E mov     rdi, rbp
//   0x3A6D61 call    sub_3BE900
//   0x3A6D66 not     rax
//   0x3A6D69 test    ah, 6
//   0x3A6D6C jz      loc_3A6E28
//   0x3A6D72 mov     edx, 28h ; '('
//   0x3A6D77 lea     rsi, [rbx+1]
//   0x3A6D7B mov     rdi, rbx
//   0x3A6D7E call    _auto_mark_range
//   0x3A6D83 mov     rsi, rbx
//   0x3A6D86 mov     edi, 0Dh
//   0x3A6D8B call    _forget_problem
//   0x3A6D90 mov     rsi, rbx
//   0x3A6D93 mov     rdi, rbp
//   0x3A6D96 call    sub_5CAA10
//   0x3A6D9B mov     rsi, rax
//   0x3A6D9E test    rax, rax
//   0x3A6DA1 jz      short loc_3A6DAC
//   0x3A6DA3 mov     rax, [rax+10h]
//   0x3A6DA7 test    ah, 4
//   0x3A6DAA jnz     short loc_3A6E10
//   0x3A6DAC xor     edx, edx
//   0x3A6DAE mov     rsi, rbx; int
//   0x3A6DB1 mov     rdi, rbp; int
//   0x3A6DB4 call    sub_577F80
//   0x3A6DB9 mov     ebx, eax
//   0x3A6DBB mov     rax, [rbp+0]
//   0x3A6DBF mov     rdi, [rax+600h]
//   0x3A6DC6 cmp     dword ptr [rdi+90h], 28h ; '('
//   0x3A6DCD jz      loc_3A6E60
//   0x3A6DD3 add     rdi, 90h
//   0x3A6DDA mov     edx, 76h ; 'v'
//   0x3A6DDF mov     rsi, r12
//   0x3A6DE2 mov     [rsp+28h+var_24], 0
//   0x3A6DEA call    sub_3A2DF0
//   0x3A6DEF mov     rax, qword ptr [rsp+28h+var_20]
//   0x3A6DF4 sub     rax, fs:28h
//   0x3A6DFD jnz     short loc_3A6E78
//   0x3A6DFF add     rsp, 10h
//   0x3A6E03 mov     eax, ebx
//   0x3A6E05 pop     rbx
//   0x3A6E06 pop     rbp
//   0x3A6E07 pop     r12
//   0x3A6E09 retn
//   0x3A6E0A align 10h
//   0x3A6E10 and     ah, 0FBh
//   0x3A6E13 xor     edx, edx
//   0x3A6E15 mov     rdi, rbp
//   0x3A6E18 mov     [rsi+10h], rax
//   0x3A6E1C call    sub_5C77B0
//   0x3A6E21 jmp     short loc_3A6DAC
//   0x3A6E23 align 8
//   0x3A6E28 mov     rax, [rbp+0]
//   0x3A6E2C mov     rsi, r12
//   0x3A6E2F mov     edx, 76h ; 'v'
//   0x3A6E34 mov     [rsp+28h+var_24], 28h ; '('
//   0x3A6E3C mov     rdi, [rax+600h]
//   0x3A6E43 add     rdi, 90h
//   0x3A6E4A call    sub_3A2DF0
//   0x3A6E4F mov     rsi, rbx
//   0x3A6E52 mov     rdi, rbp
//   0x3A6E55 call    sub_3E6800
//   0x3A6E5A jmp     loc_3A6D72
//   0x3A6E5F align 20h
//   0x3A6E60 mov     rdi, rbp
//   0x3A6E63 call    sub_3E3B60
//   0x3A6E68 mov     rax, [rbp+0]
//   0x3A6E6C mov     rdi, [rax+600h]
//   0x3A6E73 jmp     loc_3A6DD3
//   0x3A6E78 call    ___stack_chk_fail
// ============================================================

void auto_recreate_insn(/* signature unknown */)
{
    // see disassembly above
}

