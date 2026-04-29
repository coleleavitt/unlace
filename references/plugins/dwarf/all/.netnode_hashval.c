// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA050
// Name:            .netnode_hashval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA050 jmp     cs:off_CA010
//
// Resolved target: netnode_hashval
// Target address:  0xD0930
// GOT/IAT slot:    0xCA010
// Slot symbol:     off_CA010
// Target type:     <no type info>
// ============================================================

void .netnode_hashval(/* see target signature */)
{
    // Tail-call to netnode_hashval via GOT/IAT indirection
    return netnode_hashval(/* forwarded args */);
}

