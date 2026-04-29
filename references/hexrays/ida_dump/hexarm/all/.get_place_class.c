// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DC60
// Name:            .get_place_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DC60 jmp     cs:off_4E9618
//
// Resolved target: get_place_class
// Target address:  0x4EC030
// GOT/IAT slot:    0x4E9618
// Slot symbol:     off_4E9618
// Target type:     <no type info>
// ============================================================

void .get_place_class(/* see target signature */)
{
    // Tail-call to get_place_class via GOT/IAT indirection
    return get_place_class(/* forwarded args */);
}

