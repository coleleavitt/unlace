// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3126D0
// Name:           sub_3126D0
// Function size:  57 bytes (19 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3126D0 mov     rax, cs:_ZN2QT16QCoreApplication4selfE_ptr
//   0x3126D7 push    rbx
//   0x3126D8 mov     rbx, [rax]
//   0x3126DB xor     eax, eax
//   0x3126DD test    rbx, rbx
//   0x3126E0 jz      short loc_3126F3
//   0x3126E2 mov     rdi, rbx
//   0x3126E5 call    sub_47AFB0
//   0x3126EA test    al, al
//   0x3126EC jz      short loc_3126F8
//   0x3126EE mov     eax, 1
//   0x3126F3 pop     rbx
//   0x3126F4 retn
//   0x3126F5 align 8
//   0x3126F8 xor     esi, esi
//   0x3126FA mov     rdi, rbx
//   0x3126FD call    sub_47B170
//   0x312702 mov     eax, 1
//   0x312707 jmp     short loc_3126F3
// ============================================================

void sub_3126D0(/* signature unknown */)
{
    // see disassembly above
}

