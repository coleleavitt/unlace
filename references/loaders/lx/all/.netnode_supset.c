// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23E0
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23E0 jmp     cs:off_B1D8
//
// Resolved target: netnode_supset
// Target address:  0xB498
// GOT/IAT slot:    0xB1D8
// Slot symbol:     off_B1D8
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

