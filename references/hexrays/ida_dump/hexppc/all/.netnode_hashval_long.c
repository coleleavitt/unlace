// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE90
// Name:            .netnode_hashval_long
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE90 jmp     cs:off_4DAF30
//
// Resolved target: netnode_hashval_long
// Target address:  0x4DD960
// GOT/IAT slot:    0x4DAF30
// Slot symbol:     off_4DAF30
// Target type:     <no type info>
// ============================================================

void .netnode_hashval_long(/* see target signature */)
{
    // Tail-call to netnode_hashval_long via GOT/IAT indirection
    return netnode_hashval_long(/* forwarded args */);
}

