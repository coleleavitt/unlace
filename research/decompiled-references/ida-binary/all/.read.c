// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119B70
// Name:            .read
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119B70 jmp     cs:read_ptr
//
// Resolved target: read
// Target address:  0x8D8928
// GOT/IAT slot:    0x8A3A58
// Slot symbol:     read_ptr
// Target type:     ssize_t(int fd, void *buf, size_t nbytes)
// ============================================================

/* see target sig */ .read(/* see target signature */)
{
    // Tail-call to read via GOT/IAT indirection
    return read(/* forwarded args */);
}

