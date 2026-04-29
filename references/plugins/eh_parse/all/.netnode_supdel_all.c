// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6A20
// Name:            .netnode_supdel_all
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6A20 jmp     cs:off_2F4F8
//
// Resolved target: netnode_supdel_all
// Target address:  0x2FB88
// GOT/IAT slot:    0x2F4F8
// Slot symbol:     off_2F4F8
// Target type:     <no type info>
// ============================================================

void .netnode_supdel_all(/* see target signature */)
{
    // Tail-call to netnode_supdel_all via GOT/IAT indirection
    return netnode_supdel_all(/* forwarded args */);
}

