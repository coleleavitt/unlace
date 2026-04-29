// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4190
// Name:            .netnode_exist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4190 jmp     cs:off_1F0B0
//
// Resolved target: netnode_exist
// Target address:  0x1F360
// GOT/IAT slot:    0x1F0B0
// Slot symbol:     off_1F0B0
// Target type:     <no type info>
// ============================================================

void .netnode_exist(/* see target signature */)
{
    // Tail-call to netnode_exist via GOT/IAT indirection
    return netnode_exist(/* forwarded args */);
}

