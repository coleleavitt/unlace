// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACEF0
// Name:            .mmap
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACEF0 jmp     cs:off_2C7BF60
//
// Resolved target: mmap
// Target address:  0x2D11F10
// GOT/IAT slot:    0x2C7BF60
// Slot symbol:     off_2C7BF60
// Target type:     void *(void *addr, size_t len, int prot, int flags, int fd, __off_t offset)
// ============================================================

/* see target sig */ .mmap(/* see target signature */)
{
    // Tail-call to mmap via GOT/IAT indirection
    return mmap(/* forwarded args */);
}

