// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B9C0
// Name:            .get_ordinal_limit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B9C0 jmp     cs:off_4ED4C8
//
// Resolved target: get_ordinal_limit
// Target address:  0x4F17C8
// GOT/IAT slot:    0x4ED4C8
// Slot symbol:     off_4ED4C8
// Target type:     <no type info>
// ============================================================

void .get_ordinal_limit(/* see target signature */)
{
    // Tail-call to get_ordinal_limit via GOT/IAT indirection
    return get_ordinal_limit(/* forwarded args */);
}

