// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7110
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7110 jmp     cs:off_26070
//
// Resolved target: strncmp
// Target address:  0x26328
// GOT/IAT slot:    0x26070
// Slot symbol:     off_26070
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

