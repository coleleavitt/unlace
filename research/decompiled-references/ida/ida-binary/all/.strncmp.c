// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117700
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117700 jmp     cs:strncmp_ptr
//
// Resolved target: strncmp
// Target address:  0x8D7268
// GOT/IAT slot:    0x8A2820
// Slot symbol:     strncmp_ptr
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

