// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62B0
// Name:            .netnode_altshift
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62B0 jmp     cs:off_8D140
//
// Resolved target: netnode_altshift
// Target address:  0x8D6D0
// GOT/IAT slot:    0x8D140
// Slot symbol:     off_8D140
// Target type:     <no type info>
// ============================================================

void .netnode_altshift(/* see target signature */)
{
    // Tail-call to netnode_altshift via GOT/IAT indirection
    return netnode_altshift(/* forwarded args */);
}

