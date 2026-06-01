// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3691E0
// Name:           sub_3691E0
// Function size:  20 bytes (8 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3691E0 push    rbx
//   0x3691E1 mov     rbx, rsi
//   0x3691E4 call    _perform_undo
//   0x3691E9 movzx   eax, al
//   0x3691EC mov     [rbx+8], rax
//   0x3691F0 xor     eax, eax
//   0x3691F2 pop     rbx
//   0x3691F3 retn
// ============================================================

void sub_3691E0(/* signature unknown */)
{
    // see disassembly above
}

