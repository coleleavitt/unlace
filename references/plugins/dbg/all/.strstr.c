// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3070
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3070 jmp     cs:off_13020
//
// Resolved target: strstr
// Target address:  0x13398
// GOT/IAT slot:    0x13020
// Slot symbol:     off_13020
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

