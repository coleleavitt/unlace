// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x47FA90
// Name:           sub_47FA90
// Function size:  20 bytes (6 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x47FA90 sub     rsp, 8
//   0x47FA94 add     rdi, 18h; int
//   0x47FA98 call    _rangeset_t_add
//   0x47FA9D xor     eax, eax
//   0x47FA9F add     rsp, 8
//   0x47FAA3 retn
// ============================================================

void sub_47FA90(/* signature unknown */)
{
    // see disassembly above
}

