// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAC40
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAC40 jmp     cs:off_CA608
//
// Resolved target: netnode_supset
// Target address:  0xD0F68
// GOT/IAT slot:    0xCA608
// Slot symbol:     off_CA608
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

