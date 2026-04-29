// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B030
// Name:            .netnode_supdel_all
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B030 jmp     cs:off_4BA000
//
// Resolved target: netnode_supdel_all
// Target address:  0x4BCA30
// GOT/IAT slot:    0x4BA000
// Slot symbol:     off_4BA000
// Target type:     <no type info>
// ============================================================

void .netnode_supdel_all(/* see target signature */)
{
    // Tail-call to netnode_supdel_all via GOT/IAT indirection
    return netnode_supdel_all(/* forwarded args */);
}

