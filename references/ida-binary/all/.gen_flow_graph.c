// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116190
// Name:            .gen_flow_graph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116190 jmp     cs:gen_flow_graph_ptr
//
// Resolved target: gen_flow_graph
// Target address:  0x8D64D0
// GOT/IAT slot:    0x8A1D68
// Slot symbol:     gen_flow_graph_ptr
// Target type:     <no type info>
// ============================================================

void .gen_flow_graph(/* see target signature */)
{
    // Tail-call to gen_flow_graph via GOT/IAT indirection
    return gen_flow_graph(/* forwarded args */);
}

