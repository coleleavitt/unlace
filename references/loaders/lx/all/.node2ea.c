// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2080
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2080 jmp     cs:off_B028
//
// Resolved target: node2ea
// Target address:  0xB2D0
// GOT/IAT slot:    0xB028
// Slot symbol:     off_B028
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

