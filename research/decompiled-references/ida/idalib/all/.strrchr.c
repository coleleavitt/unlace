// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACF10
// Name:            .strrchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACF10 jmp     cs:off_2C7BF70
//
// Resolved target: strrchr
// Target address:  0x2D11F18
// GOT/IAT slot:    0x2C7BF70
// Slot symbol:     off_2C7BF70
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strrchr(/* see target signature */)
{
    // Tail-call to strrchr via GOT/IAT indirection
    return strrchr(/* forwarded args */);
}

