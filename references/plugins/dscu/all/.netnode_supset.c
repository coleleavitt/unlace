// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4420
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4420 jmp     cs:off_1F1F8
//
// Resolved target: netnode_supset
// Target address:  0x1F4C8
// GOT/IAT slot:    0x1F1F8
// Slot symbol:     off_1F1F8
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

