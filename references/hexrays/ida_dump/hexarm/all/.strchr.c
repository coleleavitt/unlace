// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D510
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D510 jmp     cs:off_4E9270
//
// Resolved target: strchr
// Target address:  0x4EBC60
// GOT/IAT slot:    0x4E9270
// Slot symbol:     off_4E9270
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

