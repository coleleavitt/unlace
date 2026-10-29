// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7F10
// Name:            .strtok_r
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7F10 jmp     cs:off_2C79770
//
// Resolved target: strtok_r
// Target address:  0x2D114C8
// GOT/IAT slot:    0x2C79770
// Slot symbol:     off_2C79770
// Target type:     char *(char *s, const char *delim, char **save_ptr)
// ============================================================

/* see target sig */ .strtok_r(/* see target signature */)
{
    // Tail-call to strtok_r via GOT/IAT indirection
    return strtok_r(/* forwarded args */);
}

