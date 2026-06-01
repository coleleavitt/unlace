// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x5FC000
// Name:           sub_5FC000
// Function size:  45 bytes (15 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x5FC000 push    rbx
//   0x5FC001 mov     rbx, rdi
//   0x5FC004 mov     rdi, r9
//   0x5FC007 mov     rsi, rbx
//   0x5FC00A call    sub_5FBF50
//   0x5FC00F mov     edx, eax
//   0x5FC011 xor     eax, eax
//   0x5FC013 test    dl, dl
//   0x5FC015 jnz     short loc_5FC02B
//   0x5FC017 lea     rsi, aBadGraphFormat; "Bad GRAPH_FORMAT value (must be 'GDL' o"...
//   0x5FC01E mov     rdi, rbx
//   0x5FC021 call    sub_747B60
//   0x5FC026 mov     eax, 3
//   0x5FC02B pop     rbx
//   0x5FC02C retn
// ============================================================

void sub_5FC000(/* signature unknown */)
{
    // see disassembly above
}

