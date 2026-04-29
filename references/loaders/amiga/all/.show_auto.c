// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11C0
// Name:            .show_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11C0 jmp     cs:off_50C8
//
// Resolved target: show_auto
// Target address:  0x5200
// GOT/IAT slot:    0x50C8
// Slot symbol:     off_50C8
// Target type:     <no type info>
// ============================================================

void .show_auto(/* see target signature */)
{
    // Tail-call to show_auto via GOT/IAT indirection
    return show_auto(/* forwarded args */);
}

