// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44B0
// Name:            .strrchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x44B0 jmp     cs:off_23240
//
// Resolved target: strrchr
// Target address:  0x23660
// GOT/IAT slot:    0x23240
// Slot symbol:     off_23240
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strrchr(/* see target signature */)
{
    // Tail-call to strrchr via GOT/IAT indirection
    return strrchr(/* forwarded args */);
}

