// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x128A10
// Name:           sub_128A10
// Function size:  30 bytes (9 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x128A10 sub     rsp, 8
//   0x128A14 mov     rdx, rsi
//   0x128A17 mov     ecx, [rdi+18h]
//   0x128A1A mov     rsi, [rdi+10h]
//   0x128A1E mov     rdi, [rdi+8]
//   0x128A22 call    sub_127FE0
//   0x128A27 xor     eax, eax
//   0x128A29 add     rsp, 8
//   0x128A2D retn
// ============================================================

void sub_128A10(/* signature unknown */)
{
    // see disassembly above
}

