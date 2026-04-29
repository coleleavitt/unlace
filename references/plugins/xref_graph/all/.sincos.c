// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16870
// Name:            .sincos
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16870 jmp     cs:off_4F420
//
// Resolved target: sincos
// Target address:  0x50528
// GOT/IAT slot:    0x4F420
// Slot symbol:     off_4F420
// Target type:     void(double x, double *sinx, double *cosx)
// ============================================================

/* see target sig */ .sincos(/* see target signature */)
{
    // Tail-call to sincos via GOT/IAT indirection
    return sincos(/* forwarded args */);
}

