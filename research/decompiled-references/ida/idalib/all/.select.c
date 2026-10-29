// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAA20
// Name:            .select
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAA20 jmp     cs:off_2C7ACF8
//
// Resolved target: select
// Target address:  0x2D119E8
// GOT/IAT slot:    0x2C7ACF8
// Slot symbol:     off_2C7ACF8
// Target type:     int(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, struct timeval *timeout)
// ============================================================

/* see target sig */ .select(/* see target signature */)
{
    // Tail-call to select via GOT/IAT indirection
    return select(/* forwarded args */);
}

