// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EEA0
// Name:            .create_numbered_type_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EEA0 jmp     cs:off_4E9F38
//
// Resolved target: create_numbered_type_name
// Target address:  0x4EC988
// GOT/IAT slot:    0x4E9F38
// Slot symbol:     off_4E9F38
// Target type:     <no type info>
// ============================================================

void .create_numbered_type_name(/* see target signature */)
{
    // Tail-call to create_numbered_type_name via GOT/IAT indirection
    return create_numbered_type_name(/* forwarded args */);
}

