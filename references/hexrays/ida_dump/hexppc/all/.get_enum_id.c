// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B7C0
// Name:            .get_enum_id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B7C0 jmp     cs:off_4DABC8
//
// Resolved target: get_enum_id
// Target address:  0x4DD5D8
// GOT/IAT slot:    0x4DABC8
// Slot symbol:     off_4DABC8
// Target type:     <no type info>
// ============================================================

void .get_enum_id(/* see target signature */)
{
    // Tail-call to get_enum_id via GOT/IAT indirection
    return get_enum_id(/* forwarded args */);
}

