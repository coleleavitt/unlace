// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7350
// Name:            .get_auto_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7350 jmp     cs:off_1D190
//
// Resolved target: get_auto_state
// Target address:  0x1D4D0
// GOT/IAT slot:    0x1D190
// Slot symbol:     off_1D190
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .get_auto_state(/* see target signature */)
{
    // Tail-call to get_auto_state via GOT/IAT indirection
    return get_auto_state(/* forwarded args */);
}

