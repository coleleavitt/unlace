// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3490
// Name:           sub_3490
// Function size:  75 bytes (26 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3490 push    rbx
//   0x3491 mov     rbx, cs:callui_ptr
//   0x3498 mov     edi, 1Bh
//   0x349D xor     eax, eax
//   0x349F call    qword ptr [rbx]
//   0x34A1 mov     rdx, rax
//   0x34A4 xor     eax, eax
//   0x34A6 test    dl, dl
//   0x34A8 jnz     short loc_34B0
//   0x34AA pop     rbx
//   0x34AB retn
//   0x34AC align 10h
//   0x34B0 xor     edi, edi
//   0x34B2 lea     rsi, aHidecancelDoYo; "HIDECANCEL\nDo you really want to abort"...
//   0x34B9 call    sub_32C0
//   0x34BE test    eax, eax
//   0x34C0 jg      short loc_34D2
//   0x34C2 mov     edi, 19h
//   0x34C7 xor     eax, eax
//   0x34C9 call    qword ptr [rbx]
//   0x34CB mov     eax, 1
//   0x34D0 pop     rbx
//   0x34D1 retn
//   0x34D2 xor     edi, edi
//   0x34D4 xor     eax, eax
//   0x34D6 call    sub_33A0
// ============================================================

void sub_3490(/* signature unknown */)
{
    // see disassembly above
}

