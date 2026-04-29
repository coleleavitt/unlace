// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E370
// Name:            .strrchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E370 jmp     cs:off_4E99A0
//
// Resolved target: strrchr
// Target address:  0x4EC3C0
// GOT/IAT slot:    0x4E99A0
// Slot symbol:     off_4E99A0
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strrchr(/* see target signature */)
{
    // Tail-call to strrchr via GOT/IAT indirection
    return strrchr(/* forwarded args */);
}

