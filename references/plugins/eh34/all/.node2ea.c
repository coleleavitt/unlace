// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60B0
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60B0 jmp     cs:off_8D040
//
// Resolved target: node2ea
// Target address:  0x8D5C0
// GOT/IAT slot:    0x8D040
// Slot symbol:     off_8D040
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

