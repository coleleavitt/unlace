// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21E0
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21E0 jmp     cs:off_70D8
//
// Resolved target: create_data
// Target address:  0x7290
// GOT/IAT slot:    0x70D8
// Slot symbol:     off_70D8
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}

