// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8200
// Name:            .netnode_supdel_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8200 jmp     cs:off_2A0E8
//
// Resolved target: netnode_supdel_range
// Target address:  0x2A658
// GOT/IAT slot:    0x2A0E8
// Slot symbol:     off_2A0E8
// Target type:     <no type info>
// ============================================================

void .netnode_supdel_range(/* see target signature */)
{
    // Tail-call to netnode_supdel_range via GOT/IAT indirection
    return netnode_supdel_range(/* forwarded args */);
}

