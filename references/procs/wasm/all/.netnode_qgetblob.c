// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9390
// Name:            .netnode_qgetblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9390 jmp     cs:off_261B0
//
// Resolved target: netnode_qgetblob
// Target address:  0x264D8
// GOT/IAT slot:    0x261B0
// Slot symbol:     off_261B0
// Target type:     <no type info>
// ============================================================

void .netnode_qgetblob(/* see target signature */)
{
    // Tail-call to netnode_qgetblob via GOT/IAT indirection
    return netnode_qgetblob(/* forwarded args */);
}

