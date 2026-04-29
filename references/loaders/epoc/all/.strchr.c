// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30D0
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30D0 jmp     cs:off_13050
//
// Resolved target: strchr
// Target address:  0x13738
// GOT/IAT slot:    0x13050
// Slot symbol:     off_13050
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

