// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6940
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6940 jmp     cs:off_2F488
//
// Resolved target: netnode_supset
// Target address:  0x2FB18
// GOT/IAT slot:    0x2F488
// Slot symbol:     off_2F488
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

