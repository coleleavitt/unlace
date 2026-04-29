// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5350
// Name:            .strrchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5350 jmp     cs:off_1A190
//
// Resolved target: strrchr
// Target address:  0x1A518
// GOT/IAT slot:    0x1A190
// Slot symbol:     off_1A190
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strrchr(/* see target signature */)
{
    // Tail-call to strrchr via GOT/IAT indirection
    return strrchr(/* forwarded args */);
}

