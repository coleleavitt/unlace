// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D9A0
// Name:            .get_ordinal_limit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D9A0 jmp     cs:off_4E94B8
//
// Resolved target: get_ordinal_limit
// Target address:  0x4EBEC0
// GOT/IAT slot:    0x4E94B8
// Slot symbol:     off_4E94B8
// Target type:     <no type info>
// ============================================================

void .get_ordinal_limit(/* see target signature */)
{
    // Tail-call to get_ordinal_limit via GOT/IAT indirection
    return get_ordinal_limit(/* forwarded args */);
}

