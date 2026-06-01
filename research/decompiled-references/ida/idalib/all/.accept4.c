// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB510
// Name:            .accept4
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB510 jmp     cs:off_2C7B270
//
// Resolved target: accept4
// Target address:  0x2D11B70
// GOT/IAT slot:    0x2C7B270
// Slot symbol:     off_2C7B270
// Target type:     int(int fd, struct sockaddr *addr, socklen_t *addr_len, int flags)
// ============================================================

/* see target sig */ .accept4(/* see target signature */)
{
    // Tail-call to accept4 via GOT/IAT indirection
    return accept4(/* forwarded args */);
}

