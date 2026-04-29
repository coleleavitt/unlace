// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34D0
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34D0 jmp     cs:off_29250
//
// Resolved target: netnode_supset
// Target address:  0x29618
// GOT/IAT slot:    0x29250
// Slot symbol:     off_29250
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

