// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3A1960
// Name:           sub_3A1960
// Function size:  32 bytes (8 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3A1960 sub     rsp, 8
//   0x3A1964 mov     rdx, cs:callui_ptr
//   0x3A196B xor     eax, eax
//   0x3A196D mov     rsi, [rdi+550h]
//   0x3A1974 mov     edi, 449h
//   0x3A1979 call    qword ptr [rdx]
//   0x3A197B add     rsp, 8
//   0x3A197F retn
// ============================================================

void sub_3A1960(/* signature unknown */)
{
    // see disassembly above
}

