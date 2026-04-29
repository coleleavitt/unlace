// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4780
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4780 jmp     cs:off_283A8
//
// Resolved target: netnode_supset
// Target address:  0x29D60
// GOT/IAT slot:    0x283A8
// Slot symbol:     off_283A8
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

