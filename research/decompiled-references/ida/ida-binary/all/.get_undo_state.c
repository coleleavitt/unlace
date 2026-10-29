// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116460
// Name:            .get_undo_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116460 jmp     cs:get_undo_state_ptr
//
// Resolved target: get_undo_state
// Target address:  0x8D6688
// GOT/IAT slot:    0x8A1ED0
// Slot symbol:     get_undo_state_ptr
// Target type:     <no type info>
// ============================================================

void .get_undo_state(/* see target signature */)
{
    // Tail-call to get_undo_state via GOT/IAT indirection
    return get_undo_state(/* forwarded args */);
}

