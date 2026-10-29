// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB680
// Name:            .netnode_altshift
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB680 jmp     cs:off_2C7B328
//
// Resolved target: netnode_altshift
// Target address:  0x7BED90
// GOT/IAT slot:    0x2C7B328
// Slot symbol:     off_2C7B328
// Target type:     <no type info>
// ============================================================

void .netnode_altshift(/* see target signature */)
{
    // Tail-call to netnode_altshift via GOT/IAT indirection
    return netnode_altshift(/* forwarded args */);
}

