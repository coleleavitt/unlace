// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA220
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA220 jmp     cs:off_350F8
//
// Resolved target: strncmp
// Target address:  0x35748
// GOT/IAT slot:    0x350F8
// Slot symbol:     off_350F8
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

