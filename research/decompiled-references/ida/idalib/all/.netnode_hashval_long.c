// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC800
// Name:            .netnode_hashval_long
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC800 jmp     cs:off_2C7BBE8
//
// Resolved target: netnode_hashval_long
// Target address:  0x7BF4B0
// GOT/IAT slot:    0x2C7BBE8
// Slot symbol:     off_2C7BBE8
// Target type:     <no type info>
// ============================================================

void .netnode_hashval_long(/* see target signature */)
{
    // Tail-call to netnode_hashval_long via GOT/IAT indirection
    return netnode_hashval_long(/* forwarded args */);
}

