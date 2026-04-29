// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x55E0
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x55E0 jmp     cs:off_152D8
//
// Resolved target: netnode_supdel
// Target address:  0x16378
// GOT/IAT slot:    0x152D8
// Slot symbol:     off_152D8
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

