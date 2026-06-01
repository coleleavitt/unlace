// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD600
// Name:            .netnode_blobsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD600 jmp     cs:off_2C7C2E8
//
// Resolved target: netnode_blobsize
// Target address:  0x7BEE60
// GOT/IAT slot:    0x2C7C2E8
// Slot symbol:     off_2C7C2E8
// Target type:     <no type info>
// ============================================================

void .netnode_blobsize(/* see target signature */)
{
    // Tail-call to netnode_blobsize via GOT/IAT indirection
    return netnode_blobsize(/* forwarded args */);
}

