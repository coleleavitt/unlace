// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2C920
// Name:           xref_chooser_t__::vfunc_13
// Function size:  31 bytes (9 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2C920 sub     rsp, 8
//   0x2C924 mov     rcx, cs:callui_ptr
//   0x2C92B mov     rdx, rsi
//   0x2C92E xor     eax, eax
//   0x2C930 mov     rsi, rdi
//   0x2C933 mov     edi, 0A5h
//   0x2C938 call    qword ptr [rcx]
//   0x2C93A add     rsp, 8
//   0x2C93E retn
// ============================================================

void xref_chooser_t__::vfunc_13(/* signature unknown */)
{
    // see disassembly above
}

