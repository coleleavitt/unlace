// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB140
// Name:            .internal_register_place_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB140 jmp     cs:off_2C7B088
//
// Resolved target: internal_register_place_class
// Target address:  0x4B7B90
// GOT/IAT slot:    0x2C7B088
// Slot symbol:     off_2C7B088
// Target type:     <no type info>
// ============================================================

void .internal_register_place_class(/* see target signature */)
{
    // Tail-call to internal_register_place_class via GOT/IAT indirection
    return internal_register_place_class(/* forwarded args */);
}

