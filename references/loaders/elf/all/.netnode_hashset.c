// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9770
// Name:            .netnode_hashset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9770 jmp     cs:off_893A0
//
// Resolved target: netnode_hashset
// Target address:  0x8C6B8
// GOT/IAT slot:    0x893A0
// Slot symbol:     off_893A0
// Target type:     <no type info>
// ============================================================

void .netnode_hashset(/* see target signature */)
{
    // Tail-call to netnode_hashset via GOT/IAT indirection
    return netnode_hashset(/* forwarded args */);
}

