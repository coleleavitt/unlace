// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118000
// Name:            .run_plugin
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118000 jmp     cs:run_plugin_ptr
//
// Resolved target: run_plugin
// Target address:  0x8D7828
// GOT/IAT slot:    0x8A2CA0
// Slot symbol:     run_plugin_ptr
// Target type:     <no type info>
// ============================================================

void .run_plugin(/* see target signature */)
{
    // Tail-call to run_plugin via GOT/IAT indirection
    return run_plugin(/* forwarded args */);
}

