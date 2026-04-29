// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B730
// Name:            .get_place_class_id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B730 jmp     cs:off_4BFB80
//
// Resolved target: get_place_class_id
// Target address:  0x4C3088
// GOT/IAT slot:    0x4BFB80
// Slot symbol:     off_4BFB80
// Target type:     <no type info>
// ============================================================

void .get_place_class_id(/* see target signature */)
{
    // Tail-call to get_place_class_id via GOT/IAT indirection
    return get_place_class_id(/* forwarded args */);
}

