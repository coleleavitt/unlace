// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AF30
// Name:            .get_numbered_type_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AF30 jmp     cs:off_4DA780
//
// Resolved target: get_numbered_type_name
// Target address:  0x4DD178
// GOT/IAT slot:    0x4DA780
// Slot symbol:     off_4DA780
// Target type:     <no type info>
// ============================================================

void .get_numbered_type_name(/* see target signature */)
{
    // Tail-call to get_numbered_type_name via GOT/IAT indirection
    return get_numbered_type_name(/* forwarded args */);
}

