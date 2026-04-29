// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE70
// Name:            .create_numbered_type_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE70 jmp     cs:off_4C0F20
//
// Resolved target: create_numbered_type_name
// Target address:  0x4C3F48
// GOT/IAT slot:    0x4C0F20
// Slot symbol:     off_4C0F20
// Target type:     <no type info>
// ============================================================

void .create_numbered_type_name(/* see target signature */)
{
    // Tail-call to create_numbered_type_name via GOT/IAT indirection
    return create_numbered_type_name(/* forwarded args */);
}

