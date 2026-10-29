// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x5D4A70
// Name:           sub_5D4A70
// Function size:  153 bytes (51 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x5D4A70 push    r14
//   0x5D4A72 push    r13
//   0x5D4A74 mov     r13, rdi
//   0x5D4A77 push    r12
//   0x5D4A79 mov     r12, rsi
//   0x5D4A7C push    rbp
//   0x5D4A7D lea     rbp, [rdi+6A8h]
//   0x5D4A84 push    rbx
//   0x5D4A85 mov     rdi, rbp
//   0x5D4A88 mov     rbx, rdx
//   0x5D4A8B call    sub_505D70
//   0x5D4A90 mov     rsi, r12
//   0x5D4A93 test    rax, rax
//   0x5D4A96 jnz     short loc_5D4AC8
//   0x5D4A98 jmp     short loc_5D4AB1
//   0x5D4A9A align 20h
//   0x5D4AA0 mov     rdx, rbx; int
//   0x5D4AA3 mov     rsi, r14; int
//   0x5D4AA6 mov     rdi, r13; int
//   0x5D4AA9 call    sub_5CE7F0
//   0x5D4AAE mov     rsi, r14
//   0x5D4AB1 mov     rdi, rbp
//   0x5D4AB4 call    sub_503F40
//   0x5D4AB9 mov     rdi, rbp
//   0x5D4ABC mov     esi, eax
//   0x5D4ABE call    sub_505DE0
//   0x5D4AC3 test    rax, rax
//   0x5D4AC6 jz      short loc_5D4B00
//   0x5D4AC8 mov     r14, [rax]
//   0x5D4ACB cmp     r14, rbx
//   0x5D4ACE jnb     short loc_5D4B00
//   0x5D4AD0 cmp     r14, r12
//   0x5D4AD3 jb      short loc_5D4AF0
//   0x5D4AD5 cmp     rbx, [rax+8]
//   0x5D4AD9 jb      short loc_5D4AA0
//   0x5D4ADB mov     rsi, rax
//   0x5D4ADE mov     rdi, r13; int
//   0x5D4AE1 call    sub_5D4820
//   0x5D4AE6 jmp     short loc_5D4AAE
//   0x5D4AE8 align 10h
//   0x5D4AF0 mov     rdx, r12
//   0x5D4AF3 mov     rsi, r14
//   0x5D4AF6 mov     rdi, r13; int
//   0x5D4AF9 call    sub_5CDC30
//   0x5D4AFE jmp     short loc_5D4AAE
//   0x5D4B00 pop     rbx
//   0x5D4B01 pop     rbp
//   0x5D4B02 pop     r12
//   0x5D4B04 pop     r13
//   0x5D4B06 pop     r14
//   0x5D4B08 retn
// ============================================================

void sub_5D4A70(/* signature unknown */)
{
    // see disassembly above
}

