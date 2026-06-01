// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7440
// Name:            .plugin_option_t_get_bool
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7440 jmp     cs:off_2C79208
//
// Resolved target: plugin_option_t_get_bool
// Target address:  0x829020
// GOT/IAT slot:    0x2C79208
// Slot symbol:     off_2C79208
// Target type:     <no type info>
// ============================================================

void .plugin_option_t_get_bool(/* see target signature */)
{
    // Tail-call to plugin_option_t_get_bool via GOT/IAT indirection
    return plugin_option_t_get_bool(/* forwarded args */);
}

