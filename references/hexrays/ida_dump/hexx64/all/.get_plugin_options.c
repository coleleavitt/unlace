// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B570
// Name:            .get_plugin_options
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B570 jmp     cs:off_4ED2A0
//
// Resolved target: get_plugin_options
// Target address:  0x4F1598
// GOT/IAT slot:    0x4ED2A0
// Slot symbol:     off_4ED2A0
// Target type:     <no type info>
// ============================================================

void .get_plugin_options(/* see target signature */)
{
    // Tail-call to get_plugin_options via GOT/IAT indirection
    return get_plugin_options(/* forwarded args */);
}

