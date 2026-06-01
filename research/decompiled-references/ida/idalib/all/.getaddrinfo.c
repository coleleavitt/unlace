// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD760
// Name:            .getaddrinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD760 jmp     cs:off_2C7C398
//
// Resolved target: getaddrinfo
// Target address:  0x2D12018
// GOT/IAT slot:    0x2C7C398
// Slot symbol:     off_2C7C398
// Target type:     int(const char *name, const char *service, const struct addrinfo *req, struct addrinfo **pai)
// ============================================================

/* see target sig */ .getaddrinfo(/* see target signature */)
{
    // Tail-call to getaddrinfo via GOT/IAT indirection
    return getaddrinfo(/* forwarded args */);
}

