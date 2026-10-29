// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9B50
// Name:            .waitpid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9B50 jmp     cs:off_2C7A590
//
// Resolved target: waitpid
// Target address:  0x2D11848
// GOT/IAT slot:    0x2C7A590
// Slot symbol:     off_2C7A590
// Target type:     __pid_t(__pid_t pid, int *stat_loc, int options)
// ============================================================

/* see target sig */ .waitpid(/* see target signature */)
{
    // Tail-call to waitpid via GOT/IAT indirection
    return waitpid(/* forwarded args */);
}

