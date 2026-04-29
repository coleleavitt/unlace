// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6720
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6720 jmp     cs:off_24378
//
// Resolved target: netnode_supdel
// Target address:  0x26158
// GOT/IAT slot:    0x24378
// Slot symbol:     off_24378
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

