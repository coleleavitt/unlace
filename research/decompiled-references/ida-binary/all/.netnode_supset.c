// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115EF0
// Name:            .netnode_supset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115EF0 jmp     cs:netnode_supset_ptr
//
// Resolved target: netnode_supset
// Target address:  0x8D6310
// GOT/IAT slot:    0x8A1C18
// Slot symbol:     netnode_supset_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_supset(/* see target signature */)
{
    // Tail-call to netnode_supset via GOT/IAT indirection
    return netnode_supset(/* forwarded args */);
}

