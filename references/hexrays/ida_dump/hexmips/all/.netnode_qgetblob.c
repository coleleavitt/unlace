// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD20
// Name:            .netnode_qgetblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD20 jmp     cs:off_4CDE78
//
// Resolved target: netnode_qgetblob
// Target address:  0x4D08C8
// GOT/IAT slot:    0x4CDE78
// Slot symbol:     off_4CDE78
// Target type:     <no type info>
// ============================================================

void .netnode_qgetblob(/* see target signature */)
{
    // Tail-call to netnode_qgetblob via GOT/IAT indirection
    return netnode_qgetblob(/* forwarded args */);
}

