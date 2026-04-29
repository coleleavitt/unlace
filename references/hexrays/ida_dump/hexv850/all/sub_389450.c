// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x389450
// Name:           sub_389450
// Function size:  43 bytes (14 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x389450 push    rbx
//   0x389451 mov     rsi, [rdi+8]
//   0x389455 mov     rbx, rdi
//   0x389458 test    rsi, rsi
//   0x38945B jz      short loc_389472
//   0x38945D test    byte ptr [rdi], 1
//   0x389460 jz      short loc_389472
//   0x389462 mov     rdx, cs:callui_ptr
//   0x389469 mov     edi, 43h ; 'C'
//   0x38946E xor     eax, eax
//   0x389470 call    qword ptr [rdx]
//   0x389472 mov     rdi, rbx
//   0x389475 pop     rbx
//   0x389476 jmp     sub_3892A0
// ============================================================

void sub_389450(/* signature unknown */)
{
    // see disassembly above
}

