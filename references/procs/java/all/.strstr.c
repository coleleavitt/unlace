// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60C0
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60C0 jmp     cs:off_2D048
//
// Resolved target: strstr
// Target address:  0x2D548
// GOT/IAT slot:    0x2D048
// Slot symbol:     off_2D048
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

