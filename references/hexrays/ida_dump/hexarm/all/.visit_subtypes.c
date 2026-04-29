// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DD00
// Name:            .visit_subtypes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DD00 jmp     cs:off_4E9668
//
// Resolved target: visit_subtypes
// Target address:  0x4EC080
// GOT/IAT slot:    0x4E9668
// Slot symbol:     off_4E9668
// Target type:     <no type info>
// ============================================================

void .visit_subtypes(/* see target signature */)
{
    // Tail-call to visit_subtypes via GOT/IAT indirection
    return visit_subtypes(/* forwarded args */);
}

