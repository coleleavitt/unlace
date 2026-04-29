// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x133F80
// Name:           sub_133F80
// Function size:  40 bytes (14 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x133F80 push    rbp
//   0x133F81 xor     eax, eax
//   0x133F83 push    rbx
//   0x133F84 mov     rbx, rdi
//   0x133F87 mov     edi, 1Bh
//   0x133F8C sub     rsp, 8
//   0x133F90 mov     rdx, cs:callui_ptr
//   0x133F97 call    qword ptr [rdx]
//   0x133F99 test    al, al
//   0x133F9B jnz     loc_37D4A
//   0x133FA1 add     rsp, 8
//   0x133FA5 pop     rbx
//   0x133FA6 pop     rbp
//   0x133FA7 retn
// ============================================================

void sub_133F80(/* signature unknown */)
{
    // see disassembly above
}

