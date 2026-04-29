// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x39FA60
// Name:           sub_39FA60
// Function size:  32 bytes (8 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x39FA60 sub     rsp, 8
//   0x39FA64 mov     rdx, cs:callui_ptr
//   0x39FA6B xor     eax, eax
//   0x39FA6D mov     rsi, [rdi+550h]
//   0x39FA74 mov     edi, 449h
//   0x39FA79 call    qword ptr [rdx]
//   0x39FA7B add     rsp, 8
//   0x39FA7F retn
// ============================================================

void sub_39FA60(/* signature unknown */)
{
    // see disassembly above
}

