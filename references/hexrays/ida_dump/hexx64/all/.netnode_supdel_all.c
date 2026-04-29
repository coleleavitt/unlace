// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D1A0
// Name:            .netnode_supdel_all
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D1A0 jmp     cs:off_4EE0B8
//
// Resolved target: netnode_supdel_all
// Target address:  0x4F2408
// GOT/IAT slot:    0x4EE0B8
// Slot symbol:     off_4EE0B8
// Target type:     <no type info>
// ============================================================

void .netnode_supdel_all(/* see target signature */)
{
    // Tail-call to netnode_supdel_all via GOT/IAT indirection
    return netnode_supdel_all(/* forwarded args */);
}

