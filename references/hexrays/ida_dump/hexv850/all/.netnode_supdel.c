// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBD0
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBD0 jmp     cs:off_4C0DD0
//
// Resolved target: netnode_supdel
// Target address:  0x4C3DE8
// GOT/IAT slot:    0x4C0DD0
// Slot symbol:     off_4C0DD0
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

