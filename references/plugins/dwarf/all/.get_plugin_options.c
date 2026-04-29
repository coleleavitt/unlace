// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA1E0
// Name:            .get_plugin_options
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA1E0 jmp     cs:off_CA0D8
//
// Resolved target: get_plugin_options
// Target address:  0xD0A08
// GOT/IAT slot:    0xCA0D8
// Slot symbol:     off_CA0D8
// Target type:     <no type info>
// ============================================================

void .get_plugin_options(/* see target signature */)
{
    // Tail-call to get_plugin_options via GOT/IAT indirection
    return get_plugin_options(/* forwarded args */);
}

