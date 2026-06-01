// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9350
// Name:            .getsockopt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9350 jmp     cs:off_2C7A190
//
// Resolved target: getsockopt
// Target address:  0x2D11738
// GOT/IAT slot:    0x2C7A190
// Slot symbol:     off_2C7A190
// Target type:     int(int fd, int level, int optname, void *optval, socklen_t *optlen)
// ============================================================

/* see target sig */ .getsockopt(/* see target signature */)
{
    // Tail-call to getsockopt via GOT/IAT indirection
    return getsockopt(/* forwarded args */);
}

