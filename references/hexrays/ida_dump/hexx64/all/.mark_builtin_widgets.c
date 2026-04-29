// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B360
// Name:            .mark_builtin_widgets
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B360 jmp     cs:off_4ED198
//
// Resolved target: mark_builtin_widgets
// Target address:  0x4F1490
// GOT/IAT slot:    0x4ED198
// Slot symbol:     off_4ED198
// Target type:     <no type info>
// ============================================================

void .mark_builtin_widgets(/* see target signature */)
{
    // Tail-call to mark_builtin_widgets via GOT/IAT indirection
    return mark_builtin_widgets(/* forwarded args */);
}

