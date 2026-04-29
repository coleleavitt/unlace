// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E1C0
// Name:            .netnode_inited
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E1C0 jmp     cs:off_4E98C8
//
// Resolved target: netnode_inited
// Target address:  0x4EC2E8
// GOT/IAT slot:    0x4E98C8
// Slot symbol:     off_4E98C8
// Target type:     <no type info>
// ============================================================

void .netnode_inited(/* see target signature */)
{
    // Tail-call to netnode_inited via GOT/IAT indirection
    return netnode_inited(/* forwarded args */);
}

