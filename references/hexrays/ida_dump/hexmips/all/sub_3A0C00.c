// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3A0C00
// Name:           sub_3A0C00
// Function size:  32 bytes (8 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3A0C00 sub     rsp, 8
//   0x3A0C04 mov     rdx, cs:callui_ptr
//   0x3A0C0B xor     eax, eax
//   0x3A0C0D mov     rsi, [rdi+550h]
//   0x3A0C14 mov     edi, 44Ah
//   0x3A0C19 call    qword ptr [rdx]
//   0x3A0C1B add     rsp, 8
//   0x3A0C1F retn
// ============================================================

void sub_3A0C00(/* signature unknown */)
{
    // see disassembly above
}

