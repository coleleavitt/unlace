// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29510
// Name:            .netnode_rename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29510 jmp     cs:off_4B9270
//
// Resolved target: netnode_rename
// Target address:  0x4BBC40
// GOT/IAT slot:    0x4B9270
// Slot symbol:     off_4B9270
// Target type:     <no type info>
// ============================================================

void .netnode_rename(/* see target signature */)
{
    // Tail-call to netnode_rename via GOT/IAT indirection
    return netnode_rename(/* forwarded args */);
}

