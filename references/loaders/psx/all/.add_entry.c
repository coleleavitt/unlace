// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23F0
// Name:            .add_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23F0 jmp     cs:off_A1E0
//
// Resolved target: add_entry
// Target address:  0xA4B0
// GOT/IAT slot:    0xA1E0
// Slot symbol:     off_A1E0
// Target type:     <no type info>
// ============================================================

void .add_entry(/* see target signature */)
{
    // Tail-call to add_entry via GOT/IAT indirection
    return add_entry(/* forwarded args */);
}

