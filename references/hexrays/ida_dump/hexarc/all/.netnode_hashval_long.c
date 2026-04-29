// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AE70
// Name:            .netnode_hashval_long
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AE70 jmp     cs:off_4B9F20
//
// Resolved target: netnode_hashval_long
// Target address:  0x4BC950
// GOT/IAT slot:    0x4B9F20
// Slot symbol:     off_4B9F20
// Target type:     <no type info>
// ============================================================

void .netnode_hashval_long(/* see target signature */)
{
    // Tail-call to netnode_hashval_long via GOT/IAT indirection
    return netnode_hashval_long(/* forwarded args */);
}

