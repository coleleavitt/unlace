// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3A0860
// Name:           sub_3A0860
// Function size:  32 bytes (8 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3A0860 sub     rsp, 8
//   0x3A0864 mov     rdx, cs:callui_ptr
//   0x3A086B xor     eax, eax
//   0x3A086D mov     rsi, [rdi+550h]
//   0x3A0874 mov     edi, 449h
//   0x3A0879 call    qword ptr [rdx]
//   0x3A087B add     rsp, 8
//   0x3A087F retn
// ============================================================

void sub_3A0860(/* signature unknown */)
{
    // see disassembly above
}

