// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CFD0
// Name:            .netnode_hashval_long
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CFD0 jmp     cs:off_4EDFD0
//
// Resolved target: netnode_hashval_long
// Target address:  0x4F2320
// GOT/IAT slot:    0x4EDFD0
// Slot symbol:     off_4EDFD0
// Target type:     <no type info>
// ============================================================

void .netnode_hashval_long(/* see target signature */)
{
    // Tail-call to netnode_hashval_long via GOT/IAT indirection
    return netnode_hashval_long(/* forwarded args */);
}

