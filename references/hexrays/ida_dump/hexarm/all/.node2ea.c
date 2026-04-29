// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D2D0
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D2D0 jmp     cs:off_4E9150
//
// Resolved target: node2ea
// Target address:  0x4EBB40
// GOT/IAT slot:    0x4E9150
// Slot symbol:     off_4E9150
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

