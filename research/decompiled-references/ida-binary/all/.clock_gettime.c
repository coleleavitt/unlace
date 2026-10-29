// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112B20
// Name:            .clock_gettime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112B20 jmp     cs:clock_gettime_ptr
//
// Resolved target: clock_gettime
// Target address:  0x8D41E0
// GOT/IAT slot:    0x8A0230
// Slot symbol:     clock_gettime_ptr
// Target type:     int(clockid_t clock_id, struct timespec *tp)
// ============================================================

/* see target sig */ .clock_gettime(/* see target signature */)
{
    // Tail-call to clock_gettime via GOT/IAT indirection
    return clock_gettime(/* forwarded args */);
}

