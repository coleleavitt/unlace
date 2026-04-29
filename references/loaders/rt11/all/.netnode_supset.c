// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1230
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1230 jmp     cs:off_5100
//
// Resolved target: netnode_supset
// Target address:  0x5290
// GOT/IAT slot:    0x5100
// Slot symbol:     off_5100
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

