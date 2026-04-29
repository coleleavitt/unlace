// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A710
// Name:            .get_place_class_id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A710 jmp     cs:off_4B9B70
//
// Resolved target: get_place_class_id
// Target address:  0x4BC580
// GOT/IAT slot:    0x4B9B70
// Slot symbol:     off_4B9B70
// Target type:     <no type info>
// ============================================================

void .get_place_class_id(/* see target signature */)
{
    // Tail-call to get_place_class_id via GOT/IAT indirection
    return get_place_class_id(/* forwarded args */);
}

