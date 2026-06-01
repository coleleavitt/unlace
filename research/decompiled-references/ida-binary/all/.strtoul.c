// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1149F0
// Name:            .strtoul
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1149F0 jmp     cs:strtoul_ptr
//
// Resolved target: strtoul
// Target address:  0x8D5600
// GOT/IAT slot:    0x8A1198
// Slot symbol:     strtoul_ptr
// Target type:     unsigned __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtoul(/* see target signature */)
{
    // Tail-call to strtoul via GOT/IAT indirection
    return strtoul(/* forwarded args */);
}

