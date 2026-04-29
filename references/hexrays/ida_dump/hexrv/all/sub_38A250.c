// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x38A250
// Name:           sub_38A250
// Function size:  43 bytes (14 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x38A250 push    rbx
//   0x38A251 mov     rsi, [rdi+8]
//   0x38A255 mov     rbx, rdi
//   0x38A258 test    rsi, rsi
//   0x38A25B jz      short loc_38A272
//   0x38A25D test    byte ptr [rdi], 1
//   0x38A260 jz      short loc_38A272
//   0x38A262 mov     rdx, cs:callui_ptr
//   0x38A269 mov     edi, 43h ; 'C'
//   0x38A26E xor     eax, eax
//   0x38A270 call    qword ptr [rdx]
//   0x38A272 mov     rdi, rbx
//   0x38A275 pop     rbx
//   0x38A276 jmp     sub_38A0A0
// ============================================================

void sub_38A250(/* signature unknown */)
{
    // see disassembly above
}

