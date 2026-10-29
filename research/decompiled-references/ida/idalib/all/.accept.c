// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC9F0
// Name:            .accept
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC9F0 jmp     cs:off_2C7BCE0
//
// Resolved target: accept
// Target address:  0x2D11E60
// GOT/IAT slot:    0x2C7BCE0
// Slot symbol:     off_2C7BCE0
// Target type:     int(int fd, struct sockaddr *addr, socklen_t *addr_len)
// ============================================================

/* see target sig */ .accept(/* see target signature */)
{
    // Tail-call to accept via GOT/IAT indirection
    return accept(/* forwarded args */);
}

