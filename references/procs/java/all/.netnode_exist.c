// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62E0
// Name:            .netnode_exist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62E0 jmp     cs:off_2D158
//
// Resolved target: netnode_exist
// Target address:  0x2D658
// GOT/IAT slot:    0x2D158
// Slot symbol:     off_2D158
// Target type:     <no type info>
// ============================================================

void .netnode_exist(/* see target signature */)
{
    // Tail-call to netnode_exist via GOT/IAT indirection
    return netnode_exist(/* forwarded args */);
}

