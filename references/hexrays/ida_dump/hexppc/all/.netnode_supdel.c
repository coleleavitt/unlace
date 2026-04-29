// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBC0
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBC0 jmp     cs:off_4DADC8
//
// Resolved target: netnode_supdel
// Target address:  0x4DD7E8
// GOT/IAT slot:    0x4DADC8
// Slot symbol:     off_4DADC8
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

