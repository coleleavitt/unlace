// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33F0
// Name:            .strrchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33F0 jmp     cs:off_141E0
//
// Resolved target: strrchr
// Target address:  0x147D0
// GOT/IAT slot:    0x141E0
// Slot symbol:     off_141E0
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strrchr(/* see target signature */)
{
    // Tail-call to strrchr via GOT/IAT indirection
    return strrchr(/* forwarded args */);
}

