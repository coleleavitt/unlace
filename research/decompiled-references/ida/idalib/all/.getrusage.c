// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD830
// Name:            .getrusage
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD830 jmp     cs:off_2C7C400
//
// Resolved target: getrusage
// Target address:  0x2D12038
// GOT/IAT slot:    0x2C7C400
// Slot symbol:     off_2C7C400
// Target type:     int(__rusage_who_t who, struct rusage *usage)
// ============================================================

/* see target sig */ .getrusage(/* see target signature */)
{
    // Tail-call to getrusage via GOT/IAT indirection
    return getrusage(/* forwarded args */);
}

