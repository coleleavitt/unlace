// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x24C0
// Name:            .show_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x24C0 jmp     cs:off_B248
//
// Resolved target: show_auto
// Target address:  0xB6E8
// GOT/IAT slot:    0xB248
// Slot symbol:     off_B248
// Target type:     <no type info>
// ============================================================

void .show_auto(/* see target signature */)
{
    // Tail-call to show_auto via GOT/IAT indirection
    return show_auto(/* forwarded args */);
}

