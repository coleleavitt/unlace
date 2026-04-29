// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6300
// Name:            .netnode_altshift
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6300 jmp     cs:off_2F168
//
// Resolved target: netnode_altshift
// Target address:  0x2F7D8
// GOT/IAT slot:    0x2F168
// Slot symbol:     off_2F168
// Target type:     <no type info>
// ============================================================

void .netnode_altshift(/* see target signature */)
{
    // Tail-call to netnode_altshift via GOT/IAT indirection
    return netnode_altshift(/* forwarded args */);
}

