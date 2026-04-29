// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BDD0
// Name:            .get_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BDD0 jmp     cs:off_4C0ED0
//
// Resolved target: get_named_type
// Target address:  0x4C3EF8
// GOT/IAT slot:    0x4C0ED0
// Slot symbol:     off_4C0ED0
// Target type:     <no type info>
// ============================================================

void .get_named_type(/* see target signature */)
{
    // Tail-call to get_named_type via GOT/IAT indirection
    return get_named_type(/* forwarded args */);
}

