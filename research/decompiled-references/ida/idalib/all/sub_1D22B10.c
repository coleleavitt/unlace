// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D22B10
// Name:            sub_1D22B10
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1D22B10 jmp     sub_1D22980
//
// Resolved target: sub_1D22980
// Target address:  0x1D22980
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_1D22B10(/* see target signature */)
{
    // Tail-call to sub_1D22980 via direct jump indirection
    return sub_1D22980(/* forwarded args */);
}

