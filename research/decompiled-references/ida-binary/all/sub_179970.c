// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x179970
// Name:           sub_179970
// Function size:  46 bytes (12 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x179970 mov     rdi, [rdi+0E8h]; int
//   0x179977 test    rdi, rdi
//   0x17997A jz      short loc_179998
//   0x17997C sub     rsp, 8
//   0x179980 xor     esi, esi; int
//   0x179982 call    sub_1FC580
//   0x179987 mov     eax, 1
//   0x17998C add     rsp, 8
//   0x179990 retn
//   0x179991 align 8
//   0x179998 mov     eax, 1
//   0x17999D retn
// ============================================================

void sub_179970(/* signature unknown */)
{
    // see disassembly above
}

