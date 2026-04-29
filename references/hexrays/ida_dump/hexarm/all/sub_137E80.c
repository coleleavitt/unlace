// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x137E80
// Name:           sub_137E80
// Function size:  40 bytes (14 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x137E80 push    rbp
//   0x137E81 xor     eax, eax
//   0x137E83 push    rbx
//   0x137E84 mov     rbx, rdi
//   0x137E87 mov     edi, 1Bh
//   0x137E8C sub     rsp, 8
//   0x137E90 mov     rdx, cs:callui_ptr
//   0x137E97 call    qword ptr [rdx]
//   0x137E99 test    al, al
//   0x137E9B jnz     loc_3AD8A
//   0x137EA1 add     rsp, 8
//   0x137EA5 pop     rbx
//   0x137EA6 pop     rbp
//   0x137EA7 retn
// ============================================================

void sub_137E80(/* signature unknown */)
{
    // see disassembly above
}

