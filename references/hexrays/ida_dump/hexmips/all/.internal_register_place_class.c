// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A170
// Name:            .internal_register_place_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A170 jmp     cs:off_4CD0A0
//
// Resolved target: internal_register_place_class
// Target address:  0x4CFA90
// GOT/IAT slot:    0x4CD0A0
// Slot symbol:     off_4CD0A0
// Target type:     <no type info>
// ============================================================

void .internal_register_place_class(/* see target signature */)
{
    // Tail-call to internal_register_place_class via GOT/IAT indirection
    return internal_register_place_class(/* forwarded args */);
}

