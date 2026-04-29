// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6890
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6890 jmp     cs:off_2D430
//
// Resolved target: add_entry
// Target address:  0x2D958
// GOT/IAT slot:    0x2D430
// Slot symbol:     off_2D430
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

