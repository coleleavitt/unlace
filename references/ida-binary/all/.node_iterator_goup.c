// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111F00
// Name:            .node_iterator_goup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111F00 jmp     cs:node_iterator_goup_ptr
//
// Resolved target: node_iterator_goup
// Target address:  0x8D3A28
// GOT/IAT slot:    0x89FC20
// Slot symbol:     node_iterator_goup_ptr
// Target type:     <no type info>
// ============================================================

void .node_iterator_goup(/* see target signature */)
{
    // Tail-call to node_iterator_goup via GOT/IAT indirection
    return node_iterator_goup(/* forwarded args */);
}

