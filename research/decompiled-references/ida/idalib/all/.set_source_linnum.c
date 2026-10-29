// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC420
// Name:            .set_source_linnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC420 jmp     cs:off_2C7B9F8
//
// Resolved target: set_source_linnum
// Target address:  0x59BA20
// GOT/IAT slot:    0x2C7B9F8
// Slot symbol:     off_2C7B9F8
// Target type:     <no type info>
// ============================================================

void .set_source_linnum(/* see target signature */)
{
    // Tail-call to set_source_linnum via GOT/IAT indirection
    return set_source_linnum(/* forwarded args */);
}

