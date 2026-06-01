// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117660
// Name:            .set_bpt_ui_interface
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117660 jmp     cs:set_bpt_ui_interface_ptr
//
// Resolved target: set_bpt_ui_interface
// Target address:  0x8D71F8
// GOT/IAT slot:    0x8A27D0
// Slot symbol:     set_bpt_ui_interface_ptr
// Target type:     <no type info>
// ============================================================

void .set_bpt_ui_interface(/* see target signature */)
{
    // Tail-call to set_bpt_ui_interface via GOT/IAT indirection
    return set_bpt_ui_interface(/* forwarded args */);
}

