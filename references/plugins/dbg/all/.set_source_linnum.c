// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3060
// Name:            .set_source_linnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3060 jmp     cs:off_13018
//
// Resolved target: set_source_linnum
// Target address:  0x13390
// GOT/IAT slot:    0x13018
// Slot symbol:     off_13018
// Target type:     <no type info>
// ============================================================

void .set_source_linnum(/* see target signature */)
{
    // Tail-call to set_source_linnum via GOT/IAT indirection
    return set_source_linnum(/* forwarded args */);
}

