// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7050
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7050 jmp     cs:off_26010
//
// Resolved target: strstr
// Target address:  0x262C8
// GOT/IAT slot:    0x26010
// Slot symbol:     off_26010
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

