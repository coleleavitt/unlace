// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AAA0
// Name:            .invoke_plugin
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AAA0 jmp     cs:invoke_plugin_ptr
//
// Resolved target: invoke_plugin
// Target address:  0x8D92F0
// GOT/IAT slot:    0x8A41F0
// Slot symbol:     invoke_plugin_ptr
// Target type:     <no type info>
// ============================================================

void .invoke_plugin(/* see target signature */)
{
    // Tail-call to invoke_plugin via GOT/IAT indirection
    return invoke_plugin(/* forwarded args */);
}

