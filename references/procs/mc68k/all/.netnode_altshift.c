// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6270
// Name:            .netnode_altshift
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6270 jmp     cs:off_1D120
//
// Resolved target: netnode_altshift
// Target address:  0x1D610
// GOT/IAT slot:    0x1D120
// Slot symbol:     off_1D120
// Target type:     <no type info>
// ============================================================

void .netnode_altshift(/* see target signature */)
{
    // Tail-call to netnode_altshift via GOT/IAT indirection
    return netnode_altshift(/* forwarded args */);
}

