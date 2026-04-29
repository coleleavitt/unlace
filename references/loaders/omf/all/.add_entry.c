// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3690
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3690 jmp     cs:off_14330
//
// Resolved target: add_entry
// Target address:  0x14940
// GOT/IAT slot:    0x14330
// Slot symbol:     off_14330
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

