// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114A10
// Name:            .powf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114A10 jmp     cs:powf_ptr
//
// Resolved target: powf
// Target address:  0x8D5610
// GOT/IAT slot:    0x8A11A8
// Slot symbol:     powf_ptr
// Target type:     float(float x, float y)
// ============================================================

/* see target sig */ .powf(/* see target signature */)
{
    // Tail-call to powf via GOT/IAT indirection
    return powf(/* forwarded args */);
}

