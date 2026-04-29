// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DC30
// Name:            .node_iterator_goup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DC30 jmp     cs:off_4E9600
//
// Resolved target: node_iterator_goup
// Target address:  0x4EC010
// GOT/IAT slot:    0x4E9600
// Slot symbol:     off_4E9600
// Target type:     <no type info>
// ============================================================

void .node_iterator_goup(/* see target signature */)
{
    // Tail-call to node_iterator_goup via GOT/IAT indirection
    return node_iterator_goup(/* forwarded args */);
}

