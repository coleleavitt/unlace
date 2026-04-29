// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x133880
// Name:           sub_133880
// Function size:  40 bytes (14 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x133880 push    rbp
//   0x133881 xor     eax, eax
//   0x133883 push    rbx
//   0x133884 mov     rbx, rdi
//   0x133887 mov     edi, 1Bh
//   0x13388C sub     rsp, 8
//   0x133890 mov     rdx, cs:callui_ptr
//   0x133897 call    qword ptr [rdx]
//   0x133899 test    al, al
//   0x13389B jnz     loc_37D4A
//   0x1338A1 add     rsp, 8
//   0x1338A5 pop     rbx
//   0x1338A6 pop     rbp
//   0x1338A7 retn
// ============================================================

void sub_133880(/* signature unknown */)
{
    // see disassembly above
}

