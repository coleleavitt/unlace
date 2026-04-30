// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1137E0
// Name:            .setup_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1137E0 jmp     cs:setup_selector_ptr
//
// Resolved target: setup_selector
// Target address:  0x8D4A30
// GOT/IAT slot:    0x8A0890
// Slot symbol:     setup_selector_ptr
// Target type:     <no type info>
// ============================================================

void .setup_selector(/* see target signature */)
{
    // Tail-call to setup_selector via GOT/IAT indirection
    return setup_selector(/* forwarded args */);
}

