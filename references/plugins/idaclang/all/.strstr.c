// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3080
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3080 jmp     cs:off_29028
//
// Resolved target: strstr
// Target address:  0x293D8
// GOT/IAT slot:    0x29028
// Slot symbol:     off_29028
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

