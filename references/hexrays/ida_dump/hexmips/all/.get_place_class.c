// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC40
// Name:            .get_place_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC40 jmp     cs:off_4CD608
//
// Resolved target: get_place_class
// Target address:  0x4D0020
// GOT/IAT slot:    0x4CD608
// Slot symbol:     off_4CD608
// Target type:     <no type info>
// ============================================================

void .get_place_class(/* see target signature */)
{
    // Tail-call to get_place_class via GOT/IAT indirection
    return get_place_class(/* forwarded args */);
}

