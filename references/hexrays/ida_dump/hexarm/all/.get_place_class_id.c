// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E770
// Name:            .get_place_class_id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E770 jmp     cs:off_4E9BA0
//
// Resolved target: get_place_class_id
// Target address:  0x4EC5D0
// GOT/IAT slot:    0x4E9BA0
// Slot symbol:     off_4E9BA0
// Target type:     <no type info>
// ============================================================

void .get_place_class_id(/* see target signature */)
{
    // Tail-call to get_place_class_id via GOT/IAT indirection
    return get_place_class_id(/* forwarded args */);
}

