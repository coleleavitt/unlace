// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3672C0
// Name:            sub_3672C0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3672C0 jmp     sub_367060
//
// Resolved target: sub_367060
// Target address:  0x367060
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(double, __m128, __m128, __m128, double, double, __m128, __m128)
// ============================================================

/* see target sig */ sub_3672C0(/* see target signature */)
{
    // Tail-call to sub_367060 via direct jump indirection
    return sub_367060(/* forwarded args */);
}

