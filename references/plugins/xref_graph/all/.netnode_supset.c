// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16AB0
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16AB0 jmp     cs:off_4F540
//
// Resolved target: netnode_supset
// Target address:  0x50770
// GOT/IAT slot:    0x4F540
// Slot symbol:     off_4F540
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

