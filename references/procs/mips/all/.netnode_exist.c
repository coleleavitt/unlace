// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x194D0
// Name:            .netnode_exist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x194D0 jmp     cs:off_75250
//
// Resolved target: netnode_exist
// Target address:  0x75AA0
// GOT/IAT slot:    0x75250
// Slot symbol:     off_75250
// Target type:     <no type info>
// ============================================================

void .netnode_exist(/* see target signature */)
{
    // Tail-call to netnode_exist via GOT/IAT indirection
    return netnode_exist(/* forwarded args */);
}

