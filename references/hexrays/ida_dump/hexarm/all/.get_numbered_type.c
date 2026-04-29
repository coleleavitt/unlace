// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E760
// Name:            .get_numbered_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E760 jmp     cs:off_4E9B98
//
// Resolved target: get_numbered_type
// Target address:  0x4EC5C0
// GOT/IAT slot:    0x4E9B98
// Slot symbol:     off_4E9B98
// Target type:     <no type info>
// ============================================================

void .get_numbered_type(/* see target signature */)
{
    // Tail-call to get_numbered_type via GOT/IAT indirection
    return get_numbered_type(/* forwarded args */);
}

