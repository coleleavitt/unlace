// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3C9740
// Name:           sub_3C9740
// Function size:  45 bytes (11 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3C9740 sub     rsp, 8
//   0x3C9744 mov     ecx, 7
//   0x3C9749 mov     rsi, [rdx+38h]
//   0x3C974D xor     eax, eax
//   0x3C974F mov     r8, cs:callui_ptr
//   0x3C9756 mov     edx, 0FFFFFFFFh
//   0x3C975B mov     edi, 73h ; 's'
//   0x3C9760 call    qword ptr [r8]
//   0x3C9763 mov     eax, 1
//   0x3C9768 add     rsp, 8
//   0x3C976C retn
// ============================================================

void sub_3C9740(/* signature unknown */)
{
    // see disassembly above
}

