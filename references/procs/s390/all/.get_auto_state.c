// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x102B0
// Name:            .get_auto_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x102B0 jmp     cs:off_2E140
//
// Resolved target: get_auto_state
// Target address:  0x36DC8
// GOT/IAT slot:    0x2E140
// Slot symbol:     off_2E140
// Target type:     <no type info>
// ============================================================

void .get_auto_state(/* see target signature */)
{
    // Tail-call to get_auto_state via GOT/IAT indirection
    return get_auto_state(/* forwarded args */);
}

