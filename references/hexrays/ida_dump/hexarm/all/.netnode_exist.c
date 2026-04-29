// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DD10
// Name:            .netnode_exist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DD10 jmp     cs:off_4E9670
//
// Resolved target: netnode_exist
// Target address:  0x4EC088
// GOT/IAT slot:    0x4E9670
// Slot symbol:     off_4E9670
// Target type:     <no type info>
// ============================================================

void .netnode_exist(/* see target signature */)
{
    // Tail-call to netnode_exist via GOT/IAT indirection
    return netnode_exist(/* forwarded args */);
}

