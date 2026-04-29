// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20CC0
// Name:            .get_auto_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20CC0 jmp     cs:off_95648
//
// Resolved target: get_auto_state
// Target address:  0x96090
// GOT/IAT slot:    0x95648
// Slot symbol:     off_95648
// Target type:     <no type info>
// ============================================================

void .get_auto_state(/* see target signature */)
{
    // Tail-call to get_auto_state via GOT/IAT indirection
    return get_auto_state(/* forwarded args */);
}

