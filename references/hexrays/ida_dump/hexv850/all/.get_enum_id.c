// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B7D0
// Name:            .get_enum_id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B7D0 jmp     cs:off_4C0BD0
//
// Resolved target: get_enum_id
// Target address:  0x4C3BD8
// GOT/IAT slot:    0x4C0BD0
// Slot symbol:     off_4C0BD0
// Target type:     <no type info>
// ============================================================

void .get_enum_id(/* see target signature */)
{
    // Tail-call to get_enum_id via GOT/IAT indirection
    return get_enum_id(/* forwarded args */);
}

