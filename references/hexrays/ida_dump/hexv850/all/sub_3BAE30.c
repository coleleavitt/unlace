// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BAE30
// Name:           sub_3BAE30
// Function size:  60 bytes (18 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BAE30 push    r12
//   0x3BAE32 mov     r12, cs:callui_ptr
//   0x3BAE39 push    rbp
//   0x3BAE3A push    rbx
//   0x3BAE3B mov     rbp, [rdi+370h]
//   0x3BAE42 lea     rbx, [rbp+7A0h]
//   0x3BAE49 add     rbp, 15A0h
//   0x3BAE50 mov     rsi, rbx
//   0x3BAE53 add     rbx, 40h ; '@'
//   0x3BAE57 mov     edi, 7Fh
//   0x3BAE5C xor     eax, eax
//   0x3BAE5E call    qword ptr [r12]
//   0x3BAE62 cmp     rbx, rbp
//   0x3BAE65 jnz     short loc_3BAE50
//   0x3BAE67 pop     rbx
//   0x3BAE68 pop     rbp
//   0x3BAE69 pop     r12
//   0x3BAE6B retn
// ============================================================

void sub_3BAE30(/* signature unknown */)
{
    // see disassembly above
}

