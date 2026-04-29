// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A6B0
// Name:            .netnode_supshift
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A6B0 jmp     cs:off_4BF340
//
// Resolved target: netnode_supshift
// Target address:  0x4C2808
// GOT/IAT slot:    0x4BF340
// Slot symbol:     off_4BF340
// Target type:     <no type info>
// ============================================================

void .netnode_supshift(/* see target signature */)
{
    // Tail-call to netnode_supshift via GOT/IAT indirection
    return netnode_supshift(/* forwarded args */);
}

