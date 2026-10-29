// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB570
// Name:            .signal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB570 jmp     cs:off_2C7B2A0
//
// Resolved target: signal
// Target address:  0x2D11B80
// GOT/IAT slot:    0x2C7B2A0
// Slot symbol:     off_2C7B2A0
// Target type:     __sighandler_t(int sig, __sighandler_t handler)
// ============================================================

/* see target sig */ .signal(/* see target signature */)
{
    // Tail-call to signal via GOT/IAT indirection
    return signal(/* forwarded args */);
}

