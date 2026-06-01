// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACB30
// Name:            .getnameinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACB30 jmp     cs:off_2C7BD80
//
// Resolved target: getnameinfo
// Target address:  0x2D11E90
// GOT/IAT slot:    0x2C7BD80
// Slot symbol:     off_2C7BD80
// Target type:     int(const struct sockaddr *sa, socklen_t salen, char *host, socklen_t hostlen, char *serv, socklen_t servlen, int flags)
// ============================================================

/* see target sig */ .getnameinfo(/* see target signature */)
{
    // Tail-call to getnameinfo via GOT/IAT indirection
    return getnameinfo(/* forwarded args */);
}

