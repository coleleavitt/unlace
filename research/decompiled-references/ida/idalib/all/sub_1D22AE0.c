// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D22AE0
// Name:            sub_1D22AE0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1D22AE0 jmp     sub_1D22980
//
// Resolved target: sub_1D22980
// Target address:  0x1D22980
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_1D22AE0(/* see target signature */)
{
    // Tail-call to sub_1D22980 via direct jump indirection
    return sub_1D22980(/* forwarded args */);
}

