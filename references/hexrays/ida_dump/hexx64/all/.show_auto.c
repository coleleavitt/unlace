// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C9D0
// Name:            .show_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C9D0 jmp     cs:off_4EDCD0
//
// Resolved target: show_auto
// Target address:  0x4F2008
// GOT/IAT slot:    0x4EDCD0
// Slot symbol:     off_4EDCD0
// Target type:     <no type info>
// ============================================================

void .show_auto(/* see target signature */)
{
    // Tail-call to show_auto via GOT/IAT indirection
    return show_auto(/* forwarded args */);
}

