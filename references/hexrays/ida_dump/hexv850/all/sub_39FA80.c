// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x39FA80
// Name:           sub_39FA80
// Function size:  32 bytes (8 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x39FA80 sub     rsp, 8
//   0x39FA84 mov     rdx, cs:callui_ptr
//   0x39FA8B xor     eax, eax
//   0x39FA8D mov     rsi, [rdi+550h]
//   0x39FA94 mov     edi, 44Ah
//   0x39FA99 call    qword ptr [rdx]
//   0x39FA9B add     rsp, 8
//   0x39FA9F retn
// ============================================================

void sub_39FA80(/* signature unknown */)
{
    // see disassembly above
}

