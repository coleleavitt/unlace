// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116260
// Name:            .netnode_hashval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116260 jmp     cs:netnode_hashval_ptr
//
// Resolved target: netnode_hashval
// Target address:  0x8D6548
// GOT/IAT slot:    0x8A1DD0
// Slot symbol:     netnode_hashval_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_hashval(/* see target signature */)
{
    // Tail-call to netnode_hashval via GOT/IAT indirection
    return netnode_hashval(/* forwarded args */);
}

