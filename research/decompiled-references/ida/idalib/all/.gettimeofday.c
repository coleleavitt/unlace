// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABAA0
// Name:            .gettimeofday
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABAA0 jmp     cs:off_2C7B538
//
// Resolved target: gettimeofday
// Target address:  0x2D11C40
// GOT/IAT slot:    0x2C7B538
// Slot symbol:     off_2C7B538
// Target type:     int(struct timeval *tv, __timezone_ptr_t tz)
// ============================================================

/* see target sig */ .gettimeofday(/* see target signature */)
{
    // Tail-call to gettimeofday via GOT/IAT indirection
    return gettimeofday(/* forwarded args */);
}

