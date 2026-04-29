// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E920
// Name:            .show_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E920 jmp     cs:off_4E9C78
//
// Resolved target: show_auto
// Target address:  0x4EC6B0
// GOT/IAT slot:    0x4E9C78
// Slot symbol:     off_4E9C78
// Target type:     <no type info>
// ============================================================

void .show_auto(/* see target signature */)
{
    // Tail-call to show_auto via GOT/IAT indirection
    return show_auto(/* forwarded args */);
}

