// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x38FA10
// Name:           sub_38FA10
// Function size:  43 bytes (14 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x38FA10 push    rbx
//   0x38FA11 mov     rsi, [rdi+8]
//   0x38FA15 mov     rbx, rdi
//   0x38FA18 test    rsi, rsi
//   0x38FA1B jz      short loc_38FA32
//   0x38FA1D test    byte ptr [rdi], 1
//   0x38FA20 jz      short loc_38FA32
//   0x38FA22 mov     rdx, cs:callui_ptr
//   0x38FA29 mov     edi, 43h ; 'C'
//   0x38FA2E xor     eax, eax
//   0x38FA30 call    qword ptr [rdx]
//   0x38FA32 mov     rdi, rbx
//   0x38FA35 pop     rbx
//   0x38FA36 jmp     sub_38F860
// ============================================================

void sub_38FA10(/* signature unknown */)
{
    // see disassembly above
}

