// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B750
// Name:            .find_plugin
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B750 jmp     cs:find_plugin_ptr
//
// Resolved target: find_plugin
// Target address:  0x8D9AC8
// GOT/IAT slot:    0x8A4848
// Slot symbol:     find_plugin_ptr
// Target type:     <no type info>
// ============================================================

void .find_plugin(/* see target signature */)
{
    // Tail-call to find_plugin via GOT/IAT indirection
    return find_plugin(/* forwarded args */);
}

