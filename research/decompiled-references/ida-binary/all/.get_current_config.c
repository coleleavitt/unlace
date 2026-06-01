// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112EF0
// Name:            .get_current_config
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112EF0 jmp     cs:get_current_config_ptr
//
// Resolved target: get_current_config
// Target address:  0x8D4470
// GOT/IAT slot:    0x8A0418
// Slot symbol:     get_current_config_ptr
// Target type:     <no type info>
// ============================================================

void .get_current_config(/* see target signature */)
{
    // Tail-call to get_current_config via GOT/IAT indirection
    return get_current_config(/* forwarded args */);
}

