// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA3B0
// Name:            .gen_flow_graph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA3B0 jmp     cs:off_2C7A9C0
//
// Resolved target: gen_flow_graph
// Target address:  0x5DE430
// GOT/IAT slot:    0x2C7A9C0
// Slot symbol:     off_2C7A9C0
// Target type:     <no type info>
// ============================================================

void .gen_flow_graph(/* see target signature */)
{
    // Tail-call to gen_flow_graph via GOT/IAT indirection
    return gen_flow_graph(/* forwarded args */);
}

