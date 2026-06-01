// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A96F0
// Name:            .gethostname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A96F0 jmp     cs:off_2C7A360
//
// Resolved target: gethostname
// Target address:  0x2D117B0
// GOT/IAT slot:    0x2C7A360
// Slot symbol:     off_2C7A360
// Target type:     int(char *name, size_t len)
// ============================================================

/* see target sig */ .gethostname(/* see target signature */)
{
    // Tail-call to gethostname via GOT/IAT indirection
    return gethostname(/* forwarded args */);
}

