// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x38F4D0
// Name:           sub_38F4D0
// Function size:  43 bytes (14 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x38F4D0 push    rbx
//   0x38F4D1 mov     rsi, [rdi+8]
//   0x38F4D5 mov     rbx, rdi
//   0x38F4D8 test    rsi, rsi
//   0x38F4DB jz      short loc_38F4F2
//   0x38F4DD test    byte ptr [rdi], 1
//   0x38F4E0 jz      short loc_38F4F2
//   0x38F4E2 mov     rdx, cs:callui_ptr
//   0x38F4E9 mov     edi, 43h ; 'C'
//   0x38F4EE xor     eax, eax
//   0x38F4F0 call    qword ptr [rdx]
//   0x38F4F2 mov     rdi, rbx
//   0x38F4F5 pop     rbx
//   0x38F4F6 jmp     sub_38F320
// ============================================================

void sub_38F4D0(/* signature unknown */)
{
    // see disassembly above
}

