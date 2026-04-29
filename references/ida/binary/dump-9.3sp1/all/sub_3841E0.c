// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3841E0
// Name:           sub_3841E0
// Function size:  39 bytes (11 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3841E0 sub     rsp, 8
//   0x3841E4 mov     r8, cs:callui_ptr
//   0x3841EB xor     ecx, ecx
//   0x3841ED xor     edx, edx
//   0x3841EF lea     rsi, aHxAddemptyline; "hx:AddEmptyLine"
//   0x3841F6 mov     edi, 64h ; 'd'
//   0x3841FB xor     eax, eax
//   0x3841FD call    qword ptr [r8]
//   0x384200 xor     eax, eax
//   0x384202 add     rsp, 8
//   0x384206 retn
// ============================================================

void sub_3841E0(/* signature unknown */)
{
    // see disassembly above
}

