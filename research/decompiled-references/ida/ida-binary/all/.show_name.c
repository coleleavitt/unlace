// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113180
// Name:            .show_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113180 jmp     cs:show_name_ptr
//
// Resolved target: show_name
// Target address:  0x8D4610
// GOT/IAT slot:    0x8A0560
// Slot symbol:     show_name_ptr
// Target type:     <no type info>
// ============================================================

void .show_name(/* see target signature */)
{
    // Tail-call to show_name via GOT/IAT indirection
    return show_name(/* forwarded args */);
}

