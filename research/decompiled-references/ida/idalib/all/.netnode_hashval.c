// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA440
// Name:            .netnode_hashval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA440 jmp     cs:off_2C7AA08
//
// Resolved target: netnode_hashval
// Target address:  0x7BF3D0
// GOT/IAT slot:    0x2C7AA08
// Slot symbol:     off_2C7AA08
// Target type:     <no type info>
// ============================================================

void .netnode_hashval(/* see target signature */)
{
    // Tail-call to netnode_hashval via GOT/IAT indirection
    return netnode_hashval(/* forwarded args */);
}

