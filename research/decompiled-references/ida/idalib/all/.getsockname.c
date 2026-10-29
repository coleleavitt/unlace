// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AABB0
// Name:            .getsockname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AABB0 jmp     cs:off_2C7ADC0
//
// Resolved target: getsockname
// Target address:  0x2D11A18
// GOT/IAT slot:    0x2C7ADC0
// Slot symbol:     off_2C7ADC0
// Target type:     int(int fd, struct sockaddr *addr, socklen_t *len)
// ============================================================

/* see target sig */ .getsockname(/* see target signature */)
{
    // Tail-call to getsockname via GOT/IAT indirection
    return getsockname(/* forwarded args */);
}

