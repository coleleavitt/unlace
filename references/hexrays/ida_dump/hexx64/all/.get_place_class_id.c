// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C800
// Name:            .get_place_class_id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C800 jmp     cs:off_4EDBE8
//
// Resolved target: get_place_class_id
// Target address:  0x4F1F20
// GOT/IAT slot:    0x4EDBE8
// Slot symbol:     off_4EDBE8
// Target type:     <no type info>
// ============================================================

void .get_place_class_id(/* see target signature */)
{
    // Tail-call to get_place_class_id via GOT/IAT indirection
    return get_place_class_id(/* forwarded args */);
}

