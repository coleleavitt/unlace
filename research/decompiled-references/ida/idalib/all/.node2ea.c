// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8A70
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8A70 jmp     cs:off_2C79D20
//
// Resolved target: node2ea
// Target address:  0x3BDDD0
// GOT/IAT slot:    0x2C79D20
// Slot symbol:     off_2C79D20
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

