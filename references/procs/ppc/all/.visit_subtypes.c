// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20600
// Name:            .visit_subtypes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20600 jmp     cs:off_952E8
//
// Resolved target: visit_subtypes
// Target address:  0x95D20
// GOT/IAT slot:    0x952E8
// Slot symbol:     off_952E8
// Target type:     <no type info>
// ============================================================

void .visit_subtypes(/* see target signature */)
{
    // Tail-call to visit_subtypes via GOT/IAT indirection
    return visit_subtypes(/* forwarded args */);
}

