// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADA00
// Name:            .towupper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADA00 jmp     cs:off_2C7C4E8
//
// Resolved target: towupper
// Target address:  0x2D12080
// GOT/IAT slot:    0x2C7C4E8
// Slot symbol:     off_2C7C4E8
// Target type:     wint_t(wint_t wc)
// ============================================================

/* see target sig */ .towupper(/* see target signature */)
{
    // Tail-call to towupper via GOT/IAT indirection
    return towupper(/* forwarded args */);
}

