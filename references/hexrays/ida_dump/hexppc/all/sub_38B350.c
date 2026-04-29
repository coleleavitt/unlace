// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x38B350
// Name:           sub_38B350
// Function size:  43 bytes (14 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x38B350 push    rbx
//   0x38B351 mov     rsi, [rdi+8]
//   0x38B355 mov     rbx, rdi
//   0x38B358 test    rsi, rsi
//   0x38B35B jz      short loc_38B372
//   0x38B35D test    byte ptr [rdi], 1
//   0x38B360 jz      short loc_38B372
//   0x38B362 mov     rdx, cs:callui_ptr
//   0x38B369 mov     edi, 43h ; 'C'
//   0x38B36E xor     eax, eax
//   0x38B370 call    qword ptr [rdx]
//   0x38B372 mov     rdi, rbx
//   0x38B375 pop     rbx
//   0x38B376 jmp     sub_38B1A0
// ============================================================

void sub_38B350(/* signature unknown */)
{
    // see disassembly above
}

