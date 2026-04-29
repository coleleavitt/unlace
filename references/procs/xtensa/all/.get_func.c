// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x71D0
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x71D0 jmp     cs:off_1D0D0
//
// Resolved target: get_func
// Target address:  0x1D400
// GOT/IAT slot:    0x1D0D0
// Slot symbol:     off_1D0D0
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}

