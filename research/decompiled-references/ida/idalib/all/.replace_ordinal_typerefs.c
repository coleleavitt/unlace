// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9360
// Name:            .replace_ordinal_typerefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9360 jmp     cs:off_2C7A198
//
// Resolved target: replace_ordinal_typerefs
// Target address:  0x6ABBD0
// GOT/IAT slot:    0x2C7A198
// Slot symbol:     off_2C7A198
// Target type:     <no type info>
// ============================================================

void .replace_ordinal_typerefs(/* see target signature */)
{
    // Tail-call to replace_ordinal_typerefs via GOT/IAT indirection
    return replace_ordinal_typerefs(/* forwarded args */);
}

