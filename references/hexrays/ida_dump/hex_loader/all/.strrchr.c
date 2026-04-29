// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1170
// Name:            .strrchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1170 jmp     cs:off_50A0
//
// Resolved target: strrchr
// Target address:  0x5270
// GOT/IAT slot:    0x50A0
// Slot symbol:     off_50A0
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strrchr(/* see target signature */)
{
    // Tail-call to strrchr via GOT/IAT indirection
    return strrchr(/* forwarded args */);
}

