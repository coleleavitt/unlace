// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B0F0
// Name:            .netnode_delblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B0F0 jmp     cs:off_4C0860
//
// Resolved target: netnode_delblob
// Target address:  0x4C3858
// GOT/IAT slot:    0x4C0860
// Slot symbol:     off_4C0860
// Target type:     <no type info>
// ============================================================

void .netnode_delblob(/* see target signature */)
{
    // Tail-call to netnode_delblob via GOT/IAT indirection
    return netnode_delblob(/* forwarded args */);
}

