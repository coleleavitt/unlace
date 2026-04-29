// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A330
// Name:            .strrchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A330 jmp     cs:off_4B9980
//
// Resolved target: strrchr
// Target address:  0x4BC380
// GOT/IAT slot:    0x4B9980
// Slot symbol:     off_4B9980
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strrchr(/* see target signature */)
{
    // Tail-call to strrchr via GOT/IAT indirection
    return strrchr(/* forwarded args */);
}

