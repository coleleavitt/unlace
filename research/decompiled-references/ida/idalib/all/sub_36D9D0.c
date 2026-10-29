// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x36D9D0
// Name:           sub_36D9D0
// Function size:  52 bytes (19 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x36D9D0 push    r12; int
//   0x36D9D2 push    rbp; int
//   0x36D9D3 push    rbx; int
//   0x36D9D4 mov     r12, [rdi+28h]
//   0x36D9D8 mov     rbx, rsi
//   0x36D9DB mov     rbp, [rdi+8]
//   0x36D9DF mov     edi, 34h ; '4'
//   0x36D9E4 call    _getinf
//   0x36D9E9 mov     rsi, r12; int
//   0x36D9EC mov     rdi, rbp; int
//   0x36D9EF mov     edx, eax; int
//   0x36D9F1 call    _create_strlit
//   0x36D9F6 movzx   eax, al
//   0x36D9F9 mov     [rbx+8], rax
//   0x36D9FD xor     eax, eax
//   0x36D9FF pop     rbx
//   0x36DA00 pop     rbp
//   0x36DA01 pop     r12
//   0x36DA03 retn
// ============================================================

void sub_36D9D0(/* signature unknown */)
{
    // see disassembly above
}

