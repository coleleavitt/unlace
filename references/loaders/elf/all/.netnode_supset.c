// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9970
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9970 jmp     cs:off_894A0
//
// Resolved target: netnode_supset
// Target address:  0x8C7D0
// GOT/IAT slot:    0x894A0
// Slot symbol:     off_894A0
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

