// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CBD0
// Name:            .get_merge_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CBD0 jmp     cs:off_4EDDD0
//
// Resolved target: get_merge_state
// Target address:  0x4F2110
// GOT/IAT slot:    0x4EDDD0
// Slot symbol:     off_4EDDD0
// Target type:     <no type info>
// ============================================================

void .get_merge_state(/* see target signature */)
{
    // Tail-call to get_merge_state via GOT/IAT indirection
    return get_merge_state(/* forwarded args */);
}

