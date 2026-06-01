// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D50E0
// Name:            sub_1D50E0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1D50E0 jmp     sub_1D3DE0
//
// Resolved target: sub_1D3DE0
// Target address:  0x1D3DE0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(double, __m128, __m128, __m128, double, double, __m128, __m128)
// ============================================================

/* see target sig */ sub_1D50E0(/* see target signature */)
{
    // Tail-call to sub_1D3DE0 via direct jump indirection
    return sub_1D3DE0(/* forwarded args */);
}

