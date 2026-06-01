// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D54E90
// Name:            sub_1D54E90
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1D54E90 jmp     sub_1D54D00
//
// Resolved target: sub_1D54D00
// Target address:  0x1D54D00
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_1D54E90(/* see target signature */)
{
    // Tail-call to sub_1D54D00 via direct jump indirection
    return sub_1D54D00(/* forwarded args */);
}

