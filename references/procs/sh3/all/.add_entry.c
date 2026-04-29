// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5760
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5760 jmp     cs:off_15398
//
// Resolved target: add_entry
// Target address:  0x16448
// GOT/IAT slot:    0x15398
// Slot symbol:     off_15398
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

