// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BEA0
// Name:            .netnode_hashval_long
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BEA0 jmp     cs:off_4C0F38
//
// Resolved target: netnode_hashval_long
// Target address:  0x4C3F60
// GOT/IAT slot:    0x4C0F38
// Slot symbol:     off_4C0F38
// Target type:     <no type info>
// ============================================================

void .netnode_hashval_long(/* see target signature */)
{
    // Tail-call to netnode_hashval_long via GOT/IAT indirection
    return netnode_hashval_long(/* forwarded args */);
}

