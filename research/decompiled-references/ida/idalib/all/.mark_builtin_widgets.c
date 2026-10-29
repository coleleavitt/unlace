// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7C30
// Name:            .mark_builtin_widgets
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7C30 jmp     cs:off_2C79600
//
// Resolved target: mark_builtin_widgets
// Target address:  0x651150
// GOT/IAT slot:    0x2C79600
// Slot symbol:     off_2C79600
// Target type:     <no type info>
// ============================================================

void .mark_builtin_widgets(/* see target signature */)
{
    // Tail-call to mark_builtin_widgets via GOT/IAT indirection
    return mark_builtin_widgets(/* forwarded args */);
}

