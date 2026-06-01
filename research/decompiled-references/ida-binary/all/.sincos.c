// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114B70
// Name:            .sincos
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114B70 jmp     cs:sincos_ptr
//
// Resolved target: sincos
// Target address:  0x8D5700
// GOT/IAT slot:    0x8A1258
// Slot symbol:     sincos_ptr
// Target type:     void(double x, double *sinx, double *cosx)
// ============================================================

/* see target sig */ .sincos(/* see target signature */)
{
    // Tail-call to sincos via GOT/IAT indirection
    return sincos(/* forwarded args */);
}

