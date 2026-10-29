// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16D960
// Name:            sub_16D960
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x16D960 jmp     sub_16D060
//
// Resolved target: sub_16D060
// Target address:  0x16D060
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(double, double, __m128, __m128, double, double, __m128, __m128, __int64, __int64)
// ============================================================

/* see target sig */ sub_16D960(/* see target signature */)
{
    // Tail-call to sub_16D060 via direct jump indirection
    return sub_16D060(/* forwarded args */);
}

