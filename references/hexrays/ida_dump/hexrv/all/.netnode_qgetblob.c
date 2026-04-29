// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD10
// Name:            .netnode_qgetblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD10 jmp     cs:off_4BFE70
//
// Resolved target: netnode_qgetblob
// Target address:  0x4C3398
// GOT/IAT slot:    0x4BFE70
// Slot symbol:     off_4BFE70
// Target type:     <no type info>
// ============================================================

void .netnode_qgetblob(/* see target signature */)
{
    // Tail-call to netnode_qgetblob via GOT/IAT indirection
    return netnode_qgetblob(/* forwarded args */);
}

