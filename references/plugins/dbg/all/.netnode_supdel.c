// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3500
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3500 jmp     cs:off_13268
//
// Resolved target: netnode_supdel
// Target address:  0x135F8
// GOT/IAT slot:    0x13268
// Slot symbol:     off_13268
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

