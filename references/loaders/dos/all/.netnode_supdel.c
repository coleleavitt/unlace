// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2530
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2530 jmp     cs:off_B280
//
// Resolved target: netnode_supdel
// Target address:  0xB728
// GOT/IAT slot:    0xB280
// Slot symbol:     off_B280
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

