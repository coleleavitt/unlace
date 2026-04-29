// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BBC30
// Name:           sub_3BBC30
// Function size:  60 bytes (18 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BBC30 push    r12
//   0x3BBC32 mov     r12, cs:callui_ptr
//   0x3BBC39 push    rbp
//   0x3BBC3A push    rbx
//   0x3BBC3B mov     rbp, [rdi+370h]
//   0x3BBC42 lea     rbx, [rbp+7A0h]
//   0x3BBC49 add     rbp, 15A0h
//   0x3BBC50 mov     rsi, rbx
//   0x3BBC53 add     rbx, 40h ; '@'
//   0x3BBC57 mov     edi, 7Fh
//   0x3BBC5C xor     eax, eax
//   0x3BBC5E call    qword ptr [r12]
//   0x3BBC62 cmp     rbx, rbp
//   0x3BBC65 jnz     short loc_3BBC50
//   0x3BBC67 pop     rbx
//   0x3BBC68 pop     rbp
//   0x3BBC69 pop     r12
//   0x3BBC6B retn
// ============================================================

void sub_3BBC30(/* signature unknown */)
{
    // see disassembly above
}

