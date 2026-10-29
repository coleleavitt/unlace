// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8750
// Name:            .get_builtin_widgets_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8750 jmp     cs:off_2C79B90
//
// Resolved target: get_builtin_widgets_state
// Target address:  0x6529B0
// GOT/IAT slot:    0x2C79B90
// Slot symbol:     off_2C79B90
// Target type:     <no type info>
// ============================================================

void .get_builtin_widgets_state(/* see target signature */)
{
    // Tail-call to get_builtin_widgets_state via GOT/IAT indirection
    return get_builtin_widgets_state(/* forwarded args */);
}

