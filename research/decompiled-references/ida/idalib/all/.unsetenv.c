// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB7F0
// Name:            .unsetenv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB7F0 jmp     cs:off_2C7B3E0
//
// Resolved target: unsetenv
// Target address:  0x2D11BD8
// GOT/IAT slot:    0x2C7B3E0
// Slot symbol:     off_2C7B3E0
// Target type:     int(const char *name)
// ============================================================

/* see target sig */ .unsetenv(/* see target signature */)
{
    // Tail-call to unsetenv via GOT/IAT indirection
    return unsetenv(/* forwarded args */);
}

