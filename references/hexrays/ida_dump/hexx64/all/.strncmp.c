// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B760
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B760 jmp     cs:off_4ED398
//
// Resolved target: strncmp
// Target address:  0x4F1690
// GOT/IAT slot:    0x4ED398
// Slot symbol:     off_4ED398
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

