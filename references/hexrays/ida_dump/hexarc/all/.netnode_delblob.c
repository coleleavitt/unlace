// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A0E0
// Name:            .netnode_delblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A0E0 jmp     cs:off_4B9858
//
// Resolved target: netnode_delblob
// Target address:  0x4BC258
// GOT/IAT slot:    0x4B9858
// Slot symbol:     off_4B9858
// Target type:     <no type info>
// ============================================================

void .netnode_delblob(/* see target signature */)
{
    // Tail-call to netnode_delblob via GOT/IAT indirection
    return netnode_delblob(/* forwarded args */);
}

