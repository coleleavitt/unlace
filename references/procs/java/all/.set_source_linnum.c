// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60A0
// Name:            .set_source_linnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60A0 jmp     cs:off_2D038
//
// Resolved target: set_source_linnum
// Target address:  0x2D538
// GOT/IAT slot:    0x2D038
// Slot symbol:     off_2D038
// Target type:     <no type info>
// ============================================================

void .set_source_linnum(/* see target signature */)
{
    // Tail-call to set_source_linnum via GOT/IAT indirection
    return set_source_linnum(/* forwarded args */);
}

