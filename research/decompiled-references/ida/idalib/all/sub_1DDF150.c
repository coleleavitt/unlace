// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DDF150
// Name:            sub_1DDF150
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1DDF150 jmp     sub_1DDEF90
//
// Resolved target: sub_1DDEF90
// Target address:  0x1DDEF90
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, unsigned __int64, unsigned __int64, __int64, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_1DDF150(/* see target signature */)
{
    // Tail-call to sub_1DDEF90 via direct jump indirection
    return sub_1DDEF90(/* forwarded args */);
}

