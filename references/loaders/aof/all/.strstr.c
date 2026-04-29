// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2070
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2070 jmp     cs:off_7020
//
// Resolved target: strstr
// Target address:  0x71D8
// GOT/IAT slot:    0x7020
// Slot symbol:     off_7020
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

