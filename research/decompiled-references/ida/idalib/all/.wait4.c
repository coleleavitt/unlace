// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC040
// Name:            .wait4
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC040 jmp     cs:off_2C7B808
//
// Resolved target: wait4
// Target address:  0x2D11D00
// GOT/IAT slot:    0x2C7B808
// Slot symbol:     off_2C7B808
// Target type:     __pid_t(__pid_t pid, __WAIT_STATUS stat_loc, int options, struct rusage *usage)
// ============================================================

/* see target sig */ .wait4(/* see target signature */)
{
    // Tail-call to wait4 via GOT/IAT indirection
    return wait4(/* forwarded args */);
}

