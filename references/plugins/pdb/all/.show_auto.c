// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D930
// Name:            .show_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D930 jmp     cs:off_B3480
//
// Resolved target: show_auto
// Target address:  0xB3C30
// GOT/IAT slot:    0xB3480
// Slot symbol:     off_B3480
// Target type:     <no type info>
// ============================================================

void .show_auto(/* see target signature */)
{
    // Tail-call to show_auto via GOT/IAT indirection
    return show_auto(/* forwarded args */);
}

