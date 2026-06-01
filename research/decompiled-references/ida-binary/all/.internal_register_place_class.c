// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117950
// Name:            .internal_register_place_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117950 jmp     cs:internal_register_place_class_ptr
//
// Resolved target: internal_register_place_class
// Target address:  0x8D73D0
// GOT/IAT slot:    0x8A2948
// Slot symbol:     internal_register_place_class_ptr
// Target type:     <no type info>
// ============================================================

void .internal_register_place_class(/* see target signature */)
{
    // Tail-call to internal_register_place_class via GOT/IAT indirection
    return internal_register_place_class(/* forwarded args */);
}

