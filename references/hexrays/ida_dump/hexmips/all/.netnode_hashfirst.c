// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B4C0
// Name:            .netnode_hashfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B4C0 jmp     cs:off_4CDA48
//
// Resolved target: netnode_hashfirst
// Target address:  0x4D0468
// GOT/IAT slot:    0x4CDA48
// Slot symbol:     off_4CDA48
// Target type:     <no type info>
// ============================================================

void .netnode_hashfirst(/* see target signature */)
{
    // Tail-call to netnode_hashfirst via GOT/IAT indirection
    return netnode_hashfirst(/* forwarded args */);
}

