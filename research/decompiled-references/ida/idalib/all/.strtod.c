// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADBC0
// Name:            .strtod
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADBC0 jmp     cs:off_2C7C5C8
//
// Resolved target: strtod
// Target address:  0x2D120C8
// GOT/IAT slot:    0x2C7C5C8
// Slot symbol:     off_2C7C5C8
// Target type:     double(const char *nptr, char **endptr)
// ============================================================

/* see target sig */ .strtod(/* see target signature */)
{
    // Tail-call to strtod via GOT/IAT indirection
    return strtod(/* forwarded args */);
}

