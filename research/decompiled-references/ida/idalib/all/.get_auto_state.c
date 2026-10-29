// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7500
// Name:            .get_auto_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7500 jmp     cs:off_2C79268
//
// Resolved target: get_auto_state
// Target address:  0x3A17F0
// GOT/IAT slot:    0x2C79268
// Slot symbol:     off_2C79268
// Target type:     <no type info>
// ============================================================

void .get_auto_state(/* see target signature */)
{
    // Tail-call to get_auto_state via GOT/IAT indirection
    return get_auto_state(/* forwarded args */);
}

