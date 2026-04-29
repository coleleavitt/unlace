// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EB10
// Name:            .get_merge_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EB10 jmp     cs:off_4E9D70
//
// Resolved target: get_merge_state
// Target address:  0x4EC7B0
// GOT/IAT slot:    0x4E9D70
// Slot symbol:     off_4E9D70
// Target type:     <no type info>
// ============================================================

void .get_merge_state(/* see target signature */)
{
    // Tail-call to get_merge_state via GOT/IAT indirection
    return get_merge_state(/* forwarded args */);
}

