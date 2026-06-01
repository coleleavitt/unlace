// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA0E0
// Name:            .nanosleep
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA0E0 jmp     cs:off_2C7A858
//
// Resolved target: nanosleep
// Target address:  0x2D11908
// GOT/IAT slot:    0x2C7A858
// Slot symbol:     off_2C7A858
// Target type:     int(const struct timespec *requested_time, struct timespec *remaining)
// ============================================================

/* see target sig */ .nanosleep(/* see target signature */)
{
    // Tail-call to nanosleep via GOT/IAT indirection
    return nanosleep(/* forwarded args */);
}

