// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8870
// Name:            .netnode_exist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8870 jmp     cs:off_2C79C20
//
// Resolved target: netnode_exist
// Target address:  0x7BE6F0
// GOT/IAT slot:    0x2C79C20
// Slot symbol:     off_2C79C20
// Target type:     <no type info>
// ============================================================

void .netnode_exist(/* see target signature */)
{
    // Tail-call to netnode_exist via GOT/IAT indirection
    return netnode_exist(/* forwarded args */);
}

