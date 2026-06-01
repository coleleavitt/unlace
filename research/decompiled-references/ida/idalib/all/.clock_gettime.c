// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8150
// Name:            .clock_gettime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8150 jmp     cs:off_2C79890
//
// Resolved target: clock_gettime
// Target address:  0x2D11520
// GOT/IAT slot:    0x2C79890
// Slot symbol:     off_2C79890
// Target type:     int(clockid_t clock_id, struct timespec *tp)
// ============================================================

/* see target sig */ .clock_gettime(/* see target signature */)
{
    // Tail-call to clock_gettime via GOT/IAT indirection
    return clock_gettime(/* forwarded args */);
}

