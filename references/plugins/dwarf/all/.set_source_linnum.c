// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA0A0
// Name:            .set_source_linnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA0A0 jmp     cs:off_CA038
//
// Resolved target: set_source_linnum
// Target address:  0xD0958
// GOT/IAT slot:    0xCA038
// Slot symbol:     off_CA038
// Target type:     <no type info>
// ============================================================

void .set_source_linnum(/* see target signature */)
{
    // Tail-call to set_source_linnum via GOT/IAT indirection
    return set_source_linnum(/* forwarded args */);
}

