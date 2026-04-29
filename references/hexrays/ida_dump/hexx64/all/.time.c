// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C0E0
// Name:            .time
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C0E0 jmp     cs:off_4ED858
//
// Resolved target: time
// Target address:  0x4F1B70
// GOT/IAT slot:    0x4ED858
// Slot symbol:     off_4ED858
// Target type:     time_t(time_t *timer)
// ============================================================

/* see target sig */ .time(/* see target signature */)
{
    // Tail-call to time via GOT/IAT indirection
    return time(/* forwarded args */);
}

