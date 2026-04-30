// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117F20
// Name:            .get_config_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117F20 jmp     cs:get_config_value_ptr
//
// Resolved target: get_config_value
// Target address:  0x8D7790
// GOT/IAT slot:    0x8A2C30
// Slot symbol:     get_config_value_ptr
// Target type:     <no type info>
// ============================================================

void .get_config_value(/* see target signature */)
{
    // Tail-call to get_config_value via GOT/IAT indirection
    return get_config_value(/* forwarded args */);
}

