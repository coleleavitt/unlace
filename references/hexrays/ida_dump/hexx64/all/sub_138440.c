// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x138440
// Name:           sub_138440
// Function size:  40 bytes (14 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x138440 push    rbp
//   0x138441 xor     eax, eax
//   0x138443 push    rbx
//   0x138444 mov     rbx, rdi
//   0x138447 mov     edi, 1Bh
//   0x13844C sub     rsp, 8
//   0x138450 mov     rdx, cs:callui_ptr
//   0x138457 call    qword ptr [rdx]
//   0x138459 test    al, al
//   0x13845B jnz     loc_38ECA
//   0x138461 add     rsp, 8
//   0x138465 pop     rbx
//   0x138466 pop     rbp
//   0x138467 retn
// ============================================================

void sub_138440(/* signature unknown */)
{
    // see disassembly above
}

