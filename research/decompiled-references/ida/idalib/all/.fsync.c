// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9750
// Name:            .fsync
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9750 jmp     cs:off_2C7A390
//
// Resolved target: fsync
// Target address:  0x2D117D0
// GOT/IAT slot:    0x2C7A390
// Slot symbol:     off_2C7A390
// Target type:     int(int fd)
// ============================================================

/* see target sig */ .fsync(/* see target signature */)
{
    // Tail-call to fsync via GOT/IAT indirection
    return fsync(/* forwarded args */);
}

