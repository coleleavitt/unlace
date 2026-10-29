// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB500
// Name:            .setup_graph_subsystem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB500 jmp     cs:off_2C7B268
//
// Resolved target: setup_graph_subsystem
// Target address:  0x5DAE20
// GOT/IAT slot:    0x2C7B268
// Slot symbol:     off_2C7B268
// Target type:     <no type info>
// ============================================================

void .setup_graph_subsystem(/* see target signature */)
{
    // Tail-call to setup_graph_subsystem via GOT/IAT indirection
    return setup_graph_subsystem(/* forwarded args */);
}

