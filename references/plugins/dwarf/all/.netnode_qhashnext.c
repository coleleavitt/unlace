// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAA00
// Name:            .netnode_qhashnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAA00 jmp     cs:off_CA4E8
//
// Resolved target: netnode_qhashnext
// Target address:  0xD0E30
// GOT/IAT slot:    0xCA4E8
// Slot symbol:     off_CA4E8
// Target type:     <no type info>
// ============================================================

void .netnode_qhashnext(/* see target signature */)
{
    // Tail-call to netnode_qhashnext via GOT/IAT indirection
    return netnode_qhashnext(/* forwarded args */);
}

