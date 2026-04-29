// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3C13F0
// Name:           sub_3C13F0
// Function size:  60 bytes (18 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3C13F0 push    r12
//   0x3C13F2 mov     r12, cs:callui_ptr
//   0x3C13F9 push    rbp
//   0x3C13FA push    rbx
//   0x3C13FB mov     rbp, [rdi+370h]
//   0x3C1402 lea     rbx, [rbp+7A0h]
//   0x3C1409 add     rbp, 15A0h
//   0x3C1410 mov     rsi, rbx
//   0x3C1413 add     rbx, 40h ; '@'
//   0x3C1417 mov     edi, 7Fh
//   0x3C141C xor     eax, eax
//   0x3C141E call    qword ptr [r12]
//   0x3C1422 cmp     rbx, rbp
//   0x3C1425 jnz     short loc_3C1410
//   0x3C1427 pop     rbx
//   0x3C1428 pop     rbp
//   0x3C1429 pop     r12
//   0x3C142B retn
// ============================================================

void sub_3C13F0(/* signature unknown */)
{
    // see disassembly above
}

