// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACCC0
// Name:            .getsid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACCC0 jmp     cs:off_2C7BE48
//
// Resolved target: getsid
// Target address:  0x2D11ED8
// GOT/IAT slot:    0x2C7BE48
// Slot symbol:     off_2C7BE48
// Target type:     __pid_t(__pid_t pid)
// ============================================================

/* see target sig */ .getsid(/* see target signature */)
{
    // Tail-call to getsid via GOT/IAT indirection
    return getsid(/* forwarded args */);
}

