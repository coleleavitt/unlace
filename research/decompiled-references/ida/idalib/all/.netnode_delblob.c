// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD260
// Name:            .netnode_delblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD260 jmp     cs:off_2C7C118
//
// Resolved target: netnode_delblob
// Target address:  0x7BEFA0
// GOT/IAT slot:    0x2C7C118
// Slot symbol:     off_2C7C118
// Target type:     <no type info>
// ============================================================

void .netnode_delblob(/* see target signature */)
{
    // Tail-call to netnode_delblob via GOT/IAT indirection
    return netnode_delblob(/* forwarded args */);
}

