// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5DA730
// Name:            node_iterator_goup
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x5DA730 jmp     node_iterator_goup_0
//
// Resolved target: node_iterator_goup_0
// Target address:  0x5DA6E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     _QWORD *__fastcall(_QWORD *)
// ============================================================

/* see target sig */ node_iterator_goup(/* see target signature */)
{
    // Tail-call to node_iterator_goup_0 via direct jump indirection
    return node_iterator_goup_0(/* forwarded args */);
}

