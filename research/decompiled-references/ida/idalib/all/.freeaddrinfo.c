// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC320
// Name:            .freeaddrinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC320 jmp     cs:off_2C7B978
//
// Resolved target: freeaddrinfo
// Target address:  0x2D11D68
// GOT/IAT slot:    0x2C7B978
// Slot symbol:     off_2C7B978
// Target type:     void(struct addrinfo *ai)
// ============================================================

/* see target sig */ .freeaddrinfo(/* see target signature */)
{
    // Tail-call to freeaddrinfo via GOT/IAT indirection
    return freeaddrinfo(/* forwarded args */);
}

