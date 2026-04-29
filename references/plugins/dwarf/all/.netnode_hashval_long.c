// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAC30
// Name:            .netnode_hashval_long
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAC30 jmp     cs:off_CA600
//
// Resolved target: netnode_hashval_long
// Target address:  0xD0F60
// GOT/IAT slot:    0xCA600
// Slot symbol:     off_CA600
// Target type:     <no type info>
// ============================================================

void .netnode_hashval_long(/* see target signature */)
{
    // Tail-call to netnode_hashval_long via GOT/IAT indirection
    return netnode_hashval_long(/* forwarded args */);
}

