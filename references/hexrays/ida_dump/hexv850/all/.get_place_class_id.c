// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B740
// Name:            .get_place_class_id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B740 jmp     cs:off_4C0B88
//
// Resolved target: get_place_class_id
// Target address:  0x4C3B90
// GOT/IAT slot:    0x4C0B88
// Slot symbol:     off_4C0B88
// Target type:     <no type info>
// ============================================================

void .get_place_class_id(/* see target signature */)
{
    // Tail-call to get_place_class_id via GOT/IAT indirection
    return get_place_class_id(/* forwarded args */);
}

