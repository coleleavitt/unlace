// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115750
// Name:            .get_type_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115750 jmp     cs:get_type_ordinal_ptr
//
// Resolved target: get_type_ordinal
// Target address:  0x8D5E48
// GOT/IAT slot:    0x8A1848
// Slot symbol:     get_type_ordinal_ptr
// Target type:     <no type info>
// ============================================================

void .get_type_ordinal(/* see target signature */)
{
    // Tail-call to get_type_ordinal via GOT/IAT indirection
    return get_type_ordinal(/* forwarded args */);
}

