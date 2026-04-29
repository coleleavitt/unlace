// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1240
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1240 jmp     cs:off_5108
//
// Resolved target: netnode_supset
// Target address:  0x52B0
// GOT/IAT slot:    0x5108
// Slot symbol:     off_5108
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

