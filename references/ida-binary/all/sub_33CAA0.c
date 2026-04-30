// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x33CAA0
// Name:           names_desktop_widget_factory_t__::vfunc_3
// Function size:  40 bytes (8 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x33CAA0 sub     rsp, 8
//   0x33CAA4 lea     rdi, aNames+1; "Names"
//   0x33CAAB mov     esi, 2
//   0x33CAB0 mov     rdx, 0FFFFFFFFFFFFFFFFh
//   0x33CAB7 call    sub_33E280
//   0x33CABC add     rsp, 8
//   0x33CAC0 mov     rdi, rax
//   0x33CAC3 jmp     sub_2DBE50
// ============================================================

void names_desktop_widget_factory_t__::vfunc_3(/* signature unknown */)
{
    // see disassembly above
}

