// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29C10
// Name:            .node_iterator_goup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29C10 jmp     cs:off_4B95F0
//
// Resolved target: node_iterator_goup
// Target address:  0x4BBFE0
// GOT/IAT slot:    0x4B95F0
// Slot symbol:     off_4B95F0
// Target type:     <no type info>
// ============================================================

void .node_iterator_goup(/* see target signature */)
{
    // Tail-call to node_iterator_goup via GOT/IAT indirection
    return node_iterator_goup(/* forwarded args */);
}

