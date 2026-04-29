// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A2A0
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A2A0 jmp     cs:off_4C0138
//
// Resolved target: strstr
// Target address:  0x4C3100
// GOT/IAT slot:    0x4C0138
// Slot symbol:     off_4C0138
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

