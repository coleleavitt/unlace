// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20270
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20270 jmp     cs:off_95120
//
// Resolved target: strchr
// Target address:  0x95B58
// GOT/IAT slot:    0x95120
// Slot symbol:     off_95120
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

