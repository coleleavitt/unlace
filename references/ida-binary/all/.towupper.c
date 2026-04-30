// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BA20
// Name:            .towupper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BA20 jmp     cs:towupper_ptr
//
// Resolved target: towupper
// Target address:  0x8D9C90
// GOT/IAT slot:    0x8A49B0
// Slot symbol:     towupper_ptr
// Target type:     wint_t(wint_t wc)
// ============================================================

/* see target sig */ .towupper(/* see target signature */)
{
    // Tail-call to towupper via GOT/IAT indirection
    return towupper(/* forwarded args */);
}

