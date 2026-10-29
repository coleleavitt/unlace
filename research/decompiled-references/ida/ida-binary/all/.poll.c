// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117AF0
// Name:            .poll
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117AF0 jmp     cs:poll_ptr
//
// Resolved target: poll
// Target address:  0x8D74C0
// GOT/IAT slot:    0x8A2A18
// Slot symbol:     poll_ptr
// Target type:     int(struct pollfd *fds, nfds_t nfds, int timeout)
// ============================================================

/* see target sig */ .poll(/* see target signature */)
{
    // Tail-call to poll via GOT/IAT indirection
    return poll(/* forwarded args */);
}

