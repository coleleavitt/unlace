// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x47B8C0
// Name:           sub_47B8C0
// Function size:  26 bytes (9 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x47B8C0 sub     rsp, 8
//   0x47B8C4 mov     ecx, [rcx]
//   0x47B8C6 mov     esi, [rsi]
//   0x47B8C8 mov     rdi, [rdi]
//   0x47B8CB mov     r8d, [r8]
//   0x47B8CE call    sub_47B4A0
//   0x47B8D3 xor     eax, eax
//   0x47B8D5 add     rsp, 8
//   0x47B8D9 retn
// ============================================================

void sub_47B8C0(/* signature unknown */)
{
    // see disassembly above
}

