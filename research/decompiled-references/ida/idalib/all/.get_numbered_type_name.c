// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9BE0
// Name:            .get_numbered_type_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9BE0 jmp     cs:off_2C7A5D8
//
// Resolved target: get_numbered_type_name
// Target address:  0x64DF60
// GOT/IAT slot:    0x2C7A5D8
// Slot symbol:     off_2C7A5D8
// Target type:     <no type info>
// ============================================================

void .get_numbered_type_name(/* see target signature */)
{
    // Tail-call to get_numbered_type_name via GOT/IAT indirection
    return get_numbered_type_name(/* forwarded args */);
}

