// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B510
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B510 jmp     cs:off_4ED270
//
// Resolved target: strchr
// Target address:  0x4F1568
// GOT/IAT slot:    0x4ED270
// Slot symbol:     off_4ED270
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

