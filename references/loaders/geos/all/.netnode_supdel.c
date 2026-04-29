// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2360
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2360 jmp     cs:off_8198
//
// Resolved target: netnode_supdel
// Target address:  0x8408
// GOT/IAT slot:    0x8198
// Slot symbol:     off_8198
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

