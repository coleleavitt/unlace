// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CFE0
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CFE0 jmp     cs:off_4EDFD8
//
// Resolved target: netnode_supset
// Target address:  0x4F2328
// GOT/IAT slot:    0x4EDFD8
// Slot symbol:     off_4EDFD8
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

