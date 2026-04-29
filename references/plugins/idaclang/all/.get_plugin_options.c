// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30D0
// Name:            .get_plugin_options
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30D0 jmp     cs:off_29050
//
// Resolved target: get_plugin_options
// Target address:  0x29400
// GOT/IAT slot:    0x29050
// Slot symbol:     off_29050
// Target type:     <no type info>
// ============================================================

void .get_plugin_options(/* see target signature */)
{
    // Tail-call to get_plugin_options via GOT/IAT indirection
    return get_plugin_options(/* forwarded args */);
}

