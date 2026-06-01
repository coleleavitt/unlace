// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9B90
// Name:            .lseek64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9B90 jmp     cs:off_2C7A5B0
//
// Resolved target: lseek64
// Target address:  0x2D11858
// GOT/IAT slot:    0x2C7A5B0
// Slot symbol:     off_2C7A5B0
// Target type:     __off64_t(int fd, __off64_t offset, int whence)
// ============================================================

/* see target sig */ .lseek64(/* see target signature */)
{
    // Tail-call to lseek64 via GOT/IAT indirection
    return lseek64(/* forwarded args */);
}

