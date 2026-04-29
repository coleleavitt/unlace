// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B6E0
// Name:            .netnode_supshift
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B6E0 jmp     cs:off_4ED358
//
// Resolved target: netnode_supshift
// Target address:  0x4F1650
// GOT/IAT slot:    0x4ED358
// Slot symbol:     off_4ED358
// Target type:     <no type info>
// ============================================================

void .netnode_supshift(/* see target signature */)
{
    // Tail-call to netnode_supshift via GOT/IAT indirection
    return netnode_supshift(/* forwarded args */);
}

