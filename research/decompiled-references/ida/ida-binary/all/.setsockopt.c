// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1172C0
// Name:            .setsockopt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1172C0 jmp     cs:setsockopt_ptr
//
// Resolved target: setsockopt
// Target address:  0x8D6FA8
// GOT/IAT slot:    0x8A2600
// Slot symbol:     setsockopt_ptr
// Target type:     int(int fd, int level, int optname, const void *optval, socklen_t optlen)
// ============================================================

/* see target sig */ .setsockopt(/* see target signature */)
{
    // Tail-call to setsockopt via GOT/IAT indirection
    return setsockopt(/* forwarded args */);
}

