// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A6B0
// Name:            .netnode_supshift
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A6B0 jmp     cs:off_4CD340
//
// Resolved target: netnode_supshift
// Target address:  0x4CFD30
// GOT/IAT slot:    0x4CD340
// Slot symbol:     off_4CD340
// Target type:     <no type info>
// ============================================================

void .netnode_supshift(/* see target signature */)
{
    // Tail-call to netnode_supshift via GOT/IAT indirection
    return netnode_supshift(/* forwarded args */);
}

