// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BCD30
// Name:           sub_3BCD30
// Function size:  60 bytes (18 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BCD30 push    r12
//   0x3BCD32 mov     r12, cs:callui_ptr
//   0x3BCD39 push    rbp
//   0x3BCD3A push    rbx
//   0x3BCD3B mov     rbp, [rdi+370h]
//   0x3BCD42 lea     rbx, [rbp+7A0h]
//   0x3BCD49 add     rbp, 15A0h
//   0x3BCD50 mov     rsi, rbx
//   0x3BCD53 add     rbx, 40h ; '@'
//   0x3BCD57 mov     edi, 7Fh
//   0x3BCD5C xor     eax, eax
//   0x3BCD5E call    qword ptr [r12]
//   0x3BCD62 cmp     rbx, rbp
//   0x3BCD65 jnz     short loc_3BCD50
//   0x3BCD67 pop     rbx
//   0x3BCD68 pop     rbp
//   0x3BCD69 pop     r12
//   0x3BCD6B retn
// ============================================================

void sub_3BCD30(/* signature unknown */)
{
    // see disassembly above
}

