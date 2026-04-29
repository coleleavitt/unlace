// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8790
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8790 jmp     cs:off_2A3B0
//
// Resolved target: netnode_supdel
// Target address:  0x2BDD0
// GOT/IAT slot:    0x2A3B0
// Slot symbol:     off_2A3B0
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

