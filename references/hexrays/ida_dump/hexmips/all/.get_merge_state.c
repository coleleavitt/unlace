// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BAE0
// Name:            .get_merge_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BAE0 jmp     cs:off_4CDD58
//
// Resolved target: get_merge_state
// Target address:  0x4D0798
// GOT/IAT slot:    0x4CDD58
// Slot symbol:     off_4CDD58
// Target type:     <no type info>
// ============================================================

void .get_merge_state(/* see target signature */)
{
    // Tail-call to get_merge_state via GOT/IAT indirection
    return get_merge_state(/* forwarded args */);
}

