// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113380
// Name:            .get_builtin_widgets_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113380 jmp     cs:get_builtin_widgets_state_ptr
//
// Resolved target: get_builtin_widgets_state
// Target address:  0x8D4760
// GOT/IAT slot:    0x8A0660
// Slot symbol:     get_builtin_widgets_state_ptr
// Target type:     <no type info>
// ============================================================

void .get_builtin_widgets_state(/* see target signature */)
{
    // Tail-call to get_builtin_widgets_state via GOT/IAT indirection
    return get_builtin_widgets_state(/* forwarded args */);
}

