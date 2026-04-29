// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EC00
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EC00 jmp     cs:off_4E9DE8
//
// Resolved target: netnode_supdel
// Target address:  0x4EC828
// GOT/IAT slot:    0x4E9DE8
// Slot symbol:     off_4E9DE8
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

