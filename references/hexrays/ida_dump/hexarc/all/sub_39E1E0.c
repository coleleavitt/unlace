// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x39E1E0
// Name:           sub_39E1E0
// Function size:  32 bytes (8 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x39E1E0 sub     rsp, 8
//   0x39E1E4 mov     rdx, cs:callui_ptr
//   0x39E1EB xor     eax, eax
//   0x39E1ED mov     rsi, [rdi+550h]
//   0x39E1F4 mov     edi, 449h
//   0x39E1F9 call    qword ptr [rdx]
//   0x39E1FB add     rsp, 8
//   0x39E1FF retn
// ============================================================

void sub_39E1E0(/* signature unknown */)
{
    // see disassembly above
}

