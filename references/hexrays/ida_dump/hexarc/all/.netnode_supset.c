// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AE80
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AE80 jmp     cs:off_4B9F28
//
// Resolved target: netnode_supset
// Target address:  0x4BC958
// GOT/IAT slot:    0x4B9F28
// Slot symbol:     off_4B9F28
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

