// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9960
// Name:            .netnode_hashval_long
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9960 jmp     cs:off_89498
//
// Resolved target: netnode_hashval_long
// Target address:  0x8C7C8
// GOT/IAT slot:    0x89498
// Slot symbol:     off_89498
// Target type:     <no type info>
// ============================================================

void .netnode_hashval_long(/* see target signature */)
{
    // Tail-call to netnode_hashval_long via GOT/IAT indirection
    return netnode_hashval_long(/* forwarded args */);
}

