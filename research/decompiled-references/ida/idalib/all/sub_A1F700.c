// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xA1F700
// Name:           sub_A1F700
// Function size:  34 bytes (12 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xA1F700 push    rbx
//   0xA1F701 mov     rbx, rdi
//   0xA1F704 mov     rax, [rdi+10h]
//   0xA1F708 cmp     [rdi+20h], rax
//   0xA1F70C jz      short loc_A1F713
//   0xA1F70E call    sub_227B9F0
//   0xA1F713 mov     rdi, rbx
//   0xA1F716 xor     ecx, ecx
//   0xA1F718 xor     edx, edx
//   0xA1F71A xor     esi, esi
//   0xA1F71C pop     rbx
//   0xA1F71D jmp     sub_227B8B0
// ============================================================

void sub_A1F700(/* signature unknown */)
{
    // see disassembly above
}

