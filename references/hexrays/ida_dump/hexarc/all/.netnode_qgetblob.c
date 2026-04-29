// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACF0
// Name:            .netnode_qgetblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACF0 jmp     cs:off_4B9E60
//
// Resolved target: netnode_qgetblob
// Target address:  0x4BC890
// GOT/IAT slot:    0x4B9E60
// Slot symbol:     off_4B9E60
// Target type:     <no type info>
// ============================================================

void .netnode_qgetblob(/* see target signature */)
{
    // Tail-call to netnode_qgetblob via GOT/IAT indirection
    return netnode_qgetblob(/* forwarded args */);
}

