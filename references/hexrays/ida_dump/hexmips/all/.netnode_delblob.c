// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B0F0
// Name:            .netnode_delblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B0F0 jmp     cs:off_4CD860
//
// Resolved target: netnode_delblob
// Target address:  0x4D0280
// GOT/IAT slot:    0x4CD860
// Slot symbol:     off_4CD860
// Target type:     <no type info>
// ============================================================

void .netnode_delblob(/* see target signature */)
{
    // Tail-call to netnode_delblob via GOT/IAT indirection
    return netnode_delblob(/* forwarded args */);
}

