// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B2B0
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B2B0 jmp     cs:off_4ED140
//
// Resolved target: strstr
// Target address:  0x4F1438
// GOT/IAT slot:    0x4ED140
// Slot symbol:     off_4ED140
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

