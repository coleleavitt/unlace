// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC90
// Name:            .get_place_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC90 jmp     cs:off_4ED630
//
// Resolved target: get_place_class
// Target address:  0x4F1940
// GOT/IAT slot:    0x4ED630
// Slot symbol:     off_4ED630
// Target type:     <no type info>
// ============================================================

void .get_place_class(/* see target signature */)
{
    // Tail-call to get_place_class via GOT/IAT indirection
    return get_place_class(/* forwarded args */);
}

