// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1050
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1050 jmp     cs:off_4010
//
// Resolved target: strstr
// Target address:  0x5150
// GOT/IAT slot:    0x4010
// Slot symbol:     off_4010
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

