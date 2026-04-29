// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DAF0
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DAF0 jmp     cs:off_B3560
//
// Resolved target: netnode_supset
// Target address:  0xB3D30
// GOT/IAT slot:    0xB3560
// Slot symbol:     off_B3560
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

