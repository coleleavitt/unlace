// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B0
// Name:            .show_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B0 jmp     cs:off_50C0
//
// Resolved target: show_auto
// Target address:  0x5298
// GOT/IAT slot:    0x50C0
// Slot symbol:     off_50C0
// Target type:     <no type info>
// ============================================================

void .show_auto(/* see target signature */)
{
    // Tail-call to show_auto via GOT/IAT indirection
    return show_auto(/* forwarded args */);
}

