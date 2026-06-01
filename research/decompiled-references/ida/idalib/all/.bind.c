// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACE60
// Name:            .bind
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACE60 jmp     cs:off_2C7BF18
//
// Resolved target: bind
// Target address:  0x2D11F08
// GOT/IAT slot:    0x2C7BF18
// Slot symbol:     off_2C7BF18
// Target type:     int(int fd, const struct sockaddr *addr, socklen_t len)
// ============================================================

/* see target sig */ .bind(/* see target signature */)
{
    // Tail-call to bind via GOT/IAT indirection
    return bind(/* forwarded args */);
}

