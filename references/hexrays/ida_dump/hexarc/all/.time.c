// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A050
// Name:            .time
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A050 jmp     cs:off_4B9810
//
// Resolved target: time
// Target address:  0x4BC210
// GOT/IAT slot:    0x4B9810
// Slot symbol:     off_4B9810
// Target type:     time_t(time_t *timer)
// ============================================================

/* see target sig */ .time(/* see target signature */)
{
    // Tail-call to time via GOT/IAT indirection
    return time(/* forwarded args */);
}

