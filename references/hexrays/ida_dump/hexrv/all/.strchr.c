// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A500
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A500 jmp     cs:off_4BF268
//
// Resolved target: strchr
// Target address:  0x4C2730
// GOT/IAT slot:    0x4BF268
// Slot symbol:     off_4BF268
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

