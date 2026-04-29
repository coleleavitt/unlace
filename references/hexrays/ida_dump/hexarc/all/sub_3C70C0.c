// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3C70C0
// Name:           sub_3C70C0
// Function size:  45 bytes (11 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3C70C0 sub     rsp, 8
//   0x3C70C4 mov     ecx, 7
//   0x3C70C9 mov     rsi, [rdx+38h]
//   0x3C70CD xor     eax, eax
//   0x3C70CF mov     r8, cs:callui_ptr
//   0x3C70D6 mov     edx, 0FFFFFFFFh
//   0x3C70DB mov     edi, 73h ; 's'
//   0x3C70E0 call    qword ptr [r8]
//   0x3C70E3 mov     eax, 1
//   0x3C70E8 add     rsp, 8
//   0x3C70EC retn
// ============================================================

void sub_3C70C0(/* signature unknown */)
{
    // see disassembly above
}

