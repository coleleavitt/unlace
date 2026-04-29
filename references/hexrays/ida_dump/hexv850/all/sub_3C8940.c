// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3C8940
// Name:           sub_3C8940
// Function size:  45 bytes (11 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3C8940 sub     rsp, 8
//   0x3C8944 mov     ecx, 7
//   0x3C8949 mov     rsi, [rdx+38h]
//   0x3C894D xor     eax, eax
//   0x3C894F mov     r8, cs:callui_ptr
//   0x3C8956 mov     edx, 0FFFFFFFFh
//   0x3C895B mov     edi, 73h ; 's'
//   0x3C8960 call    qword ptr [r8]
//   0x3C8963 mov     eax, 1
//   0x3C8968 add     rsp, 8
//   0x3C896C retn
// ============================================================

void sub_3C8940(/* signature unknown */)
{
    // see disassembly above
}

