// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A440
// Name:            .strtoul
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A440 jmp     cs:off_4DA208
//
// Resolved target: strtoul
// Target address:  0x4DCBD8
// GOT/IAT slot:    0x4DA208
// Slot symbol:     off_4DA208
// Target type:     unsigned __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtoul(/* see target signature */)
{
    // Tail-call to strtoul via GOT/IAT indirection
    return strtoul(/* forwarded args */);
}

