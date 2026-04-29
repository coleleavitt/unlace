// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E1A0
// Name:            .netnode_setblob
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E1A0 jmp     cs:off_4E98B8
//
// Resolved target: netnode_setblob
// Target address:  0x4EC2D8
// GOT/IAT slot:    0x4E98B8
// Slot symbol:     off_4E98B8
// Target type:     <no type info>
// ============================================================

void .netnode_setblob(/* see target signature */)
{
    // Tail-call to netnode_setblob via GOT/IAT indirection
    return netnode_setblob(/* forwarded args */);
}

