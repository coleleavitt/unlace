// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x131D80
// Name:           sub_131D80
// Function size:  40 bytes (14 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x131D80 push    rbp
//   0x131D81 xor     eax, eax
//   0x131D83 push    rbx
//   0x131D84 mov     rbx, rdi
//   0x131D87 mov     edi, 1Bh
//   0x131D8C sub     rsp, 8
//   0x131D90 mov     rdx, cs:callui_ptr
//   0x131D97 call    qword ptr [rdx]
//   0x131D99 test    al, al
//   0x131D9B jnz     loc_36D4A
//   0x131DA1 add     rsp, 8
//   0x131DA5 pop     rbx
//   0x131DA6 pop     rbp
//   0x131DA7 retn
// ============================================================

void sub_131D80(/* signature unknown */)
{
    // see disassembly above
}

