// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA8F0
// Name:            .netnode_qgetblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA8F0 jmp     cs:off_35460
//
// Resolved target: netnode_qgetblob
// Target address:  0x35AC8
// GOT/IAT slot:    0x35460
// Slot symbol:     off_35460
// Target type:     <no type info>
// ============================================================

void .netnode_qgetblob(/* see target signature */)
{
    // Tail-call to netnode_qgetblob via GOT/IAT indirection
    return netnode_qgetblob(/* forwarded args */);
}

