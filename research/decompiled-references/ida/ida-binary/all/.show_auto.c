// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119A50
// Name:            .show_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119A50 jmp     cs:show_auto_ptr
//
// Resolved target: show_auto
// Target address:  0x8D8888
// GOT/IAT slot:    0x8A39C8
// Slot symbol:     show_auto_ptr
// Target type:     <no type info>
// ============================================================

void .show_auto(/* see target signature */)
{
    // Tail-call to show_auto via GOT/IAT indirection
    return show_auto(/* forwarded args */);
}

