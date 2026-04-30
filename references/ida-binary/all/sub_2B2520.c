// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2B2520
// Name:           sub_2B2520
// Function size:  29 bytes (7 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2B2520 sub     rsp, 8
//   0x2B2524 mov     rdi, [rdi+10h]
//   0x2B2528 add     rdi, 180h
//   0x2B252F call    sub_1EA6C0
//   0x2B2534 movsd   xmm0, qword ptr [rax]
//   0x2B2538 add     rsp, 8
//   0x2B253C retn
// ============================================================

void sub_2B2520(/* signature unknown */)
{
    // see disassembly above
}

