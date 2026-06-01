// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7D30
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7D30 jmp     cs:off_2C79680
//
// Resolved target: add_entry
// Target address:  0x5B4500
// GOT/IAT slot:    0x2C79680
// Slot symbol:     off_2C79680
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

