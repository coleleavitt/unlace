// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9C30
// Name:            .recv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9C30 jmp     cs:off_2C7A600
//
// Resolved target: recv
// Target address:  0x2D11870
// GOT/IAT slot:    0x2C7A600
// Slot symbol:     off_2C7A600
// Target type:     ssize_t(int fd, void *buf, size_t n, int flags)
// ============================================================

/* see target sig */ .recv(/* see target signature */)
{
    // Tail-call to recv via GOT/IAT indirection
    return recv(/* forwarded args */);
}

