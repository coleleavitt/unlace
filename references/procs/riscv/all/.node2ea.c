// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA0D0
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA0D0 jmp     cs:off_35050
//
// Resolved target: node2ea
// Target address:  0x356A0
// GOT/IAT slot:    0x35050
// Slot symbol:     off_35050
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

