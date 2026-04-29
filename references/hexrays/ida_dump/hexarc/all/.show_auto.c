// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8C0
// Name:            .show_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8C0 jmp     cs:off_4B9C48
//
// Resolved target: show_auto
// Target address:  0x4BC660
// GOT/IAT slot:    0x4B9C48
// Slot symbol:     off_4B9C48
// Target type:     <no type info>
// ============================================================

void .show_auto(/* see target signature */)
{
    // Tail-call to show_auto via GOT/IAT indirection
    return show_auto(/* forwarded args */);
}

