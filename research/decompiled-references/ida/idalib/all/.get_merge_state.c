// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA270
// Name:            .get_merge_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA270 jmp     cs:off_2C7A920
//
// Resolved target: get_merge_state
// Target address:  0x4576C0
// GOT/IAT slot:    0x2C7A920
// Slot symbol:     off_2C7A920
// Target type:     <no type info>
// ============================================================

void .get_merge_state(/* see target signature */)
{
    // Tail-call to get_merge_state via GOT/IAT indirection
    return get_merge_state(/* forwarded args */);
}

