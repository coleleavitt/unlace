// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x384720
// Name:           sub_384720
// Function size:  39 bytes (11 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x384720 sub     rsp, 8
//   0x384724 mov     r8, cs:callui_ptr
//   0x38472B xor     ecx, ecx
//   0x38472D xor     edx, edx
//   0x38472F lea     rsi, aHxAddemptyline; "hx:AddEmptyLine"
//   0x384736 mov     edi, 64h ; 'd'
//   0x38473B xor     eax, eax
//   0x38473D call    qword ptr [r8]
//   0x384740 xor     eax, eax
//   0x384742 add     rsp, 8
//   0x384746 retn
// ============================================================

void sub_384720(/* signature unknown */)
{
    // see disassembly above
}

