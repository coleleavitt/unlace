// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA580
// Name:            .strncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA580 jmp     cs:off_482C0
//
// Resolved target: strncpy
// Target address:  0x48578
// GOT/IAT slot:    0x482C0
// Slot symbol:     off_482C0
// Target type:     char *(char *dest, const char *src, size_t n)
// ============================================================

/* see target sig */ .strncpy(/* see target signature */)
{
    // Tail-call to strncpy via GOT/IAT indirection
    return strncpy(/* forwarded args */);
}

