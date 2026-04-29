// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6130
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6130 jmp     cs:off_2D080
//
// Resolved target: strchr
// Target address:  0x2D580
// GOT/IAT slot:    0x2D080
// Slot symbol:     off_2D080
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

