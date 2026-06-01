// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x31B960
// Name:           sub_31B960
// Function size:  52 bytes (16 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x31B960 push    rbx
//   0x31B961 call    sub_381290
//   0x31B966 test    rax, rax
//   0x31B969 jz      short loc_31B98D
//   0x31B96B mov     rbx, rax
//   0x31B96E mov     rdi, rax
//   0x31B971 call    _plan_to_apply_idasgn
//   0x31B976 mov     edi, 3E6h
//   0x31B97B mov     rsi, rbx
//   0x31B97E xor     eax, eax
//   0x31B980 call    sub_300630
//   0x31B985 mov     rdi, rbx
//   0x31B988 call    _qfree
//   0x31B98D mov     eax, 1
//   0x31B992 pop     rbx
//   0x31B993 retn
// ============================================================

void sub_31B960(/* signature unknown */)
{
    // see disassembly above
}

