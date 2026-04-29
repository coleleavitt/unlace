// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20CD0
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20CD0 jmp     cs:off_95650
//
// Resolved target: netnode_supdel
// Target address:  0x96098
// GOT/IAT slot:    0x95650
// Slot symbol:     off_95650
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

