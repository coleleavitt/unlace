// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAD40
// Name:            .fcntl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAD40 jmp     cs:off_2C7AE88
//
// Resolved target: fcntl
// Target address:  0x2D11A48
// GOT/IAT slot:    0x2C7AE88
// Slot symbol:     off_2C7AE88
// Target type:     int(int fd, int cmd, ...)
// ============================================================

/* see target sig */ .fcntl(/* see target signature */)
{
    // Tail-call to fcntl via GOT/IAT indirection
    return fcntl(/* forwarded args */);
}

