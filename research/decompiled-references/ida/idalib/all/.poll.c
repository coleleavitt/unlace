// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB230
// Name:            .poll
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB230 jmp     cs:off_2C7B100
//
// Resolved target: poll
// Target address:  0x2D11B18
// GOT/IAT slot:    0x2C7B100
// Slot symbol:     off_2C7B100
// Target type:     int(struct pollfd *fds, nfds_t nfds, int timeout)
// ============================================================

/* see target sig */ .poll(/* see target signature */)
{
    // Tail-call to poll via GOT/IAT indirection
    return poll(/* forwarded args */);
}

