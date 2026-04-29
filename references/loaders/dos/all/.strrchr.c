// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23D0
// Name:            .strrchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23D0 jmp     cs:off_B1D0
//
// Resolved target: strrchr
// Target address:  0xB668
// GOT/IAT slot:    0xB1D0
// Slot symbol:     off_B1D0
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strrchr(/* see target signature */)
{
    // Tail-call to strrchr via GOT/IAT indirection
    return strrchr(/* forwarded args */);
}

