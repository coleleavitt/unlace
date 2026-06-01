// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7D40
// Name:            .lseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7D40 jmp     cs:off_2C79688
//
// Resolved target: lseek
// Target address:  0x2D114A0
// GOT/IAT slot:    0x2C79688
// Slot symbol:     off_2C79688
// Target type:     __off_t(int fd, __off_t offset, int whence)
// ============================================================

/* see target sig */ .lseek(/* see target signature */)
{
    // Tail-call to lseek via GOT/IAT indirection
    return lseek(/* forwarded args */);
}

