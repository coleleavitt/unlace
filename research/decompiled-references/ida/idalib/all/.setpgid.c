// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAF50
// Name:            .setpgid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAF50 jmp     cs:off_2C7AF90
//
// Resolved target: setpgid
// Target address:  0x2D11AB0
// GOT/IAT slot:    0x2C7AF90
// Slot symbol:     off_2C7AF90
// Target type:     int(__pid_t pid, __pid_t pgid)
// ============================================================

/* see target sig */ .setpgid(/* see target signature */)
{
    // Tail-call to setpgid via GOT/IAT indirection
    return setpgid(/* forwarded args */);
}

