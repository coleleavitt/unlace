// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19B70
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19B70 jmp     cs:off_755A0
//
// Resolved target: netnode_supdel
// Target address:  0x75E00
// GOT/IAT slot:    0x755A0
// Slot symbol:     off_755A0
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

