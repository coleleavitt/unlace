// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1968D40
// Name:            sub_1968D40
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1968D40 jmp     sub_1968C00
//
// Resolved target: sub_1968C00
// Target address:  0x1968C00
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_1968D40(/* see target signature */)
{
    // Tail-call to sub_1968C00 via direct jump indirection
    return sub_1968C00(/* forwarded args */);
}

