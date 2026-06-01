// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3A5AE0
// Name:           sub_3A5AE0
// Function size:  32 bytes (8 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3A5AE0 sub     rsp, 8
//   0x3A5AE4 mov     rdx, cs:callui_ptr
//   0x3A5AEB xor     eax, eax
//   0x3A5AED mov     rsi, [rdi+550h]
//   0x3A5AF4 mov     edi, 449h
//   0x3A5AF9 call    qword ptr [rdx]
//   0x3A5AFB add     rsp, 8
//   0x3A5AFF retn
// ============================================================

void sub_3A5AE0(/* signature unknown */)
{
    // see disassembly above
}

