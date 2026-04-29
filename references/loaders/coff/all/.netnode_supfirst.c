// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4390
// Name:            .netnode_supfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4390 jmp     cs:off_231B0
//
// Resolved target: netnode_supfirst
// Target address:  0x235D0
// GOT/IAT slot:    0x231B0
// Slot symbol:     off_231B0
// Target type:     <no type info>
// ============================================================

void .netnode_supfirst(/* see target signature */)
{
    // Tail-call to netnode_supfirst via GOT/IAT indirection
    return netnode_supfirst(/* forwarded args */);
}

