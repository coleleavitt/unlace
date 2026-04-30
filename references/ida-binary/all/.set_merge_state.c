// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118310
// Name:            .set_merge_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118310 jmp     cs:set_merge_state_ptr
//
// Resolved target: set_merge_state
// Target address:  0x8D79F8
// GOT/IAT slot:    0x8A2E28
// Slot symbol:     set_merge_state_ptr
// Target type:     <no type info>
// ============================================================

void .set_merge_state(/* see target signature */)
{
    // Tail-call to set_merge_state via GOT/IAT indirection
    return set_merge_state(/* forwarded args */);
}

