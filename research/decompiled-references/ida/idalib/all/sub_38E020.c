// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: stack frame is too big
// Address:        0x38E020
// Name:           sub_38E020
// Function size:  331 bytes (82 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x38E020 push    r13
//   0x38E022 push    r12
//   0x38E024 push    rbp
//   0x38E025 push    rbx
//   0x38E026 sub     rsp, 2000D8h
//   0x38E02D mov     rax, fs:28h
//   0x38E036 mov     [rsp+2000F8h+var_30], rax
//   0x38E03E xor     eax, eax
//   0x38E040 lea     rdi, [rsp+2000F8h+var_200038]
//   0x38E048 mov     [rsp+2000F8h+var_200038], 0
//   0x38E050 mov     r12, rsp
//   0x38E053 call    _idadir
//   0x38E058 mov     esi, 40h ; '@'; nbytes
//   0x38E05D mov     rdi, rsp; buf
//   0x38E060 call    _gen_rand_buf
//   0x38E065 test    al, al
//   0x38E067 jz      loc_38E138
//   0x38E06D mov     edi, [rsp+2000F8h+seed]; seed
//   0x38E070 call    _srand
//   0x38E075 mov     rax, cs:under_debugger_ptr
//   0x38E07C xor     ebx, ebx
//   0x38E07E lea     rbp, [rsp+2000F8h+var_2000B8]
//   0x38E083 cmp     byte ptr [rax], 0
//   0x38E086 jnz     loc_38E110
//   0x38E08C nop     dword ptr [rax+00h]
//   0x38E090 mov     edi, [r12+rbx*4]
//   0x38E094 and     edi, 0FFFh
//   0x38E09A call    _qalloc
//   0x38E09F mov     [rbp+rbx*8+0], rax
//   0x38E0A4 add     rbx, 1
//   0x38E0A8 cmp     rbx, 10h
//   0x38E0AC jnz     short loc_38E090
//   0x38E0AE mov     r13d, [rsp+2000F8h+seed]
//   0x38E0B2 and     r13d, 7
//   0x38E0B6 jz      short loc_38E110
//   0x38E0B8 mov     ebx, 1
//   0x38E0BD jmp     short loc_38E0CF
//   0x38E0BF align 20h
//   0x38E0C0 cmp     rbx, 10h
//   0x38E0C4 setz    al
//   0x38E0C7 add     rbx, 1
//   0x38E0CB or      al, dl
//   0x38E0CD jnz     short loc_38E110
//   0x38E0CF xor     edx, edx
//   0x38E0D1 test    byte ptr [r12+rbx*4-4], 1
//   0x38E0D7 jnz     short loc_38E0C0
//   0x38E0D9 mov     rdi, [rbp+rbx*8-8]; ptr
//   0x38E0DE call    _qfree
//   0x38E0E3 sub     r13d, 1
//   0x38E0E7 mov     qword ptr [rbp+rbx*8-8], 0
//   0x38E0F0 setz    dl
//   0x38E0F3 cmp     rbx, 10h
//   0x38E0F7 setz    al
//   0x38E0FA add     rbx, 1
//   0x38E0FE or      al, dl
//   0x38E100 jz      short loc_38E0CF
//   0x38E102 nop     word ptr [rax+rax+00000000h]
//   0x38E10D nop     dword ptr [rax]
//   0x38E110 mov     rax, [rsp+2000F8h+var_30]
//   0x38E118 sub     rax, fs:28h
//   0x38E121 jnz     short loc_38E166
//   0x38E123 add     rsp, 2000D8h
//   0x38E12A pop     rbx
//   0x38E12B pop     rbp
//   0x38E12C pop     r12
//   0x38E12E pop     r13
//   0x38E130 retn
//   0x38E131 align 8
//   0x38E138 xor     edi, edi; timer
//   0x38E13A mov     rbx, rsp
//   0x38E13D lea     rbp, [rsp+2000F8h+var_2000B8]
//   0x38E142 call    _time
//   0x38E147 mov     edi, eax; seed
//   0x38E149 call    _srand
//   0x38E14E xchg    ax, ax
//   0x38E150 call    _rand
//   0x38E155 add     rbx, 4
//   0x38E159 mov     [rbx-4], eax
//   0x38E15C cmp     rbx, rbp
//   0x38E15F jnz     short loc_38E150
//   0x38E161 jmp     loc_38E075
//   0x38E166 call    ___stack_chk_fail
// ============================================================

void sub_38E020(/* signature unknown */)
{
    // see disassembly above
}

