// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B8F0
// Name:            .show_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B8F0 jmp     cs:off_4CDC60
//
// Resolved target: show_auto
// Target address:  0x4D0698
// GOT/IAT slot:    0x4CDC60
// Slot symbol:     off_4CDC60
// Target type:     <no type info>
// ============================================================

void .show_auto(/* see target signature */)
{
    // Tail-call to show_auto via GOT/IAT indirection
    return show_auto(/* forwarded args */);
}

