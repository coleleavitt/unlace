// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB610
// Name:            .connect
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB610 jmp     cs:off_2C7B2F0
//
// Resolved target: connect
// Target address:  0x2D11BA8
// GOT/IAT slot:    0x2C7B2F0
// Slot symbol:     off_2C7B2F0
// Target type:     int(int fd, const struct sockaddr *addr, socklen_t len)
// ============================================================

/* see target sig */ .connect(/* see target signature */)
{
    // Tail-call to connect via GOT/IAT indirection
    return connect(/* forwarded args */);
}

