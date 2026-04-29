// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22D0
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22D0 jmp     cs:off_15150
//
// Resolved target: add_entry
// Target address:  0x15350
// GOT/IAT slot:    0x15150
// Slot symbol:     off_15150
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

