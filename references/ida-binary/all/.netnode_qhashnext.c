// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1161D0
// Name:            .netnode_qhashnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1161D0 jmp     cs:netnode_qhashnext_ptr
//
// Resolved target: netnode_qhashnext
// Target address:  0x8D64F0
// GOT/IAT slot:    0x8A1D88
// Slot symbol:     netnode_qhashnext_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_qhashnext(/* see target signature */)
{
    // Tail-call to netnode_qhashnext via GOT/IAT indirection
    return netnode_qhashnext(/* forwarded args */);
}

