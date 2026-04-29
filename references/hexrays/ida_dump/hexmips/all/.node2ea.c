// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A2D0
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A2D0 jmp     cs:off_4CD150
//
// Resolved target: node2ea
// Target address:  0x4CFB40
// GOT/IAT slot:    0x4CD150
// Slot symbol:     off_4CD150
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

