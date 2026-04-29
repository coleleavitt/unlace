// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADF0
// Name:            .netnode_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADF0 jmp     cs:off_4BF6E0
//
// Resolved target: netnode_set
// Target address:  0x4C2BD0
// GOT/IAT slot:    0x4BF6E0
// Slot symbol:     off_4BF6E0
// Target type:     <no type info>
// ============================================================

void .netnode_set(/* see target signature */)
{
    // Tail-call to netnode_set via GOT/IAT indirection
    return netnode_set(/* forwarded args */);
}

