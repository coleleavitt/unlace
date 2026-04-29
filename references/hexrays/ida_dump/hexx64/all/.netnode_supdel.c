// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CCD0
// Name:            .netnode_supdel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CCD0 jmp     cs:off_4EDE50
//
// Resolved target: netnode_supdel
// Target address:  0x4F2190
// GOT/IAT slot:    0x4EDE50
// Slot symbol:     off_4EDE50
// Target type:     <no type info>
// ============================================================

void .netnode_supdel(/* see target signature */)
{
    // Tail-call to netnode_supdel via GOT/IAT indirection
    return netnode_supdel(/* forwarded args */);
}

