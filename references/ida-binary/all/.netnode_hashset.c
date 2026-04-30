// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117F40
// Name:            .netnode_hashset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117F40 jmp     cs:netnode_hashset_ptr
//
// Resolved target: netnode_hashset
// Target address:  0x8D77A0
// GOT/IAT slot:    0x8A2C40
// Slot symbol:     netnode_hashset_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_hashset(/* see target signature */)
{
    // Tail-call to netnode_hashset via GOT/IAT indirection
    return netnode_hashset(/* forwarded args */);
}

