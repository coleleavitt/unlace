// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22B0
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22B0 jmp     cs:off_7140
//
// Resolved target: netnode_supset
// Target address:  0x7300
// GOT/IAT slot:    0x7140
// Slot symbol:     off_7140
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

