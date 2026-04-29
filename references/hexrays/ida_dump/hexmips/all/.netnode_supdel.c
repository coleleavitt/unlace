// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBD0
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBD0 jmp     cs:off_4CDDD0
//
// Resolved target: netnode_supdel
// Target address:  0x4D0810
// GOT/IAT slot:    0x4CDDD0
// Slot symbol:     off_4CDDD0
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

