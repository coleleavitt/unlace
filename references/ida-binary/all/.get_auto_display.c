// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113880
// Name:            .get_auto_display
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113880 jmp     cs:get_auto_display_ptr
//
// Resolved target: get_auto_display
// Target address:  0x8D4A98
// GOT/IAT slot:    0x8A08E0
// Slot symbol:     get_auto_display_ptr
// Target type:     <no type info>
// ============================================================

void .get_auto_display(/* see target signature */)
{
    // Tail-call to get_auto_display via GOT/IAT indirection
    return get_auto_display(/* forwarded args */);
}

