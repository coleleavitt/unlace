// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x39E200
// Name:           sub_39E200
// Function size:  32 bytes (8 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x39E200 sub     rsp, 8
//   0x39E204 mov     rdx, cs:callui_ptr
//   0x39E20B xor     eax, eax
//   0x39E20D mov     rsi, [rdi+550h]
//   0x39E214 mov     edi, 44Ah
//   0x39E219 call    qword ptr [rdx]
//   0x39E21B add     rsp, 8
//   0x39E21F retn
// ============================================================

void sub_39E200(/* signature unknown */)
{
    // see disassembly above
}

