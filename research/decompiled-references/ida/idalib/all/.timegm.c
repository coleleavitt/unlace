// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA830
// Name:            .timegm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA830 jmp     cs:off_2C7AC00
//
// Resolved target: timegm
// Target address:  0x2D119A8
// GOT/IAT slot:    0x2C7AC00
// Slot symbol:     off_2C7AC00
// Target type:     time_t(struct tm *tp)
// ============================================================

/* see target sig */ .timegm(/* see target signature */)
{
    // Tail-call to timegm via GOT/IAT indirection
    return timegm(/* forwarded args */);
}

