// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA730
// Name:            .create_numbered_type_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA730 jmp     cs:off_2C7AB80
//
// Resolved target: create_numbered_type_name
// Target address:  0x6ABD70
// GOT/IAT slot:    0x2C7AB80
// Slot symbol:     off_2C7AB80
// Target type:     <no type info>
// ============================================================

void .create_numbered_type_name(/* see target signature */)
{
    // Tail-call to create_numbered_type_name via GOT/IAT indirection
    return create_numbered_type_name(/* forwarded args */);
}

