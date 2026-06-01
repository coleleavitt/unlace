// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9DE0
// Name:            .netnode_qhashlast
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9DE0 jmp     cs:off_2C7A6D8
//
// Resolved target: netnode_qhashlast
// Target address:  0x7BF680
// GOT/IAT slot:    0x2C7A6D8
// Slot symbol:     off_2C7A6D8
// Target type:     <no type info>
// ============================================================

void .netnode_qhashlast(/* see target signature */)
{
    // Tail-call to netnode_qhashlast via GOT/IAT indirection
    return netnode_qhashlast(/* forwarded args */);
}

