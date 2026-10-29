// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7DD0
// Name:            .readlink
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7DD0 jmp     cs:off_2C796D0
//
// Resolved target: readlink
// Target address:  0x2D114B0
// GOT/IAT slot:    0x2C796D0
// Slot symbol:     off_2C796D0
// Target type:     ssize_t(const char *path, char *buf, size_t len)
// ============================================================

/* see target sig */ .readlink(/* see target signature */)
{
    // Tail-call to readlink via GOT/IAT indirection
    return readlink(/* forwarded args */);
}

