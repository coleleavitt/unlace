// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1154E0
// Name:            .modf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1154E0 jmp     cs:modf_ptr
//
// Resolved target: modf
// Target address:  0x8D5CE8
// GOT/IAT slot:    0x8A1710
// Slot symbol:     modf_ptr
// Target type:     double(double x, double *iptr)
// ============================================================

/* see target sig */ .modf(/* see target signature */)
{
    // Tail-call to modf via GOT/IAT indirection
    return modf(/* forwarded args */);
}

