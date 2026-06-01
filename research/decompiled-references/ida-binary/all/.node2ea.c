// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1138A0
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1138A0 jmp     cs:node2ea_ptr
//
// Resolved target: node2ea
// Target address:  0x8D4AB0
// GOT/IAT slot:    0x8A08F0
// Slot symbol:     node2ea_ptr
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

