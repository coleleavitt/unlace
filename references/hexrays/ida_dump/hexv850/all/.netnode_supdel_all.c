// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C060
// Name:            .netnode_supdel_all
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C060 jmp     cs:off_4C1018
//
// Resolved target: netnode_supdel_all
// Target address:  0x4C4040
// GOT/IAT slot:    0x4C1018
// Slot symbol:     off_4C1018
// Target type:     <no type info>
// ============================================================

void .netnode_supdel_all(/* see target signature */)
{
    // Tail-call to netnode_supdel_all via GOT/IAT indirection
    return netnode_supdel_all(/* forwarded args */);
}

