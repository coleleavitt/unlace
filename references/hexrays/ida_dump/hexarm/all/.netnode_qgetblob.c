// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ED50
// Name:            .netnode_qgetblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ED50 jmp     cs:off_4E9E90
//
// Resolved target: netnode_qgetblob
// Target address:  0x4EC8E0
// GOT/IAT slot:    0x4E9E90
// Slot symbol:     off_4E9E90
// Target type:     <no type info>
// ============================================================

void .netnode_qgetblob(/* see target signature */)
{
    // Tail-call to netnode_qgetblob via GOT/IAT indirection
    return netnode_qgetblob(/* forwarded args */);
}

