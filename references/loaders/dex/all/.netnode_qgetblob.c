// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3690
// Name:            .netnode_qgetblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3690 jmp     cs:off_28330
//
// Resolved target: netnode_qgetblob
// Target address:  0x287F8
// GOT/IAT slot:    0x28330
// Slot symbol:     off_28330
// Target type:     <no type info>
// ============================================================

void .netnode_qgetblob(/* see target signature */)
{
    // Tail-call to netnode_qgetblob via GOT/IAT indirection
    return netnode_qgetblob(/* forwarded args */);
}

