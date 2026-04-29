// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BBFB0
// Name:           sub_3BBFB0
// Function size:  60 bytes (18 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BBFB0 push    r12
//   0x3BBFB2 mov     r12, cs:callui_ptr
//   0x3BBFB9 push    rbp
//   0x3BBFBA push    rbx
//   0x3BBFBB mov     rbp, [rdi+370h]
//   0x3BBFC2 lea     rbx, [rbp+7A0h]
//   0x3BBFC9 add     rbp, 15A0h
//   0x3BBFD0 mov     rsi, rbx
//   0x3BBFD3 add     rbx, 40h ; '@'
//   0x3BBFD7 mov     edi, 7Fh
//   0x3BBFDC xor     eax, eax
//   0x3BBFDE call    qword ptr [r12]
//   0x3BBFE2 cmp     rbx, rbp
//   0x3BBFE5 jnz     short loc_3BBFD0
//   0x3BBFE7 pop     rbx
//   0x3BBFE8 pop     rbp
//   0x3BBFE9 pop     r12
//   0x3BBFEB retn
// ============================================================

void sub_3BBFB0(/* signature unknown */)
{
    // see disassembly above
}

