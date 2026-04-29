// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22C0
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22C0 jmp     cs:off_8148
//
// Resolved target: netnode_supset
// Target address:  0x8350
// GOT/IAT slot:    0x8148
// Slot symbol:     off_8148
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

