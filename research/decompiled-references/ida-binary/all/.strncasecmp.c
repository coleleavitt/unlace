// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115620
// Name:            .strncasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115620 jmp     cs:strncasecmp_ptr
//
// Resolved target: strncasecmp
// Target address:  0x8D5D98
// GOT/IAT slot:    0x8A17B0
// Slot symbol:     strncasecmp_ptr
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncasecmp(/* see target signature */)
{
    // Tail-call to strncasecmp via GOT/IAT indirection
    return strncasecmp(/* forwarded args */);
}

