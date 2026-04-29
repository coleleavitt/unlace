// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x134240
// Name:           sub_134240
// Function size:  40 bytes (14 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x134240 push    rbp
//   0x134241 xor     eax, eax
//   0x134243 push    rbx
//   0x134244 mov     rbx, rdi
//   0x134247 mov     edi, 1Bh
//   0x13424C sub     rsp, 8
//   0x134250 mov     rdx, cs:callui_ptr
//   0x134257 call    qword ptr [rdx]
//   0x134259 test    al, al
//   0x13425B jnz     loc_37D4A
//   0x134261 add     rsp, 8
//   0x134265 pop     rbx
//   0x134266 pop     rbp
//   0x134267 retn
// ============================================================

void sub_134240(/* signature unknown */)
{
    // see disassembly above
}

