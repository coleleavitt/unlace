// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29350
// Name:            .mark_builtin_widgets
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29350 jmp     cs:off_4B9190
//
// Resolved target: mark_builtin_widgets
// Target address:  0x4BBB60
// GOT/IAT slot:    0x4B9190
// Slot symbol:     off_4B9190
// Target type:     <no type info>
// ============================================================

void .mark_builtin_widgets(/* see target signature */)
{
    // Tail-call to mark_builtin_widgets via GOT/IAT indirection
    return mark_builtin_widgets(/* forwarded args */);
}

