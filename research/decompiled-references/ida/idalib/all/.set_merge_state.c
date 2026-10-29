// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB800
// Name:            .set_merge_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB800 jmp     cs:off_2C7B3E8
//
// Resolved target: set_merge_state
// Target address:  0x457920
// GOT/IAT slot:    0x2C7B3E8
// Slot symbol:     off_2C7B3E8
// Target type:     <no type info>
// ============================================================

void .set_merge_state(/* see target signature */)
{
    // Tail-call to set_merge_state via GOT/IAT indirection
    return set_merge_state(/* forwarded args */);
}

