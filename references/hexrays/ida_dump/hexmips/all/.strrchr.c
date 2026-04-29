// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B330
// Name:            .strrchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B330 jmp     cs:off_4CD980
//
// Resolved target: strrchr
// Target address:  0x4D03A0
// GOT/IAT slot:    0x4CD980
// Slot symbol:     off_4CD980
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strrchr(/* see target signature */)
{
    // Tail-call to strrchr via GOT/IAT indirection
    return strrchr(/* forwarded args */);
}

