// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9E30
// Name:            .tiplace_t__id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9E30 jmp     cs:off_2C7A700
//
// Resolved target: tiplace_t__id
// Target address:  0x55BFF0
// GOT/IAT slot:    0x2C7A700
// Slot symbol:     off_2C7A700
// Target type:     __int64 __fastcall(int, double)
// ============================================================

/* see target sig */ .tiplace_t__id(/* see target signature */)
{
    // Tail-call to tiplace_t__id via GOT/IAT indirection
    return tiplace_t__id(/* forwarded args */);
}

