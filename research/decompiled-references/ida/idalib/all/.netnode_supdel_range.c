// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA880
// Name:            .netnode_supdel_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA880 jmp     cs:off_2C7AC28
//
// Resolved target: netnode_supdel_range
// Target address:  0x7BE8F0
// GOT/IAT slot:    0x2C7AC28
// Slot symbol:     off_2C7AC28
// Target type:     <no type info>
// ============================================================

void .netnode_supdel_range(/* see target signature */)
{
    // Tail-call to netnode_supdel_range via GOT/IAT indirection
    return netnode_supdel_range(/* forwarded args */);
}

