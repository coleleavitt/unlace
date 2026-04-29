// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29CE0
// Name:            .visit_subtypes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29CE0 jmp     cs:off_4B9658
//
// Resolved target: visit_subtypes
// Target address:  0x4BC050
// GOT/IAT slot:    0x4B9658
// Slot symbol:     off_4B9658
// Target type:     <no type info>
// ============================================================

void .visit_subtypes(/* see target signature */)
{
    // Tail-call to visit_subtypes via GOT/IAT indirection
    return visit_subtypes(/* forwarded args */);
}

