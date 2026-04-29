// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xABB0
// Name:            .get_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xABB0 jmp     cs:off_CA5C0
//
// Resolved target: get_named_type
// Target address:  0xD0F18
// GOT/IAT slot:    0xCA5C0
// Slot symbol:     off_CA5C0
// Target type:     <no type info>
// ============================================================

void .get_named_type(/* see target signature */)
{
    // Tail-call to get_named_type via GOT/IAT indirection
    return get_named_type(/* forwarded args */);
}

