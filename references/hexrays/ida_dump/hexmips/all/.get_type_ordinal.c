// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA30
// Name:            .get_type_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA30 jmp     cs:off_4CD500
//
// Resolved target: get_type_ordinal
// Target address:  0x4CFF08
// GOT/IAT slot:    0x4CD500
// Slot symbol:     off_4CD500
// Target type:     <no type info>
// ============================================================

void .get_type_ordinal(/* see target signature */)
{
    // Tail-call to get_type_ordinal via GOT/IAT indirection
    return get_type_ordinal(/* forwarded args */);
}

