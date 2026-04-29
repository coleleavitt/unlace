// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B2E0
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B2E0 jmp     cs:off_4ED158
//
// Resolved target: node2ea
// Target address:  0x4F1450
// GOT/IAT slot:    0x4ED158
// Slot symbol:     off_4ED158
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

