// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114BB0
// Name:            .get_place_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114BB0 jmp     cs:get_place_class_ptr
//
// Resolved target: get_place_class
// Target address:  0x8D5738
// GOT/IAT slot:    0x8A1278
// Slot symbol:     get_place_class_ptr
// Target type:     <no type info>
// ============================================================

void .get_place_class(/* see target signature */)
{
    // Tail-call to get_place_class via GOT/IAT indirection
    return get_place_class(/* forwarded args */);
}

