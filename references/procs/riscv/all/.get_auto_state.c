// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA890
// Name:            .get_auto_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA890 jmp     cs:off_35430
//
// Resolved target: get_auto_state
// Target address:  0x35A90
// GOT/IAT slot:    0x35430
// Slot symbol:     off_35430
// Target type:     <no type info>
// ============================================================

void .get_auto_state(/* see target signature */)
{
    // Tail-call to get_auto_state via GOT/IAT indirection
    return get_auto_state(/* forwarded args */);
}

