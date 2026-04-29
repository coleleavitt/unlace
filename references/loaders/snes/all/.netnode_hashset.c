// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1150
// Name:            .netnode_hashset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1150 jmp     cs:off_7090
//
// Resolved target: netnode_hashset
// Target address:  0x7188
// GOT/IAT slot:    0x7090
// Slot symbol:     off_7090
// Target type:     <no type info>
// ============================================================

void .netnode_hashset(/* see target signature */)
{
    // Tail-call to netnode_hashset via GOT/IAT indirection
    return netnode_hashset(/* forwarded args */);
}

