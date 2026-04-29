// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x55D0
// Name:            .get_auto_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x55D0 jmp     cs:off_152D0
//
// Resolved target: get_auto_state
// Target address:  0x16370
// GOT/IAT slot:    0x152D0
// Slot symbol:     off_152D0
// Target type:     <no type info>
// ============================================================

void .get_auto_state(/* see target signature */)
{
    // Tail-call to get_auto_state via GOT/IAT indirection
    return get_auto_state(/* forwarded args */);
}

