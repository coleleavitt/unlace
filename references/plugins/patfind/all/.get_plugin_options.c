// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20B0
// Name:            .get_plugin_options
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20B0 jmp     cs:off_13040
//
// Resolved target: get_plugin_options
// Target address:  0x132D8
// GOT/IAT slot:    0x13040
// Slot symbol:     off_13040
// Target type:     <no type info>
// ============================================================

void .get_plugin_options(/* see target signature */)
{
    // Tail-call to get_plugin_options via GOT/IAT indirection
    return get_plugin_options(/* forwarded args */);
}

