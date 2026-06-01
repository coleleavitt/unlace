// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7D90
// Name:            .netnode_copy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7D90 jmp     cs:off_2C796B0
//
// Resolved target: netnode_copy
// Target address:  0x7BF820
// GOT/IAT slot:    0x2C796B0
// Slot symbol:     off_2C796B0
// Target type:     <no type info>
// ============================================================

void .netnode_copy(/* see target signature */)
{
    // Tail-call to netnode_copy via GOT/IAT indirection
    return netnode_copy(/* forwarded args */);
}

