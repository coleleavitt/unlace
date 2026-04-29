// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B95B0
// Name:           sub_3B95B0
// Function size:  60 bytes (18 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B95B0 push    r12
//   0x3B95B2 mov     r12, cs:callui_ptr
//   0x3B95B9 push    rbp
//   0x3B95BA push    rbx
//   0x3B95BB mov     rbp, [rdi+370h]
//   0x3B95C2 lea     rbx, [rbp+7A0h]
//   0x3B95C9 add     rbp, 15A0h
//   0x3B95D0 mov     rsi, rbx
//   0x3B95D3 add     rbx, 40h ; '@'
//   0x3B95D7 mov     edi, 7Fh
//   0x3B95DC xor     eax, eax
//   0x3B95DE call    qword ptr [r12]
//   0x3B95E2 cmp     rbx, rbp
//   0x3B95E5 jnz     short loc_3B95D0
//   0x3B95E7 pop     rbx
//   0x3B95E8 pop     rbp
//   0x3B95E9 pop     r12
//   0x3B95EB retn
// ============================================================

void sub_3B95B0(/* signature unknown */)
{
    // see disassembly above
}

