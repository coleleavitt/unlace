// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC780
// Name:            .qpipe_read
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC780 jmp     cs:off_2C7BBA8
//
// Resolved target: qpipe_read
// Target address:  0x83BF00
// GOT/IAT slot:    0x2C7BBA8
// Slot symbol:     off_2C7BBA8
// Target type:     ssize_t(int fd, void *buf, size_t nbytes)
// ============================================================

/* see target sig */ .qpipe_read(/* see target signature */)
{
    // Tail-call to qpipe_read via GOT/IAT indirection
    return qpipe_read(/* forwarded args */);
}

