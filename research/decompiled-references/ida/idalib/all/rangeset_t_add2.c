// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x8473C0
// Name:           rangeset_t_add2
// Function size:  105 bytes (38 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x8473C0 push    r13; int
//   0x8473C2 push    r12; int
//   0x8473C4 push    rbp; __int64
//   0x8473C5 push    rbx; void *
//   0x8473C6 sub     rsp, 8
//   0x8473CA mov     rax, [rsi+8]
//   0x8473CE mov     rbx, [rsi]
//   0x8473D1 shl     rax, 4
//   0x8473D5 jz      short loc_847418
//   0x8473D7 mov     r12, rdi
//   0x8473DA mov     rbp, rsi
//   0x8473DD xor     r13d, r13d
//   0x8473E0 mov     rsi, rbx; int
//   0x8473E3 mov     rdi, r12; int
//   0x8473E6 add     rbx, 10h
//   0x8473EA call    _rangeset_t_add
//   0x8473EF or      r13d, eax
//   0x8473F2 mov     rax, [rbp+8]
//   0x8473F6 shl     rax, 4
//   0x8473FA add     rax, [rbp+0]
//   0x8473FE cmp     rbx, rax
//   0x847401 jnz     short loc_8473E0
//   0x847403 add     rsp, 8
//   0x847407 mov     eax, r13d
//   0x84740A pop     rbx
//   0x84740B pop     rbp
//   0x84740C pop     r12
//   0x84740E pop     r13
//   0x847410 retn
//   0x847411 align 8
//   0x847418 add     rsp, 8
//   0x84741C xor     r13d, r13d
//   0x84741F pop     rbx
//   0x847420 mov     eax, r13d
//   0x847423 pop     rbp
//   0x847424 pop     r12
//   0x847426 pop     r13
//   0x847428 retn
// ============================================================

void rangeset_t_add2(/* signature unknown */)
{
    // see disassembly above
}

