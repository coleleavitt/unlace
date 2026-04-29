// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AE40
// Name:            .create_numbered_type_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AE40 jmp     cs:off_4B9F08
//
// Resolved target: create_numbered_type_name
// Target address:  0x4BC938
// GOT/IAT slot:    0x4B9F08
// Slot symbol:     off_4B9F08
// Target type:     <no type info>
// ============================================================

void .create_numbered_type_name(/* see target signature */)
{
    // Tail-call to create_numbered_type_name via GOT/IAT indirection
    return create_numbered_type_name(/* forwarded args */);
}

