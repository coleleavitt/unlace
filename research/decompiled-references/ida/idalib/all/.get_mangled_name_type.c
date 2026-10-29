// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9FE0
// Name:            .get_mangled_name_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9FE0 jmp     cs:off_2C7A7D8
//
// Resolved target: get_mangled_name_type
// Target address:  0x756C30
// GOT/IAT slot:    0x2C7A7D8
// Slot symbol:     off_2C7A7D8
// Target type:     <no type info>
// ============================================================

void .get_mangled_name_type(/* see target signature */)
{
    // Tail-call to get_mangled_name_type via GOT/IAT indirection
    return get_mangled_name_type(/* forwarded args */);
}

