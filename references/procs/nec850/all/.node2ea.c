// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x90D0
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x90D0 jmp     cs:off_2E050
//
// Resolved target: node2ea
// Target address:  0x2E6C0
// GOT/IAT slot:    0x2E050
// Slot symbol:     off_2E050
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

