// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B520
// Name:            .netnode_rename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B520 jmp     cs:off_4ED278
//
// Resolved target: netnode_rename
// Target address:  0x4F1570
// GOT/IAT slot:    0x4ED278
// Slot symbol:     off_4ED278
// Target type:     <no type info>
// ============================================================

void .netnode_rename(/* see target signature */)
{
    // Tail-call to netnode_rename via GOT/IAT indirection
    return netnode_rename(/* forwarded args */);
}

