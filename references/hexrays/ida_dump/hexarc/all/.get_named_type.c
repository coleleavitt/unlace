// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADA0
// Name:            .get_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADA0 jmp     cs:off_4B9EB8
//
// Resolved target: get_named_type
// Target address:  0x4BC8E8
// GOT/IAT slot:    0x4B9EB8
// Slot symbol:     off_4B9EB8
// Target type:     <no type info>
// ============================================================

void .get_named_type(/* see target signature */)
{
    // Tail-call to get_named_type via GOT/IAT indirection
    return get_named_type(/* forwarded args */);
}

