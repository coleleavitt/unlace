// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1173E0
// Name:            .get_debugger_plugins
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1173E0 jmp     cs:get_debugger_plugins_ptr
//
// Resolved target: get_debugger_plugins
// Target address:  0x8D7070
// GOT/IAT slot:    0x8A2690
// Slot symbol:     get_debugger_plugins_ptr
// Target type:     <no type info>
// ============================================================

void .get_debugger_plugins(/* see target signature */)
{
    // Tail-call to get_debugger_plugins via GOT/IAT indirection
    return get_debugger_plugins(/* forwarded args */);
}

