// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3110
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3110 jmp     cs:off_20070
//
// Resolved target: strchr
// Target address:  0x21980
// GOT/IAT slot:    0x20070
// Slot symbol:     off_20070
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

