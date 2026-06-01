// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115280
// Name:            .cos
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115280 jmp     cs:cos_ptr
//
// Resolved target: cos
// Target address:  0x8D5B88
// GOT/IAT slot:    0x8A15E0
// Slot symbol:     cos_ptr
// Target type:     double(double x)
// ============================================================

/* see target sig */ .cos(/* see target signature */)
{
    // Tail-call to cos via GOT/IAT indirection
    return cos(/* forwarded args */);
}

