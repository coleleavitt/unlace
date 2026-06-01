// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112260
// Name:            .mark_builtin_widgets
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112260 jmp     cs:mark_builtin_widgets_ptr
//
// Resolved target: mark_builtin_widgets
// Target address:  0x8D3C40
// GOT/IAT slot:    0x89FDD0
// Slot symbol:     mark_builtin_widgets_ptr
// Target type:     <no type info>
// ============================================================

void .mark_builtin_widgets(/* see target signature */)
{
    // Tail-call to mark_builtin_widgets via GOT/IAT indirection
    return mark_builtin_widgets(/* forwarded args */);
}

