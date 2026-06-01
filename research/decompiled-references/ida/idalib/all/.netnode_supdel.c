// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD800
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD800 jmp     cs:off_2C7C3E8
//
// Resolved target: netnode_supdel
// Target address:  0x7BE870
// GOT/IAT slot:    0x2C7C3E8
// Slot symbol:     off_2C7C3E8
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

