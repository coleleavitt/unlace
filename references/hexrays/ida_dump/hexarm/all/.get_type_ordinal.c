// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DA50
// Name:            .get_type_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DA50 jmp     cs:off_4E9510
//
// Resolved target: get_type_ordinal
// Target address:  0x4EBF18
// GOT/IAT slot:    0x4E9510
// Slot symbol:     off_4E9510
// Target type:     <no type info>
// ============================================================

void .get_type_ordinal(/* see target signature */)
{
    // Tail-call to get_type_ordinal via GOT/IAT indirection
    return get_type_ordinal(/* forwarded args */);
}

