// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x387BD0
// Name:           sub_387BD0
// Function size:  43 bytes (14 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x387BD0 push    rbx
//   0x387BD1 mov     rsi, [rdi+8]
//   0x387BD5 mov     rbx, rdi
//   0x387BD8 test    rsi, rsi
//   0x387BDB jz      short loc_387BF2
//   0x387BDD test    byte ptr [rdi], 1
//   0x387BE0 jz      short loc_387BF2
//   0x387BE2 mov     rdx, cs:callui_ptr
//   0x387BE9 mov     edi, 43h ; 'C'
//   0x387BEE xor     eax, eax
//   0x387BF0 call    qword ptr [rdx]
//   0x387BF2 mov     rdi, rbx
//   0x387BF5 pop     rbx
//   0x387BF6 jmp     sub_387A20
// ============================================================

void sub_387BD0(/* signature unknown */)
{
    // see disassembly above
}

