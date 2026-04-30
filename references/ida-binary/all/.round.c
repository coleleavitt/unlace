// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114F00
// Name:            .round
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114F00 jmp     cs:round_ptr
//
// Resolved target: round
// Target address:  0x8D5940
// GOT/IAT slot:    0x8A1420
// Slot symbol:     round_ptr
// Target type:     double(double x)
// ============================================================

/* see target sig */ .round(/* see target signature */)
{
    // Tail-call to round via GOT/IAT indirection
    return round(/* forwarded args */);
}

