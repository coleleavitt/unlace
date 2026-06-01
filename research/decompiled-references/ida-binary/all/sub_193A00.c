// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x193A00
// Name:           sub_193A00
// Function size:  71 bytes (20 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x193A00 push    rbx
//   0x193A01 mov     rbx, rdi
//   0x193A04 mov     edi, 400h
//   0x193A09 call    _itext
//   0x193A0E mov     rdi, rax
//   0x193A11 call    sub_280A50
//   0x193A16 mov     rsi, rax
//   0x193A19 mov     eax, 1
//   0x193A1E cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x193A22 jnz     short loc_193A30
//   0x193A24 pop     rbx
//   0x193A25 retn
//   0x193A26 align 10h
//   0x193A30 mov     rdi, rbx
//   0x193A33 mov     ecx, 1
//   0x193A38 mov     edx, 0FFFFFFFFh
//   0x193A3D call    sub_192AA0
//   0x193A42 pop     rbx
//   0x193A43 movzx   eax, al
//   0x193A46 retn
// ============================================================

void sub_193A00(/* signature unknown */)
{
    // see disassembly above
}

