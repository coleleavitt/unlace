// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D0C0
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D0C0 jmp     cs:off_B3048
//
// Resolved target: strstr
// Target address:  0xB37B8
// GOT/IAT slot:    0xB3048
// Slot symbol:     off_B3048
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

