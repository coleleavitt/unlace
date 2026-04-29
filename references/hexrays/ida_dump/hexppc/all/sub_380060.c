// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x380060
// Name:           sub_380060
// Function size:  39 bytes (11 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x380060 sub     rsp, 8
//   0x380064 mov     r8, cs:callui_ptr
//   0x38006B xor     ecx, ecx
//   0x38006D xor     edx, edx
//   0x38006F lea     rsi, aHxAddemptyline; "hx:AddEmptyLine"
//   0x380076 mov     edi, 64h ; 'd'
//   0x38007B xor     eax, eax
//   0x38007D call    qword ptr [r8]
//   0x380080 xor     eax, eax
//   0x380082 add     rsp, 8
//   0x380086 retn
// ============================================================

void sub_380060(/* signature unknown */)
{
    // see disassembly above
}

