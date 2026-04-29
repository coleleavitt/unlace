// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2050
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2050 jmp     cs:off_A010
//
// Resolved target: strstr
// Target address:  0xA2C0
// GOT/IAT slot:    0xA010
// Slot symbol:     off_A010
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

