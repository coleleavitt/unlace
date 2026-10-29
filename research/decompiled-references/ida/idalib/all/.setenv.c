// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8760
// Name:            .setenv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8760 jmp     cs:off_2C79B98
//
// Resolved target: setenv
// Target address:  0x2D115F8
// GOT/IAT slot:    0x2C79B98
// Slot symbol:     off_2C79B98
// Target type:     int(const char *name, const char *value, int replace)
// ============================================================

/* see target sig */ .setenv(/* see target signature */)
{
    // Tail-call to setenv via GOT/IAT indirection
    return setenv(/* forwarded args */);
}

