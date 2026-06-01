// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8BC0
// Name:            .pow
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8BC0 jmp     cs:off_2C79DC8
//
// Resolved target: pow
// Target address:  0x2D11698
// GOT/IAT slot:    0x2C79DC8
// Slot symbol:     off_2C79DC8
// Target type:     double(double x, double y)
// ============================================================

/* see target sig */ .pow(/* see target signature */)
{
    // Tail-call to pow via GOT/IAT indirection
    return pow(/* forwarded args */);
}

