// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9830
// Name:            .get_place_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9830 jmp     cs:off_2C7A400
//
// Resolved target: get_place_class
// Target address:  0x4B7C80
// GOT/IAT slot:    0x2C7A400
// Slot symbol:     off_2C7A400
// Target type:     <no type info>
// ============================================================

void .get_place_class(/* see target signature */)
{
    // Tail-call to get_place_class via GOT/IAT indirection
    return get_place_class(/* forwarded args */);
}

