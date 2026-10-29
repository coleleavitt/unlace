// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD120
// Name:            .fork
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD120 jmp     cs:off_2C7C078
//
// Resolved target: fork
// Target address:  0x2D11F48
// GOT/IAT slot:    0x2C7C078
// Slot symbol:     off_2C7C078
// Target type:     __pid_t(void)
// ============================================================

/* see target sig */ .fork(/* see target signature */)
{
    // Tail-call to fork via GOT/IAT indirection
    return fork(/* forwarded args */);
}

