// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA220
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA220 jmp     cs:off_2C7A8F8
//
// Resolved target: netnode_supset
// Target address:  0x7BE7E0
// GOT/IAT slot:    0x2C7A8F8
// Slot symbol:     off_2C7A8F8
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

