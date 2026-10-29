// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAD90
// Name:            .setsockopt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAD90 jmp     cs:off_2C7AEB0
//
// Resolved target: setsockopt
// Target address:  0x2D11A58
// GOT/IAT slot:    0x2C7AEB0
// Slot symbol:     off_2C7AEB0
// Target type:     int(int fd, int level, int optname, const void *optval, socklen_t optlen)
// ============================================================

/* see target sig */ .setsockopt(/* see target signature */)
{
    // Tail-call to setsockopt via GOT/IAT indirection
    return setsockopt(/* forwarded args */);
}

