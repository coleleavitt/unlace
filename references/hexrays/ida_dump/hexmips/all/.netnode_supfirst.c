// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AEF0
// Name:            .netnode_supfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AEF0 jmp     cs:off_4CD760
//
// Resolved target: netnode_supfirst
// Target address:  0x4D0178
// GOT/IAT slot:    0x4CD760
// Slot symbol:     off_4CD760
// Target type:     <no type info>
// ============================================================

void .netnode_supfirst(/* see target signature */)
{
    // Tail-call to netnode_supfirst via GOT/IAT indirection
    return netnode_supfirst(/* forwarded args */);
}

