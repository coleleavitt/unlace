// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2050
// Name:            .setup_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2050 jmp     cs:off_B010
//
// Resolved target: setup_selector
// Target address:  0xB4A8
// GOT/IAT slot:    0xB010
// Slot symbol:     off_B010
// Target type:     <no type info>
// ============================================================

void .setup_selector(/* see target signature */)
{
    // Tail-call to setup_selector via GOT/IAT indirection
    return setup_selector(/* forwarded args */);
}

