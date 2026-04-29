// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B8E0
// Name:            .show_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B8E0 jmp     cs:off_4BFC58
//
// Resolved target: show_auto
// Target address:  0x4C3168
// GOT/IAT slot:    0x4BFC58
// Slot symbol:     off_4BFC58
// Target type:     <no type info>
// ============================================================

void .show_auto(/* see target signature */)
{
    // Tail-call to show_auto via GOT/IAT indirection
    return show_auto(/* forwarded args */);
}

