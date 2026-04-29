// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16D20
// Name:            .netnode_supnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16D20 jmp     cs:off_4F678
//
// Resolved target: netnode_supnext
// Target address:  0x50940
// GOT/IAT slot:    0x4F678
// Slot symbol:     off_4F678
// Target type:     <no type info>
// ============================================================

void .netnode_supnext(/* see target signature */)
{
    // Tail-call to netnode_supnext via GOT/IAT indirection
    return netnode_supnext(/* forwarded args */);
}

