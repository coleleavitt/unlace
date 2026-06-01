// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7040
// Name:            .getpeername
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7040 jmp     cs:off_2C79008
//
// Resolved target: getpeername
// Target address:  0x2D11330
// GOT/IAT slot:    0x2C79008
// Slot symbol:     off_2C79008
// Target type:     int(int fd, struct sockaddr *addr, socklen_t *len)
// ============================================================

/* see target sig */ .getpeername(/* see target signature */)
{
    // Tail-call to getpeername via GOT/IAT indirection
    return getpeername(/* forwarded args */);
}

