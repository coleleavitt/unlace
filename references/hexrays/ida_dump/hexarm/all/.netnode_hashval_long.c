// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EED0
// Name:            .netnode_hashval_long
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EED0 jmp     cs:off_4E9F50
//
// Resolved target: netnode_hashval_long
// Target address:  0x4EC9A0
// GOT/IAT slot:    0x4E9F50
// Slot symbol:     off_4E9F50
// Target type:     <no type info>
// ============================================================

void .netnode_hashval_long(/* see target signature */)
{
    // Tail-call to netnode_hashval_long via GOT/IAT indirection
    return netnode_hashval_long(/* forwarded args */);
}

