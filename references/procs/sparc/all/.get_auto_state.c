// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7670
// Name:            .get_auto_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7670 jmp     cs:off_19320
//
// Resolved target: get_auto_state
// Target address:  0x19860
// GOT/IAT slot:    0x19320
// Slot symbol:     off_19320
// Target type:     <no type info>
// ============================================================

void .get_auto_state(/* see target signature */)
{
    // Tail-call to get_auto_state via GOT/IAT indirection
    return get_auto_state(/* forwarded args */);
}

