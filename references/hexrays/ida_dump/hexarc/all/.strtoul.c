// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29440
// Name:            .strtoul
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29440 jmp     cs:off_4B9208
//
// Resolved target: strtoul
// Target address:  0x4BBBD8
// GOT/IAT slot:    0x4B9208
// Slot symbol:     off_4B9208
// Target type:     unsigned __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtoul(/* see target signature */)
{
    // Tail-call to strtoul via GOT/IAT indirection
    return strtoul(/* forwarded args */);
}

