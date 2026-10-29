// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x82F0D0
// Name:           vqperror
// Function size:  40 bytes (9 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x82F0D0 sub     rsp, 8
//   0x82F0D4 call    _qveprintf
//   0x82F0D9 mov     edi, 0FFFFFFFFh
//   0x82F0DE call    _qstrerror
//   0x82F0E3 lea     rdi, aIgnoringFileSS+13h; ": %s\n"
//   0x82F0EA add     rsp, 8
//   0x82F0EE mov     rsi, rax
//   0x82F0F1 xor     eax, eax
//   0x82F0F3 jmp     sub_733E40
// ============================================================

void vqperror(/* signature unknown */)
{
    // see disassembly above
}

