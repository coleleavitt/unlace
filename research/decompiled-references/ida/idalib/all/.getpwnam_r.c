// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADB20
// Name:            .getpwnam_r
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADB20 jmp     cs:off_2C7C578
//
// Resolved target: getpwnam_r
// Target address:  0x2D120C0
// GOT/IAT slot:    0x2C7C578
// Slot symbol:     off_2C7C578
// Target type:     int(const char *name, struct passwd *resultbuf, char *buffer, size_t buflen, struct passwd **result)
// ============================================================

/* see target sig */ .getpwnam_r(/* see target signature */)
{
    // Tail-call to getpwnam_r via GOT/IAT indirection
    return getpwnam_r(/* forwarded args */);
}

