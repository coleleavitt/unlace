// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2320
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2320 jmp     cs:off_8178
//
// Resolved target: add_entry
// Target address:  0x8380
// GOT/IAT slot:    0x8178
// Slot symbol:     off_8178
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

