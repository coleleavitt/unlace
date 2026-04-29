// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A510
// Name:            .netnode_rename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A510 jmp     cs:off_4CD270
//
// Resolved target: netnode_rename
// Target address:  0x4CFC60
// GOT/IAT slot:    0x4CD270
// Slot symbol:     off_4CD270
// Target type:     <no type info>
// ============================================================

void .netnode_rename(/* see target signature */)
{
    // Tail-call to netnode_rename via GOT/IAT indirection
    return netnode_rename(/* forwarded args */);
}

