// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114C50
// Name:            .get_place_class_id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114C50 jmp     cs:get_place_class_id_ptr
//
// Resolved target: get_place_class_id
// Target address:  0x8D57A0
// GOT/IAT slot:    0x8A12C8
// Slot symbol:     get_place_class_id_ptr
// Target type:     <no type info>
// ============================================================

void .get_place_class_id(/* see target signature */)
{
    // Tail-call to get_place_class_id via GOT/IAT indirection
    return get_place_class_id(/* forwarded args */);
}

