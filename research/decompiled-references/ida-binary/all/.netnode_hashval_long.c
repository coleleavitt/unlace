// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119E20
// Name:            .netnode_hashval_long
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119E20 jmp     cs:netnode_hashval_long_ptr
//
// Resolved target: netnode_hashval_long
// Target address:  0x8D8AB0
// GOT/IAT slot:    0x8A3BB0
// Slot symbol:     netnode_hashval_long_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_hashval_long(/* see target signature */)
{
    // Tail-call to netnode_hashval_long via GOT/IAT indirection
    return netnode_hashval_long(/* forwarded args */);
}

