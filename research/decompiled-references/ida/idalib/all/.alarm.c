// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB1E0
// Name:            .alarm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB1E0 jmp     cs:off_2C7B0D8
//
// Resolved target: alarm
// Target address:  0x2D11B00
// GOT/IAT slot:    0x2C7B0D8
// Slot symbol:     off_2C7B0D8
// Target type:     unsigned int(unsigned int seconds)
// ============================================================

/* see target sig */ .alarm(/* see target signature */)
{
    // Tail-call to alarm via GOT/IAT indirection
    return alarm(/* forwarded args */);
}

