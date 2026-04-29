// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C3F0
// Name:            .strrchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C3F0 jmp     cs:off_4ED9E0
//
// Resolved target: strrchr
// Target address:  0x4F1D00
// GOT/IAT slot:    0x4ED9E0
// Slot symbol:     off_4ED9E0
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strrchr(/* see target signature */)
{
    // Tail-call to strrchr via GOT/IAT indirection
    return strrchr(/* forwarded args */);
}

