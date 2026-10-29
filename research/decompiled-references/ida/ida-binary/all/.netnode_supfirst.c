// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A2A0
// Name:            .netnode_supfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A2A0 jmp     cs:netnode_supfirst_ptr
//
// Resolved target: netnode_supfirst
// Target address:  0x8D8D98
// GOT/IAT slot:    0x8A3DF0
// Slot symbol:     netnode_supfirst_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_supfirst(/* see target signature */)
{
    // Tail-call to netnode_supfirst via GOT/IAT indirection
    return netnode_supfirst(/* forwarded args */);
}

