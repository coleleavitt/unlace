// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A76A0
// Name:            .netnode_rename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A76A0 jmp     cs:off_2C79338
//
// Resolved target: netnode_rename
// Target address:  0x7BF190
// GOT/IAT slot:    0x2C79338
// Slot symbol:     off_2C79338
// Target type:     <no type info>
// ============================================================

void .netnode_rename(/* see target signature */)
{
    // Tail-call to netnode_rename via GOT/IAT indirection
    return netnode_rename(/* forwarded args */);
}

