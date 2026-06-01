// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8E70
// Name:            .netnode_supdel_all
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8E70 jmp     cs:off_2C79F20
//
// Resolved target: netnode_supdel_all
// Target address:  0x7BF390
// GOT/IAT slot:    0x2C79F20
// Slot symbol:     off_2C79F20
// Target type:     <no type info>
// ============================================================

void .netnode_supdel_all(/* see target signature */)
{
    // Tail-call to netnode_supdel_all via GOT/IAT indirection
    return netnode_supdel_all(/* forwarded args */);
}

