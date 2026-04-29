// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7380
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7380 jmp     cs:off_1D1A8
//
// Resolved target: get_ph
// Target address:  0x1D4F0
// GOT/IAT slot:    0x1D1A8
// Slot symbol:     off_1D1A8
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

