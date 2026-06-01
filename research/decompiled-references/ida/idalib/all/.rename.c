// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD860
// Name:            .rename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD860 jmp     cs:off_2C7C418
//
// Resolved target: rename
// Target address:  0x2D12048
// GOT/IAT slot:    0x2C7C418
// Slot symbol:     off_2C7C418
// Target type:     int(const char *old, const char *new)
// ============================================================

/* see target sig */ .rename(/* see target signature */)
{
    // Tail-call to rename via GOT/IAT indirection
    return rename(/* forwarded args */);
}

