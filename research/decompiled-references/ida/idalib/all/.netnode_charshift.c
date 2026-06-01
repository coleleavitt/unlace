// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8560
// Name:            .netnode_charshift
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8560 jmp     cs:off_2C79A98
//
// Resolved target: netnode_charshift
// Target address:  0x7BED40
// GOT/IAT slot:    0x2C79A98
// Slot symbol:     off_2C79A98
// Target type:     <no type info>
// ============================================================

void .netnode_charshift(/* see target signature */)
{
    // Tail-call to netnode_charshift via GOT/IAT indirection
    return netnode_charshift(/* forwarded args */);
}

