// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BAD0
// Name:            .get_merge_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BAD0 jmp     cs:off_4BFD50
//
// Resolved target: get_merge_state
// Target address:  0x4C3268
// GOT/IAT slot:    0x4BFD50
// Slot symbol:     off_4BFD50
// Target type:     <no type info>
// ============================================================

void .get_merge_state(/* see target signature */)
{
    // Tail-call to get_merge_state via GOT/IAT indirection
    return get_merge_state(/* forwarded args */);
}

