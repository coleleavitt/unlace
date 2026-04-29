// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x37C8E0
// Name:           sub_37C8E0
// Function size:  39 bytes (11 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x37C8E0 sub     rsp, 8
//   0x37C8E4 mov     r8, cs:callui_ptr
//   0x37C8EB xor     ecx, ecx
//   0x37C8ED xor     edx, edx
//   0x37C8EF lea     rsi, aHxAddemptyline; "hx:AddEmptyLine"
//   0x37C8F6 mov     edi, 64h ; 'd'
//   0x37C8FB xor     eax, eax
//   0x37C8FD call    qword ptr [r8]
//   0x37C900 xor     eax, eax
//   0x37C902 add     rsp, 8
//   0x37C906 retn
// ============================================================

void sub_37C8E0(/* signature unknown */)
{
    // see disassembly above
}

