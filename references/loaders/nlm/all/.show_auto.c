// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2270
// Name:            .show_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2270 jmp     cs:off_8120
//
// Resolved target: show_auto
// Target address:  0x8808
// GOT/IAT slot:    0x8120
// Slot symbol:     off_8120
// Target type:     <no type info>
// ============================================================

void .show_auto(/* see target signature */)
{
    // Tail-call to show_auto via GOT/IAT indirection
    return show_auto(/* forwarded args */);
}

