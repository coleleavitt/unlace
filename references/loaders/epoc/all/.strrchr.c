// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3340
// Name:            .strrchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3340 jmp     cs:off_13188
//
// Resolved target: strrchr
// Target address:  0x13878
// GOT/IAT slot:    0x13188
// Slot symbol:     off_13188
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strrchr(/* see target signature */)
{
    // Tail-call to strrchr via GOT/IAT indirection
    return strrchr(/* forwarded args */);
}

