// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AABF0
// Name:            .get_type_by_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AABF0 jmp     cs:off_2C7ADE0
//
// Resolved target: get_type_by_tid
// Target address:  0x6BDD10
// GOT/IAT slot:    0x2C7ADE0
// Slot symbol:     off_2C7ADE0
// Target type:     <no type info>
// ============================================================

void .get_type_by_tid(/* see target signature */)
{
    // Tail-call to get_type_by_tid via GOT/IAT indirection
    return get_type_by_tid(/* forwarded args */);
}

