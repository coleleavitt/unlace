// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC60
// Name:            .node_iterator_goup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC60 jmp     cs:off_4ED618
//
// Resolved target: node_iterator_goup
// Target address:  0x4F1920
// GOT/IAT slot:    0x4ED618
// Slot symbol:     off_4ED618
// Target type:     <no type info>
// ============================================================

void .node_iterator_goup(/* see target signature */)
{
    // Tail-call to node_iterator_goup via GOT/IAT indirection
    return node_iterator_goup(/* forwarded args */);
}

