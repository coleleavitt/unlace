// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4480
// Name:            .netnode_supdel_all
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4480 jmp     cs:off_1F228
//
// Resolved target: netnode_supdel_all
// Target address:  0x1F4F8
// GOT/IAT slot:    0x1F228
// Slot symbol:     off_1F228
// Target type:     <no type info>
// ============================================================

void .netnode_supdel_all(/* see target signature */)
{
    // Tail-call to netnode_supdel_all via GOT/IAT indirection
    return netnode_supdel_all(/* forwarded args */);
}

