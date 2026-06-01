// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9870
// Name:            .get_place_class_id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9870 jmp     cs:off_2C7A420
//
// Resolved target: get_place_class_id
// Target address:  0x4B79F0
// GOT/IAT slot:    0x2C7A420
// Slot symbol:     off_2C7A420
// Target type:     <no type info>
// ============================================================

void .get_place_class_id(/* see target signature */)
{
    // Tail-call to get_place_class_id via GOT/IAT indirection
    return get_place_class_id(/* forwarded args */);
}

