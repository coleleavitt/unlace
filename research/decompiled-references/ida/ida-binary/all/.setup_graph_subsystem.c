// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117EF0
// Name:            .setup_graph_subsystem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117EF0 jmp     cs:setup_graph_subsystem_ptr
//
// Resolved target: setup_graph_subsystem
// Target address:  0x8D7778
// GOT/IAT slot:    0x8A2C18
// Slot symbol:     setup_graph_subsystem_ptr
// Target type:     <no type info>
// ============================================================

void .setup_graph_subsystem(/* see target signature */)
{
    // Tail-call to setup_graph_subsystem via GOT/IAT indirection
    return setup_graph_subsystem(/* forwarded args */);
}

