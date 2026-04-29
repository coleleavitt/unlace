// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CE40
// Name:            .netnode_qgetblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CE40 jmp     cs:off_4EDF08
//
// Resolved target: netnode_qgetblob
// Target address:  0x4F2258
// GOT/IAT slot:    0x4EDF08
// Slot symbol:     off_4EDF08
// Target type:     <no type info>
// ============================================================

void .netnode_qgetblob(/* see target signature */)
{
    // Tail-call to netnode_qgetblob via GOT/IAT indirection
    return netnode_qgetblob(/* forwarded args */);
}

