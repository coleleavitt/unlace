// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC600
// Name:            .show_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC600 jmp     cs:off_2C7BAE8
//
// Resolved target: show_auto
// Target address:  0x3A2520
// GOT/IAT slot:    0x2C7BAE8
// Slot symbol:     off_2C7BAE8
// Target type:     <no type info>
// ============================================================

void .show_auto(/* see target signature */)
{
    // Tail-call to show_auto via GOT/IAT indirection
    return show_auto(/* forwarded args */);
}

