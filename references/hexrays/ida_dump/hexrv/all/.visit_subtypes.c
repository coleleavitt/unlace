// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACE0
// Name:            .visit_subtypes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACE0 jmp     cs:off_4BF658
//
// Resolved target: visit_subtypes
// Target address:  0x4C2B48
// GOT/IAT slot:    0x4BF658
// Slot symbol:     off_4BF658
// Target type:     <no type info>
// ============================================================

void .visit_subtypes(/* see target signature */)
{
    // Tail-call to visit_subtypes via GOT/IAT indirection
    return visit_subtypes(/* forwarded args */);
}

