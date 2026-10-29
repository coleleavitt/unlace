// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7CC0
// Name:            .mkdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7CC0 jmp     cs:off_2C79648
//
// Resolved target: mkdir
// Target address:  0x2D11498
// GOT/IAT slot:    0x2C79648
// Slot symbol:     off_2C79648
// Target type:     int(const char *path, __mode_t mode)
// ============================================================

/* see target sig */ .mkdir(/* see target signature */)
{
    // Tail-call to mkdir via GOT/IAT indirection
    return mkdir(/* forwarded args */);
}

