// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1192C0
// Name:            .get_ordinal_limit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1192C0 jmp     cs:get_ordinal_limit_ptr
//
// Resolved target: get_ordinal_limit
// Target address:  0x8D8390
// GOT/IAT slot:    0x8A3600
// Slot symbol:     get_ordinal_limit_ptr
// Target type:     <no type info>
// ============================================================

void .get_ordinal_limit(/* see target signature */)
{
    // Tail-call to get_ordinal_limit via GOT/IAT indirection
    return get_ordinal_limit(/* forwarded args */);
}

