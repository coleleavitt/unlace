// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8410
// Name:            .get_current_config
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8410 jmp     cs:off_2C799F0
//
// Resolved target: get_current_config
// Target address:  0x5FF100
// GOT/IAT slot:    0x2C799F0
// Slot symbol:     off_2C799F0
// Target type:     <no type info>
// ============================================================

void .get_current_config(/* see target signature */)
{
    // Tail-call to get_current_config via GOT/IAT indirection
    return get_current_config(/* forwarded args */);
}

