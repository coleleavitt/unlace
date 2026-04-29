// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC10
// Name:            .node_iterator_goup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC10 jmp     cs:off_4C05F0
//
// Resolved target: node_iterator_goup
// Target address:  0x4C35D8
// GOT/IAT slot:    0x4C05F0
// Slot symbol:     off_4C05F0
// Target type:     <no type info>
// ============================================================

void .node_iterator_goup(/* see target signature */)
{
    // Tail-call to node_iterator_goup via GOT/IAT indirection
    return node_iterator_goup(/* forwarded args */);
}

