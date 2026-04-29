// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x47A0
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x47A0 jmp     cs:off_233B8
//
// Resolved target: add_entry
// Target address:  0x23800
// GOT/IAT slot:    0x233B8
// Slot symbol:     off_233B8
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

