// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115F60
// Name:            .get_merge_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115F60 jmp     cs:get_merge_state_ptr
//
// Resolved target: get_merge_state
// Target address:  0x8D6368
// GOT/IAT slot:    0x8A1C50
// Slot symbol:     get_merge_state_ptr
// Target type:     <no type info>
// ============================================================

void .get_merge_state(/* see target signature */)
{
    // Tail-call to get_merge_state via GOT/IAT indirection
    return get_merge_state(/* forwarded args */);
}

