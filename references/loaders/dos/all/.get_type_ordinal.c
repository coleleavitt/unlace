// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2220
// Name:            .get_type_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2220 jmp     cs:off_B0F8
//
// Resolved target: get_type_ordinal
// Target address:  0xB590
// GOT/IAT slot:    0xB0F8
// Slot symbol:     off_B0F8
// Target type:     <no type info>
// ============================================================

void .get_type_ordinal(/* see target signature */)
{
    // Tail-call to get_type_ordinal via GOT/IAT indirection
    return get_type_ordinal(/* forwarded args */);
}

