// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116F30
// Name:            .netnode_qgetblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116F30 jmp     cs:netnode_qgetblob_ptr
//
// Resolved target: netnode_qgetblob
// Target address:  0x8D6D48
// GOT/IAT slot:    0x8A2438
// Slot symbol:     netnode_qgetblob_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_qgetblob(/* see target signature */)
{
    // Tail-call to netnode_qgetblob via GOT/IAT indirection
    return netnode_qgetblob(/* forwarded args */);
}

