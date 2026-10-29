// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADA30
// Name:            .pread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADA30 jmp     cs:off_2C7C500
//
// Resolved target: pread
// Target address:  0x2D12090
// GOT/IAT slot:    0x2C7C500
// Slot symbol:     off_2C7C500
// Target type:     ssize_t(int fd, void *buf, size_t nbytes, __off_t offset)
// ============================================================

/* see target sig */ .pread(/* see target signature */)
{
    // Tail-call to pread via GOT/IAT indirection
    return pread(/* forwarded args */);
}

