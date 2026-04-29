// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3CA840
// Name:           sub_3CA840
// Function size:  45 bytes (11 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3CA840 sub     rsp, 8
//   0x3CA844 mov     ecx, 7
//   0x3CA849 mov     rsi, [rdx+38h]
//   0x3CA84D xor     eax, eax
//   0x3CA84F mov     r8, cs:callui_ptr
//   0x3CA856 mov     edx, 0FFFFFFFFh
//   0x3CA85B mov     edi, 73h ; 's'
//   0x3CA860 call    qword ptr [r8]
//   0x3CA863 mov     eax, 1
//   0x3CA868 add     rsp, 8
//   0x3CA86C retn
// ============================================================

void sub_3CA840(/* signature unknown */)
{
    // see disassembly above
}

