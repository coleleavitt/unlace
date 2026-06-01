// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC520
// Name:            .time
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC520 jmp     cs:off_2C7BA78
//
// Resolved target: time
// Target address:  0x2D11D88
// GOT/IAT slot:    0x2C7BA78
// Slot symbol:     off_2C7BA78
// Target type:     time_t(time_t *timer)
// ============================================================

/* see target sig */ .time(/* see target signature */)
{
    // Tail-call to time via GOT/IAT indirection
    return time(/* forwarded args */);
}

