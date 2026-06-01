// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA3F0
// Name:            .flock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA3F0 jmp     cs:off_2C7A9E0
//
// Resolved target: flock
// Target address:  0x2D11950
// GOT/IAT slot:    0x2C7A9E0
// Slot symbol:     off_2C7A9E0
// Target type:     int(int fd, int operation)
// ============================================================

/* see target sig */ .flock(/* see target signature */)
{
    // Tail-call to flock via GOT/IAT indirection
    return flock(/* forwarded args */);
}

