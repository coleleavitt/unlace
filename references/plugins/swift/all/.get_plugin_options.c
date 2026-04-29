// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4170
// Name:            .get_plugin_options
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4170 jmp     cs:off_280A0
//
// Resolved target: get_plugin_options
// Target address:  0x29A38
// GOT/IAT slot:    0x280A0
// Slot symbol:     off_280A0
// Target type:     <no type info>
// ============================================================

void .get_plugin_options(/* see target signature */)
{
    // Tail-call to get_plugin_options via GOT/IAT indirection
    return get_plugin_options(/* forwarded args */);
}

