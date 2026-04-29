// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20A60
// Name:            .strncasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20A60 jmp     cs:off_95518
//
// Resolved target: strncasecmp
// Target address:  0x95F50
// GOT/IAT slot:    0x95518
// Slot symbol:     off_95518
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncasecmp(/* see target signature */)
{
    // Tail-call to strncasecmp via GOT/IAT indirection
    return strncasecmp(/* forwarded args */);
}

