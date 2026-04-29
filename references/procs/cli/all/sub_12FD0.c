// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x12FD0
// Name:            sub_12FD0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x12FD0 jmp     sub_12ED0
//
// Resolved target: sub_12ED0
// Target address:  0x12ED0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, double, double, __m128, double, double, double, double, double)
// ============================================================

/* see target sig */ sub_12FD0(/* see target signature */)
{
    // Tail-call to sub_12ED0 via direct jump indirection
    return sub_12ED0(/* forwarded args */);
}

