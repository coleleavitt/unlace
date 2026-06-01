// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA400
// Name:            .netnode_qhashnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA400 jmp     cs:off_2C7A9E8
//
// Resolved target: netnode_qhashnext
// Target address:  0x7BF620
// GOT/IAT slot:    0x2C7A9E8
// Slot symbol:     off_2C7A9E8
// Target type:     <no type info>
// ============================================================

void .netnode_qhashnext(/* see target signature */)
{
    // Tail-call to netnode_qhashnext via GOT/IAT indirection
    return netnode_qhashnext(/* forwarded args */);
}

