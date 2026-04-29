// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x134A00
// Name:           sub_134A00
// Function size:  40 bytes (14 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x134A00 push    rbp
//   0x134A01 xor     eax, eax
//   0x134A03 push    rbx
//   0x134A04 mov     rbx, rdi
//   0x134A07 mov     edi, 1Bh
//   0x134A0C sub     rsp, 8
//   0x134A10 mov     rdx, cs:callui_ptr
//   0x134A17 call    qword ptr [rdx]
//   0x134A19 test    al, al
//   0x134A1B jnz     loc_37D4A
//   0x134A21 add     rsp, 8
//   0x134A25 pop     rbx
//   0x134A26 pop     rbp
//   0x134A27 retn
// ============================================================

void sub_134A00(/* signature unknown */)
{
    // see disassembly above
}

