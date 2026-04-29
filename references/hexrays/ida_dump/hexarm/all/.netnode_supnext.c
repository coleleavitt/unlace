// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DD40
// Name:            .netnode_supnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DD40 jmp     cs:off_4E9688
//
// Resolved target: netnode_supnext
// Target address:  0x4EC0A0
// GOT/IAT slot:    0x4E9688
// Slot symbol:     off_4E9688
// Target type:     <no type info>
// ============================================================

void .netnode_supnext(/* see target signature */)
{
    // Tail-call to netnode_supnext via GOT/IAT indirection
    return netnode_supnext(/* forwarded args */);
}

