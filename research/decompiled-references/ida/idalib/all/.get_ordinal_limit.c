// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC290
// Name:            .get_ordinal_limit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC290 jmp     cs:off_2C7B930
//
// Resolved target: get_ordinal_limit
// Target address:  0x64E070
// GOT/IAT slot:    0x2C7B930
// Slot symbol:     off_2C7B930
// Target type:     <no type info>
// ============================================================

void .get_ordinal_limit(/* see target signature */)
{
    // Tail-call to get_ordinal_limit via GOT/IAT indirection
    return get_ordinal_limit(/* forwarded args */);
}

