// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B640
// Name:            .round
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B640 jmp     cs:off_4ED308
//
// Resolved target: round
// Target address:  0x4F1600
// GOT/IAT slot:    0x4ED308
// Slot symbol:     off_4ED308
// Target type:     double(double x)
// ============================================================

/* see target sig */ .round(/* see target signature */)
{
    // Tail-call to round via GOT/IAT indirection
    return round(/* forwarded args */);
}

