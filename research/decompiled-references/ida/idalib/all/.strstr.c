// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8400
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8400 jmp     cs:off_2C799E8
//
// Resolved target: strstr
// Target address:  0x2D11598
// GOT/IAT slot:    0x2C799E8
// Slot symbol:     off_2C799E8
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

