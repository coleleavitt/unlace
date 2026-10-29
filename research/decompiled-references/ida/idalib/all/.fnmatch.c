// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8A80
// Name:            .fnmatch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8A80 jmp     cs:off_2C79D28
//
// Resolved target: fnmatch
// Target address:  0x2D11668
// GOT/IAT slot:    0x2C79D28
// Slot symbol:     off_2C79D28
// Target type:     int(const char *pattern, const char *name, int flags)
// ============================================================

/* see target sig */ .fnmatch(/* see target signature */)
{
    // Tail-call to fnmatch via GOT/IAT indirection
    return fnmatch(/* forwarded args */);
}

