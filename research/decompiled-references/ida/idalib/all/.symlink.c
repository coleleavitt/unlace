// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A73E0
// Name:            .symlink
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A73E0 jmp     cs:off_2C791D8
//
// Resolved target: symlink
// Target address:  0x2D113A0
// GOT/IAT slot:    0x2C791D8
// Slot symbol:     off_2C791D8
// Target type:     int(const char *from, const char *to)
// ============================================================

/* see target sig */ .symlink(/* see target signature */)
{
    // Tail-call to symlink via GOT/IAT indirection
    return symlink(/* forwarded args */);
}

