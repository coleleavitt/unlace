// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2090
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2090 jmp     cs:off_B030
//
// Resolved target: node2ea
// Target address:  0xB2C8
// GOT/IAT slot:    0xB030
// Slot symbol:     off_B030
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

