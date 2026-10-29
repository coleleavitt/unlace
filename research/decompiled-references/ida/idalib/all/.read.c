// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC6B0
// Name:            .read
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC6B0 jmp     cs:off_2C7BB40
//
// Resolved target: read
// Target address:  0x2D11DD8
// GOT/IAT slot:    0x2C7BB40
// Slot symbol:     off_2C7BB40
// Target type:     ssize_t(int fd, void *buf, size_t nbytes)
// ============================================================

/* see target sig */ .read(/* see target signature */)
{
    // Tail-call to read via GOT/IAT indirection
    return read(/* forwarded args */);
}

