// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E080
// Name:            .time
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E080 jmp     cs:off_4E9828
//
// Resolved target: time
// Target address:  0x4EC248
// GOT/IAT slot:    0x4E9828
// Slot symbol:     off_4E9828
// Target type:     time_t(time_t *timer)
// ============================================================

/* see target sig */ .time(/* see target signature */)
{
    // Tail-call to time via GOT/IAT indirection
    return time(/* forwarded args */);
}

