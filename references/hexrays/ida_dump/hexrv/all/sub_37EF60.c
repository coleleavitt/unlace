// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x37EF60
// Name:           sub_37EF60
// Function size:  39 bytes (11 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x37EF60 sub     rsp, 8
//   0x37EF64 mov     r8, cs:callui_ptr
//   0x37EF6B xor     ecx, ecx
//   0x37EF6D xor     edx, edx
//   0x37EF6F lea     rsi, aHxAddemptyline; "hx:AddEmptyLine"
//   0x37EF76 mov     edi, 64h ; 'd'
//   0x37EF7B xor     eax, eax
//   0x37EF7D call    qword ptr [r8]
//   0x37EF80 xor     eax, eax
//   0x37EF82 add     rsp, 8
//   0x37EF86 retn
// ============================================================

void sub_37EF60(/* signature unknown */)
{
    // see disassembly above
}

