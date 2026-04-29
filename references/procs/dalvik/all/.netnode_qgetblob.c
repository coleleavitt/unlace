// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x54C0
// Name:            .netnode_qgetblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x54C0 jmp     cs:off_1A248
//
// Resolved target: netnode_qgetblob
// Target address:  0x1A5E8
// GOT/IAT slot:    0x1A248
// Slot symbol:     off_1A248
// Target type:     <no type info>
// ============================================================

void .netnode_qgetblob(/* see target signature */)
{
    // Tail-call to netnode_qgetblob via GOT/IAT indirection
    return netnode_qgetblob(/* forwarded args */);
}

