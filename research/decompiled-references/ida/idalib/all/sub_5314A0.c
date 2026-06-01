// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x5314A0
// Name:           sub_5314A0
// Function size:  47 bytes (14 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x5314A0 mov     rax, rdi
//   0x5314A3 sub     rsp, 10h
//   0x5314A7 mov     rdi, rsi
//   0x5314AA mov     rax, [rax]
//   0x5314AD mov     rdi, [rdi]; int
//   0x5314B0 mov     r9d, [rax+28h]
//   0x5314B4 mov     r8, [rax+18h]
//   0x5314B8 mov     rcx, [rax+10h]
//   0x5314BC mov     edx, [rax+8]
//   0x5314BF mov     rsi, [rax]; int
//   0x5314C2 push    qword ptr [rax+20h]; __int64
//   0x5314C5 call    sub_6C6170
//   0x5314CA add     rsp, 18h
//   0x5314CE retn
// ============================================================

void sub_5314A0(/* signature unknown */)
{
    // see disassembly above
}

