// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAC30
// Name:            .visit_subtypes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAC30 jmp     cs:off_2C7AE00
//
// Resolved target: visit_subtypes
// Target address:  0x5502B0
// GOT/IAT slot:    0x2C7AE00
// Slot symbol:     off_2C7AE00
// Target type:     __int64 __fastcall(int, int, int, int, int)
// ============================================================

/* see target sig */ .visit_subtypes(/* see target signature */)
{
    // Tail-call to visit_subtypes via GOT/IAT indirection
    return visit_subtypes(/* forwarded args */);
}

