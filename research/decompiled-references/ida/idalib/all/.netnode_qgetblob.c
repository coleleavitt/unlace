// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAB60
// Name:            .netnode_qgetblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAB60 jmp     cs:off_2C7AD98
//
// Resolved target: netnode_qgetblob
// Target address:  0x7BEEF0
// GOT/IAT slot:    0x2C7AD98
// Slot symbol:     off_2C7AD98
// Target type:     <no type info>
// ============================================================

void .netnode_qgetblob(/* see target signature */)
{
    // Tail-call to netnode_qgetblob via GOT/IAT indirection
    return netnode_qgetblob(/* forwarded args */);
}

