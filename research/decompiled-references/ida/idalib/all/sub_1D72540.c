// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D72540
// Name:            sub_1D72540
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1D72540 jmp     sub_1D72100
//
// Resolved target: sub_1D72100
// Target address:  0x1D72100
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, __int64, __int64, __int64, __m128, double, __m128i)
// ============================================================

/* see target sig */ sub_1D72540(/* see target signature */)
{
    // Tail-call to sub_1D72100 via direct jump indirection
    return sub_1D72100(/* forwarded args */);
}

