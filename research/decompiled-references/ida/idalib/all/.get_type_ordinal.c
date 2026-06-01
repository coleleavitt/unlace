// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9D90
// Name:            .get_type_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9D90 jmp     cs:off_2C7A6B0
//
// Resolved target: get_type_ordinal
// Target address:  0x650120
// GOT/IAT slot:    0x2C7A6B0
// Slot symbol:     off_2C7A6B0
// Target type:     <no type info>
// ============================================================

void .get_type_ordinal(/* see target signature */)
{
    // Tail-call to get_type_ordinal via GOT/IAT indirection
    return get_type_ordinal(/* forwarded args */);
}

