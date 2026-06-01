// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB540
// Name:            .netnode_hashset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB540 jmp     cs:off_2C7B288
//
// Resolved target: netnode_hashset
// Target address:  0x7BF500
// GOT/IAT slot:    0x2C7B288
// Slot symbol:     off_2C7B288
// Target type:     <no type info>
// ============================================================

void .netnode_hashset(/* see target signature */)
{
    // Tail-call to netnode_hashset via GOT/IAT indirection
    return netnode_hashset(/* forwarded args */);
}

