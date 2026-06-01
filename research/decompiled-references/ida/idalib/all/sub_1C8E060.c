// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1C8E060
// Name:            sub_1C8E060
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1C8E060 jmp     sub_1C8DEF0
//
// Resolved target: sub_1C8DEF0
// Target address:  0x1C8DEF0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_1C8E060(/* see target signature */)
{
    // Tail-call to sub_1C8DEF0 via direct jump indirection
    return sub_1C8DEF0(/* forwarded args */);
}

