// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A560
// Name:            .get_plugin_options
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A560 jmp     cs:off_4CD298
//
// Resolved target: get_plugin_options
// Target address:  0x4CFC88
// GOT/IAT slot:    0x4CD298
// Slot symbol:     off_4CD298
// Target type:     <no type info>
// ============================================================

void .get_plugin_options(/* see target signature */)
{
    // Tail-call to get_plugin_options via GOT/IAT indirection
    return get_plugin_options(/* forwarded args */);
}

