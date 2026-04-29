// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3780
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3780 jmp     cs:off_283A8
//
// Resolved target: add_entry
// Target address:  0x28870
// GOT/IAT slot:    0x283A8
// Slot symbol:     off_283A8
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

