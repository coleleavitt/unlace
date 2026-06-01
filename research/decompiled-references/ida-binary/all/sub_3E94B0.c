// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3E94B0
// Name:           sub_3E94B0
// Function size:  21 bytes (6 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3E94B0 sub     rsp, 8
//   0x3E94B4 xor     edi, edi
//   0x3E94B6 call    sub_3E9290
//   0x3E94BB mov     eax, 1
//   0x3E94C0 add     rsp, 8
//   0x3E94C4 retn
// ============================================================

void sub_3E94B0(/* signature unknown */)
{
    // see disassembly above
}

