// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD7A0
// Name:            .qpipe_write
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD7A0 jmp     cs:off_2C7C3B8
//
// Resolved target: qpipe_write
// Target address:  0x83BF10
// GOT/IAT slot:    0x2C7C3B8
// Slot symbol:     off_2C7C3B8
// Target type:     ssize_t(int fd, const void *buf, size_t n)
// ============================================================

/* see target sig */ .qpipe_write(/* see target signature */)
{
    // Tail-call to qpipe_write via GOT/IAT indirection
    return qpipe_write(/* forwarded args */);
}

