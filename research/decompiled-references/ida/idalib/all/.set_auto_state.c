// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7DF0
// Name:            .set_auto_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7DF0 jmp     cs:off_2C796E0
//
// Resolved target: set_auto_state
// Target address:  0x3A2ED0
// GOT/IAT slot:    0x2C796E0
// Slot symbol:     off_2C796E0
// Target type:     <no type info>
// ============================================================

void .set_auto_state(/* see target signature */)
{
    // Tail-call to set_auto_state via GOT/IAT indirection
    return set_auto_state(/* forwarded args */);
}

