// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DF10
// Name:            .netnode_supfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DF10 jmp     cs:off_4E9770
//
// Resolved target: netnode_supfirst
// Target address:  0x4EC188
// GOT/IAT slot:    0x4E9770
// Slot symbol:     off_4E9770
// Target type:     <no type info>
// ============================================================

void .netnode_supfirst(/* see target signature */)
{
    // Tail-call to netnode_supfirst via GOT/IAT indirection
    return netnode_supfirst(/* forwarded args */);
}

