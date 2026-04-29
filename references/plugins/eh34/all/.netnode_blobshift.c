// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6400
// Name:            .netnode_blobshift
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6400 jmp     cs:off_8D1E8
//
// Resolved target: netnode_blobshift
// Target address:  0x8D780
// GOT/IAT slot:    0x8D1E8
// Slot symbol:     off_8D1E8
// Target type:     <no type info>
// ============================================================

void .netnode_blobshift(/* see target signature */)
{
    // Tail-call to netnode_blobshift via GOT/IAT indirection
    return netnode_blobshift(/* forwarded args */);
}

