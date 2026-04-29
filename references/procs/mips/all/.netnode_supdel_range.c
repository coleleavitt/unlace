// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x192E0
// Name:            .netnode_supdel_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x192E0 jmp     cs:off_75158
//
// Resolved target: netnode_supdel_range
// Target address:  0x759A8
// GOT/IAT slot:    0x75158
// Slot symbol:     off_75158
// Target type:     <no type info>
// ============================================================

void .netnode_supdel_range(/* see target signature */)
{
    // Tail-call to netnode_supdel_range via GOT/IAT indirection
    return netnode_supdel_range(/* forwarded args */);
}

