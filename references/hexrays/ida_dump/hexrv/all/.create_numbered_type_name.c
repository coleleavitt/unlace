// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE60
// Name:            .create_numbered_type_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE60 jmp     cs:off_4BFF18
//
// Resolved target: create_numbered_type_name
// Target address:  0x4C3440
// GOT/IAT slot:    0x4BFF18
// Slot symbol:     off_4BFF18
// Target type:     <no type info>
// ============================================================

void .create_numbered_type_name(/* see target signature */)
{
    // Tail-call to create_numbered_type_name via GOT/IAT indirection
    return create_numbered_type_name(/* forwarded args */);
}

