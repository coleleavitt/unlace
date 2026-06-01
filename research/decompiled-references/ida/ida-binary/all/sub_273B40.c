// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x273B40
// Name:           sub_273B40
// Function size:  34 bytes (10 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x273B40 push    rbx
//   0x273B41 mov     edi, 70000000h
//   0x273B46 mov     rbx, rdx
//   0x273B49 call    sub_3CCE40
//   0x273B4E mov     rsi, rbx
//   0x273B51 mov     rdi, rax
//   0x273B54 call    sub_2736F0
//   0x273B59 pop     rbx
//   0x273B5A mov     rdi, rax
//   0x273B5D jmp     sub_277A50
// ============================================================

void sub_273B40(/* signature unknown */)
{
    // see disassembly above
}

