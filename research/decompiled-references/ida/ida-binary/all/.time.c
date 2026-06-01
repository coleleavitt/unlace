// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1198A0
// Name:            .time
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1198A0 jmp     cs:time_ptr
//
// Resolved target: time
// Target address:  0x8D8778
// GOT/IAT slot:    0x8A38F0
// Slot symbol:     time_ptr
// Target type:     time_t(time_t *timer)
// ============================================================

/* see target sig */ .time(/* see target signature */)
{
    // Tail-call to time via GOT/IAT indirection
    return time(/* forwarded args */);
}

