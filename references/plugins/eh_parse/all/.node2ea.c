// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6100
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6100 jmp     cs:off_2F068
//
// Resolved target: node2ea
// Target address:  0x2F6D8
// GOT/IAT slot:    0x2F068
// Slot symbol:     off_2F068
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

