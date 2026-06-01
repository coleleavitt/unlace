// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E0F60
// Name:           sub_1E0F60
// Function size:  45 bytes (12 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E0F60 mov     esi, [rdi+0DCh]
//   0x1E0F66 cmp     esi, 0FFFFFFFFh
//   0x1E0F69 jnz     short loc_1E0F78
//   0x1E0F6B mov     eax, 1
//   0x1E0F70 retn
//   0x1E0F71 align 8
//   0x1E0F78 sub     rsp, 8
//   0x1E0F7C xor     edi, edi
//   0x1E0F7E call    sub_23FC00
//   0x1E0F83 mov     eax, 1
//   0x1E0F88 add     rsp, 8
//   0x1E0F8C retn
// ============================================================

void sub_1E0F60(/* signature unknown */)
{
    // see disassembly above
}

