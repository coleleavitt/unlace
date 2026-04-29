// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7170
// Name:            .netnode_exist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7170 jmp     cs:off_260A0
//
// Resolved target: netnode_exist
// Target address:  0x26358
// GOT/IAT slot:    0x260A0
// Slot symbol:     off_260A0
// Target type:     <no type info>
// ============================================================

void .netnode_exist(/* see target signature */)
{
    // Tail-call to netnode_exist via GOT/IAT indirection
    return netnode_exist(/* forwarded args */);
}

