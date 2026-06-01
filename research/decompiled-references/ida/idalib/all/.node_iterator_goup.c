// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7A20
// Name:            .node_iterator_goup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7A20 jmp     cs:off_2C794F8
//
// Resolved target: node_iterator_goup
// Target address:  0x5DA730
// GOT/IAT slot:    0x2C794F8
// Slot symbol:     off_2C794F8
// Target type:     <no type info>
// ============================================================

void .node_iterator_goup(/* see target signature */)
{
    // Tail-call to node_iterator_goup via GOT/IAT indirection
    return node_iterator_goup(/* forwarded args */);
}

