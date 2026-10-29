// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A89E0
// Name:            .setup_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A89E0 jmp     cs:off_2C79CD8
//
// Resolved target: setup_selector
// Target address:  0x684C50
// GOT/IAT slot:    0x2C79CD8
// Slot symbol:     off_2C79CD8
// Target type:     <no type info>
// ============================================================

void .setup_selector(/* see target signature */)
{
    // Tail-call to setup_selector via GOT/IAT indirection
    return setup_selector(/* forwarded args */);
}

