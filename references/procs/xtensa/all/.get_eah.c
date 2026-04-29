// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x72C0
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x72C0 jmp     cs:off_1D148
//
// Resolved target: get_eah
// Target address:  0x1D478
// GOT/IAT slot:    0x1D148
// Slot symbol:     off_1D148
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

