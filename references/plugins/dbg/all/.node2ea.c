// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3080
// Name:            .node2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3080 jmp     cs:off_13028
//
// Resolved target: node2ea
// Target address:  0x133A0
// GOT/IAT slot:    0x13028
// Slot symbol:     off_13028
// Target type:     <no type info>
// ============================================================

void .node2ea(/* see target signature */)
{
    // Tail-call to node2ea via GOT/IAT indirection
    return node2ea(/* forwarded args */);
}

