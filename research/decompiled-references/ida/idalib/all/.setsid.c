// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8310
// Name:            .setsid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8310 jmp     cs:off_2C79970
//
// Resolved target: setsid
// Target address:  0x2D11560
// GOT/IAT slot:    0x2C79970
// Slot symbol:     off_2C79970
// Target type:     __pid_t(void)
// ============================================================

/* see target sig */ .setsid(/* see target signature */)
{
    // Tail-call to setsid via GOT/IAT indirection
    return setsid(/* forwarded args */);
}

