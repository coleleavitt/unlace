// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8930
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8930 jmp     cs:off_2A480
//
// Resolved target: add_entry
// Target address:  0x2BEB0
// GOT/IAT slot:    0x2A480
// Slot symbol:     off_2A480
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

