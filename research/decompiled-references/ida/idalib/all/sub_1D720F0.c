// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D720F0
// Name:            sub_1D720F0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1D720F0 jmp     sub_1D71CB0
//
// Resolved target: sub_1D71CB0
// Target address:  0x1D71CB0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, __int64, __int64, __int64, __m128, double, __m128i)
// ============================================================

/* see target sig */ sub_1D720F0(/* see target signature */)
{
    // Tail-call to sub_1D71CB0 via direct jump indirection
    return sub_1D71CB0(/* forwarded args */);
}

