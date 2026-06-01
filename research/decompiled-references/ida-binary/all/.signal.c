// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117FE0
// Name:            .signal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117FE0 jmp     cs:signal_ptr
//
// Resolved target: signal
// Target address:  0x8D7808
// GOT/IAT slot:    0x8A2C90
// Slot symbol:     signal_ptr
// Target type:     __sighandler_t(int sig, __sighandler_t handler)
// ============================================================

/* see target sig */ .signal(/* see target signature */)
{
    // Tail-call to signal via GOT/IAT indirection
    return signal(/* forwarded args */);
}

