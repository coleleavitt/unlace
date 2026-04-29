// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20170
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20170 jmp     cs:off_950A0
//
// Resolved target: node2ea
// Target address:  0x95AD0
// GOT/IAT slot:    0x950A0
// Slot symbol:     off_950A0
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

