// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9120
// Name:            .getpwuid_r
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9120 jmp     cs:off_2C7A078
//
// Resolved target: getpwuid_r
// Target address:  0x2D116F8
// GOT/IAT slot:    0x2C7A078
// Slot symbol:     off_2C7A078
// Target type:     int(__uid_t uid, struct passwd *resultbuf, char *buffer, size_t buflen, struct passwd **result)
// ============================================================

/* see target sig */ .getpwuid_r(/* see target signature */)
{
    // Tail-call to getpwuid_r via GOT/IAT indirection
    return getpwuid_r(/* forwarded args */);
}

