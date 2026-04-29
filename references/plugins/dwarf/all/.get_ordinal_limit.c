// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA3B0
// Name:            .get_ordinal_limit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA3B0 jmp     cs:off_CA1C0
//
// Resolved target: get_ordinal_limit
// Target address:  0xD0AF0
// GOT/IAT slot:    0xCA1C0
// Slot symbol:     off_CA1C0
// Target type:     <no type info>
// ============================================================

void .get_ordinal_limit(/* see target signature */)
{
    // Tail-call to get_ordinal_limit via GOT/IAT indirection
    return get_ordinal_limit(/* forwarded args */);
}

