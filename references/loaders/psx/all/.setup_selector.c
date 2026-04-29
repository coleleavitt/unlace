// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2030
// Name:            .setup_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2030 jmp     cs:off_A000
//
// Resolved target: setup_selector
// Target address:  0xA2B0
// GOT/IAT slot:    0xA000
// Slot symbol:     off_A000
// Target type:     <no type info>
// ============================================================

void .setup_selector(/* see target signature */)
{
    // Tail-call to setup_selector via GOT/IAT indirection
    return setup_selector(/* forwarded args */);
}

